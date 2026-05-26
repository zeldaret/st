#pragma once

#include "math.hpp"
#include "types.h"

// incomplete
class PlayerActor {
public:
    /* 00 */ VecFx32 mPos;
    /* 0C */ VecFx32 mPrevPos;
    /* 18 */ VecFx32 mVel;
    /* 24 */ VecFx32 mAccel;
    /* 30 */ u16 mAngle;
    /* 32 */ u8 mInvincibilityTimer;
    /* 33 */ u8 mInvincibilityIconTimer; // the blinking icon on top-screen

    void func_ov001_020bc820(); // TODO: params
};
