#pragma once

#include "types.h"

/**
 * Flags value format:
 *     - 0x001F: 0000 0000 0001 1111 -> the shift value to read or write the flag's bit
 *     - 0xFFE0: 1111 1111 1110 0000 -> index of the value in the array
 *
 * `FLAG` is a macro that allows you to get the final value from the index and the slot number.
 */

#define GET_FLAG(arr, pos) (((arr)[((u32) (pos)) >> 5] & (1 << ((pos) & 0x1F))) != 0)
#define SET_FLAG(arr, pos) ((arr)[((u32) (pos)) >> 5] |= 1 << ((pos) & 0x1F))
#define UNSET_FLAG(arr, pos) ((arr)[((u32) (pos)) >> 5] &= ~(1 << ((pos) & 0x1F)))
#define FLAG(index, pos) (((index) << 5) | ((pos) & 0x1F))

//! TODO: improve or remove? idk
#define VA_NARGS_IMPL(_1, _2, _3, _4, N, ...) N
#define VA_NARGS(...) VA_NARGS_IMPL(__VA_ARGS__, 4, 3, 2, 1)
#define GET_FLAGS_1(f1) (1 << (f1))
#define GET_FLAGS_2(f1, f2) GET_FLAGS_1(f1) | (1 << (f2))
#define GET_FLAGS_3(f1, f2, f3) GET_FLAGS_2(f1, f2) | (1 << (f3))
#define GET_FLAGS_4(f1, f2, f3, f4) GET_FLAGS_3(f1, f2, f3) | (1 << (f4))
#define GET_FLAGS_IMPL2(N, ...) GET_FLAGS_##N(__VA_ARGS__)
#define GET_FLAGS_IMPL(N, ...) GET_FLAGS_IMPL2(N, __VA_ARGS__)
#define GET_FLAGS(...) GET_FLAGS_IMPL(VA_NARGS(__VA_ARGS__), __VA_ARGS__)
#define SET_FLAGS(arr, ...) (*(u32 *) arr = GET_FLAGS_IMPL(VA_NARGS(__VA_ARGS__), __VA_ARGS__))
