#ifndef _NITRO_DC_H
#define _NITRO_DC_H

#include "nitro/types.h"

#ifdef __cplusplus
extern "C" {
#endif

void DC_StoreAll(void);
void DC_StoreRange(void *ptr, u32 size);

void DC_FlushAll(void);
void DC_FlushRange(void *ptr, u32 size);

void DC_InvalidateRange(void *ptr, u32 size);

void DC_func_0004(void *, int);
void DC_func_0002();

#ifdef __cplusplus
} // extern "C"
#endif

#endif
