#!/usr/bin/env python3
"""Verify EUR Rev 1 ARM9 ROM function locations using original code SHA-256.

Run: python research/eur1/scripts/verify_arm9_functions.py extract/baserom_st_eur1.nds
Reads your local ROM, not committed to GitHub. SHA checks prove the origin of
ROM code bytes; they do NOT prove that any recovered C compiles to those bytes.
Expected spans include literal pool data when included in upstream symbol sizes.
"""
import argparse
import hashlib
import struct
from pathlib import Path

EXPECTED_ROM_SHA1 = "dcb221a89acb894503a461c2c7d4cfdad9a06b68"
EXPECTED_UNPACKED_ARM9_SHA1 = "650ea160271b2297bfdea0ff3b97e9fa335d7f73"
FUNCTIONS = [
    (0x0200174C, 44, "4b45db205061191225ddc74b2995509f66c42659193da2346813e12572898c01"),
    (0x02002048, 24, "998455614b42f874b186188d0e175be2493d45941e189058803ef26b4ed78ce5"),
    (0x02006798, 28, "98d81e0fa167580991b947f184e2661840f6032a86f9e773e003a4b6abd8c655"),
    (0x02007784, 28, "024ded67154e4f5aa60536fdd02ba80992c6402fdc9f4feaee9af9ff3b2e0fc2"),
    (0x02007980, 24, "2a69cd2719c831c428642b22be82dfd19d6a9cad5ccdbae81ac729c119f96453"),
    (0x020153A4, 32, "49257adea0257bfa10ff39b6759f94ba1b85b748117367069dc22c191488c630"),
    (0x0201BA94, 24, "efb3fbb22fd78fb760c4ec2107de6de9c09b3a4b00ff6b3e393c0f21236a68ae"),
    (0x0201BAAC, 32, "5bf72911b98d1b2b6a06fa8acfcf22c9618a966d4daf600fe86b151e6715c73d"),
    (0x0201BACC, 24, "ba3d05c746435f8f9743eb69bb83309ca98f6fc224db67857713c56df79c76d5"),
    (0x0201BAE4, 8, "007f34a6c3441b0240da53f253e513b959105da2d8803255e1856aa48f48db47"),
    (0x0201BA1C, 32, "535695889bdfdb03e51d5d6476225226c81d987de41916aef77966ddb8f13fb7"),
    (0x0201BA3C, 44, "50942c28a86c713fed96b75b613206022c6585370e445624a67a705cf5f1933d"),
    (0x0201BA68, 44, "dda2b49e19f4da457c1ed611b3c4a0a01ba3fbdc27e8531e802b83622334a38c"),
]

def verify(rom, decompress):
    if hashlib.sha1(rom).hexdigest() != EXPECTED_ROM_SHA1:
        raise ValueError("incorrect/damaged ROM (expected Europe Rev 1 BKIP SHA-1)")
    if rom[12:16] != b"BKIP" or rom[0x1E] != 1:
        raise ValueError("incorrect game code or revision")
    off, entry, base, size = struct.unpack_from("<IIII", rom, 0x20)
    if base != 0x02000000 or off + size > len(rom):
        raise ValueError("invalid ARM9 ROM segment")
    unpacked, was_compressed, _ = decompress(rom[off:off + size])
    if not was_compressed or hashlib.sha1(unpacked).hexdigest() != EXPECTED_UNPACKED_ARM9_SHA1:
        raise ValueError("unexpected decompression result")
    for addr, count, expected in FUNCTIONS:
        pos = addr - base
        block = unpacked[pos:pos + count]
        if len(block) != count or hashlib.sha256(block).hexdigest() != expected:
            raise ValueError("function bytes differ at address 0x%08X" % addr)
    return len(FUNCTIONS)

def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument("rom", type=Path)
    args = parser.parse_args()
    from analyze_nds import code_blz
    count = verify(args.rom.read_bytes(), code_blz)
    print(f"PASS: {count} ARM9 function code spans verified against original Europe Rev 1 ROM.")
    print("This validates address/ROM provenance only, not C matching or game functionality.")

if __name__ == "__main__":
    main()
