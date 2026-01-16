import os
import sys
import subprocess
import ninja_syntax

from typing import Any, Optional, Dict, List
from pathlib import Path
from get_platform import get_platform

###
# TEMP
# Config
CC_FLAGS = " ".join([
    "-O4,p",                # Optimize maximally for performance
    "-enum int",            # Use int-sized enums
    "-char signed",         # Char type is signed
    "-str noreuse",         # Equivalent strings are different objects
    "-proc arm946e",        # Target processor
    "-gccext,on",           # Enable GCC extensions
    "-fp soft",             # Compute float operations in software
    "-inline noauto",       # Inline only functions marked with 'inline'
    "-lang=c++",            # Set language to C++
    "-Cpp_exceptions off",  # Disable C++ exceptions
    "-RTTI off",            # Disable runtime type information
    "-interworking",        # Enable ARM/Thumb interworking
    "-w off",               # Disable warnings
    "-sym on",              # Debug info, including line numbers
    "-gccinc",              # Interpret #include "..." and #include <...> equally
    "-nolink",              # Do not link
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
    "-ipa file",            # InterProcedural Analysis
])

# Passed to all modules and final arm9.o link
LD_FLAGS = " ".join([
    "-proc arm946e",        # Target processor
    "-dead",                # Strip unused code
    "-nostdlib",            # No C/C++ standard library
    "-interworking",        # Enable ARM/Thumb interworking
    "-map closure,unused",  # Generate map file
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
])

current_path     = Path(__name__)
root_path        = current_path.parent
libs_path        = root_path / "libs"

# Includes
includes = [
    root_path / "include"
]
for root, dirs, _ in os.walk(libs_path):
    for dir in dirs:
        if dir == "include":
            includes.append(Path(root) / dir)
CC_INCLUDES = " ".join(f"-i {include}" for include in includes)
# TEMP
###

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
    def __init__(self, completed_versions: List[str], name: str, **options: Any):
        self.name = name
        self.completed_versions = completed_versions

        self.options: Dict[str, Any] = {
            "source": name,
            "mw_version": None,
            "asflags": None,
            "extra_asflags": [],
            "cflags": None,
            "extra_cflags": [],
            # "add_to_all": None,
            # "asm_dir": None,
            # "extab_padding": None,
            # "extra_clang_flags": [],
            # "lib": None,
            # "progress_category": None,
            # "scratch_preset_id": None,
            # "shift_jis": None,
            # "src_dir": None,
        }
        self.options.update(options)

        # Internal
        self.src_path: Optional[Path] = None
        self.asm_path: Optional[Path] = None
        self.src_obj_path: Optional[Path] = None
        self.asm_obj_path: Optional[Path] = None
        self.ctx_path: Optional[Path] = None

    def resolve(self, config: "ProjectConfig", lib: Library):
        # Use object options, then library options
        obj = Object(self.completed_versions, self.name, **lib)

        for key, value in self.options.items():
            if value is not None or key not in obj.options:
                obj.options[key] = value

        # Use default options from config
        def set_default(key: str, value: Any) -> None:
            if obj.options[key] is None:
                obj.options[key] = value

        set_default("asflags", config.asflags)
        set_default("mw_version", config.mwcc_version)
        # set_default("add_to_all", True)
        # set_default("asm_dir", config.asm_dir)
        # set_default("extab_padding", None)
        # set_default("scratch_preset_id", config.scratch_preset_id)
        # set_default("shift_jis", config.shift_jis)
        # set_default("src_dir", config.src_dir)

        # Resolve paths
        build_dir = config.out_path() # TODO
        obj.src_path = Path(obj.options["src_dir"]) / obj.options["source"]
        if obj.options["asm_dir"] is not None:
            path: Path = Path(obj.options["asm_dir"]) / obj.options["source"]
            obj.asm_path = path.with_suffix(".s")
        base_name = Path(self.name).with_suffix("")
        obj.src_obj_path = build_dir / "src" / f"{base_name}.o"
        obj.asm_obj_path = build_dir / "mod" / f"{base_name}.o"
        obj.ctx_path = build_dir / "src" / f"{base_name}.ctx"
        return obj


