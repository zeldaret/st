#include "Unknown/UnkStruct_02049b18.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"

extern "C" bool func_01ff916c(void *, int, int);
extern "C" void func_01ffb974(unk32, VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, VecFx32 *);
extern "C" void func_01ff9770(VecFx32 *, unk32);
extern "C" unk32 func_01ffb428(unk32, unk32);
extern "C" u16 func_01ffbbe0(fx32 x, fx32 z);
extern "C" unk32 func_01ff9364(u16 *, UnkAngleStruct);
extern "C" bool func_ov000_02080998(VecFx32 *);
extern "C" VecFx32 *func_ov000_0205d524(unk32, unk32);
extern "C" unk32 func_ov000_02077480();
extern "C" unk16 func_0201a710(unk16);
extern "C" void func_ov000_0205db44(void *, void *, unk32);

void UnkStruct_027e0ce0_40_Base_7C::func_ov017_020be2ec(UnkStruct_027e0ce0_40_Base_14 *param1, bool param2,
                                                        UnkParamStruct1 param3) {
    STACK_PAD(0x04);

    if (this->mUnk_04 != NULL) {
        if (param2 != 0) {
            this->mUnk_04->mUnk_00 = 0;
        } else {
            this->mUnk_04->func_ov031_020dcb60(param3);
        }
    }

    if (!param2 && param1->mTouchControl.mState.touch && this->func_ov000_020968fc()) {
        VecFx32 sp4;

        func_01ffb974((this->mUnk_14 + FLOAT_TO_FX32(0.5999f)) - param1->mUnk_24.y, &param1->mUnk_30, &param1->mUnk_24, &sp4);
        data_027e0cec->func_ov000_020a0140(&this->mUnk_08, &sp4);
        fx32 originalY = func_ov000_0205d524(0, this->mUnk_00)->y;
        fx32 y         = originalY;

        if (func_ov000_02080998(&sp4) == 0) {
            y = data_027e0cd8->mUnk_0C->vfunc_28(&sp4, 1, 0);
        }

        func_01ff916c(&this->mUnk_14, ClampValue(y, originalY, originalY + FLOAT_TO_FX32(3.6f)), 0x1000);
        return;
    }

    this->func_ov000_020968b8();
}

void UnkStruct_027e0ce0_40_Base_7C::func_ov017_020be434() {
    if (this->mUnk_04 != NULL) {
        this->mUnk_04->func_ov031_020dca3c();
    }
}

