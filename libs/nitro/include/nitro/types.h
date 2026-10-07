#ifndef _NITRO_TYPES_H
#define _NITRO_TYPES_H

#include <stdbool.h>
#include <stddef.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef unsigned long long u64;
typedef unsigned int u32; //! TODO: convert to unsigned long
typedef unsigned int uint;
typedef unsigned short u16;
typedef unsigned char u8;

typedef long long s64;
typedef int s32; //! TODO: convert to unsigned long
typedef short s16;
typedef char s8; //! TODO convert to signed char

typedef float f32;
typedef double f64;

typedef volatile u64 vu64;
typedef volatile u32 vu32;
typedef volatile uint vuint;
typedef volatile u16 vu16;
typedef volatile u8 vu8;

typedef volatile s64 vs64;
typedef volatile s32 vs32;
typedef volatile int vints;
typedef volatile s16 vs16;
typedef volatile s8 vs8;

typedef volatile f32 vf32;
typedef volatile f64 vf64;

typedef s32 BOOL;
#define TRUE 1
#define FALSE 0

#define ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))

#define ARRAY_LEN(arr) (s32)((sizeof(arr) / sizeof(*arr)))
#define ARRAY_LEN_U(arr) (u32)((sizeof(arr) / sizeof(*arr)))

#define PAD(start, end) u8 unk_##start[end - start]

#if !defined(NITRO_NO_ASM) && !defined(__MWERKS__) && !defined(__CLANGD__)
    #error NITRO_NO_ASM is required for compilers other than mwccarm
#endif

#ifdef __MWERKS__
    #define ASM asm
    #define THUMB_DISABLE() _Pragma("push") _Pragma("thumb off")
    #define THUMB_ENABLE() _Pragma("pop")
#else
    #define ASM
    #define THUMB_DISABLE()
    #define THUMB_ENABLE()
#endif

#ifdef __cplusplus
} // extern "C"
#endif

#endif
