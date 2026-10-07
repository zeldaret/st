#ifndef _NITRO_OS_CONTEXT_H
#define _NITRO_OS_CONTEXT_H

#include "nitro/os/os_cp.h"
#include "nitro/types.h"

typedef struct OSContext {
    /* 0x00 */ u32 cpsr;
    /* 0x04 */ u32 regs[16];
    /* 0x38 */ u32 sp;
    /* 0x44 */ CPContext cpCtx;
} OSContext; // Size: 0x64

#endif // _NITRO_OS_CONTEXT_H
