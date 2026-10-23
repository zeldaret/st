#!/usr/bin/env python3
"""Verify 100 independently reconstructed Spirit Tracks EUR Rev 1 ARM9 overlay-0
C functions, compiled together with Clang into independent ELF sections.
This is Clang ARMv5TE exact-byte matching, NOT original CodeWarrior matching.
Only local user-provided binary inputs are used. No ROM data is uploaded.
"""
import argparse
import hashlib
import json
import shutil
import subprocess
import tempfile
from pathlib import Path

ROOT = Path(__file__).resolve().parent
ROM_SHA1 = 'dcb221a89acb894503a461c2c7d4cfdad9a06b68'
OVERLAY_SHA1 = '94a5cc04665bd7687a50dc26011e3e604faf3092'
RAM_BASE = 0x02051AE0


def verify(overlay: bytes, expected: list) -> dict:
    digest=hashlib.sha1(overlay).hexdigest()
    if digest != OVERLAY_SHA1:
        raise ValueError(f'Expected the decoded EUR Rev 1 overlay 0 SHA-1 {OVERLAY_SHA1}; got {digest}')
    clang=shutil.which('clang')
    objcopy=next((shutil.which(x) for x in ('llvm-objcopy','llvm-objcopy-20','llvm-objcopy-19','llvm-objcopy-18','llvm-objcopy-17') if shutil.which(x)),None)
    if not clang or not objcopy:raise RuntimeError('Need clang and llvm-objcopy available on PATH')
    successes=0;bytes_matched=0
    with tempfile.TemporaryDirectory() as td:
        d=Path(td); obj=d/'recovered.o'
        subprocess.run([clang,'--target=armv5te-none-eabi','-march=armv5te','-marm',
                        '-O2','-ffreestanding','-fomit-frame-pointer','-ffunction-sections',
                        '-c',str(ROOT/'overlay000_recovered_100.c'),'-o',str(obj)],check=True,capture_output=True,text=True)
        for item in expected:
            address=int(item['address'],16);n=int(item['size_bytes'])
            name=f'st_ov000_{address:08X}'
            out=d/'func.bin'
            subprocess.run([objcopy,f'--dump-section=.text.{name}={out}',str(obj)],check=True,capture_output=True,text=True)
            got=out.read_bytes(); original=overlay[address-RAM_BASE:address-RAM_BASE+n]
            if len(got)!=n or got!=original:
                raise RuntimeError(f'Function {name} differs: C compiled to {len(got)} bytes; expected {n}')
            successes+=1;bytes_matched+=n
    return {'functions_identical':successes,'matching_instruction_bytes':bytes_matched}


def main():
    p=argparse.ArgumentParser(description=__doc__)
    p.add_argument('--overlay0',required=True,type=Path,help='Locally decompressed overlay_000.bin from your own EUR Rev1 ROM')
    args=p.parse_args()
    manifest=json.loads((ROOT/'manifest_100.json').read_text(encoding='utf-8'))
    if len(manifest['functions'])!=100:raise ValueError('Manifest must contain 100 functions')
    result=verify(args.overlay0.read_bytes(),manifest['functions'])
    print(f"PASS: {result['functions_identical']}/100 C functions, {result['matching_instruction_bytes']} original ARM instruction bytes reproduced exactly with Clang")
    print('Original CodeWarrior matching and incorporation into DS or PC build are NOT tested.')


if __name__=='__main__':
    main()