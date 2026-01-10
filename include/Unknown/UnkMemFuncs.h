#pragma once

#include "types.h"

//! TODO: temporary place until this is documented properly

extern "C" {
void Fill16(int value, u16 *dst, size_t size);
void Copy16(u16 *src, u16 *dest, size_t size);
void Fill32(int value, void *dest, size_t size);
// Copy32
// Stream32
void Fill256(int value, void *dst, size_t size);
void Copy256(void *src, void *dest, size_t size);
// CopySingle256
// CopySingle288
// CopySingle384
// CopySingle512
void Fill(u8 *dst, int value, size_t size);
// Copy
// Zero288
// Swap32
}
