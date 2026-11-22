#ifndef _NITRO_PAD_H
#define _NITRO_PAD_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/reg.h"
#include "nitro/types.h"

#define PAD_BUTTON_A (1 << 0)      // 0x0001
#define PAD_BUTTON_B (1 << 1)      // 0x0002
#define PAD_BUTTON_SELECT (1 << 2) // 0x0004
#define PAD_BUTTON_START (1 << 3)  // 0x0008
#define PAD_KEY_RIGHT (1 << 4)     // 0x0010
#define PAD_KEY_LEFT (1 << 5)      // 0x0020
#define PAD_KEY_UP (1 << 6)        // 0x0040
#define PAD_KEY_DOWN (1 << 7)      // 0x0080
#define PAD_BUTTON_R (1 << 8)      // 0x0100
#define PAD_BUTTON_L (1 << 9)      // 0x0200
#define PAD_BUTTON_X (1 << 10)     // 0x0400
#define PAD_BUTTON_Y (1 << 11)     // 0x0800

#define PAD_BUTTON_ALL                                                                                                 \
    (PAD_BUTTON_A | PAD_BUTTON_B | PAD_BUTTON_SELECT | PAD_BUTTON_START | PAD_BUTTON_R | PAD_BUTTON_L | PAD_BUTTON_X | \
     PAD_BUTTON_Y)

#define PAD_KEY_ALL (PAD_KEY_RIGHT | PAD_KEY_LEFT | PAD_KEY_UP | PAD_KEY_DOWN)
#define PAD_ALL_MASK (PAD_BUTTON_ALL | PAD_KEY_ALL)

#define PAD_DETECT_FOLD_SHIFT 0x0F // based on GX/G2/G3 macros
#define PAD_DETECT_FOLD_MASK 0x8000
inline BOOL PAD_DetectFold(void) {
    return (REG_PAD & PAD_DETECT_FOLD_MASK) >> PAD_DETECT_FOLD_SHIFT;
}

#define PAD_PLUS_KEY_MASK 0x00F0
#define PAD_BUTTON_MASK 0x2F0F
#define PAD_READ_MASK (PAD_BUTTON_MASK | PAD_PLUS_KEY_MASK) // based on `PAD_DETECT_FOLD_MASK`
inline u16 PAD_Read(void) {
    return ((REG_KEYINPUT | REG_PAD) ^ PAD_READ_MASK) & PAD_READ_MASK;
}

//! TODO: figure out
void PAD_Write(u32 data);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
