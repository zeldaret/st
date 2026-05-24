#ifndef _NITRO_MI_H
#define _NITRO_MI_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define MI_DMA_MAX_NUM 3

void MI_DmaFill32(u32, void *ptr, u8 value, u32 size);
void MI_DmaCopy16(u32, void *src, void *dst, u32 size);
void MI_DmaCopy32(u32, void *src, void *dst, u32 size);
void MI_func_0206d87c(u32, void *src, void *dst, u32 size, u32, u32);
void MI_func_0206d934(u32);
BOOL MI_IsDmaBusy(u32);

void _MI_CpuCopy(void *src, void *dest, u32 size);
void _MI_CpuFill(u32 value, void *ptr, u32 size);
void MI_CpuFill8(void *ptr, u8 value, u32 size);
void MI_CpuCopy8(void *src, void *dst, u32 size);
void MI_CpuCopy16(void *src, void *dst, u32 size);
void MI_CpuCopy32(void *src, void *dst, u32 size);
void MI_CpuFill16(int value, void *dst, size_t size);
void MI_CpuFill32(u32 value, void *ptr, u32 size);
void MI_Swap(u32 *a, u32 *b);

inline void MI_CpuClearFast(void *ptr, u32 size) {
    _MI_CpuFill(0, ptr, size);
}

inline void MI_CpuFillFast(void *ptr, u8 value, u32 size) {
    _MI_CpuFill(value, ptr, size);
}

inline void MI_CpuCopyFast(void *src, void *dest, u32 size) {
    _MI_CpuCopy(src, dest, size);
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
