import os
import sys
import json
import subprocess
import ninja_syntax

from pathlib import Path
from typing import Any, Optional, Dict, List
from get_platform import get_platform


COMPILER_MAP = {
    "1.2/base": "mwcc_20_72",
    "1.2/sp2": "mwcc_20_79",
    "1.2/sp2p3": "mwcc_20_82",
    "1.2/sp3": "mwcc_20_84",
    "1.2/sp4": "mwcc_20_87",
    "2.0/base": "mwcc_30_114",
    "2.0/sp1": "mwcc_30_123",
    "2.0/sp1p2": "mwcc_30_126",
    "2.0/sp1p5": "mwcc_30_131",
    "2.0/sp1p6": "mwcc_30_133",
    "2.0/sp1p7": "mwcc_30_134",
    "2.0/sp2": "mwcc_30_136",
    "2.0/sp2p2": "mwcc_30_137",
    "2.0/sp2p3": "mwcc_30_138",
    "2.0/sp2p4": "mwcc_30_139",
    "dsi/1.1": "mwcc_40_1018",
    "dsi/1.1p1": "mwcc_40_1024",
    "dsi/1.2": "mwcc_40_1026",
    "dsi/1.2p1": "mwcc_40_1027",
    "dsi/1.2p2": "mwcc_40_1028",
    "dsi/1.3": "mwcc_40_1034",
    "dsi/1.3p1": "mwcc_40_1036",
    "dsi/1.6sp1": "mwcc_40_1051",
    "dsi/1.6sp2": "mwcc_40_1051",
}

Library = Dict[str, Any]

def get_c_cpp_files(dirs: list[Path]):
    for dir in dirs:
        for root, _, files in os.walk(dir):
            root = Path(root)
            for file in files:
                if is_cpp(file) or is_c(file):
                    yield root / file


def is_cpp(name: str | Path):
    return Path(name).suffix in [".cpp"]


def is_c(name: str | Path):
    return Path(name).suffix in [".c"]

class Object:
    def __init__(self, name: str, **options: Any):
        self.name = name

        self.options: Dict[str, Any] = {
            "source": name,
            "mw_version": None,
            "asflags": None,
            "extra_asflags": [],
            "cflags": None,
            "extra_cflags": [],
            "asm_dir": None,
            "src_dir": None,
        }
        self.options.update(options)

        self.src_path: Optional[Path] = None
        self.asm_path: Optional[Path] = None
        self.src_obj_path: Optional[Path] = None
        self.asm_obj_path: Optional[Path] = None
        self.ctx_path: Optional[Path] = None

    def resolve(self, config: "ProjectConfig", lib: Library):
        # Use object options, then library options
        obj = Object(self.name, **lib)

        for key, value in self.options.items():
            if value is not None or key not in obj.options:
                obj.options[key] = value

        # Use default options from config
        def set_default(key: str, value: Any) -> None:
            if obj.options[key] is None:
                obj.options[key] = value

        set_default("asflags", config.asflags)
        set_default("mw_version", config.mwcc_version)
        set_default("asm_dir", config.asm_path)
        set_default("src_dir", config.src_path)

        # Resolve paths
        obj.src_path = Path(obj.options["src_dir"]) / obj.options["source"]
        if obj.options["asm_dir"] is not None:
            path: Path = Path(obj.options["asm_dir"]) / obj.options["source"]
            obj.asm_path = path.with_suffix(".s")
        base_name = Path(self.name).with_suffix("")
        obj.src_obj_path = config.build_path / "src" / f"{base_name}.o"
        obj.asm_obj_path = config.build_path / "mod" / f"{base_name}.o"
        obj.ctx_path = config.build_path / "src" / f"{base_name}.ctx"
        return obj


