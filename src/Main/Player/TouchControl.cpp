#include "Player/TouchControl.hpp"
#include "Unknown/UnkMemFuncs.h"

// non-matching
ARM void TouchControl::UpdateState(TouchState *state, TouchStateFlags *stateFlags) {
    if (stateFlags->touch == 1) {
        if (stateFlags->flags == 0) {
            Vec2us pos;
            pos.y = stateFlags->touchPos.y;
            pos.x = stateFlags->touchPos.x;

            state->touch      = true;
            state->touchPos.x = pos.x;
            state->touchPos.y = pos.y;
        } else {
            if ((stateFlags->flags & 1) == 0) {
                state->touchPos.x = stateFlags->touchPos.x;
            }

            if ((stateFlags->flags & 2) == 0) {
                state->touchPos.y = stateFlags->touchPos.y;
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

ARM void TouchControl::UpdateWithStateFlags(TouchStateFlags *state, u16 speed) {
    *(TouchStateU *) &this->mPrevState = *(TouchStateU *) &this->mState;
    this->UpdateState(&this->mState, state);
    this->UpdateFlags(speed);
}

ARM void TouchControl::Update(TouchState *state, u16 speed) {
    TouchStateU curState = *(TouchStateU *) &this->mState;
    TouchStateU newState = *(TouchStateU *) &*state;

    this->mPrevState.touch = curState.touch;

    this->mPrevState.touch      = curState.touch;
    this->mPrevState.unk_01     = curState.unk_01;
    this->mPrevState.touchPos.x = curState.touchPos.x;
    this->mPrevState.touchPos.y = curState.touchPos.y;

    this->mState.touch      = newState.touch;
    this->mState.unk_01     = newState.unk_01;
    this->mState.touchPos.x = newState.touchPos.x;
    this->mState.touchPos.y = newState.touchPos.y;

    this->UpdateFlags(speed);
}

ARM bool TouchControl::func_020143f0() {
    return ((*((u16 *) 0x027FFFA8) & 0x8000) >> 15) == 1;
}

ARM void TouchControl::func_02014414(u16 speedIncrease, bool shouldIncrease) {
    TouchStateFlags touchState;

    if (shouldIncrease) {
        this->IncreaseSpeed(speedIncrease);
        return;
    }

    if (TouchControl::func_020143f0()) {
        Fill16(0, (u16 *) &touchState, sizeof(TouchStateFlags));
    } else {
        TP_GetTouchStateFlags(&touchState);
    }

    this->UpdateWithStateFlags(&touchState, speedIncrease);
}

ARM void TouchControl::func_02014478(TouchState *state, u16 speed) {
    TouchControl::func_020143f0();
    this->Update(state, speed);
}