class ProjectConfig:
    def __init__(self, game: str, game_version: str, mwcc_root: Optional[str], mwcc_tag: str, wine: str, dsd: Optional[str], cfg_script: Path):
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
        self.default_wibo_path = Path("./wibo").resolve()
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

        self.game_version = game_version
        """Version of the game"""

        self.game_config = self.config_path / self.game_version
        """Root directory for dsd configs"""

        if not self.game_config.is_dir():
            print(f"Version '{self.game_version}' not recognized")
            exit(1)

        self.delinks_json = Optional[Any]
        """Delinks JSON data from dsd"""

        self.game_build = self.build_path / self.game_version
        """Path to build directory"""

        self.game_extract = self.extract_path / self.game_version
        """Path to extract directory"""

        self.delinks_files = self.get_config_files("delinks.txt")
        """Paths to every delinks.txt file"""

        self.relocs_files = self.get_config_files("relocs.txt")
        """Paths to every relocs.txt file"""

        self.symbols_files = self.get_config_files("symbols.txt")
        """Paths to every symbols.txt file"""

        self.libs: Optional[List[Library]] = None
        """List of libraries"""

        self.asflags: Optional[List[str]] = None
        """Assembler flags"""

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

    def dsd_configs(self) -> list[str]:
        return self.delinks_files + self.relocs_files + self.symbols_files

    def arm9_config_yaml(self) -> Path:
        return self.game_config / "arm9" / "config.yaml"

    def baserom(self) -> Path:
        return self.extract_path / f'baserom_{self.game}_{self.game_version}.nds'

    def build_rom(self) -> str:
        return f"{self.game}_{self.game_version}.nds"

    def baserom_config(self) -> Path:
        return self.game_extract / 'config.yaml'

    def build_rom_config(self) -> Path:
        return self.game_build / "build" / "rom_config.yaml"

    def source_object_files(self) -> list[str]:
        files: list[str] = []
        for source_file in get_c_cpp_files([self.src_path, self.libs_path]):
            src_obj_path = self.game_build / source_file
            files.append(str(src_obj_path.with_suffix(".o")))
        return files

    def arm9_o(self) -> Path:
        return self.game_build / "arm9.o"

    def arm9_disassembly_dir(self) -> Path:
        return self.game_build / "asm"

    def objdiff_report(self) -> Path:
        return self.game_build / "report.json"

    def files(self) -> list[dict[str, str]]:
        if self.delinks_json is None:
            return []
        return self.delinks_json['files']

    def delink_files(self) -> list[str]:
        delink_files = [file['delink_file'] for file in self.files()]
        return list(set(delink_files))

    def arm9_lcf_file(self) -> str:
        if self.delinks_json is None:
            return ""
        return self.delinks_json['arm9_lcf_file']

    def arm9_objects_file(self) -> str:
        if self.delinks_json is None:
            return ""
        return self.delinks_json['arm9_objects_file']

    def get_config_files(self, name: str) -> list[str]:
        return [
            f"{root}/{file}"
            for root, _, files in os.walk(self.game_config)
            for file in files
            if file == name
        ]

    def get_decompme_compiler(self):
        compiler_map = {
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

        return compiler_map[self.mwcc_version]

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


def create_base_rules(cfg: ProjectConfig, n: ninja_syntax.Writer):
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
    mwcc_cmd = f'{cfg.wine_path} "{cfg.cc_path}" {CC_FLAGS} {CC_INCLUDES} $cc_flags -DVERSION=$game_version -MD -c $in -o $basedir'
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
        command=f'{cfg.wine_path} "{cfg.ld_path}" {LD_FLAGS} $extra_ld_flags @$objects_file $lcf_file -o $out'
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

    dsd_objdiff_args = " ".join([
        "--scratch",                                 # Metadata for creating decomp.me scratches
        f"--compiler {cfg.get_decompme_compiler()}", # decomp.me compiler name
        f'--c-flags "{CC_FLAGS} -lang=c++"',         # decomp.me compiler flags
        "--custom-make ninja",                       # Command for rebuilding files
    ])
    n.rule(
        name="objdiff",
        command=f"{cfg.dsd_path} {cfg.dsd_flags} objdiff --config-path $config_path {dsd_objdiff_args}"
    )
    n.newline()

    n.rule(
        name="objdiff_report",
        command=f"{cfg.objdiff_path} report generate -o $out"
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
        command=f'{cfg.python_path} tools/format_delinks.py'
    )
    n.newline()

    return mwcc_implicit


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


def add_configure_build(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    n.build(
        outputs="build.ninja",
        rule="configure",
        implicit=[
            str(cfg.cfg_script),
            # Require dsd to exist when rerunning configure.py
            str(cfg.dsd_path),
            *cfg.dsd_configs(),
        ]
    )


def add_extract_build(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    if not args.no_extract:
        n.build(
            inputs=str(cfg.baserom()),
            implicit=str(cfg.dsd_path),
            rule="extract",
            outputs=str(cfg.baserom_config()),
            variables={
                "output_path": str(cfg.game_extract)
            }
        )
        n.newline()


def add_delink_and_lcf_builds(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    rom_config = str(cfg.baserom_config())
    delink_files = cfg.delink_files()
    if len(delink_files) > 0:
        n.comment("Delink ELF binaries when any delinks.txt file is modified")
        n.build(
            inputs=cfg.dsd_configs() + [rom_config],
            implicit=str(cfg.dsd_path),
            rule="delink",
            outputs=delink_files,
            variables={
                "config_path": str(cfg.arm9_config_yaml()),
            }
        )
        n.newline()

        n.build(
            inputs=delink_files,
            rule="phony",
            outputs="delink"
        )
        n.newline()

    lcf_file = cfg.arm9_lcf_file()
    objects_file = cfg.arm9_objects_file()
    n.build(
        inputs=cfg.delinks_files + [str(rom_config)],
        implicit=str(cfg.dsd_path),
        rule="lcf",
        outputs=[lcf_file, objects_file],
        variables={
            "config_path": str(cfg.arm9_config_yaml()),
        }
    )
    n.newline()


def add_disassemble_builds(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    n.build(
        inputs=cfg.dsd_configs(),
        implicit=str(cfg.dsd_path),
        rule="disassemble",
        outputs="dis",
        variables={
            "config_path": str(cfg.arm9_config_yaml()),
            "output_path": str(cfg.arm9_disassembly_dir()),
        }
    )
    n.newline()


def add_mwcc_builds(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any, mwcc_implicit: list[str]):
    for source_file in get_c_cpp_files([cfg.src_path, cfg.libs_path]):
        src_obj_path = cfg.game_build / source_file
        cc_flags: list[str] = []
        if is_cpp(source_file):
            cc_flags.append("-lang=c++")
        elif is_c(source_file):
            cc_flags.append("-lang=c")
        print(src_obj_path)
        n.build(
            inputs=str(source_file),
            implicit=mwcc_implicit,
            rule="mwcc",
            outputs=str(src_obj_path.with_suffix(".o")),
            variables={
                "game_version": cfg.game_version.upper(),
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


def add_mwld_and_rom_builds(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    n.comment("Run linker")
    objects_to_link = [file['object_to_link'] for file in cfg.files()]
    elf_file = str(cfg.arm9_o())
    lcf_file = cfg.arm9_lcf_file()
    objects_file = cfg.arm9_objects_file()
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
        outputs="arm9",
    )
    n.newline()

    rom_config_file = str(cfg.build_rom_config())
    n.build(
        inputs=elf_file,
        implicit=str(cfg.dsd_path),
        rule="rom_config",
        outputs=rom_config_file,
        variables={
            "config_path": str(cfg.arm9_config_yaml()),
        }
    )
    n.newline()

    rom_file = cfg.build_rom()
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
        outputs="rom",
    )
    n.newline()

    n.build(
        inputs=rom_file,
        rule="sha1",
        variables={
            "sha1_file": str(Path(rom_file).with_suffix(".sha1"))
        },
        outputs="sha1",
    )
    n.newline()


def add_check_builds(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    n.build(
        inputs=str(cfg.arm9_o()),
        rule="check_modules",
        outputs="check_modules",
        variables={
            "config_path": str(cfg.arm9_config_yaml()),
        },
    )
    n.newline()

    n.build(
        inputs=str(cfg.arm9_o()),
        rule="check_symbols",
        outputs="check_symbols",
        variables={
            "config_path": str(cfg.arm9_config_yaml()),
            "elf_path": str(cfg.arm9_o()),
        },
    )
    n.newline()

    n.build(
        inputs=["check_modules", "check_symbols"],
        rule="phony",
        outputs="check",
    )
    n.newline()


def add_objdiff_builds(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    n.build(
        inputs=cfg.dsd_configs(),
        implicit=str(cfg.dsd_path),
        rule="objdiff",
        outputs="objdiff.json",
        variables={
            "config_path": str(cfg.arm9_config_yaml()),
        }
    )
    n.newline()

    n.build(
        inputs="objdiff.json",
        rule="phony",
        outputs="objdiff",
    )
    n.newline()

    delink_files = cfg.delink_files()
    n.build(
        inputs=["objdiff.json"],
        implicit=[str(cfg.objdiff_path)] + delink_files + cfg.source_object_files(),
        rule="objdiff_report",
        outputs=str(cfg.objdiff_report()),
    )
    n.newline()

    n.build(
        inputs=str(cfg.objdiff_report()),
        rule="phony",
        outputs="report",
    )
    n.newline()


def add_apply_build(cfg: ProjectConfig, n: ninja_syntax.Writer, args: Any):
    n.build(
        inputs=cfg.dsd_configs() + [str(cfg.arm9_o())],
        implicit=str(cfg.dsd_path),
        rule="apply",
        outputs="apply",
        variables={
            "config_path": str(cfg.arm9_config_yaml()),
            "elf_path": str(cfg.arm9_o()),
        }
    )
    n.newline()


def process_project(cfg: ProjectConfig, args: Any):
    with cfg.build_ninja_path.open("w") as file:
        n = ninja_syntax.Writer(file)
        mwcc_implicit = create_base_rules(cfg, n)

        add_download_tool_builds(cfg, n, args)
        add_configure_build(cfg, n, args)

        if cfg.check_can_run_dsd():
            add_extract_build(cfg, n, args)
            add_delink_and_lcf_builds(cfg, n, args)
            add_disassemble_builds(cfg, n, args)
            add_mwcc_builds(cfg, n, args, mwcc_implicit)
            add_mwld_and_rom_builds(cfg, n, args)
            add_check_builds(cfg, n, args)
            add_objdiff_builds(cfg, n, args)
            add_apply_build(cfg, n, args)

            n.build(
                rule="format_delinks",
                outputs="format_delinks"
            )
            n.newline()

            n.default(["format_delinks", "objdiff", "check", "sha1"])
        else:
            n.default(["download_tools"])
