#!/usr/bin/env python3
"""Batch 0001: verify isolated Clang ARMv5TE C translations against EUR1 ROM.

Requires clang and llvm-objcopy plus Python 3.11+. Accepts an independently
dumped and decrypted Nintendo DS EUR Rev 1 ROM, or its decompressed ARM9 image.
This does not establish original CodeWarrior matching or gameplay correctness.
No copyrighted executable bytes are uploaded to GitHub.
"""
from __future__ import annotations

import argparse
import hashlib
import json
import re
import shutil
import subprocess
import sys
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
SRC = Path(__file__).resolve().parent / "batch_0001_short_exact_58.c"
MANIFEST = Path(__file__).resolve().parent / "batch_0001_1000_manifest.json"
ARM9_SHA1 = "650ea160271b2297bfdea0ff3b97e9fa335d7f73"
ROM_SHA1 = "dcb221a89acb894503a461c2c7d4cfdad9a06b68"
BASE = 0x02000000
PROBE_PATTERN = re.compile(r"^#(?:el)?if defined\(PROBE_([0-9A-F]{8})\)", re.MULTILINE)


def from_rom(path: Path) -> bytes:
    rom = path.read_bytes()
    check = hashlib.sha1(rom).hexdigest()
    if check != ROM_SHA1:
        raise ValueError(f"Expected EUR1 ROM SHA1 {ROM_SHA1}; received {check}")
    sys.path.insert(0, str(ROOT / "research" / "eur1" / "scripts"))
    from analyze_nds import code_blz
    import struct
    offset, _entry, load_address, n = struct.unpack_from("<IIII", rom, 0x20)
    if load_address != BASE or offset + n > len(rom):
        raise ValueError("Invalid ARM9 header or payload")
    image, decompressed, _ = code_blz(rom[offset:offset + n])
    if not decompressed:
        raise ValueError("ARM9 BLZ decompression was not detected")
    return image


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    source = parser.add_mutually_exclusive_group(required=True)
    source.add_argument("--rom", type=Path, help="Own Europe Revision 1 ROM")
    source.add_argument("--arm9", type=Path, help="Own decompressed ARM9 image")
    args = parser.parse_args()

    image = from_rom(args.rom) if args.rom else args.arm9.read_bytes()
    image_sha1 = hashlib.sha1(image).hexdigest()
    if image_sha1 != ARM9_SHA1:
        raise ValueError(f"Wrong ARM9 image SHA1: {image_sha1}")

    manifest = json.loads(MANIFEST.read_text(encoding="utf-8"))
    targets = {int(row["address"], 16): row for row in manifest["functions"]}
    names = [int(x, 16) for x in PROBE_PATTERN.findall(SRC.read_text(encoding="utf-8"))]
    if len(names) != len(set(names)) or len(names) != 58:
        raise ValueError(f"Expected 58 distinct probe sections; found {len(names)}")
    for address in names:
        if address not in targets:
            raise ValueError(f"Probe 0x{address:08X} is not in the 1000-function batch")
        if targets[address]["isa"] != "arm":
            raise ValueError(f"Probe 0x{address:08X} is not in ARM mode")

    clang = shutil.which("clang")
    objcopy = next((shutil.which(n) for n in (
        "llvm-objcopy", "llvm-objcopy-20", "llvm-objcopy-19",
        "llvm-objcopy-18", "llvm-objcopy-17") if shutil.which(n)), None)
    if not clang or not objcopy:
        raise RuntimeError("clang and llvm-objcopy are required")

    matched_bytes = 0
    with tempfile.TemporaryDirectory() as tempdir:
        dest = Path(tempdir)
        object_file, output = dest / "target.o", dest / "target.bin"
        for address in names:
            n = targets[address]["size_bytes"]
            subprocess.run([
                clang, "--target=armv5te-none-eabi", "-march=armv5te",
                "-marm", "-O2", "-ffreestanding", "-fomit-frame-pointer",
                f"-DPROBE_{address:08X}", "-c", str(SRC), "-o", str(object_file)
            ], check=True, capture_output=True, text=True)
            subprocess.run([
                objcopy, f"--dump-section=.text={output}", str(object_file)
            ], check=True, capture_output=True, text=True)
            got = output.read_bytes()
            expected = image[address - BASE:address - BASE + n]
            if len(got) != n or got != expected:
                raise ValueError(f"Mismatch 0x{address:08X}: expected {n} bytes, generated {len(got)}")
            matched_bytes += n

    print(f"PASS: {len(names)}/58 isolated C probes produce identical ARM9 bytes ({matched_bytes} bytes).")
    print(f"Inventory: {len(targets)} known ARM9-main symbols; "
          f"{len(targets)-len(names)} are NOT validated by this batch.")
    print("This is Clang-only; original CodeWarrior and upstream matching remain unverified.")
    return 0


if __name__ == "__main__":
    try:
        raise SystemExit(main())
    except (ValueError, RuntimeError, FileNotFoundError, subprocess.CalledProcessError) as exc:
        print(f"FAIL: {exc}", file=sys.stderr)
        raise SystemExit(1)
