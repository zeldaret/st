#ifndef _NITRO_TYPES_H
#define _NITRO_TYPES_H

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long long u64;
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;

typedef long long s64;
typedef int s32;
typedef short s16;
typedef char s8;

typedef float f32;
typedef double f64;

typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile u16 vu16;
typedef volatile u8 vu8;

typedef volatile s64 vs64;
typedef volatile s32 vs32;
typedef volatile s16 vs16;
typedef volatile s8 vs8;

typedef volatile f32 vf32;
typedef volatile f64 vf64;

typedef s32 BOOL;

#define ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))

#define ARRAY_LEN(arr) (s32)((sizeof(arr) / sizeof(*arr)))
#define ARRAY_LEN_U(arr) (u32)((sizeof(arr) / sizeof(*arr)))

#ifdef __cplusplus
} // extern "C"
#endif

#endif
