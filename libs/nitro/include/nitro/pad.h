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

#define PAD_ALL (PAD_BUTTON_ALL | PAD_KEY_ALL)

inline BOOL PAD_DetectFold(void) {
    return (REG_PAD & 0x8000) >> 0xF;
}

inline u16 PAD_Read(void) {
    return ((REG_KEYINPUT | REG_PAD) ^ 0x2FFF) & 0x2FFF;
}

#ifdef __cplusplus
} // extern "C"
#endif

#endif
