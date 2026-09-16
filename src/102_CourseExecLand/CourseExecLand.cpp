#include "Actor/ActorManager.hpp"
#include "Actor/ActorUnkIWTS.hpp"
#include "Player/PlayerActorBase.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern "C" void func_01ffaf74(VecFx32 *, Mat4x3p *, VecFx32 *);
extern "C" unk32 func_01ffb6a8(unk32, unk32);
extern "C" void func_ov095_0217aa88(void *, unk16 *, unk32, UnkAngleStruct);
extern "C" void func_ov095_0217aaa8(void *, unk16 *, unk32);
extern "C" void func_ov031_020dcea4(void *, UnkStruct_027e0ce0_40_Base_78 *, UnkAngleStruct);
extern "C" void func_ov000_0205d65c(void *, VecFx32 *, VecFx32 *, UnkAngleStruct);
extern Vec2s data_ov031_02112b54;

void PlayerActorBase_74::func_ov102_02182c20(unk32 param1, Mat4x3p *param2) {
    this->mUnk_04[param1].x = this->mUnk_1C[param1].x;
    this->mUnk_04[param1].y = this->mUnk_1C[param1].y;
    this->mUnk_04[param1].z = this->mUnk_1C[param1].z;

    VecFx32 sp0;
    VecFx32_Init(FLOAT_TO_FX32(0.15f), FLOAT_TO_FX32(0.05f), FLOAT_TO_FX32(0.0f), &sp0);
    func_01ffaf74(&sp0, param2, &this->mUnk_1C[param1]);
}

bool PlayerActorBase_74::UnknownInline1(u32 index, VecFx32 *pVec) {
    s32 temp_r0_3;
    s32 temp_r2_4;
    s32 temp_r3_3;

    if (this->mUnk_1C[index].y <= this->mUnk_04[index].y) {
        return false;
    }

    temp_r0_3 = data_027e0cd8->mUnk_0C->vfunc_28(&this->mUnk_1C[index], 1, 0) + 0xF6;

    if (temp_r0_3 >= this->mUnk_1C[index].y + 0x800) {
        return false;
    }

    if (this->mUnk_04[index].y <= temp_r0_3 + 0xF6) {
        pVec->x = this->mUnk_04[index].x;
        pVec->y = this->mUnk_04[index].y;
        pVec->z = this->mUnk_04[index].z;

        pVec->y = temp_r0_3;

        if (this->mUnk_1C[index].y > temp_r0_3 + 0xF6) {
            return true;
        }

        temp_r3_3 = this->mUnk_1C[index].x - this->mUnk_04[index].x;
        temp_r2_4 = this->mUnk_1C[index].z - this->mUnk_04[index].z;

        if (ABS2(temp_r3_3) >= 0x7FFF || ABS2(temp_r2_4) >= 0x7FFF) {
            return false;
        }

        if (ROUND_FX32(temp_r3_3 * temp_r3_3) + ROUND_FX32(temp_r2_4 * temp_r2_4) > 0x45) {
            return true;
        }
    }

    return false;
}

void PlayerActorBase_74::func_ov102_02182c84(bool param1, unk32 param2, UnkAngleStruct param3, Mat4x3p *param4,
                                             Mat4x3p *param5) {
    func_ov102_02182c20(0, param4);
    func_ov102_02182c20(1, param5);

    if (this->mUnk_00 != 0) {
        this->mUnk_00--;
        return;
    }

    if (param1) {
        for (u32 var_r7 = 0; var_r7 < ARRAY_LEN(this->mUnk_04); var_r7++) {
            VecFx32 sp4;
            if (this->UnknownInline1(var_r7, &sp4)) {
                sp4.y += param2;
                data_027e0cec->func_ov000_0209ff4c(0x85F, &sp4, param3, 1);
            }
        }
    }
}

