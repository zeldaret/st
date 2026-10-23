#!/usr/bin/env python3
"""Prove Clang ARMv5TE byte equivalence of 13 source-level ARM9 functions.

Use --rom for your own decrypted EUR1 Rev1 Nintendo DS cartridge dump,
or --arm9 for a previously extracted/decompressed ARM9 image.
Original ROM/binary bytes are never written to the repository or printed.
This is NOT original CodeWarrior matching nor integrated upstream source.
"""
import argparse
import hashlib
import re
import shutil
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

ROM_SHA1 = "dcb221a89acb894503a461c2c7d4cfdad9a06b68"
ARM9_SHA1 = "650ea160271b2297bfdea0ff3b97e9fa335d7f73"
ARM9_BASE = 0x02000000
TARGETS = {
    0x020022A8: 12, 0x02002C80: 12, 0x02005030: 12,
    0x0200E254: 12, 0x02007350: 16, 0x02007360: 16,
    0x020075E0: 12, 0x020092EC: 12, 0x02013A34: 16,
    0x02013B88: 16, 0x02016798: 16, 0x0201BE20: 12,
    0x020186F8: 12,
}
ROOT = Path(__file__).resolve().parents[1]
C_SOURCE = ROOT / "probes" / "arm9_short_functions.c"
SYMBOLS = Path(__file__).resolve().parents[2] / "config" / "eur1" / "arm9" / "symbols.txt"


def sha1(b: bytes) -> str:
    return hashlib.sha1(b).hexdigest()


def arm9_from_rom(rom_path: Path) -> bytes:
    rom = rom_path.read_bytes()
    if sha1(rom) != ROM_SHA1:
        raise ValueError(f"Wrong input ROM SHA-1: {sha1(rom)}")
    off, _entry, base, compressed_size = struct.unpack_from("<IIII", rom, 0x20)
    if base != ARM9_BASE or off + compressed_size > len(rom):
        raise ValueError("Invalid ARM9 ROM header")
    sys.path.insert(0, str(ROOT / "scripts"))
    from analyze_nds import code_blz
    decoded, is_compressed, _ = code_blz(rom[off:off + compressed_size])
    if not is_compressed:
        raise ValueError("ARM9 BLZ decompression did not run")
    return decoded


def validate_symbols() -> None:
    if not SYMBOLS.is_file():
        raise ValueError(f"Missing upstream EUR1 symbol map: {SYMBOLS}")
    pattern = re.compile(r"kind:function\(arm,size=(0x[0-9A-Fa-f]+)\) addr:(0x[0-9A-Fa-f]+)")
    found = {}
    for line in SYMBOLS.read_text(encoding="utf-8").splitlines():
        m = pattern.search(line)
        if m:
            found[int(m.group(2), 16)] = int(m.group(1), 16)
    for address, length in TARGETS.items():
        if found.get(address) != length:
            raise ValueError(f"Unrecognized symbol range 0x{address:08X}: want {length}, got {found.get(address)}")


def run(image: bytes) -> list[dict]:
    if sha1(image) != ARM9_SHA1:
        raise ValueError(f"Wrong decompressed ARM9 image SHA-1: {sha1(image)}")
    validate_symbols()
    clang = shutil.which("clang")
    objcopy = next((shutil.which(x) for x in ("llvm-objcopy", "llvm-objcopy-19", "llvm-objcopy-18", "llvm-objcopy-17") if shutil.which(x)), None)
    if not clang or not objcopy:
        raise RuntimeError("clang and llvm-objcopy required")
    out = []
    with tempfile.TemporaryDirectory() as td:
        d = Path(td)
        for address, length in TARGETS.items():
            obj, sect = d / "probe.o", d / "probe.text"
            flags = [clang, "--target=armv5te-none-eabi", "-march=armv5te", "-marm", "-O2", "-ffreestanding", "-fomit-frame-pointer",
                     f"-DPROBE_{address:08X}", "-c", str(C_SOURCE), "-o", str(obj)]
            subprocess.run(flags, check=True, capture_output=True)
            subprocess.run([objcopy, f"--dump-section=.text={sect}", str(obj)], check=True, capture_output=True)
            generated = sect.read_bytes()
            start = address - ARM9_BASE
            original = image[start:start + length]
            if len(original) != length or generated != original:
                raise ValueError(f"MISMATCH at 0x{address:08X}: expected {length} bytes, Clang produced {len(generated)}")
            out.append({"address": f"0x{address:08X}", "size": length, "sha256": hashlib.sha256(original).hexdigest()})
    return out


def main() -> int:
    p = argparse.ArgumentParser(description=__doc__)
    inp = p.add_mutually_exclusive_group(required=True)
    inp.add_argument("--rom", type=Path, help="Own decrypted Europe Rev 1 ROM")
    inp.add_argument("--arm9", type=Path, help="Locally decompressed ARM9 image")
    args = p.parse_args()
    try:
        image = arm9_from_rom(args.rom) if args.rom else args.arm9.read_bytes()
        results = run(image)
    except (ValueError, RuntimeError, subprocess.CalledProcessError, OSError) as e:
        print(f"FAIL: {e}", file=sys.stderr)
        return 1
    for f in results:
        print(f"PASS {f['address']} {f['size']:2} bytes SHA256={f['sha256'][:16]}")
    print(f"PASS: {len(results)}/{len(TARGETS)} independently compiled ARMv5TE functions match original EUR1 bytes.")
    print("NOTE: Clang-only standalone probes; not CodeWarrior, upstream matching progress, or a playable DS build.")
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
