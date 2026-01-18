#!/usr/bin/env python3

import json
import argparse
import subprocess
import glob

from typing import List, Dict, Any
from pathlib import Path
from project import ProjectConfig, Object, process_project


parser = argparse.ArgumentParser(description="Generates build.ninja")
parser.add_argument('-w', type=str, default="./wibo", dest="wine", required=False, help="Path to Wine/Wibo (linux only)")
parser.add_argument("--compiler", type=Path, required=False, help="Path to pre-installed compiler root directory")
parser.add_argument("--no-extract", action="store_true", help="Skip extract step")
parser.add_argument("--dsd", type=Path, required=False, help="Path to pre-installed dsd CLI")
parser.add_argument("--version", "-v", help='Game version', required=False)
args = parser.parse_args()

config = ProjectConfig("st", args.compiler, "dsi/1.2p1", args.wine, args.dsd, Path(__file__).resolve())
config.dsd_tag = "v0.10.2"
config.wibo_tag = "0.6.16"
config.objdiff_tag = "v3.0.0-beta.6"

GAME_VERSIONS = [
    "eur",
    "jp",
]

# Only configure versions for which a baserom file exists
def version_exists(version: str) -> bool:
    return glob.glob(str(Path("extract") / f"baserom_st_{version}.nds")) != []

if args.version is not None:
    config.game_versions = [args.version]
else:
    config.game_versions = [
        version
        for version in GAME_VERSIONS
        if version_exists(version)
    ]


config.cflags_base = [
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
]

config.ldflags = [
    "-proc arm946e",        # Target processor
    "-dead",                # Strip unused code
    "-nostdlib",            # No C/C++ standard library
    "-interworking",        # Enable ARM/Thumb interworking
    "-map closure,unused",  # Generate map file
    "-msgstyle gcc",        # Use GCC-like messages (some IDEs will make file names clickable)
]


# Helper function for Nitro libraries
def NitroLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "src_dir": "libs/nitro/src",
        "cflags": config.cflags_base,
        "objects": objects,
    }


# Helper function for libc libraries
def LibC(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "src_dir": "libs/c/src",
        "cflags": [*config.cflags_base, "-str reuse"],
        "objects": objects,
    }


# Helper function for libcpp libraries
def LibCPP(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "src_dir": "libs/cpp/src",
        "cflags": config.cflags_base,
        "objects": objects,
    }


# Helper function for overlays and similar modules
def GameLib(lib_name: str, objects: List[Object]) -> Dict[str, Any]:
    return {
        "lib": lib_name,
        "mw_version": "dsi/1.2p1",
        "cflags": [*config.cflags_base, "-str reuse"],
        "objects": objects,
    }


config.auto_add_sources = False
config.warn_missing_source = True

config.libs = [
    GameLib(
        "Main",
        [
            Object("Main/Main.cpp"),
            Object("Main/System/SysNew.cpp"),
            Object("Main/System/OverlayManager.cpp"),
            Object("Main/Game/GameModeLinkListNode.cpp"),
            Object("Main/func_02017ea4.cpp"),
            Object("Main/Game/GameModeBase.cpp"),
            Object("Main/UnkStruct_0204a060.cpp"),
            Object("Main/Game/GameModeManagerBase.cpp"),
        ]
    ),
    GameLib(
        "Overlay 0",
        [
            Object("000_Second/Actor/Actor.cpp"),
            Object("000_Second/Actor/ActorManager.cpp"),
            Object("000_Second/Actor/ActorUnk_ov000_020a8bb0.cpp"),
            Object("000_Second/Item/ItemManager.cpp"),
            Object("000_Second/Item/TreasureManager.cpp"),
        ]
    ),
    GameLib(
        "Overlay 1",
        [
            Object("001_SceneInit/Actor/ActorManager_001.cpp"),
        ]
    ),
    GameLib(
        "Overlay 18",
        [
            Object("018_StartUp/GameModeStartUp.cpp"),
            Object("018_StartUp/StartUpInitializers.cpp"),
        ]
    ),
    GameLib(
        "Overlay 19",
        [
            Object("019_MainSelect/GameModeFileSelect.cpp"),
            Object("019_MainSelect/FileSelectManager.cpp"),
            Object("019_MainSelect/019_UnkSystem1_ov019_Derived1.cpp"),
            Object("019_MainSelect/FileSelectMain.cpp"),
            Object("019_MainSelect/019_UnkSubStruct9.cpp"),
            Object("019_MainSelect/FileSelectOptions.cpp"),
            Object("019_MainSelect/FileSelectMicTest.cpp"),
            Object("019_MainSelect/FileSelectSubScreen.cpp"),
            Object("019_MainSelect/FileSelectManager_160.cpp"),
            Object("019_MainSelect/FileSelectManager_164.cpp"),
            Object("019_MainSelect/019_UnkSystem1_ov019_Derived2.cpp"),
            Object("019_MainSelect/019_UnkSystem1_ov019_Derived3.cpp"),
            Object("019_MainSelect/019_SaveManager.cpp"),
        ]
    ),
    GameLib(
        "Overlay 25",
        [
            Object("025_Title/GameModeTitleScreen.cpp"),
            Object("025_Title/TitleScreenManager.cpp"),
            Object("025_Title/TitleScreen.cpp"),
        ]
    ),
    GameLib(
        "Overlay 31",
        [
            Object("031_Land/Actor/ActorRupee.cpp"),
        ]
    ),
    GameLib(
        "Overlay 110",
        [
            Object("110_PlayerGet/PlayerGet.cpp"),
        ]
    ),
    LibC(
        "libc",
        [
            Object("abort_exit_arm_eabi.c"),
            Object("ansi_files.c"),
            Object("float.c"),
            Object("locale.c"),
            Object("arith.c"),
            Object("buffer_io.c"),
            Object("file_io.c"),
            Object("math_api.c"),
            Object("mbstring.c"),
            Object("mem.c"),
            Object("mem_funcs.c"),
            Object("secure_error.c"),
            Object("signal.c"),
            Object("string.c"),
            Object("wmem.c"),
            Object("wprintf.c"),
            Object("wstring.c"),
            Object("ansi_fp.c"),
            Object("extras.c"),
            Object("math/e_log.c"),
            Object("math/e_log10.c"),
            Object("math/e_pow.c"),
            Object("math/s_ceil.c"),
            Object("math/s_copysign.c"),
            Object("math/s_fabs.c"),
            Object("math/s_frexp.c"),
            Object("math/s_ldexp.c"),
            Object("math/w_log.c"),
            Object("math/w_log10f.c"),
            Object("math/w_pow.c"),
        ]
    ),
    LibCPP(
        "libcpp",
        [
            Object("__register_global_object.c")
        ]
    ),
]


def main():
    for version in config.game_versions:
        config.delinks_files[version] = config.get_config_files(version, "delinks.txt")
        config.relocs_files[version] = config.get_config_files(version, "relocs.txt")
        config.symbols_files[version] = config.get_config_files(version, "symbols.txt")

        if config.check_can_run_dsd():
            out = subprocess.run([
                str(config.dsd_path),
                "--force-color",
                "json",
                "delinks",
                "--config-path", config.config_path / version / "arm9" / "config.yaml"
            ], capture_output=True, text=True)
            assert out.returncode == 0, f"Error running dsd:\n{out.stderr.strip()}"

            config.delinks_jsons[version] = json.loads(out.stdout)

    process_project(config, args)


if __name__ == "__main__":
    main()
