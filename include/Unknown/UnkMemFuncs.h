#pragma once

#include "types.h"

//! TODO: temporary place until this is documented properly

extern "C" {
void MI_CpuFill16(int value, u16 *dst, size_t size);
void MI_CpuCopy16(u16 *src, u16 *dest, size_t size);
void MI_CpuFill32(int value, void *dest, size_t size);
// MI_CpuCopy32
// Stream32
void _MI_CpuFill(int value, void *dst, size_t size);
void _MI_CpuCopy(void *src, void *dest, size_t size);
// CopySingle256
// CopySingle288
// CopySingle384
// CopySingle512
void MI_CpuFill8(u8 *dst, int value, size_t size);
// Copy
// Zero288
// Swap32
}
