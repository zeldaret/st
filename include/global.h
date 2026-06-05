#ifndef GLOBAL_H
#define GLOBAL_H

// Prevent the IDE from reporting errors that the compiler/linker won't report
#ifdef __INTELLISENSE__
#endif

#define ARM _Pragma("thumb off")
#define THUMB _Pragma("thumb on")

#define THUMB_BEGIN _Pragma("thumb on")
#define THUMB_END _Pragma("thumb off")

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

#ifdef __MWERKS__
    #define NO_INLINE __attribute__((never_inline))
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
    #define NO_INLINE
#endif

#define STRUCT_PAD(from, to) unsigned char _pad_##from[(to) - (from)]

#define DF_CONCAT3_(a, b, c) a##b##c
#define DF_CONCAT3(a, b, c) DF_CONCAT3_(a, b, c)
#define DF_UNIQUE_IDENT(ident_) DF_CONCAT3(ident_, _, __LINE__)
// sometimes we need something in .bss
// to force things in .data to align properly
#define DATA_ALIGN_FIX() int DF_UNIQUE_IDENT(__data_align_fix)

#define SUBSCREEN_WIDTH 256
#define SUBSCREEN_HEIGHT 192

#define ALIGN_PREV(X, N) ((X) & ~((N) - 1))
#define ALIGN_NEXT(X, N) ALIGN_PREV(((X) + (N) - 1), N)
#define ALIGN(X, N) ((X + N) & ~N)

#define VTABLE_PAD(name)                \
    class _VTABLE_PAD_##name {          \
    public:                             \
        virtual void dummy();           \
    };                                  \
    void _VTABLE_PAD_##name::dummy() {}

#define DELETE(ptr) \
    {               \
        delete ptr; \
        ptr = NULL; \
    }               \
    (void) 0

#endif
