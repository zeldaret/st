#!/usr/bin/env python3
"""Wrap a flat ARM/Thumb code binary into an ELF32 ARM executable for objdump/Ghidra.
This does NOT recover symbol boundaries or prove a specific address is code.
"""
import argparse, struct
from pathlib import Path


def as_elf32_arm(data: bytes, base: int, entry: int | None = None, thumb: bool = False) -> bytes:
    # ELF32 header + sections .text, .shstrtab; zero phdrs (analysis only).
    strings = b'\0.text\0.shstrtab\0'
    textoff = 0x100
    namoff = textoff + len(data)
    shoff = (namoff + len(strings) + 3) & ~3
    res = bytearray(shoff + 3*40)
    res[textoff:textoff+len(data)] = data
    res[namoff:namoff+len(strings)] = strings
    ident = b'\x7fELF' + bytes([1, 1, 1, 0]) + b'\0'*8
    struct.pack_into('<16sHHIIIIIHHHHHH',res,0,ident,2,40,1,entry if entry is not None else base,0,shoff,0x5000200,52,0,0,40,3,2)
    # section header: name, type, flags, address, offset, size, link, info, alignment, entsize
    struct.pack_into('<10I',res,shoff+40,1,1,0x6,base,textoff,len(data),0,0,2 if thumb else 4,0)
    struct.pack_into('<10I',res,shoff+80,7,3,0,0,namoff,len(strings),0,0,1,0)
    return bytes(res)

if __name__ == '__main__':
    a = argparse.ArgumentParser(); a.add_argument('input'); a.add_argument('output'); a.add_argument('--base',type=lambda v:int(v,0),required=True); a.add_argument('--entry',type=lambda v:int(v,0)); a.add_argument('--thumb',action='store_true'); args=a.parse_args()
    Path(args.output).write_bytes(as_elf32_arm(Path(args.input).read_bytes(),args.base,args.entry,args.thumb))