void UnkStruct_027e0ce0_40_108::func_ov102_02182e54(unk32 param1, unk32 param2, unk32 param3) {
    Vec2s sp6;

    if (!data_027e09bc->mUnk_04[param1]->func_01ffd43c(&sp6, param2, 1)) {
        return;
    }

    if (sp6.x < -24 || sp6.x >= 280) {
        return;
    }

    if (sp6.y < -24 || sp6.y >= 216) {
        return;
    }

    sp6.x -= data_ov031_02112b54.x / 2;
    sp6.y -= data_ov031_02112b54.y / 2;

    if (this->mUnk_40 == &this->mUnk_10) {
        data_027e0954->mUnk_00[1].mUnk_04.Prepend(this);
    }

    if (this->UnknownInline1()) {
        return;
    }

    UnkStruct_027e0ce0_40_108_10 sp0;
    UnkStruct_027e0ce0_40_108_10 *ptr = &sp0;
    ptr->mUnk_00                      = sp6;
    ptr->mUnk_04                      = param3;

    UnkStruct_027e0ce0_40_108_10 *temp_r3 = this->mUnk_40;
    if (temp_r3 != NULL) {
        temp_r3->mUnk_00 = ptr->mUnk_00;
        temp_r3->mUnk_04 = ptr->mUnk_04;
    }

    this->mUnk_40++;
}

void UnkStruct_ItemManager_20::func_ov102_02182fa8(unk32 param1, unk32 param2) {
    this->mUnk_00->func_ov031_020dbc80(param1, param2);
    this->mUnk_04->func_ov031_020db4f0(param1, param2);
    this->mUnk_08->func_ov031_020db704(param1, param2);
    this->mUnk_0C->func_ov031_020db958(param1, param2);
    this->mUnk_14.func_ov031_020db7f4();
}

void UnkStruct_ItemManager_20::func_ov102_02182ffc(unk32 param1) {
    if (!data_027e09b8->func_01ffd420()) {
        this->mUnk_04->func_ov031_020db528(param1);
    }

    this->mUnk_0C->func_ov031_020dba3c(param1);
}

void UnkStruct_027e0ce0_40::func_ov102_0218303c(unk32 param1, ItemManager *pItemMgr) {
    s32 temp_r2;
    bool var_r1;
    UnkStruct_027e0ce0_40_150 *temp_r1;

    temp_r2 = this->func_ov017_020bcde8(param1, pItemMgr);

    if (pItemMgr != NULL) {
        pItemMgr->func_ov017_020bd2a0(param1, temp_r2);
    }

    temp_r1 = this->mUnk_150;
    if (temp_r1 != NULL) {
        temp_r1->mUnk_00 = false;
        temp_r1->mUnk_01 = false;
    }

    this->mPlayer.func_ov017_020bd788(param1);

    if (this->mUnk_328 != NULL) {
        this->mUnk_328->func_ov093_0216d5b8(param1);

        UnkStruct_027e0ce0_40_328 *ptr = this->mUnk_328;
        if (ptr->mUnk_0CC) {
            this->func_ov093_02168220();
            this->mPlayer.func_ov093_0216ce24(&ptr->mUnk_0D0);
            this->mUnk_328->func_ov093_0216f71c(&ptr->mUnk_0DC);
            ptr->mUnk_0CC = false;
        }
    }

    var_r1 = false;
    if (this->mUnk_14C != 0) {
        var_r1 = this->mUnk_14C->func_ov092_021689e8(param1, this, &this->mPlayer, this->mUnk_328);
    }

    if (var_r1) {
        SET_FLAG2(this->mUnk_104, UnkFlags3_7);
    } else {
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_7);
    }

    if (this->mIsSceneTowerInsideStairs) {
        data_ov000_020b51b8.func_ov000_0206bdd4(&this->mPlayer);
        data_ov000_020b5214.func_ov000_0206ed1c(&this->mPlayer);
    }

    if (this->mIsSceneTowerOutsideStairs) {
        data_ov000_020b5214.func_ov000_0206edd8(&this->mPlayer);
    }
}

