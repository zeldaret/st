#ifndef _NITRO_OS_CP_H
#define _NITRO_OS_CP_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/reg.h"
#include "nitro/types.h"

typedef struct CPContext {
    /* 00 */ DivParam div;
    /* 10 */ u64 sqrtParam;
    /* 18 */ u16 divCnt;
    /* 1a */ u16 sqrtCnt;
    /* 1c */
} CPContext;

void CP_SaveContext(CPContext *param1);
void CPi_RestoreContext(CPContext *param1);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
