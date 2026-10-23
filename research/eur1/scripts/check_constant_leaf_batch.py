#!/usr/bin/env python3
"""Compile and fingerprint 15 original EUR1 ARM9 8-byte constant-return functions.

Usage: python research/eur1/scripts/check_constant_leaf_batch.py [--rom extract/baserom_st_eur1.nds]
Clang ARMv5TE machine-code equality is NOT CodeWarrior matching or gameplay validation.
The optional user ROM is read locally only; no original instructions/assets are stored here.
"""
import argparse
import hashlib
import shutil
import struct
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parents[3]
SYMBOLS = ROOT / "config/eur1/arm9/symbols.txt"
ROM_SHA1 = "dcb221a89acb894503a461c2c7d4cfdad9a06b68"
# All addresses confirmed as 8-byte ARM functions in config/eur1/arm9/symbols.txt
# and identified as MOV r0,#const ; BX lr in the user's original EUR1 ROM.
FUNCTIONS = {
    0x02006C10: 0, 0x02006FF4: 0, 0x02007084: 0, 0x02007094: 0,
    0x02014FE0: 2, 0x02017774: 1, 0x0201777C: 0, 0x02017784: 0,
    0x020177E4: 0, 0x02017C34: 0, 0x0201839C: 1, 0x0201BAE4: 1,
    0x02020DE0: 1, 0x02022884: 0, 0x0202D45C: 1,
}
SHA256_BY_RETURN = {
    0: "6dcd5e75586fe6683156c0d559d4827b73bd48d501fa5781a1c6099aacd7c877",
    1: "007f34a6c3441b0240da53f253e513b959105da2d8803255e1856aa48f48db47",
    2: "14e29d8546e16c2862278bddeb80beb41b4943971c5e1bf329c9fce4245d8913",
}

def run(rom_path=None):
    symbols = SYMBOLS.read_text(encoding="utf-8").lower().splitlines()
    for addr in FUNCTIONS:
        expected = f"addr:0x{addr:08x}"
        if not any("kind:function(arm,size=0x8)" in line and expected in line for line in symbols):
            raise ValueError(f"Address not confirmed as 8-byte ARM function: 0x{addr:08X}")
    clang = shutil.which("clang")
    objcopy = next((shutil.which(n) for n in ("llvm-objcopy", "llvm-objcopy-19", "llvm-objcopy-18") if shutil.which(n)), None)
    if not clang or not objcopy:
        raise RuntimeError("clang and llvm-objcopy required")
    arm9 = None
    if rom_path:
        from analyze_nds import code_blz
        rom = Path(rom_path).read_bytes()
        if hashlib.sha1(rom).hexdigest() != ROM_SHA1:
            raise ValueError("Wrong EUR1 ROM checksum")
        offset, _entry, base, size = struct.unpack_from("<IIII", rom, 0x20)
        if base != 0x02000000 or offset + size > len(rom):
            raise ValueError("Bad ARM9 metadata")
        arm9, was_compressed, _ = code_blz(rom[offset:offset + size])
        if not was_compressed:
            raise ValueError("Cannot unpack ARM9 BLZ")
    with tempfile.TemporaryDirectory() as d:
        tmp = Path(d)
        for addr, value in FUNCTIONS.items():
            name = f"probe_{addr:08X}"
            src, obj, out = tmp / (name + ".c"), tmp / (name + ".o"), tmp / (name + ".text")
            src.write_text(f"int {name}(void *self, int unused) {{ (void)self; (void)unused; return {value}; }}\n")
            subprocess.run([clang, "--target=armv5te-none-eabi", "-march=armv5te", "-marm",
                            "-O2", "-ffreestanding", "-fomit-frame-pointer", "-c", str(src),
                            "-o", str(obj)], check=True, capture_output=True)
            subprocess.run([objcopy, f"--dump-section=.text={out}", str(obj)], check=True, capture_output=True)
            compiled = out.read_bytes()
            if len(compiled) != 8 or hashlib.sha256(compiled).hexdigest() != SHA256_BY_RETURN[value]:
                raise ValueError(f"Clang ARM code fingerprint mismatch at 0x{addr:08X}")
            if arm9 is not None and compiled != arm9[addr - 0x02000000:addr - 0x02000000 + 8]:
                raise ValueError(f"Original ROM machine instructions differ: 0x{addr:08X}")
    return len(FUNCTIONS)

def main():
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument("--rom", type=Path)
    args = ap.parse_args()
    count = run(args.rom)
    print(f"PASS: {count} eight-byte ARM functions match Clang ARMv5TE machine instructions.")
    print("These are isolated leaf probes: CodeWarrior matching and runtime integration not tested.")

if __name__ == "__main__":
    main()
