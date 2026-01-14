#pragma once

#include "types.h"

typedef u16 TouchFlags;
enum TouchFlag_ {
    TouchFlag_TouchedNow   = 0x0001,
    TouchFlag_UntouchedNow = 0x0002,
    TouchFlag_Repeat       = 0x0004,
};

#define CHECK_TOUCH_FLAGS(pTC, flags) ((pTC)->mFlags & (flags))

class TouchControl {
public:
    /* 00 */ u16 mUnk_00;
    /* 00 */ u16 mUnk_02;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ TouchFlags mFlags;
};
