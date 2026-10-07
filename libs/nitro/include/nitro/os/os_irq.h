#ifndef _NITRO_OS_IRQ_H
#define _NITRO_OS_IRQ_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/reg.h"
#include "nitro/types.h"

typedef u32 OSIntrMode;

void OS_IrqHandler(void);
void OS_SetIrqFunction(u32 type, void (*function)());
void OS_EnableIrqMask(u32 mask);
void OS_ResetRequestIrqMask(u32 mask);

OSIntrMode OS_DisableInterrupts(void);
void OS_RestoreInterrupts(u32);
void OS_EnableInterrupts(void);

inline void OS_SetIrqCheckFlag(void) {
    REG_IRQ |= 1;
}

inline u16 OS_EnableIrq(void) {
    u16 oldVal = REG_IME;
    REG_IME    = 1;
    return oldVal;
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
