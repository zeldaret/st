#ifndef NITROSDK_OS_CONTEXT_H
#define NITROSDK_OS_CONTEXT_H

#include <types.h>

typedef struct OSContext {
    /* 0x00 */ u32 cpsr;
    /* 0x04 */ u32 r[13];
    /* 0x38 */ u32 sp;
    /* 0x3C */ u32 lr;
    /* 0x40 */ u32 pc;
    /* 0x44 */ char unk_40[0x20];
} OSContext; // Size: 0x64

#endif       // NITROSDK_OS_CONTEXT_H