// https://decomp.me/scratch/hZrBx
void UnkStruct_027e0ce0_40_Base_14::func_ov017_020be44c(unk32 param1, bool param2) {
    VecFx32 sp34;
    VecFx32 sp28;
    VecFx32 sp1C;
    TouchState sp14;
    Vec2s sp10;
    Vec2s spC;
    u16 spA;
    u16 sp8;
    VecFx32 *temp_r0;
    s16 var_r1_3;
    s16 var_r1_4;
    s16 temp_r5;
    s16 temp_r7;
    UnkStruct_027e09bc *temp_r8;
    UnkStruct_027e09bc_0C *temp_r8_2;
    s32 var_r5;
    s32 var_r7;

    this->mUnk_42 = this->mUnk_44;

    if (!param2) {
        sp14.touch      = false;
        sp14.unk_01     = false;
        sp14.touchPos.x = -1;
        sp14.touchPos.y = -1;

        this->mTouchControl.func_02014478(&sp14, 2);
        this->func_ov000_02096af4();
        return;
    }

    this->mTouchControl.func_02014478(data_02049b18.func_020137c8(param1), 2);
    temp_r0 = func_ov000_0205d524(0, param1);
    temp_r8 = data_027e09bc;

    sp34 = *temp_r0;
    sp34.y += 0x666;

    temp_r8_2 = temp_r8->func_ov000_02077468(param1, func_ov000_02077480());

    if (!this->mTouchControl.mState.touch || this->mTouchControl.mState.touchPos.x < 0 ||
        this->mTouchControl.mState.touchPos.y < 0 || !temp_r8_2->func_01ffd43c(&sp10, &sp34, 0)) {
        if (CHECK_TOUCH_FLAGS(&this->mTouchControl, TouchFlag_UntouchedNow)) {
            s16 unk_40 = this->mUnk_40;
            var_r1_4   = unk_40 + 2;

            if (unk_40 <= var_r1_4) {
                unk_40 = var_r1_4;
            }

            this->mUnk_40 = unk_40;
        } else {
            this->func_ov000_02096af4();
        }

        return;
    }

    ClampValue16(&sp10.x, 8, 247);
    ClampValue16(&sp10.y, 8, 183);

    spC.x = this->mTouchControl.mState.touchPos.x;
    spC.y = this->mTouchControl.mState.touchPos.y;

    temp_r8_2->func_ov000_020767b4(&this->mUnk_24, &spC, temp_r0->y, 0x59, &this->mUnk_30);

    if (param1 == -1) {
        func_01ffb714(&temp_r8_2->mUnk_040, &temp_r8_2->mUnk_034, &sp28);

        if (VecFx32_Dot(&sp28, &this->mUnk_30) > 0) {
            func_01ffb714(&temp_r8_2->mUnk_040, &this->mUnk_24, &this->mUnk_24);

            this->mUnk_24.y = 0;
            func_01ff9770(&this->mUnk_24, 0xBB8000);
            VecFx32_Add(&this->mUnk_24, &temp_r8_2->mUnk_040, &this->mUnk_24);
            this->mUnk_24.y = temp_r0->y;

            this->mUnk_30.x = 0;
            this->mUnk_30.z = 0;
        }
    }

    if (data_0204a088->mUnk_00 == 1) {
        var_r5 = 0x1000;
        var_r7 = 0x1000;

        if (this->mTouchControl.mState.touchPos.x < sp10.x && sp10.x < 0x50) {
            var_r5 = func_01ffb428(0x50, sp10.x);
        } else if (sp10.x < this->mTouchControl.mState.touchPos.x && sp10.x >= 0xB0) {
            var_r5 = func_01ffb428(0x50, 0xFF - sp10.x);
        }

        if (this->mTouchControl.mState.touchPos.y < sp10.y && sp10.y < 0x50) {
            var_r7 = func_01ffb428(0x50, sp10.y);
        } else if (sp10.y < this->mTouchControl.mState.touchPos.y && sp10.y >= 0x70) {
            var_r7 = func_01ffb428(0x50, 0xBF - sp10.y);
        }

        VecFx32_Init(var_r5 * (this->mTouchControl.mState.touchPos.x - sp10.x), 0,
                     var_r7 * (this->mTouchControl.mState.touchPos.y - sp10.y), &sp1C);

        this->mUnk_3C = VecFx32_Length(&sp1C);
        temp_r5       = func_01ffbbe0(sp1C.x, sp1C.z);
        this->mUnk_44 = temp_r8_2->func_ov000_02078698() + temp_r5;
    } else {
        this->mUnk_30.x = 0;
        this->mUnk_30.y = 0x1000;
        this->mUnk_30.z = 0;
        this->mUnk_3C   = 0;
    }

    temp_r7 = this->mUnk_40;

    if (temp_r7 < 0) {
        if (!this->mTouchControl.mState.touch) {
            return;
        }

        this->mUnk_40 = 0;
        this->mUnk_5C = 0;
        this->mUnk_46 = this->mUnk_44;
        Vec2s_Copy((Vec2s *) &this->mTouchControl.mState.touchPos, &this->mUnk_48);
        return;
    }

    this->mUnk_4C.y = this->mTouchControl.mState.touchPos.y - this->mTouchControl.mPrevState.touchPos.y;
    this->mUnk_4C.x = this->mTouchControl.mState.touchPos.x - this->mTouchControl.mPrevState.touchPos.x;

    if (this->mUnk_58 > 0x800) {
        this->mUnk_5C = temp_r7;
        this->mUnk_46 = this->mUnk_44;
        Vec2s_Copy((Vec2s *) &this->mTouchControl.mState.touchPos, &this->mUnk_48);
    }

    s16 diffX  = this->mUnk_4C.x;
    s16 diffY  = this->mUnk_4C.y;
    s32 powX   = POW_2(diffX);
    s32 powY   = POW_2(diffY);
    s16 result = powX + powY;

    if (result <= 8) {
        this->mUnk_58 = 0;
    } else {
        if (this->mUnk_50 != 0 && this->mUnk_54 != 0) {
            sp8           = func_01ffbbe0(diffX, diffY);
            spA           = func_01ffbbe0(this->mUnk_50, this->mUnk_54);
            this->mUnk_58 = func_01ff9364(&sp8, spA);
        }

        fx32 x = INT_TO_FX32(this->mUnk_4C.x);
        fx32 y = INT_TO_FX32(this->mUnk_4C.y);

        this->mUnk_50 = x;
        this->mUnk_54 = y;
    }

    s16 unk_40 = this->mUnk_40;
    var_r1_3   = unk_40 + 2;

    if (unk_40 <= var_r1_3) {
        unk_40 = var_r1_3;
    }

    this->mUnk_40 = unk_40;
}

void UnkStruct_027e0cf8_08::func_ov017_020be8a8() {
    if (this->mUnk_004 == -1) {
        return;
    }

    if (this->mUnk_004 >= 0 && this->mUnk_004 < this->mUnk_008) {
        this->mUnk_268 = 0x7FFF;
    } else {
        bool var_r1 = false;

        if (this->mUnk_008 <= this->mUnk_004 && this->mUnk_004 < this->mUnk_008 + this->mUnk_00C) {
            var_r1 = true;
        }

        if (var_r1) {
            if (this->mUnk_004 == this->mUnk_008) {
                this->func_ov024_020d34a0(this->mUnk_13C, 0x0F);
                this->func_ov024_020d34a0(this->mUnk_010, this->mUnk_26A);
            }

            u16 sp2 = func_0201a710(this->mUnk_26A);
            u16 sp0 = 0x7FFF;
            func_ov000_0205db44(&sp0, &sp2, ((this->mUnk_004 - this->mUnk_008) << 0xC) / this->mUnk_00C);
            this->mUnk_268 = sp0;
        } else if (this->mUnk_004 >= this->mUnk_008 + this->mUnk_00C) {
            this->mUnk_268 = func_0201a710(this->mUnk_26A);
        }
    }

    //! TODO: fake match?
    if (*(volatile s32 *) &this->mUnk_004 < this->mUnk_008 + this->mUnk_00C) {
        this->mUnk_004++;
    }
}
