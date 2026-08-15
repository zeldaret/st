import sys
from argparse import ArgumentParser, Namespace
from bisect import bisect_left, bisect_right
from collections.abc import Generator
from io import TextIOWrapper
from pathlib import Path
from typing import Never

import elftools.construct
import elftools.elf.sections
from elftools.elf.elffile import ELFFile
from elftools.elf.sections import SymbolTableSection

ASM_COMMON_INCLUDE = "dsprot/asm_macro.inc"
STATIC_INIT_FN_NAME = "NitroStaticInit"


def address(symbol: elftools.elf.sections.Symbol) -> int:
    value = symbol.entry.get("st_value")
    if type(value) is not int:
        panic(
            f"Expected st_value of symbol {symbol.name} to be an int but got {type(value)} = {value}"
        )
    return value


class Symbol:
    def __init__(self, symbol: elftools.elf.sections.Symbol):
        self.symbol = symbol
        self.address = address(symbol)
        self.section: Section | None = None

    def name(self) -> str:
        return self.symbol.name

    def size(self) -> int:
        size = self.symbol.entry.get("st_size")
        if type(size) is not int:
            panic(
                f"Expected st_size of symbol {self.symbol.name} to be an int but got {type(size)} = {size}"
            )
        return size

    def _st_info(self) -> elftools.construct.Container:
        st_info = self.symbol.entry.get("st_info")
        if type(st_info) is not elftools.construct.Container:
            panic(
                f"Expected st_info of symbol {self.symbol.name} to be a Container but got {type(st_info)} = {st_info}"
            )
        return st_info

    def section_index(self) -> int | None:
        shndx = self.symbol.entry.get("st_shndx")
        if shndx in ["SHN_UNDEF", "SHN_ABS"]:
            return None
        if type(shndx) is not int:
            panic(
                f"Expected st_shndx of symbol {self.symbol.name} to be an int but got {type(shndx)} = {shndx}"
            )
        return shndx

    def type(self) -> str:
        st_info = self._st_info()
        st_type = st_info.get("type")
        if type(st_type) is not str:
            panic(
                f"Expected st_info.type of symbol {self.symbol.name} to be a str but got {type(st_type)} = {st_type}"
            )
        return st_type

    def code_size(self) -> int:
        if self.type() != "STT_FUNC":
            return 0

        address = self.address
        size = self.size()
        end_address = address + size

        # Look for constant pool inside this function
        if self.section is not None:
            for next_symbol in self.section.symbols_by_address(address + 1):
                if next_symbol.address >= end_address:
                    break
                if next_symbol.name() == "$d":
                    return next_symbol.address - self.address

        # If no constant pool exists, this function's size is st_size
        return size


class Section:
    def __init__(self, elf: "Elf", section: elftools.elf.sections.Section):
        self.elf = elf
        self.section = section
        self.symbols: list[Symbol] = []
        self.symbol_indices_by_address: list[int] = []

    def name(self) -> str:
        return self.section.name

    def add_symbol(self, symbol: Symbol):
        index = len(self.symbols)
        self.symbols.append(symbol)
        pos = bisect_right(
            self.symbol_indices_by_address,
            symbol.address,
            key=lambda s: self.symbols[s].address,
        )
        self.symbol_indices_by_address.insert(pos, index)

    def symbols_by_address(self, start_address=0) -> Generator[Symbol]:
        start_index = bisect_left(
            self.symbol_indices_by_address,
            start_address,
            key=lambda i: self.symbols[i].address,
        )
        for i in range(start_index, len(self.symbols)):
            yield self.symbols[self.symbol_indices_by_address[i]]


class Elf:
    def __init__(self, elf: ELFFile):
        self.elf = elf
        self.sections: list[Section] = [
            Section(self, section) for section in elf.iter_sections()
        ]
        for section in elf.iter_sections():
            if not isinstance(section, SymbolTableSection):
                continue
            for symbol in section.iter_symbols():
                symbol = Symbol(symbol)
                section_index = symbol.section_index()
                if section_index is not None:
                    symbol.section = self.sections[section_index]
                    symbol.section.add_symbol(symbol)

    def symbol_by_name(self, name: str) -> Generator[Symbol]:
        for section in self.sections:
            for symbol in section.symbols:
                if symbol.name() == name:
                    yield symbol