void UnkStruct_027e0ce0_40::func_ov102_02183180(unk32 param1, bool param2) {
    this->mPlayer.func_ov017_020bdcf4();

    if (this->mUnk_328 != NULL) {
        this->mUnk_328->func_ov093_0216de30(param1, param2);
    }
}

void UnkStruct_027e0ce0_40::func_ov102_021831b4(unk32 param1) {
    this->mUnk_07C.func_ov017_020be434();
    this->mPlayer.func_ov017_020bdd84(param1, 0);

    if (this->mUnk_328 != NULL) {
        this->mUnk_328->func_ov093_0216dec8(param1);
    }
}

void UnkStruct_027e0ce0_40::func_ov102_021831f0(unk32 param1) {
    this->mPlayer.func_ov017_020bdf48(param1, 1, 0, 0);

    if (this->mUnk_328 != NULL) {
        this->mUnk_328->func_ov093_0216e1a4(param1);
    }

    if (this->mUnk_14C != NULL) {
        this->mUnk_14C->func_ov093_02168e24(param1);
    }
}

// https://decomp.me/scratch/d1Vky
void UnkStruct_027e0ce0_40_Base_74::func_ov102_0218323c(UnkStruct_027e0ce0_40_Base_14 *param1, s32 param2) {
    s16 temp_r11;
    s16 var_r3;
    s32 temp_r10;
    s32 var_r0_2;
    s32 var_r1_3;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r3_2;
    s32 var_ip;
    s32 var_lr;
    s32 var_r5;
    s32 var_r6;
    s32 var_r7;
    s32 temp_r8_2;
    s16 temp_r8;
    u32 var_r9;
    Vec2s *ptr;
    s16 y;
    s16 x;

    if (param2 == 0 || param1->mUnk_40 <= 0 || this->mUnk_58 != -1) {
        this->mUnk_00[this->mUnk_54] = 0x00;

        ptr    = &this->mUnk_1C[this->mUnk_54];
        ptr->x = 0x80;
        y      = 0x60;
    } else {
        var_r3                       = param1->mUnk_44 - param1->mUnk_42;
        this->mUnk_00[this->mUnk_54] = CLAMP(var_r3, -0x2AAB, 0x2AAB);

        x                              = param1->mTouchControl.mTouchPosLast.x;
        ptr                            = &this->mUnk_1C[this->mUnk_54];
        this->mUnk_1C[this->mUnk_54].x = x;
        y                              = param1->mTouchControl.mTouchPosLast.y;
    }

    ptr->y = y;

    this->mUnk_54 = func_01ffb6a8(this->mUnk_54 + 1, 0xE);

    var_r2 = 0;
    for (u32 i = 0; i < ARRAY_LEN(this->mUnk_00); i++) {
        var_r2 += this->mUnk_00[i];
    }

    if (var_r2 < -0xD555) {
        var_r7 = 0x05;
    } else if (var_r2 > 0xD555) {
        var_r7 = 0x06;
    } else {
        var_r7 = -0xD555 >> 0x10;
        goto do_set;
    }

    var_r6   = 0x80;
    var_r5   = 0x80;
    var_lr   = 0x60;
    var_ip   = 0x60;
    var_r3_2 = 0xE0;
    var_r2_2 = 0xE0;
    var_r1_3 = 0x20;
    var_r0_2 = 0x20;

    for (var_r9 = 0; var_r9 < ARRAY_LEN(this->mUnk_1C); var_r9++) {
        temp_r8 = this->mUnk_1C[var_r9].x;

        if (temp_r8 < var_r6) {
            var_r6 = temp_r8;
        } else if (temp_r8 > var_r5) {
            var_r5 = temp_r8;
        }

        temp_r11 = this->mUnk_1C[var_r9].y;
        if (temp_r11 < var_lr) {
            var_lr = temp_r11;
        } else if (temp_r11 > var_ip) {
            var_ip = temp_r11;
        }

        temp_r10  = temp_r8 + temp_r11;
        temp_r8_2 = temp_r8 - temp_r11;

        if (temp_r10 < var_r3_2) {
            var_r3_2 = temp_r10;
        } else if (temp_r10 > var_r2_2) {
            var_r2_2 = temp_r10;
        }

        if (temp_r8_2 < var_r1_3) {
            var_r1_3 = temp_r8_2;
        } else if (temp_r8_2 > var_r0_2) {
            var_r0_2 = temp_r8_2;
        }
    }

    if (var_r5 - var_r6 < 0x32 || var_ip - var_lr < 0x32 || var_r2_2 - var_r3_2 < 0x46 || var_r0_2 - var_r1_3 < 0x46) {
        var_r7 = -1;
    }

do_set:
    this->mUnk_58 = var_r7;
}

