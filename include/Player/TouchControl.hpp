#pragma once

#include "Unknown/UnkStruct_02049b4c.hpp"
#include "nitro/math.h"
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
    /* 00 */ u16 mSpeed;
    /* 02 */ u16 mTimeBetweenTouches; // gets set to mTimeSinceTouch when touching the screen
    /* 04 */ u16 mTimeSinceTouch; // increases by mSpeed every frame
    /* 06 */ unk16 mRepeatStart;
    /* 08 */ unk16 mRepeatLoop;
    // mRepeatTimer starts at mRepeatStart, decreases by mSpeed while touching the screen.
    // if equal to 0, mRepeatTimer gets set to mRepeatLoop and the Repeat flag is set
    /* 0A */ unk16 mRepeatTimer;
    /* 0C */ bool mTouch;
    /* 10 */ Vec2s mTouchPos;
    /* 14 */ bool mTouchPrev;
    /* 16 */ Vec2s mTouchPosPrev;
    /* 18 */ Vec2s mTouchPosLast;
    /* 1C */ Vec2s mTouchPosStart;
    /* 20 */ TouchFlags mFlags;
    /* 22 */

    TouchControl();
    void func_02014478(UnkStruct_02049b4c *param1, unk32 param2);
};
