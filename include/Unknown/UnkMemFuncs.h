#pragma once

#include "types.h"

//! TODO: temporary place until this is documented properly

#ifdef __cplusplus
extern "C" {
#endif
void MI_CpuFill16(int value, void *dst, size_t size);
void MI_CpuCopy16(void *src, void *dest, size_t size);
void MI_CpuFill32(int value, void *dest, size_t size);
// MI_CpuCopy32
// Stream32
void _MI_CpuFill(int value, void *dst, size_t size);
void _MI_CpuCopy(void *src, void *dest, size_t size);
// CopySingle256
// CopySingle288
// CopySingle384
// CopySingle512
void MI_CpuFill8(void *dst, int value, size_t size);
// Copy
// Zero288
// Swap32
#ifdef __cplusplus
}
#endif
