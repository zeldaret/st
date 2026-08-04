#ifndef _NITRO_OS_CACHE_H
#define _NITRO_OS_CACHE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define OS_CACHE_LINE_SIZE 0x20

void DC_StoreAll(void);
void DC_StoreRange(void *ptr, u32 size);

void DC_FlushAll(void);
void DC_FlushRange(void *ptr, u32 size);

void DC_InvalidateRange(void *ptr, u32 size);

void DC_func_0002();

void IC_InvalidateRange(void *ptr, u32 size);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
