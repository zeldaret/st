#!/usr/bin/env python3

import argparse

from pathlib import Path

INDENT = " " * 4

def main():
    parser = argparse.ArgumentParser(description="Add new header")
    parser.add_argument("--suffix", "-s", dest="suffix", help="Suffix", required=True)
    parser.add_argument("--pointer", "-p", dest="pointer", help="Make the symbol a pointer", action="store_true", default=False)
    parser.add_argument("--base", "-b", dest="base", help="Add a base class", action="store_true", default=False)
    args = parser.parse_args()

    name = f"UnkStruct_{args.suffix}"

    base_class_def = (
        f"class {name}_Base "
        + "{\n"
        + "public:\n"
        + f"{INDENT}{name}_Base();\n"
        + f"{INDENT}~{name}_Base();\n"
        + "};\n"
    )

    class_def = (
        f"class {name} {f': public {name}_Base ' if args.base else ''}"
        + "{\n"
        + "public:\n"
        + f"{INDENT}/* 00 */ unk32 mUnk_00;\n\n"
        + f"{INDENT}{name}();\n"
        + f"{INDENT}~{name}();\n"
        + "};\n"
    )

    content = [
        "#pragma once\n",
        '#include "global.h"',
        '#include "types.h"\n',
        base_class_def if args.base else "",
        class_def,
        f"extern {name} {'*' if args.pointer else ''}data_{args.suffix};"
    ]

    new_path = Path(f"include/Unknown/{name}.hpp")
    new_path.write_text("\n".join(line for line in content if len(line) > 0) + "\n")


if __name__ == "__main__":
    main()
