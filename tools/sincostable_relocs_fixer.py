#!/usr/bin/env python3

# this script finds fake relocs from the sin/cos table and fix them
# you still have to remove the fake symbols but that's very fast to do manually

import re
import sys
from pathlib import Path

if len(sys.argv) == 1:
    print("usage: sincostable_relocs_fixer.py <eur|eur1|usa|jp|>")
    sys.exit(1)

VERSION: str = sys.argv[1]

CONFIG_DIR = Path("config").resolve() / VERSION / "arm9"
assert CONFIG_DIR.exists(), "config dir not found"

def fix_relocs(base_addr: int, fake_addr: int):
    offset = fake_addr - base_addr

    for reloc_file in CONFIG_DIR.rglob("relocs.txt"):
        relocs = reloc_file.read_text()

        if f"to:0x{fake_addr:08x}" not in relocs:
            continue

        reloc_file.write_text(relocs.replace(f"to:0x{fake_addr:08x}", f"to:0x{base_addr:08x} add:0x{offset:x}"))


def main():
    sym_file = CONFIG_DIR / "symbols.txt"
    symbols = sym_file.read_text()
    assert "FX_SinCosTable_ kind:data" in symbols, "`FX_SinCosTable_` not found"

    sym_addr_match = re.search(r"FX_SinCosTable_\skind:data\((any|byte[(16384|0x4000)])\)\saddr:0x([a-fA-F0-9]*)", symbols, re.DOTALL)
    assert sym_addr_match is not None, "symbol address not found"
    sym_addr = int(sym_addr_match.group(2), 16)
    sym_addr_next = sym_addr + (8192 * 2) # fx16[8192] = 0x4000 bytes

    assert f"addr:0x{sym_addr_next:08x}" in symbols, "next symbol not found"
    sym_list_match = re.search(fr"addr:0x{sym_addr:08x}(.*)addr:0x{sym_addr_next:08x}", symbols, re.DOTALL)
    assert sym_list_match is not None, "fake symbols not found"

    for count, addr in enumerate(re.finditer(r"addr:(0x[a-fA-F0-9]*)", sym_list_match.group(1), re.DOTALL)):
        fix_relocs(sym_addr, int(addr.group(1), 16))

    print(f"fixed {count} relocations, remove symbols between 0x{sym_addr:08X} to 0x{sym_addr_next:08X}")


if __name__ == "__main__":
    main()