class Args:
    def __init__(self, args: Namespace):
        self.output = Path(args.output)
        self.garbage: str | None = args.garbage
        self.prefix: str = args.prefix

        self.inputs = list(map(Path, args.input))
        for input in self.inputs:
            if not input.exists():
                raise ValueError(f"Input file '{input}' does not exist")

        key: str | None = args.key
        if key is None:
            self.key = None
        elif key.startswith("0x"):
            self.key = int(key, base=16)
        else:
            self.key = int(key, base=10)

        if args.key is None:
            self.symbols = [f"{args.prefix}{symbol}" for symbol in args.symbols]
        else:
            self.symbols = list(map(str, args.symbols))


def panic(message) -> Never:
    print(message)
    sys.exit(1)


def write_assembly(f: TextIOWrapper, args: Args, symbols: list[Symbol]) -> None:
    f.write("; Generated by libs/dsprot/tools/asmwriter.py\n")
    f.write("\n")

    f.write(f'.include "{ASM_COMMON_INCLUDE}"\n')
    f.write("\n")

    for symbol in symbols:
        f.write(f".public {symbol.name()}\n")
    if args.garbage is not None:
        f.write(f".public {args.garbage}\n")
    f.write("\n")

    f.write("    .text\n")
    f.write("    .balign 4, 0\n")
    f.write("\n")

    if args.key is not None:
        for symbol in symbols:
            f.write(f"    arm_func_start {args.prefix}{symbol.name()}\n")
            f.write(f"{args.prefix}{symbol.name()}:\n")
            f.write(
                f"    run_encrypted_func {symbol.name()}, {symbol.code_size():#x}, {args.key:#x}\n"
            )
            f.write(f"    arm_func_end {args.prefix}{symbol.name()}\n")
            f.write("\n")
    else:
        f.write(f"    local_arm_func_start {STATIC_INIT_FN_NAME}\n")
        f.write(f"{STATIC_INIT_FN_NAME}:\n")
        f.write("    decode_func_table encoded_func_table\n")
        f.write("encoded_func_table:\n")
        for symbol in symbols:
            symbol_name = symbol.name()
            if args.key is not None:
                symbol_name = args.prefix + symbol_name
            f.write(f"    func_table_entry {symbol_name}, {symbol.code_size():#x}\n")
        f.write("    func_table_end\n")
        if args.garbage is not None:
            f.write(f"    garbage_ref {args.garbage}\n")
        f.write(f"    arm_func_end {STATIC_INIT_FN_NAME}\n")
        f.write("\n")

        f.write("    .section .ctor, 4\n")
        f.write(f"    sinit {STATIC_INIT_FN_NAME}\n")
        f.write("\n")


def main():
    parser = ArgumentParser()
    parser.add_argument("-i", "--input", required=True, nargs="+")
    parser.add_argument("-o", "--output", required=True)
    parser.add_argument("-s", "--symbols", required=True, nargs="+")
    parser.add_argument("-g", "--garbage")
    parser.add_argument("-k", "--key")
    parser.add_argument("-p", "--prefix", default="RunEncrypted_")
    try:
        args = Args(parser.parse_args())
    except ValueError as e:
        panic(e)

    symbols = {}
    missing_symbols = args.symbols.copy()
    for input in args.inputs:
        with input.open("rb") as f:
            elf = Elf(ELFFile(f))
            for symbol_name in missing_symbols.copy():
                matches = list(elf.symbol_by_name(symbol_name))
                if len(matches) == 0:
                    continue
                symbols[symbol_name] = matches[0]
                missing_symbols.remove(symbol_name)
    if len(missing_symbols) > 0:
        panic(f"Symbol {missing_symbols[0]} does not exist")

    symbols = [symbols[name] for name in args.symbols]
    with args.output.open("w") as f:
        write_assembly(f, args, symbols)


if __name__ == "__main__":
    main()
