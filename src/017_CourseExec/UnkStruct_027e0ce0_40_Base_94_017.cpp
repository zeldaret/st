#include "Player/TouchControl.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "math.hpp"

extern "C" void func_ov000_02089bbc(void *, unk32);
extern "C" void func_ov000_0208abc4(ActorRef *, void *, Vec2s *);

extern unk16 data_ov000_020ab3c8;

// https://decomp.me/scratch/6j77v
void UnkStruct_027e0ce0_40_Base_94::func_ov017_020bd300(UnkStruct_027e0ce0_40_Base_14 *param1, unk32 param2, bool param3) {
    ActorRef sp0;
    s16 temp_r0_2;
    s16 temp_r2;
    s16 temp_r3;
    s32 temp_r0;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r3_2;
    s32 temp_r3_3;
    bool var_r4;
    u16 temp_r1;

    this->mUnk_4C &= ~0x01;
    this->mUnk_18 = 0;
    this->mUnk_4C &= ~0x02;
    func_ov000_02089bbc(&this->mUnk_24, 0);

    if (param3 == 0) {
        this->mTouchPosLast.x = -0x8000;
        this->mTouchPosLast.y = -0x8000;
        return;
    }

    var_r4 = false;

    if (CHECK_TOUCH_FLAGS(&param1->mTouchControl, TouchFlag_TouchedNow)) {
        if (CHECK_TOUCH_FLAGS(&param1->mTouchControl, TouchFlag_TouchedNow) &&
            (param1->mTouchControl.mTimeBetweenTouches <= 0x10)) {
            var_r4 = true;
        }

        if (var_r4 && this->mTouchPosLast.x != -0x8000) {
            temp_r1_3 = param1->mTouchControl.mState.touchPos.x - this->mTouchPosLast.x;
            temp_r1_2 = param1->mTouchControl.mState.touchPos.y - this->mTouchPosLast.y;
            if (POW_2(temp_r1_3) + POW_2(temp_r1_2) < 0x190) {
                this->mUnk_4C |= 0x02;
            }
        }

        return;
    }

    if (!CHECK_TOUCH_FLAGS(&param1->mTouchControl, TouchFlag_UntouchedNow)) {
        return;
    }

    if (param1->mUnk_40 < 0) {
        return;
    }

    if (param1->mUnk_40 >= param2) {
        return;
    }

    temp_r3_3 = param1->mTouchControl.mTouchPosLast.x - param1->mUnk_48.x;
    temp_r3_2 = param1->mTouchControl.mTouchPosLast.y - param1->mUnk_48.y;
    if (POW_2(temp_r3_3) + POW_2(temp_r3_2) >= POW_2(data_ov000_020ab3c8)) {
        return;
    }

    this->mTouchPosLast.x = param1->mTouchControl.mTouchPosLast.x;
    this->mTouchPosLast.y = param1->mTouchControl.mTouchPosLast.y;
    this->mUnk_4C |= 0x01;
    func_ov000_0208abc4(&sp0, this, &this->mTouchPosLast);
    this->mUnk_1C.data = this->mUnk_18.data = sp0.data;
}

void UnkStruct_027e0ce0_40_Base_94::func_ov017_020bd478() {
    func_ov000_02089bbc(&this->mUnk_24, 1);
    this->mTouchPosLast.x = -0x8000;
    this->mTouchPosLast.y = -0x8000;
}