class ProjectConfig:
    def __init__(self, game: str, mwcc_root: Optional[str], mwcc_tag: str, wine: str, dsd: Optional[str], cfg_script: Path):
        # Tools
        self.dsd_tag: Optional[str] = None
        self.wibo_tag: Optional[str] = None
        self.objdiff_tag: Optional[str] = None
        self.mwcc_tag = mwcc_tag
        self.mwcc_root = Path(mwcc_root).resolve() if mwcc_root is not None else self.tools_path / "mwccarm"
        self.cfg_script = cfg_script

        # Platform info
        self.platform = get_platform()
        """Host platform information"""

        assert self.platform is not None
        self.default_wibo_path = "./wibo"
        self.wine_path = wine if self.platform.system != "windows" else ""
        self.dsd_path = (Path(dsd) if dsd is not None else (self.root_path / f"dsd{self.platform.exe}")).resolve()
        self.objdiff_path = (self.root_path / f"objdiff-cli{self.platform.exe}").resolve()
        self.cc_path = (self.mwcc_path / "mwccarm.exe").resolve()
        self.ld_path = (self.mwcc_path / "mwldarm.exe").resolve()
        self.python_path = Path(sys.executable).resolve()

        self.dsd_base_flags = [
            "--force-color", # Force color output
        ]

        self.game = game
        """Name of the game"""

        self.game_versions: list[str] = []
        """Versions of the game"""

        self.delinks_jsons: dict[str, Optional[Any]] = {}
        """Delinks JSON data from dsd (version: json)"""

        self.delinks_files: dict[str, list[str]] = {}
        """Paths to every delinks.txt file"""

        self.relocs_files: dict[str, list[str]] = {}
        """Paths to every relocs.txt file"""

        self.symbols_files: dict[str, list[str]] = {}
        """Paths to every symbols.txt file"""

        self.libs: Optional[List[Library]] = None
        """List of libraries"""

        self.asflags: Optional[List[str]] = None
        """Assembler flags"""

        self.cflags_base: Optional[List[str]] = None
        """Base C flags"""

        self.ldflags: Optional[List[str]] = None
        """Base C flags"""

        includes = [self.root_path / "include"]
        for root, dirs, _ in os.walk(self.libs_path):
            for dir in dirs:
                if dir == "include":
                    includes.append(Path(root) / dir)

        self.includes = " ".join(f"-i {include}" for include in includes)
        """C/C++ includes"""

        self.auto_add_sources: bool = False
        """Adds rules for files missing from the libs list (with the base cflags as the default)"""

        self.warn_missing_source: bool = True
        """Warn on missing source file"""

    def get_game_config(self, version: str):
        """Root directory for dsd configs"""
        config_path = self.config_path / version
        assert config_path.is_dir(), f"Version '{version}' not recognized"
        return  config_path

    def get_game_build(self, version: str):
        """Path to build directory"""
        return  self.build_path / version

    def get_game_extract(self, version: str):
        """Path to extract directory"""
        return  self.extract_path / version

    @property
    def dsd_version(self):
        assert self.dsd_tag is not None
        return self.dsd_tag

    @property
    def wibo_version(self):
        assert self.wibo_tag is not None
        return self.wibo_tag

    @property
    def objdiff_version(self):
        assert self.objdiff_tag is not None
        return self.objdiff_tag

    @property
    def mwcc_version(self):
        assert self.mwcc_tag is not None
        return self.mwcc_tag

    @property
    def current_path(self):
        return Path(__name__)

    @property
    def root_path(self):
        return self.current_path.parent

    @property
    def build_ninja_path(self):
        return self.root_path / "build.ninja"

    @property
    def arm7_bios_path(self):
        return self.root_path / "arm7_bios.bin"

    @property
    def config_path(self):
        return self.root_path / "config"

    @property
    def build_path(self):
        return self.root_path / "build"

    @property
    def asm_path(self):
        return self.root_path / "asm"

    @property
    def src_path(self):
        return self.root_path / "src"

    @property
    def libs_path(self):
        return self.root_path / "libs"

    @property
    def extract_path(self):
        return self.root_path / "extract"

    @property
    def tools_path(self):
        return self.root_path / "tools"

    @property
    def mwcc_path(self):
        return self.mwcc_root / self.mwcc_version

    @property
    def dsd_flags(self):
        return " ".join(self.dsd_base_flags)

    def dsd_configs(self, version: str) -> list[str]:
        return self.delinks_files[version] + self.relocs_files[version] + self.symbols_files[version]

    def arm9_config_yaml(self, version: str) -> Path:
        return self.get_game_config(version) / "arm9" / "config.yaml"

    def baserom(self, version: str) -> Path:
        return self.extract_path / f'baserom_{self.game}_{version}.nds'

    def build_rom(self, version: str) -> str:
        return f"{self.game}_{version}.nds"

    def baserom_config(self, version: str,) -> Path:
        return self.get_game_extract(version) / 'config.yaml'

    def build_rom_config(self, version: str) -> Path:
        return self.get_game_build(version) / "build" / "rom_config.yaml"

    def source_object_files(self, version: str) -> list[str]:
        files: list[str] = []
        for source_file in get_c_cpp_files([self.src_path, self.libs_path]):
            src_obj_path = self.get_game_build(version) / source_file
            files.append(str(src_obj_path.with_suffix(".o")))
        return files

    def arm9_o(self, version: str) -> Path:
        return self.get_game_build(version) / "arm9.o"

    def arm9_disassembly_dir(self, version: str) -> Path:
        return self.get_game_build(version) / "asm"

    def objdiff_report(self, version: str) -> Path:
        return f"report_{version}.json"

    def files(self, version: str) -> list[dict[str, str]]:
        if self.delinks_jsons[version] is None:
            return []
        return self.delinks_jsons[version]['files']

    def delink_files(self, version: str) -> list[str]:
        delink_files = [file['delink_file'] for file in self.files(version)]
        return list(set(delink_files))

    def arm9_lcf_file(self, version: str) -> str:
        if self.delinks_jsons[version] is None:
            return ""
        return self.delinks_jsons[version]['arm9_lcf_file']

    def arm9_objects_file(self, version: str) -> str:
        if self.delinks_jsons[version] is None:
            return ""
        return self.delinks_jsons[version]['arm9_objects_file']

    def get_config_files(self, version: str, name: str) -> list[str]:
        return [
            f"{root}/{file}"
            for root, _, files in os.walk(self.get_game_config(version))
            for file in files
            if file == name
        ]

    def get_decompme_compiler(self):
        return COMPILER_MAP[self.mwcc_version]

    # Creates a map of object names to Object instances
    # Options are fully resolved from the library and object
    def objects(self) -> Dict[str, Object]:
        out = {}
        for lib in self.libs or {}:
            objects: List[Object] = lib["objects"]
            for obj in objects:
                if obj.name in out:
                    sys.exit(f"Duplicate object name {obj.name}")
                out[obj.name] = obj.resolve(self, lib)
        return out

    def check_can_run_dsd(self) -> bool:
        try:
            output = subprocess.run([str(self.dsd_path), "--version"], capture_output=True, text=True, check=True)
            version = output.stdout.strip().split(" ")[-1]
            if not version.startswith("v"):
                version = "v" + version

            # If it's not the correct version, Ninja will download it and then rerun this script
            return version == self.dsd_version
        except subprocess.CalledProcessError:
            return False
        except FileNotFoundError:
            return False


