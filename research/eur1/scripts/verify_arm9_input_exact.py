#!/usr/bin/env python3
"""Recompile two ARM9 DS input functions and compare original EUR1 code hashes.

Without --rom/--arm9: compare generated machine code to ROM-derived SHA256
fingerprints. With local ROM: compare actual original instructions as well.
This is isolated Clang ARMv5TE equivalence, NOT CodeWarrior matching.
"""
import argparse
import hashlib
import shutil
import subprocess
import tempfile
from pathlib import Path

BASE = 0x02000000
ROM_SHA1 = "dcb221a89acb894503a461c2c7d4cfdad9a06b68"
ARM9_SHA1 = "650ea160271b2297bfdea0ff3b97e9fa335d7f73"
TARGETS = {
    0x02013B10: (20, "ccc6541a7f0c702cc6c20c2a515b80fb904a0e0428eef6213cda5539b5363129"),
    0x02013B88: (16, "c3af8a6939c13ddd13ea093ed140316b635c27636afd071b6286cd1884b79373"),
}
ROOT = Path(__file__).resolve().parents[3]
SRC = ROOT / "research/eur1/probes/arm9_input_exact_leaves.c"
SYMBOLS = ROOT / "config/eur1/arm9/symbols.txt"


def main():
    p = argparse.ArgumentParser(description=__doc__)
    g = p.add_mutually_exclusive_group()
    g.add_argument("--rom", type=Path, help="Your own Europe Revision 1 ROM")
    g.add_argument("--arm9", type=Path, help="Decompressed ARM9 image")
    a = p.parse_args()

    image = None
    if a.rom:
        from verify_arm9_short_functions import arm9_from_rom
        image = arm9_from_rom(a.rom)
    elif a.arm9:
        image = a.arm9.read_bytes()
    if image is not None and hashlib.sha1(image).hexdigest() != ARM9_SHA1:
        raise RuntimeError("Wrong decompressed ARM9 image (SHA-1 mismatch)")

    symbol_lines = SYMBOLS.read_text(encoding="utf-8").splitlines()
    for addr, (size, _) in TARGETS.items():
        ident = f"addr:0x{addr:08x}"
        if not any(ident in line and
                   f"kind:function(arm,size=0x{size:x})" in line
                   for line in symbol_lines):
            raise RuntimeError(f"EUR1 symbol map does not support {ident}")

    clang = shutil.which("clang")
    objcopy = next((shutil.which(x) for x in ("llvm-objcopy", "llvm-objcopy-20", "llvm-objcopy-19", "llvm-objcopy-18", "llvm-objcopy-17") if shutil.which(x)), None)
    if not clang or not objcopy:
        raise RuntimeError("Install clang and llvm-objcopy")

    with tempfile.TemporaryDirectory() as d:
        d = Path(d)
        for addr, (size, expected_digest) in TARGETS.items():
            obj = d / "probe.o"
            binary = d / "probe.bin"
            subprocess.run([clang, "--target=armv5te-none-eabi", "-march=armv5te",
                            "-marm", "-O2", "-ffreestanding", "-fomit-frame-pointer",
                            f"-DPROBE_{addr:08X}", "-c", str(SRC), "-o", str(obj)],
                           capture_output=True, check=True, text=True)
            subprocess.run([objcopy, f"--dump-section=.text={binary}", str(obj)],
                           capture_output=True, check=True, text=True)
            code = binary.read_bytes()
            digest = hashlib.sha256(code).hexdigest()
            if len(code) != size or digest != expected_digest:
                raise RuntimeError(f"Byte mismatch at 0x{addr:08X}")
            if image is not None:
                off = addr - BASE
                if image[off:off + size] != code:
                    raise RuntimeError(f"Original ROM comparison failed at 0x{addr:08X}")
            print(f"PASS: 0x{addr:08X} ({size} bytes)")

    print("2/2 independent ARMv5TE-Clang byte equivalence checks passed.")
    print("Original CodeWarrior matching and game integration NOT verified.")


if __name__ == "__main__":
    main()
