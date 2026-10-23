#!/usr/bin/env python3
"""Experiment: recompile 100 EUR1 overlay-0 C candidates with CodeWarrior ARM.

This does NOT modify the Spirit Tracks build, and is NOT an objdiff integration.
It tests whether each candidate's ELF function bytes reproduce the independently
ROM-derived SHA-256 stored in manifest_100.json.

Requirements: Windows, the repo's downloaded MWCC dsi/1.2p1 and sjiswrap,
and pyelftools (from tools/requirements.txt). No ROM is uploaded or required.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import os
import re
import subprocess
import sys
import tempfile
from pathlib import Path

try:
    from elftools.elf.elffile import ELFFile
    from elftools.elf.sections import SymbolTableSection
except ImportError as exc:
    raise SystemExit("Missing pyelftools: python -m pip install -r tools/requirements.txt") from exc


ROOT = Path(__file__).resolve().parents[4]
HERE = Path(__file__).resolve().parent
SOURCE = HERE / "overlay000_recovered_100.c"
MANIFEST = HERE / "manifest_100.json"
DEFAULT_COMPILER = ROOT / "tools/mwccarm/dsi/1.2p1/mwccarm.exe"
DEFAULT_WRAPPER = ROOT / "tools/sjiswrap.exe"
DEFAULT_REPORT = ROOT / "build/eur1/codewarrior_probe_100.json"

# Mirrors config.cflags_base in tools/configure.py, but uses the C language
# for the research C file. Game source units normally use C++.
CFLAGS = [
    "-O4,p", "-enum", "int", "-char", "signed", "-str", "noreuse",
    "-proc", "arm946e", "-gccext,on", "-fp", "soft",
    "-inline", "noauto", "-lang", "c", "-Cpp_exceptions", "off",
    "-RTTI", "off", "-interworking", "-w", "off", "-sym", "on",
    "-gccinc", "-nolink", "-msgstyle", "gcc", "-ipa", "file",
]


def compile_candidates(compiler: Path, wrapper: Path, temp: Path) -> Path:
    # These 100 C functions only use primitive C types: stdint.h is not
    # needed. Older CodeWarrior toolchains often lack that modern header.
    code = SOURCE.read_text(encoding="utf-8")
    if code.count("#include <stdint.h>") != 1:
        raise RuntimeError("Research source changed: expected one stdint.h include")
    code = code.replace("#include <stdint.h>", "")
    cfile = temp / "overlay000_recovered_100.c"
    cfile.write_text(code, encoding="utf-8")
    command = [str(wrapper), str(compiler), *CFLAGS, "-c", str(cfile), "-o", str(temp)]
    p = subprocess.run(command, cwd=ROOT, capture_output=True, text=True, errors="replace")
    if p.returncode:
        output = (p.stdout + "\n" + p.stderr).strip()
        raise RuntimeError("CodeWarrior compilation failed:\n" + output[-9000:])
    expected = temp / "overlay000_recovered_100.o"
    if expected.exists():
        return expected
    matches = list(temp.glob("*.o"))
    if len(matches) != 1:
        raise RuntimeError("Could not identify compiler output object: " +
                           ", ".join(p.name for p in matches))
    return matches[0]


def read_function_results(obj: Path, functions: list[dict]) -> list[dict]:
    expected = {f"st_ov000_{int(f['address'], 16):08X}": f for f in functions}
    found: dict[str, tuple[bytes, int, int, int]] = {}
    conflicting: set[str] = set()
    relocations: dict[int, list[int]] = {}
    with obj.open("rb") as fp:
        elf = ELFFile(fp)
        if elf["e_type"] != "ET_REL":
            raise RuntimeError(f"Unexpected compiler object type: {elf['e_type']}")
        for section in elf.iter_sections():
            if section["sh_type"] not in ("SHT_REL", "SHT_RELA"):
                continue
            target_idx = section["sh_info"]
            relocations.setdefault(target_idx, []).extend(
                int(reloc["r_offset"]) for reloc in section.iter_relocations())
        for section in elf.iter_sections():
            if not isinstance(section, SymbolTableSection):
                continue
            for sym in section.iter_symbols():
                name = sym.name
                if name not in expected:
                    continue
                idx = sym["st_shndx"]
                if not isinstance(idx, int):
                    continue
                segment = elf.get_section(idx)
                if segment["sh_type"] == "SHT_NOBITS":
                    continue
                offset = int(sym["st_value"]) - int(segment["sh_addr"])
                size = int(sym["st_size"])
                data = segment.data()
                if size <= 0 or offset < 0 or offset + size > len(data):
                    conflicting.add(name)
                    continue
                if name in found:
                    conflicting.add(name)
                else:
                    rels = sum(offset <= rel < offset + size
                               for rel in relocations.get(idx, []))
                    found[name] = (data[offset:offset + size], size, rels, idx)

    report: list[dict] = []
    for name, f in expected.items():
        row = {
            "address": f["address"],
            "symbol": name,
            "expected_size": f["size_bytes"],
            "expected_sha256": f["original_span_sha256"],
        }
        if name in conflicting:
            row["status"] = "unverifiable_duplicate_or_invalid_symbol"
        elif name not in found:
            row["status"] = "not_emitted_or_not_symbolized"
        else:
            machine_code, actual_size, reloc_count, _ = found[name]
            row["generated_size"] = actual_size
            row["generated_sha256"] = hashlib.sha256(machine_code).hexdigest()
            row["relocations"] = reloc_count
            if reloc_count:
                row["status"] = "unverifiable_unresolved_relocation"
            elif actual_size != f["size_bytes"]:
                row["status"] = "different_size"
            elif row["generated_sha256"] == f["original_span_sha256"]:
                row["status"] = "exact_codewarrior_standalone"
            else:
                row["status"] = "different_instructions"
        report.append(row)
    return report


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    p.add_argument("--compiler", type=Path, default=DEFAULT_COMPILER)
    p.add_argument("--wrapper", type=Path, default=DEFAULT_WRAPPER)
    p.add_argument("--out", type=Path, default=DEFAULT_REPORT)
    args = p.parse_args()

    compiler, wrapper = args.compiler.resolve(), args.wrapper.resolve()
    if not compiler.is_file():
        raise RuntimeError(f"Missing CodeWarrior compiler: {compiler}")
    if not wrapper.is_file():
        raise RuntimeError(f"Missing sjiswrap: {wrapper}")
    if os.name != "nt":
        raise RuntimeError("This standalone compiler probe currently requires Windows")
    m = json.loads(MANIFEST.read_text(encoding="utf-8"))
    functions = m["functions"]
    if len(functions) != 100 or len({f["address"] for f in functions}) != 100:
        raise RuntimeError("Manifest must describe 100 unique functions")
    with tempfile.TemporaryDirectory(prefix="st_codewarrior_") as td:
        obj = compile_candidates(compiler, wrapper, Path(td))
        results = read_function_results(obj, functions)

    status_counts: dict[str, int] = {}
    for r in results:
        status_counts[r["status"]] = status_counts.get(r["status"], 0) + 1
    report = {
        "game": "The Legend of Zelda: Spirit Tracks",
        "revision": "EUR Rev 1",
        "source": str(SOURCE.relative_to(ROOT)),
        "reference": str(MANIFEST.relative_to(ROOT)),
        "compiler": str(compiler),
        "flags": CFLAGS,
        "limitations": (
            "Standalone compilation of provisional C functions only. "
            "No original C++ signature/class, original module layout, "
            "linked relocation, or integrated objdiff equality is established."
        ),
        "counts": status_counts,
        "functions": results,
    }
    out = args.out.resolve()
    out.parent.mkdir(parents=True, exist_ok=True)
    out.write_text(json.dumps(report, indent=2) + "\n", encoding="utf-8")
    exact = status_counts.get("exact_codewarrior_standalone", 0)
    print(f"CodeWarrior ARM dsi/1.2p1: {exact}/100 standalone code matches")
    for status, n in sorted(status_counts.items()):
        print(f"  {status}: {n}")
    print("Local comparison report:", out)
    print("WARNING: standalone matches do not count as integrated game decomp matches.")
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (OSError, ValueError, RuntimeError, subprocess.SubprocessError) as exc:
        print(f"FAIL: {exc}", file=sys.stderr)
        raise SystemExit(1)
