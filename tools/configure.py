#!/usr/bin/env python3

import json
import argparse
import subprocess

from pathlib import Path
from project import ProjectConfig, process_project, DEFAULT_WIBO_PATH

parser = argparse.ArgumentParser(description="Generates build.ninja")
parser.add_argument('-w', type=str, default=DEFAULT_WIBO_PATH, dest="wine", required=False, help="Path to Wine/Wibo (linux only)")
parser.add_argument("--compiler", type=Path, required=False, help="Path to pre-installed compiler root directory")
parser.add_argument("--no-extract", action="store_true", help="Skip extract step")
parser.add_argument("--dsd", type=Path, required=False, help="Path to pre-installed dsd CLI")
parser.add_argument('version', help='Game version')
args = parser.parse_args()

config = ProjectConfig("st", args.version, args.compiler, "dsi/1.2p1", args.wine, args.dsd, Path(__file__).resolve())
config.dsd_tag = "v0.10.2"
config.wibo_tag = "0.6.16"
config.objdiff_tag = "v3.0.0-beta.6"


def main():
    if config.check_can_run_dsd():
        assert config.game_version is not None

        out = subprocess.run([
            str(config.dsd_path),
            "--force-color",
            "json",
            "delinks",
            "--config-path", config.config_path / config.game_version / "arm9" / "config.yaml"
        ], capture_output=True, text=True)
        assert out.returncode == 0, f"Error running dsd:\n{out.stderr.strip()}"

        config.delinks_json = json.loads(out.stdout)

    process_project(config, args)


if __name__ == "__main__":
    main()
