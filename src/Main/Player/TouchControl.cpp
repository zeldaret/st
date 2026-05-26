#include "Player/TouchControl.hpp"
#include <nitro/mi.h>

#include <nitro/pad.h>

// non-matching
ARM void TouchControl::UpdateState(TouchState *state, const TPData *data) {
    if (data->touch == 1) {
        if (data->validity == TP_VALIDITY_VALID) {
            state->touch = true;

            u16 x             = data->x;
            u16 y             = data->y;
            state->touchPos.x = x;
            state->touchPos.y = y;
        } else {
            if ((data->validity & TP_VALIDITY_INVALID_X) == 0) {
                state->touchPos.x = data->x;
            }

            if ((data->validity & TP_VALIDITY_INVALID_Y) == 0) {
                state->touchPos.y = data->y;
            }

            if (state->touchPos.x >= 0 && state->touchPos.x < 0x100 && state->touchPos.y >= 0 && state->touchPos.y < 0xC0) {
                state->touch = true;
            } else {
                state->touch      = false;
                state->unk_01     = false;
                state->touchPos.x = -1;
                state->touchPos.y = -1;
            }
        }
    } else {
        state->touch      = false;
        state->unk_01     = false;
        state->touchPos.x = -1;
        state->touchPos.y = -1;
    }
}

THUMB TouchControl::TouchControl() {
    this->mSpeed              = 1;
    this->mTimeBetweenTouches = -1;
    this->mTimeSinceTouch     = -1;
    this->mRepeatStart        = 20;
    this->mRepeatLoop         = 6;
    this->mTouchPosLast.x     = 128;
    this->mRepeatTimer        = 0;

    this->mState.touch      = false;
    this->mState.unk_01     = false;
    this->mState.touchPos.x = -1;
    this->mState.touchPos.y = -1;

    this->mPrevState.touch      = false;
    this->mPrevState.unk_01     = false;
    this->mPrevState.touchPos.x = -1;
    this->mPrevState.touchPos.y = -1;

    this->mTouchPosLast.y  = 96;
    this->mTouchPosStart.x = -1;
    this->mTouchPosStart.y = -1;
    this->mFlags           = TouchFlag_None;
}

ARM void TouchControl::IncreaseSpeed(u16 increase) {
    this->mFlags = TouchFlag_None;
    this->mSpeed += increase;
}

// non-matching
ARM void TouchControl::UpdateFlags(u16 speed) {
    this->mFlags = TouchFlag_None;

    if (this->mPrevState.unk_01 == false && this->mState.unk_01 == false) {
        if (this->mPrevState.touch == false && this->mState.touch == true) {
            this->mFlags |= TouchFlag_TouchedNow;
        }

        if (this->mPrevState.touch == true && this->mState.touch == false) {
            this->mFlags |= TouchFlag_UntouchedNow;
        }
    }

    if (this->mSpeed < speed) {
        this->mSpeed = speed;
    }

    switch (!(this->mFlags & TouchFlag_TouchedNow)) {
        default:
            this->mFlags |= TouchFlag_Repeat;
            this->mRepeatTimer = this->mRepeatStart;
            break;
        case 0:
            if (this->mState.touch != false && this->mRepeatTimer != 0) {
                if (this->mRepeatTimer - this->mSpeed > 0) {
                    this->mRepeatTimer -= this->mSpeed;
                } else {
                    this->mFlags |= TouchFlag_Repeat;
                    this->mRepeatTimer = this->mRepeatLoop;
                }
            }
            break;
    }

    if (this->mTimeSinceTouch + this->mSpeed < 0xFFFF) {
        this->mTimeSinceTouch += this->mSpeed;
    } else {
        this->mTimeSinceTouch = -1;
    }

    if (this->mFlags & TouchFlag_TouchedNow) {
        this->mTimeBetweenTouches = this->mTimeSinceTouch;
        this->mTimeSinceTouch     = 0;
        this->mTouchPosStart.x    = this->mState.touchPos.x;
        this->mTouchPosStart.y    = this->mState.touchPos.y;
    }

    this->mSpeed = speed;

    if (this->mState.touch) {
        this->mTouchPosLast.x = this->mState.touchPos.x;
        this->mTouchPosLast.y = this->mState.touchPos.y;
    }
}

ARM void TouchControl::UpdateWithStateFlags(TPData *state, u16 speed) {
    this->mPrevState = this->mState;
    this->UpdateState(&this->mState, state);
    this->UpdateFlags(speed);
}

ARM void TouchControl::Update(const TouchState *state, u16 speed) {
    this->mPrevState = this->mState;
    this->mState     = *state;
    this->UpdateFlags(speed);
}

ARM bool TouchControl::func_020143f0() {
    return PAD_DetectFold() == 1;
}

ARM void TouchControl::func_02014414(u16 speedIncrease, bool shouldIncrease) {
    TPData data;

    if (shouldIncrease) {
        this->IncreaseSpeed(speedIncrease);
        return;
    }

    if (TouchControl::func_020143f0()) {
        MI_CpuFill16(0, (u16 *) &data, sizeof(TPData));
    } else {
        TP_GetData(&data);
    }

    this->UpdateWithStateFlags(&data, speedIncrease);
}

ARM void TouchControl::func_02014478(TouchState *state, u16 speed) {
    TouchControl::func_020143f0();
    this->Update(state, speed);
}
