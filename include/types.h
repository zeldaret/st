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

typedef s8 unk8;
typedef s16 unk16;
typedef s32 unk32;

#define CEIL_DIV(a, b) (((a) + (b) - 1) / (b))

#ifdef __cplusplus
template <typename T> struct PTMF {
    typedef void (T::*PTMFCallback)();

    PTMFCallback callback;

    #define CALL_PTMF(cls, data, ...)           \
        {                                       \
            PTMF<cls> &ptr = (data);            \
            (this->*ptr.callback)(__VA_ARGS__); \
        }

    #define STATIC_CALL_PTMF(cls, data, thisx, ...) \
        {                                           \
            PTMF<cls> &ptr = (data);                \
            ((thisx)->*ptr.callback)(__VA_ARGS__);  \
        }

    #define STATIC_PTMFCALLBACK(cls, data, thisx, ...) \
        {                                              \
            PTMF<cls>::PTMFCallback &ptr = (data);     \
            ((thisx)->*ptr)(__VA_ARGS__);              \
        }
};

typedef void (*UnkCallback)(u16 param1);
#endif

#endif
