#ifndef GLOBAL_H
#define GLOBAL_H

#define ARRAY_LEN_U(arr) (u32)((sizeof(arr) / sizeof(*arr)))
#define ARRAY_LEN(arr) (s32)((sizeof(arr) / sizeof(*arr)))

// Prevent the IDE from reporting errors that the compiler/linker won't report
#ifdef __INTELLISENSE__
#endif

#define ARM _Pragma("thumb off")
#define THUMB _Pragma("thumb on")

// `override` was added in C++11 before the DS, so we only use the keyword to indicate overriden functions
#define override

#pragma define_section dtcm ".dtcm" \
                            ".dtcm"
// Puts variables in the DTCM module
#define DTCM_BEGIN _Pragma("section dtcm begin")
#define DTCM_END _Pragma("section dtcm end")

#pragma define_section sbss ".data" \
                            ".sbss"
// Define .sbss variables
#define SBSS_BEGIN _Pragma("section sbss begin")
#define SBSS_END _Pragma("section sbss end")

#define NO_INLINE __attribute__((never_inline))

#ifdef __MWERKS__
    #define AT_ADDRESS(xyz) : (xyz)
    #define DECL_SECTION(x) __declspec(section x)
    #define EXPORT __declspec(export)
    #define WEAK __declspec(weak)
    #define ASM asm
#else
    #define AT_ADDRESS(xyz)
    #define DECL_SECTION(x)
    #define EXPORT
    #define WEAK
    #define ASM
#endif

#define STRUCT_PAD(from, to) unsigned char _pad_##from[(to) - (from)]

#define SUBSCREEN_WIDTH 256
#define SUBSCREEN_HEIGHT 192

#define ALIGN_PREV(X, N) ((X) & ~((N) - 1))
#define ALIGN_NEXT(X, N) ALIGN_PREV(((X) + (N) - 1), N)
#define ALIGN(X, N) ((X + N) & ~N)

#endif
