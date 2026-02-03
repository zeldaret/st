#pragma once

#include "nitro/math.h"
#include "nitro/touch.h"
#include "types.h"

typedef u16 TouchFlags;
enum TouchFlag_ {
    TouchFlag_None         = 0x0000,
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
    /* 06 */ u16 mRepeatStart;
    /* 08 */ u16 mRepeatLoop;
    // mRepeatTimer starts at mRepeatStart, decreases by mSpeed while touching the screen.
    // if equal to 0, mRepeatTimer gets set to mRepeatLoop and the Repeat flag is set
    /* 0A */ u16 mRepeatTimer;
    /* 0C */ TouchState mState;
    /* 12 */ TouchState mPrevState;
    /* 18 */ Vec2s mTouchPosLast;
    /* 1C */ Vec2s mTouchPosStart;
    /* 20 */ TouchFlags mFlags;
    /* 22 */

    TouchControl();
    void IncreaseSpeed(u16 increase);
    void UpdateFlags(u16 speed);
    void UpdateWithStateFlags(TouchStateFlags *state, u16 speed);
    void Update(TouchState *state, u16 speed);
    void func_02014414(u16 speedIncrease, bool shouldIncrease);
    void func_02014478(TouchState *state, u16 speed);

    static bool func_020143f0();
    static void UpdateState(TouchState *state, TouchStateFlags *stateFlags);
};
