#!/usr/bin/env python3

# setup: in the source file, put the whole data on the same line
# and add `/* DATA_PERM */` at the beginning of the line
# you don't have to put all symbols at the same location
#
# usage: python3 data_permuter.py subdir/unit_name
# example: python3 data_permuter.py 031_Land/Course/MapManagerLand

import itertools
import json
import subprocess
import sys
from pathlib import Path

DEBUG = False

OBJDIFF_CLI = Path("objdiff-cli").resolve()
assert OBJDIFF_CLI.exists()

if DEBUG:
    O_FNAME = sys.argv[1] if len(sys.argv) > 1 else "031_Land/Course/MapManagerLand"
else:
    O_FNAME = sys.argv[1]

BASE_O = f"build/eur/src/{O_FNAME}.o"
TARGET_O = f"build/eur/delinks/src/{O_FNAME}.o"

SRC_PATH = Path(f"src/{O_FNAME}.cpp").resolve()
if not SRC_PATH.exists():
    SRC_PATH = SRC_PATH.with_suffix(".c")
assert SRC_PATH.exists()

OBJDIFF_ARGS = [
    # diff mode
    "diff",
    # combine data sections
    "-c",
    "combine_data_sections=true",
    # combine text sections
    "-c",
    "combine_text_sections=true",
    # output to stdout
    "-o",
    "-",
    # base path
    "-1",
    BASE_O,
    # target path
    "-2",
    TARGET_O,
]


def do_rebuild():
    # rebuilds the files

    subprocess.run(["ninja", BASE_O, TARGET_O], check=True)


def get_diff_json() -> dict:
    # returns the current diff as a json file

    do_rebuild()
    output = subprocess.run([str(OBJDIFF_CLI), *OBJDIFF_ARGS], capture_output=True, text=True, check=True)
    assert len(output.stdout) != 0
    return json.loads(output.stdout)


def find_data0(json_file: dict, is_target: bool) -> float | None:
    # finds the current match percent

    syms: list[dict] = json_file["right" if is_target else "left"]["symbols"]

    for sym in syms:
        if sym["name"] == "[.data-0]":
            return sym["match_percent"]

    raise ValueError("can't find data match percent")


def get_next_filedata(filelines: list[str], perm: tuple) -> str:
    next_lines = []
    i = 0
    for line in filelines:
        if line.startswith("/* DATA_PERM"):
            assert i < len(perm)
            next_lines.append(f"/* DATA_PERM */ {perm[i]}")
            i += 1
        else:
            next_lines.append(line)

    assert len(next_lines) > 0
    return "\n".join(next_lines) + "\n"


def main():
    # parse the source and find the symbols to permute
    filedata = SRC_PATH.read_text()

    if not "/* DATA_PERM " in filedata:
        print("no declaration found, aborting")
        return

    filelines = filedata.splitlines()
    sym_list = []

    for line in filelines:
        if line.startswith("/* DATA_PERM"):
            sym_list.append(line.split(" */ ")[-1])

    # create permutations list
    perm_list = list(itertools.permutations(sym_list))
    num_possible = len(perm_list)

    # test each permutation and save the match percent per tested perm
    print(num_possible, "permutations")
    result_map: dict = {}
    for i, perm in enumerate(perm_list):
        print("permutation no.", i + 1)
        SRC_PATH.write_text(get_next_filedata(filelines, perm))
        result_map[f"{find_data0(get_diff_json(), False)}"] = list(perm)

    # find which permutation was the best one
    print("processing results...")
    best_percent = 0.0
    best_perm = None
    for percent, perm in result_map.items():
        if float(percent) > best_percent:
            best_perm = perm
            best_percent = float(percent)

    print("the best match is:")
    assert best_perm is not None
    print("\n".join(list(best_perm)))

    out = Path("data_perm_results.json").resolve()
    out.write_text(json.dumps(result_map))


if __name__ == "__main__":
    main()
