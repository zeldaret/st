#!/usr/bin/env python3

# this script attempts to run `dsd delink` for modules that were updated
# `python delink.py dsd_path [optional version]`

import glob
import json
import subprocess
import sys

from pathlib import Path


CONFIG_DIR = Path("config").resolve()
DSD_PATH = Path("./dsd").resolve()  # only used when debugging

TIMESTAMP_FILE = Path("build").resolve() / "delink_timestamps.json"
TIMESTAMP_FILE.parent.mkdir(exist_ok=True)

DEBUG = False


def version_exists(version: str) -> bool:
    return glob.glob(str(Path("extract") / f"baserom_st_{version}.nds")) != []


def main():
    # get supported versions
    GAME_VERSIONS = [
        "eur",
        "eur1",
        "usa",
        "jp",
    ]

    versions = [version for version in GAME_VERSIONS if version_exists(version)]

    # or if we want a specific one
    if len(sys.argv) > 2:
        versions = [sys.argv[2]]

    # should we write TIMESTAMP_FILE
    do_write = False

    # initialize dicts
    file_paths_map: dict[str, list[Path]] = {}
    current_timestamp_map: dict[str, dict[str, float]] = {}
    for version in versions:
        file_paths_map[version] = []
        current_timestamp_map[version] = {}

    # fetch config paths
    file_kinds = ["symbols", "relocs", "delinks"]
    for version in versions:
        for file_path in (CONFIG_DIR / version).rglob("**/*.txt"):
            for file_kind in file_kinds:
                if file_path.stem != file_kind:
                    continue

                file_paths_map[version].append(file_path)

    # fetch current timestamps
    for version, file_paths in file_paths_map.items():
        for path in file_paths:
            current_timestamp_map[version][str(path.relative_to(Path.cwd()))] = path.stat().st_mtime

    if TIMESTAMP_FILE.exists():
        # if the cache exists

        # load the cache
        saved_timestamp_map: dict[str, dict[str, float]] = json.loads(TIMESTAMP_FILE.read_text())

        for version, saved_map in saved_timestamp_map.items():
            do_delink = False

            for saved_path_str, saved_timestamp in saved_map.items():
                timestamp = current_timestamp_map[version].get(saved_path_str)

                # if current timestamp not found or current timestamp is different than the saved timestamp
                # we make it delink when not found because it might mean we added a new version
                # and haven't cached it yet
                if timestamp is None or timestamp != saved_timestamp:
                    do_delink = True
                    break

            if do_delink:
                dsd_p = DSD_PATH if DEBUG else sys.argv[1]

                # ideally we'd only delink the necessary modules
                # however because of how dsd works we can't do that otherwise modules with
                # external calls won't be delinked again
                command = [str(dsd_p), "delink", "--config-path", str(CONFIG_DIR / version / "arm9" / "config.yaml")]
                subprocess.run(command, check=True)

                if DEBUG:
                    print(f"[DEBUG]: execution completed for '{' '.join(command)}'")

                do_write = True
    else:
        # if the cache doesn't exist simply create it
        do_write = True

    if do_write:
        with TIMESTAMP_FILE.open("w") as file:
            json.dump(current_timestamp_map, file, indent=4)


if __name__ == "__main__":
    main()
