#!/usr/bin/env python3
"""Reproduce exact ARM instruction bytes for 0x0201BAE4 with Clang.

This Clang ARMv5TE probe is NOT CodeWarrior byte-matching integration.
The optional --rom path checks the original Nintendo DS EUR1 ROM locally.
Usage: python research/eur1/scripts/check_matching_leaf.py [--rom extract/baserom_st_eur1.nds]
"""
import argparse
import hashlib
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

SRC = Path(__file__).resolve().parents[1] / "probes" / "leaf_0201BAE4.c"
ADDRESS = 0x0201BAE4
EXPECTED_SHA256 = "007f34a6c3441b0240da53f253e513b959105da2d8803255e1856aa48f48db47"
ROM_SHA1 = "dcb221a89acb894503a461c2c7d4cfdad9a06b68"

def build_code():
    clang = shutil.which("clang")
    objcopy = next((shutil.which(n) for n in
                    ("llvm-objcopy", "llvm-objcopy-19", "llvm-objcopy-18", "llvm-objcopy-17")
                    if shutil.which(n)), None)
    if not clang or not objcopy:
        raise RuntimeError("clang and llvm-objcopy required")
    with tempfile.TemporaryDirectory() as tmp:
        obj, out = Path(tmp) / "leaf.o", Path(tmp) / "leaf.text"
        subprocess.run([clang, "--target=armv5te-none-eabi", "-march=armv5te",
                        "-marm", "-O2", "-ffreestanding", "-fomit-frame-pointer",
                        "-c", str(SRC), "-o", str(obj)], check=True)
        subprocess.run([objcopy, f"--dump-section=.text={out}", str(obj)], check=True)
        return out.read_bytes()

def original_bytes(path):
    from analyze_nds import code_blz
    rom = path.read_bytes()
    if hashlib.sha1(rom).hexdigest() != ROM_SHA1:
        raise ValueError("Incorrect ROM SHA-1: requires Europe Rev 1 BKIP")
    offset, _entry, base, size = struct.unpack_from("<IIII", rom, 0x20)
    if base != 0x02000000 or offset + size > len(rom):
        raise ValueError("Unexpected ARM9 header")
    arm9, compressed, _extra = code_blz(rom[offset:offset + size])
    if not compressed:
        raise ValueError("ARM9 decompression failed")
    return arm9[ADDRESS - base:ADDRESS - base + 8]

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--rom", type=Path)
    args = ap.parse_args()
    generated = build_code()
    if len(generated) != 8 or hashlib.sha256(generated).hexdigest() != EXPECTED_SHA256:
        raise ValueError("Compiled .text bytes do not match EU Rev 1 function fingerprint")
    if args.rom and generated != original_bytes(args.rom):
        raise ValueError("Compiled code does not match original ROM")
    print("PASS: ARM9 0x0201BAE4: Clang ARMv5TE code matches original 8-byte machine sequence.")
    print("No CodeWarrior matching or in-game compatibility established.")

if __name__ == "__main__":
    main()
