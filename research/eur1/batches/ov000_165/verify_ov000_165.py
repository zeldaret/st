#!/usr/bin/env python3
"""Verify 165 independently reconstructed C functions from Spirit Tracks EUR1 ov0.

Requires user-extracted decompressed overlay_000.bin, clang, llvm-objcopy.
Validates canonical EUR1 overlay digest, all per-function SHA-256, all source
functions, and byte-for-byte code equality. Neither CodeWarrior matching nor
an integrated DS or PC build is claimed. No Nintendo code bytes are committed.
"""
import argparse
import hashlib
import json
import re
import shutil
import subprocess
import tempfile
from pathlib import Path

BASE = 0x02051AE0
ROOT = Path(__file__).resolve().parent
SOURCE = ROOT / 'overlay000_additional_165.c'
MANIFEST = ROOT / 'manifest_165.json'
OVERLAY_SHA1 = '94a5cc04665bd7687a50dc26011e3e604faf3092'


def verify(image: bytes) -> dict:
    if hashlib.sha1(image).hexdigest() != OVERLAY_SHA1:
        raise ValueError('Wrong ARM9 overlay-0 image (EUR1 SHA-1 does not match)')
    rows = json.loads(MANIFEST.read_text(encoding='utf-8'))['functions']
    if len(rows) != 165:
        raise ValueError(f'Expected 165 functions, found {len(rows)}')
    source = SOURCE.read_text(encoding='utf-8')
    expected_names = {f"st_ov000_{int(row['address'], 16):08X}" for row in rows}
    declared = set(re.findall(r'\bst_ov000_[0-9A-F]{8}\s*\(', source))
    declared = {name.split('(')[0].strip() for name in declared}
    if len(expected_names) != 165 or expected_names != declared:
        raise ValueError('Duplicate addresses or C definitions missing/extra')
    clang = shutil.which('clang')
    objcopy = next((shutil.which(x) for x in ('llvm-objcopy', 'llvm-objcopy-20',
        'llvm-objcopy-19', 'llvm-objcopy-18', 'llvm-objcopy-17') if shutil.which(x)), None)
    if not clang or not objcopy:
        raise RuntimeError('Both clang and llvm-objcopy must be installed')

    total_bytes = 0
    with tempfile.TemporaryDirectory() as tmp:
        obj = Path(tmp) / 'reconstructed.o'
        subprocess.run([clang, '--target=armv5te-none-eabi', '-march=armv5te',
            '-marm', '-O2', '-ffreestanding', '-fomit-frame-pointer',
            '-ffunction-sections', '-c', str(SOURCE), '-o', str(obj)],
            capture_output=True, text=True, check=True)
        for row in rows:
            a = int(row['address'], 16)
            size = int(row['size_bytes'])
            if a < BASE or a - BASE + size > len(image):
                raise ValueError(f'Out-of-range original function 0x{a:08X}')
            original = image[a - BASE:a - BASE + size]
            if hashlib.sha256(original).hexdigest() != row['sha256']:
                raise ValueError(f'Bad original bytes 0x{a:08X}')
            name = f'st_ov000_{a:08X}'
            binary = Path(tmp) / 'fn.bin'
            subprocess.run([objcopy, f'--dump-section=.text.{name}={binary}',
                str(obj)], capture_output=True, text=True, check=True)
            if binary.read_bytes() != original:
                raise ValueError(f'C machine-code mismatch for 0x{a:08X}')
            total_bytes += size
    return {'total_functions': len(rows), 'matching_instruction_bytes': total_bytes,
        'empty_routines': sum(x['category'] == 'empty' for x in rows),
        'nonempty_routines': sum(x['category'] != 'empty' for x in rows)}


def main() -> int:
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--overlay0', required=True, type=Path,
        help='Locally decompressed overlay_000.bin from your own verified EU Rev1 ROM')
    args = parser.parse_args()
    r = verify(args.overlay0.read_bytes())
    print(f"PASS {r['total_functions']} / 165 Clang ARMv5TE byte-exact C functions; "
          f"{r['matching_instruction_bytes']} total original instruction bytes")
    print(f"Includes {r['empty_routines']} intentionally empty original functions "
          f"and {r['nonempty_routines']} nonempty bodies.")
    print('Not CodeWarrior matching or runnable-game integration.')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())