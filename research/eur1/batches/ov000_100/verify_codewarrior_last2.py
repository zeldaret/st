#!/usr/bin/env python3
"""Try source-equivalent C pointer expressions for two EUR1 overlay-0 functions.

Uses the repository's CodeWarrior compiler and existing ELF/hash verifier.
Does not modify the 100-function research source, the original ROM, or build.
The report identifies a successful expression only after binary verification.
"""
from __future__ import annotations

import argparse
import json
import os
import subprocess
import sys
import tempfile
from pathlib import Path

from verify_codewarrior_100 import (
    CFLAGS,
    DEFAULT_COMPILER,
    DEFAULT_WRAPPER,
    HERE,
    MANIFEST,
    ROOT,
    read_function_results,
)

TARGETS = ("0x0206A5C0", "0x0206A5CC")
# 'write' has (base, idx, value), 'read' has (base, idx).
# Each candidate is compiled into a SEPARATE C source object using the same
# compiler flags as the previous successful 98/100 probe.
FORMS: dict[str, tuple[str, str]] = {
    "original_index_plus_42": (
        "base[idx + 42] = value;",
        "return base[idx + 42];",
    ),
    "pointer_first_array_offset": (
        "unsigned int *p = base + idx; p[42] = value;",
        "const unsigned int *p = base + idx; return p[42];",
    ),
    "pointer_first_byte_offset": (
        "unsigned char *p = (unsigned char *)(base + idx); *(unsigned int *)(p + 0xA8) = value;",
        "const unsigned char *p = (const unsigned char *)(base + idx); return *(const unsigned int *)(p + 0xA8);",
    ),
    "pointer_first_byte_offset_with_two_temporaries": (
        "unsigned int *p = base + idx; unsigned char *q = (unsigned char *)p; *(unsigned int *)(q + 0xA8) = value;",
        "const unsigned int *p = base + idx; const unsigned char *q = (const unsigned char *)p; return *(const unsigned int *)(q + 0xA8);",
    ),
    "base_byte_arithmetic": (
        "unsigned char *p = (unsigned char *)base + idx * 4; *(unsigned int *)(p + 0xA8) = value;",
        "const unsigned char *p = (const unsigned char *)base + idx * 4; return *(const unsigned int *)(p + 0xA8);",
    ),
    "base_shift_arithmetic": (
        "unsigned char *p = (unsigned char *)base + (idx << 2); *(unsigned int *)(p + 0xA8) = value;",
        "const unsigned char *p = (const unsigned char *)base + (idx << 2); return *(const unsigned int *)(p + 0xA8);",
    ),
    "struct_field_int_array": (
        "struct ST_View *p = (struct ST_View *)(base + idx); p->field = value;",
        "const struct ST_View *p = (const struct ST_View *)(base + idx); return p->field;",
    ),
    "struct_field_byte_array": (
        "struct ST_View_Bytes *p = (struct ST_View_Bytes *)(base + idx); p->field = value;",
        "const struct ST_View_Bytes *p = (const struct ST_View_Bytes *)(base + idx); return p->field;",
    ),
    "address_of_array_element": (
        "unsigned int *p = &base[idx]; *(p + 42) = value;",
        "const unsigned int *p = &base[idx]; return *(p + 42);",
    ),
    "parenthesized_pointer_arithmetic": (
        "*(base + idx + 42) = value;",
        "return *(base + idx + 42);",
    ),
    "char_array_direct_offset": (
        "*(unsigned int *)((unsigned char *)(base + idx) + 168) = value;",
        "return *(const unsigned int *)((const unsigned char *)(base + idx) + 168);",
    ),
    "integer_address_byte_offset": (
        "unsigned long p = (unsigned long)(base + idx); *(unsigned int *)(p + 0xA8) = value;",
        "unsigned long p = (unsigned long)(base + idx); return *(const unsigned int *)(p + 0xA8);",
    ),
}


