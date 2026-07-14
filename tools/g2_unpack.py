#!/usr/bin/env python3

import argparse


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="unpack packed g2 values to use in inlines")
    parser.add_argument('packed_value')
    args = parser.parse_args()

    if isinstance(args.packed_value, str):
        value = int(args.packed_value, 0)
    elif isinstance(args.packed_value, int):
        value = args.packed_value
    else:
        raise NotImplementedError("ERROR: unknown arg type")

    # masked are guessed based on shift values
    mask_map = {
        0xC000: 0x0E, # (<< 0x0E) - 1100 0000 0000 0000; mask = 0xC000
        0x0080: 0x07, # (<< 0x07) - 0011 1111 0000 0000; mask = 0x3F00
        0x3F00: 0x08, # (<< 0x08) - 0000 0000 1000 0000; mask = 0x0080
        0x007C: 0x02, # (<< 0x02) - 0000 0000 0111 1100; mask = 0x007C
    }

    shift_map = {
        0x0E: "scrSize ",
        0x08: "scrBase ",
        0x07: "colMode ",
        0x02: "charBase",
    }

    print("Parameters:")
    for mask, shift in mask_map.items():
        if value & mask:
            v = (value & mask) >> shift
            print(f"    - {shift_map[shift]} = {v:3} (0x{v:02X})")
        else:
            print(f"    - {shift_map[shift]} = {0:3}")
