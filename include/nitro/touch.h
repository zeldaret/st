#pragma once

#include "global.h"
#include "nitro/math.h"
#include "types.h"

#ifdef __cplusplus
extern "C" {
#endif

typedef struct TouchStateFlags {
    /* 00 */ Vec2us touchPos;
    /* 04 */ u16 touch;
    /* 06 */ u16 flags;
} TouchStateFlags; // size = 0x08

typedef struct TouchState {
    /* 00 */ bool touch;
    /* 01 */ bool unk_01;
    /* 02 */ Vec2s touchPos;
} TouchState; // size = 0x06

typedef struct TouchStateU {
    /* 00 */ bool touch;
    /* 01 */ bool unk_01;
    /* 02 */ Vec2us touchPos;
} TouchStateU; // size = 0x06

void WaitForTouchUpdate(u16 param1);
bool TP_GetTouchStateFlags(TouchStateFlags *pState);

static inline void TP_CopyState(TouchState *from, TouchState *to) {
    to->touch    = from->touch;
    to->unk_01   = from->unk_01;
    to->touchPos = from->touchPos;
}

extern TouchState data_02049b4c;

#ifdef __cplusplus
}
#endif
