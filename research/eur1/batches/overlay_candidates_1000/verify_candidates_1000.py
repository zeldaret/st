#!/usr/bin/env python3
"""Byte-verify 1000 candidate Spirit Tracks EUR Rev 1 ARM9 C functions.

This experiment recompiles 1000 C spans with Clang ARMv5TE in individual
ELF sections, and compares generated machine code against the *local* owner's
decoded DS overlay images. It is not original CodeWarrior matching or a
Nintendo DS build. No proprietary bytes are redistributed in this folder.
"""
from __future__ import annotations
import argparse
import hashlib
import json
import shutil
import struct
import subprocess
import sys
import tempfile
from pathlib import Path

HERE = Path(__file__).resolve().parent
SOURCE = HERE / 'candidate_reconstructions_1000.c'
MANIFEST = HERE / 'manifest_candidates_1000.json'
FLAGS = ['--target=armv5te-none-eabi', '-march=armv5te', '-marm', '-O2',
         '-ffreestanding', '-fomit-frame-pointer', '-ffunction-sections']


def elf32_sections(blob: bytes) -> dict[str, bytes]:
    """Read ARM little-endian ELF32 compiler output without external modules."""
    if len(blob) < 52 or blob[:6] != b'\x7fELF\x01\x01':
        raise ValueError('Expected a little-endian ELF32 object')
    hdr = struct.unpack_from('<16sHHIIIIIHHHHHH', blob, 0)
    _, etype, machine, _, _, _, shoff, _, _, _, _, shentsize, shnum, shstr = hdr
    if etype != 1 or machine != 40 or shentsize != 40 or shstr >= shnum:
        raise ValueError('Expected an unlinked ARM ELF32 object')
    if shoff + shnum * shentsize > len(blob):
        raise ValueError('Invalid ELF section table')
    sections = [struct.unpack_from('<IIIIIIIIII', blob, shoff+i*40)
                for i in range(shnum)]
    namesec = sections[shstr]
    names = blob[namesec[4]:namesec[4]+namesec[5]]
    result = {}
    for sec in sections:
        index, stype, _, _, offset, length, _, _, _, _ = sec
        if index >= len(names) or stype not in (1, 4, 9):
            continue
        end = names.find(b'\0', index)
        name = names[index:end].decode('utf-8', 'replace')
        if offset + length > len(blob):
            raise ValueError(f'Corrupt ELF section {name}')
        if stype in (4, 9) and (name.startswith('.rel.text.') or
                                name.startswith('.rela.text.')) and length:
            raise ValueError(f'Unresolved function relocation in {name}')
        if stype == 1 and name.startswith('.text.'):
            if name in result:
                raise ValueError(f'Duplicate ELF section {name}')
            result[name] = blob[offset:offset+length]
    return result


def verify(working_code: Path, clang: str) -> tuple[int, int, int]:
    manifest = json.loads(MANIFEST.read_text(encoding='utf-8'))
    functions = manifest['functions']
    if len(functions) != 1000 or len({(x['overlay'], x['address']) for x in functions}) != 1000:
        raise ValueError('Manifest must contain 1000 distinct overlay/address pairs')
    required = {x['overlay'] for x in functions}
    images = {}
    for overlay in sorted(required):
        name = f'overlay_{overlay:03}.bin'
        path = working_code / name
        data = path.read_bytes()
        digest = hashlib.sha1(data).hexdigest()
        expected = manifest['overlay_sha1'][str(overlay)]
        if digest != expected:
            raise ValueError(f'Wrong original ROM overlay {overlay}: SHA1={digest}, expected={expected}')
        images[overlay] = data

    with tempfile.TemporaryDirectory(prefix='st_1000_decomp_') as tmp:
        obj = Path(tmp) / '1000.o'
        p = subprocess.run([clang, *FLAGS, '-c', str(SOURCE), '-o', str(obj)],
                           capture_output=True, text=True)
        if p.returncode:
            raise RuntimeError(f'Clang ARMv5TE compilation failed:\n{p.stderr[-4000:]}')
        sections = elf32_sections(obj.read_bytes())

    validated = 0
    bytes_identical = 0
    for f in functions:
        overlay = f['overlay']
        addr = int(f['address'], 16)
        base = int(manifest['overlay_ram_base'][str(overlay)], 16)
        n = f['size_bytes']
        ident = f'st_ov{overlay:03}_{addr:08X}'
        original = images[overlay][addr-base:addr-base+n]
        generated = sections.get(f'.text.{ident}')
        if addr < base or len(original) != n or generated != original:
            raise ValueError(f'FAIL overlay {overlay:03} {ident}: '
                             f'original={len(original)} bytes; generated={len(generated) if generated is not None else "missing"}')
        if hashlib.sha256(original).hexdigest() != f['original_span_sha256']:
            raise ValueError(f'SHA256 mismatch in manifest at {ident}')
        validated += 1
        bytes_identical += n
    unused = [name for name in sections if name.startswith('.text.st_ov')]
    if len(unused) != 1000:
        raise ValueError(f'Expected exactly 1000 ARM function sections, got {len(unused)}')
    return validated, bytes_identical, len(required)


def main() -> int:
    ap = argparse.ArgumentParser(description=__doc__)
    ap.add_argument('--working-code', required=True, type=Path,
                    help='Directory containing locally decoded overlay_NNN.bin binaries')
    ap.add_argument('--clang', default=shutil.which('clang'))
    args = ap.parse_args()
    if not args.clang:
        print('ERROR: Clang not installed or not on PATH', file=sys.stderr)
        return 1
    try:
        count, nbytes, overlays = verify(args.working_code, args.clang)
    except (ValueError, OSError, RuntimeError) as exc:
        print(f'FAIL: {exc}', file=sys.stderr)
        return 1
    print(f'PASS {count}/1000 C machine-code spans, {nbytes} original ARM bytes, {overlays} overlays')
    print('Note: Clang ARMv5TE exact only; original CodeWarrior and DS source integration NOT tested.')
    return 0


if __name__ == '__main__':
    raise SystemExit(main())