static inline bool UnknownInline2(PlayerLinkActor_A0_1C *param2, VecFx32 *param4, UnkAngleStruct *param5) {
    if (param2->mUnk_0C != 0) {
        Actor *temp_r0_2 = gpActorManager->func_01fff3b4(param2->mUnk_0C);

        if (temp_r0_2 != NULL && temp_r0_2->GetActorId() == ActorId_IWTS) {
            s16 sp0;
            func_ov000_0205d65c(&sp0, param4, &((ActorUnkIWTS *) temp_r0_2)->mUnk_22F8, *param5);
            param5->angle = sp0;
            return true;
        }
    }

    return false;
}

// https://decomp.me/scratch/jzXAd
void func_ov102_02183414(s16 *param1, PlayerLinkActor_A0_1C *param2, bool param3, VecFx32 *param4, UnkAngleStruct param5,
                         s32 param6) {
    s16 sp6;
    s16 sp4;
    s16 sp2;
    s16 var_r0_2;
    s32 var_r1_3;
    s32 var_r2;
    s32 var_r3;
    UnkStruct_027e0ce0_40_Base_78 *temp_r4;
    u16 temp_r6;
    u16 var_r0;
    u16 *temp_r1;
    u16 *temp_r1_2;
    u16 *temp_r2;
    bool var_r5;

    STACK_PAD(0x10);

    var_r5 = false;

    if (param3) {
        if (param2->mUnk_00->Unk78HasValue()) {
            if (!UnknownInline2(param2, param4, &param5)) {
                temp_r4  = param2->mUnk_00->mUnk_078;
                var_r5   = true;
                var_r1_3 = 0;

                if (temp_r4 != NULL) {
                    temp_r6 = temp_r4->mUnk_00;
                    var_r2  = 0;

                    var_r3 = 1;
                    if (temp_r6 != 0x100 && temp_r6 != 0x101) {
                        var_r3 = 0;
                    }

                    if (var_r3 != 0) {
                        if (temp_r6 == 0x101) {
                            var_r0 = 0;
                        } else {
                            var_r0 = temp_r4->mUnk_02;
                        }

                        if (var_r0 == 1) {
                            var_r2 = 1;
                        }
                    }

                    if (var_r2 != 0) {
                        var_r1_3 = 1;
                    }
                }

                if (var_r1_3 != 0) {
                    if (!param2->mUnk_06) {
                        func_ov095_0217aa88(&sp6, &param2->mUnk_04, param6, param5);
                        param5.angle = sp6;
                    } else {
                        func_ov095_0217aaa8(&sp4, &param2->mUnk_04, param6);
                        param5.angle = sp4;
                    }
                } else {
                    func_ov031_020dcea4(&sp2, *(UnkStruct_027e0ce0_40_Base_78 **) &param2->mUnk_00->mUnk_078, param5);
                    param5.angle = sp2 + 0x4000;
                }
            }
        }
    }

    param2->mUnk_06 = var_r5;
    *param1         = param5.angle_signed;
}
