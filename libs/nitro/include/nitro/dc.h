#ifndef _NITRO_DC_H
#define _NITRO_DC_H

#ifdef __cplusplus
extern "C" {
#endif

void DC_StoreAll(void);
void DC_StoreRange(void *ptr, u32 size);

void DC_FlushAll(void);
void DC_FlushRange(void *ptr, u32 size);

void DC_InvalidateRange(void *ptr, u32 size);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
