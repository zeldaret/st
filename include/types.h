#ifndef TYPES_H
#define TYPES_H

#include <stddef.h>

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

typedef u32 BOOL;

#define ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))

typedef s8 unk8;
typedef s16 unk16;
typedef s32 unk32;

#define CEIL_DIV(a, b) (((a) + (b) - 1) / (b))

#ifdef __cplusplus
    #define DECL_PTMF(name, ...)                          \
        template <typename T> struct name {               \
            typedef void (T::*PTMFCallback)(__VA_ARGS__); \
                                                          \
            PTMFCallback callback;                        \
        };

    #define CALL_PTMF(type, data, ...)          \
        {                                       \
            type &ptr = (data);                 \
            (this->*ptr.callback)(__VA_ARGS__); \
        }

    #define STATIC_CALL_PTMF(type, data, thisx, ...) \
        {                                            \
            type &ptr = (data);                      \
            ((thisx)->*ptr.callback)(__VA_ARGS__);   \
        }

    #define STATIC_PTMFCALLBACK(type, data, thisx, ...) \
        {                                               \
            type::PTMFCallback &ptr = (data);           \
            ((thisx)->*ptr)(__VA_ARGS__);               \
        }

DECL_PTMF(PTMF);
typedef void (*UnkCallback)(u16 param1);
#endif

#endif