def generate_source(write: str, read: str) -> str:
    return (
        "/* Standalone CodeWarrior probe, no original code/ROM included. */\n"
        "struct ST_View { unsigned int pad[42]; unsigned int field; };\n"
        "struct ST_View_Bytes { unsigned char pad[168]; unsigned int field; };\n"
        "void st_ov000_0206A5C0(unsigned int *base, unsigned int idx, unsigned int value) {\n"
        f"    {write}\n"
        "}\n"
        "unsigned int st_ov000_0206A5CC(const unsigned int *base, unsigned int idx) {\n"
        f"    {read}\n"
        "}\n"
    )


def compile_source(compiler: Path, wrapper: Path, folder: Path, source: str) -> tuple[Path | None, str | None]:
    infile = folder / "last_two.c"
    infile.write_text(source, encoding="utf-8")
    p = subprocess.run(
        [str(wrapper), str(compiler), *CFLAGS, "-c", str(infile), "-o", str(folder)],
        cwd=ROOT, capture_output=True, text=True, errors="replace",
    )
    if p.returncode:
        return None, (p.stdout + "\n" + p.stderr).strip()[-1800:]
    obj = folder / "last_two.o"
    if not obj.exists():
        return None, "No CodeWarrior object at expected location"
    return obj, None


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--compiler", type=Path, default=DEFAULT_COMPILER)
    ap.add_argument("--wrapper", type=Path, default=DEFAULT_WRAPPER)
    ap.add_argument("--out", type=Path, default=ROOT / "build/eur1/codewarrior_last2_variants.json")
    args = ap.parse_args()
    if os.name != "nt":
        raise RuntimeError("Run this CodeWarrior probe on Windows")
    compiler, wrapper = args.compiler.resolve(), args.wrapper.resolve()
    if not compiler.is_file() or not wrapper.is_file():
        raise RuntimeError("CodeWarrior compiler or sjiswrap.exe missing; run ninja download_tools")

    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    targets = [f for f in manifest["functions"] if f["address"].upper() in [x.upper() for x in TARGETS]]
    if len(targets) != 2:
        raise RuntimeError("The EUR1 100-function manifest does not contain both targets")
    variants = []
    with tempfile.TemporaryDirectory(prefix="st_cw_last2_") as tmp:
        for no, (name, (write, read)) in enumerate(FORMS.items()):
            d = Path(tmp) / f"v{no:02d}"
            d.mkdir()
            object_path, error = compile_source(compiler, wrapper, d, generate_source(write, read))
            if error:
                row = {"variant": name, "compiler_error": error, "functions": []}
            else:
                matches = read_function_results(object_path, targets)
                row = {"variant": name, "functions": matches}
            variants.append(row)
            brief = ", ".join(f"{f['address']}: {f['status']}" for f in row["functions"])
            print(f"[{no + 1}/{len(FORMS)}] {name}: {brief or 'compiler error'}")

    solutions = {}
    for address in TARGETS:
        solutions[address] = [
            v["variant"] for v in variants
            if any(f["address"].upper() == address.upper() and
                   f["status"] == "exact_codewarrior_standalone" for f in v["functions"])
        ]
    report = {
        "purpose": "Find exact CodeWarrior ARM source expressions for the final two standalone mismatches",
        "compiler": str(compiler),
        "source": "research/eur1/batches/ov000_100/overlay000_recovered_100.c",
        "flags": CFLAGS,
        "solutions": solutions,
        "variants": variants,
        "warning": "Results are isolated research probes, not integrated CodeWarrior matching or gameplay validation",
    }
    dest = args.out.resolve()
    dest.parent.mkdir(parents=True, exist_ok=True)
    dest.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    print("\nSOLUTIONS:")
    for address, names in solutions.items():
        print(f"  {address}: {', '.join(names) if names else 'no match in tested variants'}")
    print("Report:", dest)
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (RuntimeError, OSError, ValueError, subprocess.SubprocessError) as exc:
        print("FAIL:", exc, file=sys.stderr)
        raise SystemExit(1)