def add_download_tool_builds(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    downloads: list[str] = []

    if args.dsd is None:
        downloads.append(str(cfg.dsd_path))
        n.build(
            rule="download_tool",
            outputs=str(cfg.dsd_path),
            variables={
                "tool": "dsd",
                "tag": cfg.dsd_version,
                "path": cfg.dsd_path,
            },
        )
        n.newline()

    downloads.append(str(cfg.objdiff_path))
    n.build(
        rule="download_tool",
        outputs=str(cfg.objdiff_path),
        variables={
            "tool": "objdiff",
            "tag": cfg.objdiff_version,
            "path": cfg.objdiff_path,
        }
    )
    n.newline()

    if args.compiler is None:
        downloads.extend([str(cfg.cc_path), str(cfg.ld_path)])
        n.build(
            rule="download_tool",
            outputs=[str(cfg.cc_path), str(cfg.ld_path)],
            variables={
                "tool": "mwccarm",
                "tag": "latest",
                "path": str(cfg.tools_path),
            },
        )
        n.newline()

    if cfg.platform.system != "windows" and cfg.wine_path == cfg.default_wibo_path:
        downloads.append(str(cfg.wine_path))
        n.build(
            rule="download_tool",
            outputs=cfg.wine_path,
            variables={
                "tool": "wibo",
                "tag": cfg.wibo_version,
                "path": cfg.wine_path,
            },
        )
        n.newline()

    n.build(
        inputs=downloads,
        rule="phony",
        outputs="download_tools",
    )
    n.newline()


def add_configure_build(cfg: ProjectConfig, n: ninja_syntax.Writer):
    dsd_cfg = []

    for version in cfg.game_versions:
        dsd_cfg.extend(cfg.dsd_configs(version))

    n.build(
        outputs="build.ninja",
        rule="configure",
        implicit=[
            str(cfg.cfg_script),
            # Require dsd to exist when rerunning configure.py
            str(cfg.dsd_path),
            *dsd_cfg,
        ]
    )


def add_extract_build(cfg: ProjectConfig, version: str, n: ninja_syntax.Writer, args: Any):
    if not args.no_extract:
        n.build(
            inputs=str(cfg.baserom(version)),
            implicit=str(cfg.dsd_path),
            rule="extract",
            outputs=str(cfg.baserom_config(version)),
            variables={
                "output_path": str(cfg.get_game_extract(version))
            }
        )
        n.newline()


def add_delink_and_lcf_builds(cfg: ProjectConfig, version: str, n: ninja_syntax.Writer):
    rom_config = str(cfg.baserom_config(version))
    delink_files = cfg.delink_files(version)
    if len(delink_files) > 0:
        n.comment("Delink ELF binaries when any delinks.txt file is modified")
        n.build(
            inputs=cfg.dsd_configs(version) + [rom_config],
            implicit=str(cfg.dsd_path),
            rule="delink",
            outputs=delink_files,
            variables={
                "config_path": str(cfg.arm9_config_yaml(version)),
            }
        )
        n.newline()

        n.build(
            inputs=delink_files,
            rule="phony",
            outputs=f"delink_{version}"
        )
        n.newline()

    lcf_file = cfg.arm9_lcf_file(version)
    objects_file = cfg.arm9_objects_file(version)
    n.build(
        inputs=cfg.delinks_files[version] + [str(rom_config)],
        implicit=str(cfg.dsd_path),
        rule="lcf",
        outputs=[lcf_file, objects_file],
        variables={
            "config_path": str(cfg.arm9_config_yaml(version)),
        }
    )
    n.newline()


def add_disassemble_builds(cfg: ProjectConfig, version: str, n: ninja_syntax.Writer):
    n.build(
        inputs=cfg.dsd_configs(version),
        implicit=str(cfg.dsd_path),
        rule="disassemble",
        outputs=f"dis_{version}",
        variables={
            "config_path": str(cfg.arm9_config_yaml(version)),
            "output_path": str(cfg.arm9_disassembly_dir(version)),
        }
    )
    n.newline()


def add_mwcc_builds(cfg: ProjectConfig, version: str, objects: Dict[str, Object], n: ninja_syntax.Writer, mwcc_implicit: list[str]):
    file_map: dict[str, list[str]] = {}

    for object in objects.values():
        file_map[str(object.src_path)] = object.options["cflags"] + object.options["extra_cflags"]

    if cfg.auto_add_sources:
        for source_file in get_c_cpp_files([cfg.src_path, cfg.libs_path]):
            if str(source_file) not in file_map:
                file_map[str(source_file)] = cfg.cflags_base

    for src_file, cc_flags in file_map.items():
        source_file = Path(src_file)
        src_obj_path = cfg.get_game_build(version) / source_file

        if cfg.warn_missing_source and not source_file.exists():
            print(f"WARNING: path not found for `{source_file}`")

        if "-lang=c++" not in cc_flags or "-lang=c" not in cc_flags:
            if is_cpp(source_file):
                cc_flags.append("-lang=c++")
            elif is_c(source_file):
                cc_flags.append("-lang=c")

        n.build(
            inputs=str(source_file),
            implicit=mwcc_implicit,
            rule="mwcc",
            outputs=str(src_obj_path.with_suffix(".o")),
            variables={
                "game_version": version.upper(),
                "cc_flags": " ".join(cc_flags),
                "basedir": str(src_obj_path.parent),
                "basefile": str(src_obj_path.with_suffix("")),
            },
        )
        n.newline()

        extension = source_file.suffix
        ctx_file = str(src_obj_path.with_suffix(f".ctx{extension}"))
        n.build(
            inputs=str(source_file),
            rule="m2ctx",
            outputs=ctx_file,
        )
        n.newline()


def add_mwld_and_rom_builds(cfg: ProjectConfig, version: str, n: ninja_syntax.Writer):
    n.comment("Run linker")
    objects_to_link = [file['object_to_link'] for file in cfg.files(version)]
    elf_file = str(cfg.arm9_o(version))
    lcf_file = cfg.arm9_lcf_file(version)
    objects_file = cfg.arm9_objects_file(version)
    if len(objects_to_link) > 0:
        ld_implicit = [str(cfg.ld_path)]
        if cfg.wine_path == cfg.default_wibo_path:
            ld_implicit.append(cfg.wine_path)

        # Only passed to the final arm9.o link
        arm9_ld_flags = " ".join([
            "-m Entry", # Set entry function
        ])
        n.build(
            inputs=[*objects_to_link, lcf_file, objects_file],
            implicit=ld_implicit,
            rule="mwld",
            outputs=elf_file,
            variables={
                'extra_ld_flags': arm9_ld_flags,
                'lcf_file': str(lcf_file),
                'objects_file': str(objects_file),
            }
        )
        n.newline()

    n.build(
        inputs=elf_file,
        rule="phony",
        outputs=f"arm9_{version}",
    )
    n.newline()

    rom_config_file = str(cfg.build_rom_config(version))
    n.build(
        inputs=elf_file,
        implicit=str(cfg.dsd_path),
        rule="rom_config",
        outputs=rom_config_file,
        variables={
            "config_path": str(cfg.arm9_config_yaml(version)),
        }
    )
    n.newline()

    rom_file = cfg.build_rom(version)
    n.build(
        inputs=rom_config_file,
        implicit=str(cfg.dsd_path),
        rule="rom_build",
        outputs=rom_file,
    )
    n.newline()

    n.build(
        inputs=rom_file,
        rule="phony",
        outputs=f"rom_{version}",
    )
    n.newline()

    n.build(
        inputs=rom_file,
        rule="sha1",
        variables={
            "sha1_file": str(Path(rom_file).with_suffix(".sha1"))
        },
        outputs=f"sha1_{version}",
    )
    n.newline()


def add_check_builds(cfg: ProjectConfig, version: str, n: ninja_syntax.Writer):
    n.build(
        inputs=str(cfg.arm9_o(version)),
        rule="check_modules",
        outputs=f"check_modules_{version}",
        variables={
            "config_path": str(cfg.arm9_config_yaml(version)),
        },
    )
    n.newline()

    n.build(
        inputs=str(cfg.arm9_o(version)),
        rule="check_symbols",
        outputs=f"check_symbols_{version}",
        variables={
            "config_path": str(cfg.arm9_config_yaml(version)),
            "elf_path": str(cfg.arm9_o(version)),
        },
    )
    n.newline()

    n.build(
        inputs=[f"check_modules_{version}", f"check_symbols_{version}"],
        rule="phony",
        outputs=f"check_{version}",
    )
    n.newline()


def add_objdiff_builds(cfg: ProjectConfig, version: str, n: ninja_syntax.Writer):
    out_path = cfg.get_game_build(version) / "objdiff.json"

    n.build(
        inputs=cfg.dsd_configs(version),
        implicit=str(cfg.dsd_path),
        rule="objdiff",
        outputs=str(out_path),
        variables={
            "config_path": str(cfg.arm9_config_yaml(version)),
            "out_path": str(cfg.get_game_build(version)),
        }
    )
    n.newline()

    n.build(
        inputs=str(out_path),
        rule="phony",
        outputs=f"objdiff_{version}.json",
    )
    n.newline()

    delink_files = cfg.delink_files(version)
    n.build(
        inputs=[str(out_path)],
        implicit=[str(cfg.objdiff_path)] + delink_files + cfg.source_object_files(version),
        rule="objdiff_report",
        outputs=str(cfg.objdiff_report(version)),
        variables={
            "dir": str(cfg.get_game_build(version)),
            "filename": "report.json"
        }
    )
    n.newline()

    n.build(
        inputs=str(cfg.objdiff_report(version)),
        rule="phony",
        outputs=f"report_{version}",
    )
    n.newline()


def add_apply_build(cfg: ProjectConfig, version: str, n: ninja_syntax.Writer):
    n.build(
        inputs=cfg.dsd_configs(version) + [str(cfg.arm9_o(version))],
        implicit=str(cfg.dsd_path),
        rule="apply",
        outputs=f"apply_{version}",
        variables={
            "config_path": str(cfg.arm9_config_yaml(version)),
            "elf_path": str(cfg.arm9_o(version)),
        }
    )
    n.newline()


def create_objdiff_fixup_config(cfg: ProjectConfig, objects: Dict[str, Object]):
    out_json = {}

    out_json["root_path"] = str(cfg.root_path.resolve())
    out_json["versions"] = {}
    for version in cfg.game_versions:
        out_json["versions"][version] = {}

    out_json["units"] = {}
    for version in cfg.game_versions:
        out_json["versions"][version]["objdiff"] = str(cfg.get_game_build(version) / "objdiff.json")

        for name, object in objects.items():
            out_json["units"][name] = {}

        for name, object in objects.items():
            out_json["units"][name]["cflags"] = object.options["cflags"]
            out_json["units"][name]["extra_cflags"] = object.options["extra_cflags"]
            out_json["units"][name]["mw_version"] = COMPILER_MAP[object.options["mw_version"]]

    cfg.build_path.mkdir(exist_ok=True)
    out_path = cfg.build_path / "objdiff_cfg.json"
    with out_path.open("w") as f:
        json.dump(out_json, f, indent=2)


def process_project(cfg: ProjectConfig, args: Any):
    objects = cfg.objects()

    create_objdiff_fixup_config(cfg, objects)

    with cfg.build_ninja_path.open("w") as file:
        n = ninja_syntax.Writer(file)

        n.rule(
            name="download_tool",
            command=f'{cfg.python_path} tools/download_tool.py $tool $tag --path $path'
        )
        n.newline()

        if cfg.arm7_bios_path.is_file():
            n.variable("arm7_bios_flag", f"--arm7-bios {cfg.arm7_bios_path.relative_to(cfg.root_path)}")
        else:
            n.variable("arm7_bios_flag", "")
        n.newline()

        n.rule(
            name="extract",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} rom extract --rom $in --output-path $output_path $arm7_bios_flag"
        )
        n.newline()

        n.rule(
            name="delink",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} delink --config-path $config_path"
        )
        n.newline()

        n.rule(
            name="disassemble",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} dis --config-path $config_path --asm-path $output_path --ual"
        )
        n.newline()

        # -MMD excludes all includes instead of just system includes for some reason, so use -MD instead.
        mwcc_cmd = f'{cfg.wine_path} "{cfg.cc_path}" $cc_flags {cfg.includes} -DVERSION=$game_version -MD -c $in -o $basedir'
        mwcc_implicit = [str(cfg.cc_path)]
        if cfg.platform.system != "windows":
            transform_dep = "tools/transform_dep.py"
            mwcc_cmd += f" && $python {transform_dep} $basefile.d $basefile.d"
            mwcc_implicit.append(transform_dep)
            if cfg.wine_path == cfg.default_wibo_path:
                mwcc_implicit.append(cfg.wine_path)
        n.rule(
            name="mwcc",
            command=mwcc_cmd,
            depfile="$basefile.d",
        )
        n.newline()

        n.rule(
            name="lcf",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} lcf -c $config_path"
        )
        n.newline()

        n.rule(
            name="mwld",
            command=f'{cfg.wine_path} "{cfg.ld_path}" {' '.join(cfg.ldflags)} $extra_ld_flags @$objects_file $lcf_file -o $out'
        )
        n.newline()

        n.rule(
            name="rom_config",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} rom config --elf $in --config $config_path"
        )
        n.newline()

        n.rule(
            name="rom_build",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} rom build --config $in --rom $out $arm7_bios_flag"
        )
        n.newline()

        cflags = " ".join(cfg.cflags_base)
        dsd_objdiff_args = " ".join([
            "--scratch",                                 # Metadata for creating decomp.me scratches
            f"--compiler {cfg.get_decompme_compiler()}", # decomp.me compiler name
            f'--c-flags "{cflags} -lang=c++"',           # decomp.me compiler flags
            "--custom-make ninja",                       # Command for rebuilding files
        ])
        n.rule(
            name="objdiff",
            command=f"touch {cfg.dsd_path} && {cfg.dsd_path} {cfg.dsd_flags} objdiff --config-path $config_path --output-path $out_path {dsd_objdiff_args}"
        )
        n.newline()

        n.rule(
            name="objdiff_report",
            command=f"{cfg.objdiff_path} -C $dir report generate -o $filename"
        )
        n.newline()

        n.rule(
            name="m2ctx",
            command=f"{cfg.python_path} tools/m2ctx.py -f $out $in"
        )
        n.newline()

        n.rule(
            name="check_modules",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} check modules --config-path $config_path --fail"
        )
        n.newline()

        n.rule(
            name="check_symbols",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} check symbols --config-path $config_path --elf-path $elf_path --fail --max-lines 20"
        )
        n.newline()

        n.rule(
            name="apply",
            command=f"{cfg.dsd_path} {cfg.dsd_flags} apply --config-path $config_path --elf-path $elf_path"
        )
        n.newline()

        n.rule(
            name="sha1",
            command=f"{cfg.python_path} tools/sha1.py $in -c $sha1_file"
        )
        n.newline()

        configure_cmdline = subprocess.list2cmdline(sys.argv[1:])
        n.rule(
            name="configure",
            command=f"{cfg.python_path} tools/configure.py {configure_cmdline}",
            generator=True
        )
        n.newline()

        n.rule(
            name="format_delinks",
            command=f"{cfg.python_path} tools/format_delinks.py"
        )
        n.newline()

        n.rule(
            name="post_objdiff",
            command=f"{cfg.python_path} tools/objdiff_config.py"
        )
        n.newline()

        add_download_tool_builds(cfg, n, args)
        add_configure_build(cfg, n)

        if cfg.check_can_run_dsd():
            defaults = []

            for version in cfg.game_versions:
                add_extract_build(cfg, version, n, args)
                add_delink_and_lcf_builds(cfg, version, n)
                add_disassemble_builds(cfg, version, n)
                add_mwcc_builds(cfg, version, objects, n, mwcc_implicit)
                add_mwld_and_rom_builds(cfg, version, n)
                add_check_builds(cfg, version, n)
                add_objdiff_builds(cfg, version, n)
                add_apply_build(cfg, version, n)
                defaults.extend([f"check_{version}", f"sha1_{version}"])

            n.build(
                rule="post_objdiff",
                implicit=[f"objdiff_{version}.json" for version in cfg.game_versions],
                outputs="objdiff"
            )
            n.newline()

            n.build(
                rule="format_delinks",
                outputs="format_delinks"
            )
            n.newline()

            n.default(["format_delinks", "objdiff", *defaults])
        else:
            n.default(["download_tools"])
