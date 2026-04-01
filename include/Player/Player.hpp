#pragma once

#include "nitro/math.h"
#include "types.h"

// incomplete
class PlayerActor {
public:
    /* 00 */ Vec3p mPos;
    /* 0C */ Vec3p mPrevPos;
    /* 18 */ Vec3p mVel;
    /* 24 */ Vec3p mAccel;
    /* 30 */ u16 mAngle;
    /* 32 */ u8 mInvincibilityTimer;
    /* 33 */ u8 mInvincibilityIconTimer; // the blinking icon on top-screen

    void func_ov001_020bc820(); // TODO: params
};
