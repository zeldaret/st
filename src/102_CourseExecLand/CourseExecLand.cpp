#include "Actor/ActorManager.hpp"
#include "MapObject/MapObjectUnkPTFL.hpp"
#include "MapObject/MapObjectUnkSAND.hpp"
#include "Player/PlayerActorBase.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0208.hpp"
#include "Unknown/UnkStruct_027e0954.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "flags.h"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"
#include "nns/g3d/sbc.h"
#include "types.h"

#include <nitro/math.h>

struct ActorUnkITWS {
    STRUCT_PAD(0x00, 0x22F8);
    VecFx32 mUnk_22F8;
};

extern "C" void func_01ffaf74(VecFx32 *, Mat4x3p *, VecFx32 *);
extern "C" unk32 func_01ffb6a8(unk32, unk32);
extern "C" void func_ov095_0217aa88(void *, unk16 *, unk32, UnkAngleStruct);
extern "C" void func_ov095_0217aaa8(void *, unk16 *, unk32);
extern "C" void func_ov031_020dcea4(void *, UnkStruct_027e0ce0_40_Base_78 *, UnkAngleStruct);
extern "C" void func_ov000_0205d65c(void *, VecFx32 *, VecFx32 *, UnkAngleStruct);
extern "C" void func_01ff91b8(unk16 *, fx32, fx32);

extern Vec2s data_ov031_02112b54;
extern unk32 data_ov031_02115fe0;

void PlayerActorBase_74::func_ov102_02182c20(unk32 param1, Mat4x3p *param2) {
    this->mUnk_04[param1].x = this->mUnk_1C[param1].x;
    this->mUnk_04[param1].y = this->mUnk_1C[param1].y;
    this->mUnk_04[param1].z = this->mUnk_1C[param1].z;

    VecFx32 sp0;
    sp0.x = 0x266;
    sp0.y = 0xCD;
    sp0.z = 0;
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
    VecFx32 sp4;

    func_ov102_02182c20(0, param4);
    func_ov102_02182c20(1, param5);

    if (this->mUnk_00 != 0) {
        this->mUnk_00--;
        return;
    }

    if (param1) {
        for (u32 var_r7 = 0; var_r7 < ARRAY_LEN(this->mUnk_04); var_r7++) {
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

        if (temp_r0_2 != NULL && temp_r0_2->GetActorId() == 0x49575453) {
            s16 sp0;
            func_ov000_0205d65c(&sp0, param4, &((ActorUnkITWS *) temp_r0_2)->mUnk_22F8, *param5);
            param5->angle = sp0;
            return true;
        }
    }

    return false;
}

// https://decomp.me/scratch/jzXAd
extern "C" void func_ov102_02183414(s16 *param1, PlayerLinkActor_A0_1C *param2, bool param3, VecFx32 *param4,
                                    UnkAngleStruct param5, s32 param6) {
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

void MapObjectUnkSAND_40::func_ov102_021835c4(VecFx32 *param1) {
    switch (this->mUnk_00) {
        case 1:
        case 2:
        case 3:
        case 4:
            if (this->mUnk_04 <= 0) {
                MapObjectUnkSAND::func_ov031_0210b17c(this, 5);
                return;
            }

            func_01ff91b8(&this->mUnk_02, 0x1333, 0x2000 / (this->mUnk_04 + 1));
            this->mUnk_04--;
            break;
        case 5:
            if (this->mUnk_04 <= 0) {
                MapObjectUnkSAND::func_ov031_0210b17c(this, 6);
                return;
            }

            this->mUnk_04--;
            break;
        case 6:
            if (this->mUnk_04 <= 0) {
                MapObjectUnkSAND::func_ov031_0210b17c(this, 0);
                return;
            }

            func_01ff91b8(&this->mUnk_02, 0, 0x2000 / (this->mUnk_04 + 1));
            this->mUnk_04--;
            break;
        default:
            break;
    }

    if (this->mUnk_01 != this->mUnk_00) {
        switch (this->mUnk_00) {
            case 1:
            case 2:
            case 3:
            case 4:
                if (this->mUnk_01 != 5) {
                    data_027e0cec->func_ov000_0209feac(0x8B5, param1, 4, 0, 0);
                    data_027e09a8->func_ov000_02071b30(0x183, param1, 0);
                }
                break;
            case 6:
                data_027e0cec->func_ov000_0209feac(0x8B6, param1, 4, 0, 0);
                data_027e0cec->func_ov000_0209feac(0x8B7, param1, 4, 0, 0);
                data_027e09a8->func_ov000_02071b30(0x184, param1, 0);
            default:
                break;
        }

        this->mUnk_01 = this->mUnk_00;
    }
}

struct UnkStruct_ov102_021848b0 {
    /* 00 */ u16 unk_00; // index for data_ov102_021848f0
    /* 02 */ s16 unk_02;
    /* 04 */
};

static const UnkStruct_ov102_021848b0 data_ov102_021848b0[] = {
    {5, 0x0000}, {4, 0x0000}, {4, 0x4000}, {3, 0x0000}, {4, 0x8000}, {2, 0x4000}, {3, 0x4000}, {1, 0x4000},
    {4, 0xC000}, {3, 0xC000}, {2, 0x0000}, {1, 0x0000}, {3, 0x8000}, {1, 0xC000}, {1, 0x8000}, {0, 0x0000},
};

static const char data_ov102_021848f0[][16] = {
    "s0", "s1", "s2", "s3", "s4", "s5",
};

struct UnkStruct_ov031_021189d0 {
    /* 00 */ STRUCT_PAD(0x00, 0x70);
    /* 70 */ BMDSectionModel *unk_70;
};

extern UnkStruct_ov031_021189d0 data_ov031_021189d0;

void MapObjectUnkSAND_40::func_ov102_021837a8(Vec2bCpp param1, VecFx32 *param2) {
    Vec2bCpp spC[4];
    s32 sp8;
    UnkAngleStruct sp6;
    s32 var_r3;
    u16 var_r6;
    fx32 temp_r7;
    s32 var_r8;
    UnkStruct_027e0cd8_0C_Base *temp_r9;

    var_r6 = 0;

    spC[0].x = 0;
    spC[0].y = 0;

    spC[1].x = 0;
    spC[1].y = 0;

    spC[2].x = 0;
    spC[2].y = 0;

    spC[3].x = 0;
    spC[3].y = 0;

    for (var_r3 = 0; var_r3 < ARRAY_LEN(spC); var_r3++) {
        spC[var_r3].data = param1.data;
    }

    spC[0].y++;
    spC[1].x++;
    spC[2].y--;
    spC[3].x--;

    temp_r9 = data_027e0cd8->mUnk_0C;
    temp_r7 = temp_r9->func_01ffedf4(&param1);

    for (var_r8 = 0; var_r8 < ARRAY_LEN(spC); var_r8++) {
        if (temp_r7 == temp_r9->func_01ffedf4(&spC[var_r8])) {
            if (MapObjectUnkSAND::func_ov031_0210ae00(spC[var_r8], &sp8) != 0 && sp8 == this->mUnk_02) {
                var_r6 |= 1 << var_r8;
            }
        }
    }

    const UnkStruct_ov102_021848b0 *ptr = &data_ov102_021848b0[var_r6];
    UnkSystem6_Derived2 sp14(
        G3d_GetUnkPtr(data_ov031_021189d0.unk_70, data_ov102_021848f0[data_ov102_021848b0[var_r6].unk_00]), true);
    sp6.angle_signed = ptr->unk_02;
    sp14.func_01ffc6d4(sp6, param2);
}

extern MapObject_10 data_ov031_02118ac8[];
extern MapObject_10 data_ov031_02118aec;
extern MapObject_10 data_ov031_02118aa4;

void MapObjectUnkSAND::vfunc_08() {
    VecFx32 sp0;
    MapObjState temp_r0_3;
    s32 var_r6;
    s32 var_r8;
    s32 var_r9;

    sp0   = this->mPos;
    sp0.y = this->mUnk_4C;

    var_r8 = 1;
    var_r9 = 1;

    for (var_r6 = 0; var_r6 < ARRAY_LEN(this->mUnk_40); var_r6++) {
        this->mUnk_40[var_r6].func_ov102_021835c4(&sp0);
        sp0.x += 0x1000;

        var_r8 = (var_r8 & (this->mUnk_40[var_r6].mUnk_00 != 0 ? 1 : 0)) ? 1 : 0;
        var_r9 = (var_r9 & (this->mUnk_40[var_r6].mUnk_00 == 0 ? 1 : 0)) ? 1 : 0;
    }

    if (var_r9 != 0) {
        this->Kill();
        return;
    }

    temp_r0_3     = this->mState;
    this->mUnk_10 = NULL;
    this->mState  = MapObjectUnkSANDState_0;

    if (var_r8 != 0) {
        this->mPos.y = this->mUnk_4C + this->mUnk_40[0].mUnk_02;

        if (this->mUnk_40[0].mUnk_02 == this->mUnk_40[1].mUnk_02) {
            this->mUnk_10 = &data_ov031_02118aa4;
        } else {
            this->mUnk_10 = &data_ov031_02118ac8[0];

            this->mUnk_60.x = this->mPos.x;
            this->mUnk_60.z = this->mPos.z;
            this->mUnk_60.y = this->mUnk_4C + this->mUnk_40[1].mUnk_02;

            this->mUnk_50.mUnk_0C = &data_ov031_02118aec;
            this->mState          = MapObjectUnkSANDState_1;
        }
    } else {
        for (s32 var_r1_2 = 0; var_r1_2 < ARRAY_LEN(this->mUnk_40); var_r1_2++) {
            if (this->mUnk_40[var_r1_2].mUnk_00 != 0) {
                this->mPos.y  = this->mUnk_4C + this->mUnk_40[var_r1_2].mUnk_02;
                this->mUnk_10 = &data_ov031_02118ac8[var_r1_2];
            }
        }
    }

    if (temp_r0_3 != this->mState) {
        if (this->mState == MapObjectUnkSANDState_1) {
            data_027e09c0->func_ov000_0207e240(&this->mUnk_50);
        } else {
            data_027e09c0->func_ov000_0207e254(&this->mUnk_50);
        }
    }
}

void MapObjectUnkSAND::vfunc_0C() {
    if (data_ov031_02115fe0 >= 0 && data_027e09b8->func_ov000_020732ec(data_ov031_02115fe0) != 0) {
        this->vfunc_08();
    }
}

void MapObjectUnkSAND::vfunc_14() {
    VecFx32 sp4  = this->mPos;
    Vec2bCpp sp0 = this->mUnk_3A;

    for (int var_r7 = 0; var_r7 < ARRAY_LEN(this->mUnk_40); var_r7++) {
        if (this->mUnk_40[var_r7].mUnk_00 != 0) {
            sp4.y = this->mUnk_4C + this->mUnk_40[var_r7].mUnk_02;
            this->mUnk_40[var_r7].func_ov102_021837a8(sp0, &sp4);
        }

        sp0.x++;
        sp4.x += 0x1000;
    }
}

extern unk32 data_ov102_02184980[];
extern const u16 data_ov102_021849a8[];

extern "C" void func_ov102_02183c14(s32 param1) {
    u32 sp0[2];

    sp0[0] = data_ov102_021849a8[param1 * 3] | (data_ov102_021849a8[param1 * 3 + 1] << 0x10);
    sp0[1] = data_ov102_021849a8[param1 * 3 + 2];

    PushGeometryCommand(0x23, sp0, 2);
}

extern "C" void func_ov102_02183c6c(s32 param0) {
    u32 sp0 = data_ov102_02184980[param0];
    PushGeometryCommand(0x21, &sp0, 1);
}

extern "C" void func_ov102_02183c94(s32 param0, s32 param1, s32 param2, s32 param3, s32 param4, u16 param5, u16 param6,
                                    u16 param7, u16 param8, s32 param9) {
    u32 spC;
    u32 sp8;
    u32 sp4;
    u32 sp0;

    func_ov102_02183c6c(param4);

    s16 x2 = param8 * 16;
    s16 y2 = (param7 + param9) * 16;

    spC = ((u16) x2 << 16) | (u16) y2;
    PushGeometryCommand(0x22, &spC, 1);
    func_ov102_02183c14(param0);

    s16 x1 = param6 * 16;

    sp8 = ((u16) x1 << 16) | (u16) y2;
    PushGeometryCommand(0x22, &sp8, 1);
    func_ov102_02183c14(param1);

    s16 y1 = (param5 + param9) * 16;

    sp4 = ((u16) x1 << 16) | (u16) y1;
    PushGeometryCommand(0x22, &sp4, 1);
    func_ov102_02183c14(param2);

    sp0 = ((u16) x2 << 16) | (u16) y1;
    PushGeometryCommand(0x22, &sp0, 1);
    func_ov102_02183c14(param3);
}

extern "C" void func_ov102_02183da4(s32 param0, s32 param1, s32 param2, s32 param3, s32 param4, u16 param5, u16 param6,
                                    u16 param7, u16 param8, s32 param9) {
    func_ov102_02183c94(param0, param1, param2, param3, param4, param5, param6, param7, param8, param9);
}

extern "C" void func_01ff9318(void *, unk32, unk32);
extern "C" fx32 func_01ffb464(fx32);

void MapObjectUnkPTFL::vfunc_08() {
    switch (this->mState) {
        case MapObjectUnkPTFLState_0:
            this->mUnk_48--;

            if (this->mUnk_48 > 0) {
                func_01ff9318(&this->mUnk_54, 0, func_01ffb464(this->mUnk_48 << 0xC));
            }

            if (this->mUnk_48 <= 0) {
                this->func_ov070_0214bbd0(MapObjectUnkPTFLState_1, false);
            }
            break;
        case MapObjectUnkPTFLState_1:
            switch (this->mUnk_20.mParams[0]) {
                case 0:
                    if (!this->func_ov070_0214bf6c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_2, false);
                    }
                    break;
                case 1:
                    if (this->func_ov070_0214bf5c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_2, false);
                    }
                    break;
                default:
                    break;
            }
            break;
        case MapObjectUnkPTFLState_2:
            func_01ff9318(&this->mUnk_54, 0x3C72, 0x333);

            if (this->mUnk_54 == 0x3C72) {
                if (this->mUnk_5B == 1) {
                    this->func_ov070_0214bbd0(MapObjectUnkPTFLState_4, false);
                } else {
                    this->func_ov070_0214bbd0(MapObjectUnkPTFLState_3, false);
                }
            }
            break;
        case MapObjectUnkPTFLState_3:
            switch (this->mUnk_20.mParams[0]) {
                case 0:
                    if (this->func_ov070_0214bf6c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_0, false);
                    }
                    break;
                case 1:
                    if (!this->func_ov070_0214bf5c()) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_0, false);
                    }
                    break;
                case 2:
                    if (this->mUnk_56 >= this->mUnk_58) {
                        this->func_ov070_0214bbd0(MapObjectUnkPTFLState_0, false);
                    }
                    break;
                default:
                    break;
            }
            break;
        case MapObjectUnkPTFLState_4:
        default:
            break;
    }

    if (this->mUnk_56 < this->mUnk_58) {
        this->mUnk_56++;
    }
}

void MapObjectUnkPTFL::vfunc_0C() {
    this->vfunc_08();
}

void MapObjectUnkPTFL::vfunc_14() {
    Mat4p sp44;
    VecFx32 sp38;
    VecFx32 sp2C;
    VecFx32 sp20;
    u32 sp1C;
    u32 sp18;
    u32 sp14;
    u32 sp10;
    u32 spC;
    u32 sp8;
    u32 sp4;
    u32 sp0;
    s32 temp_r4;
    s32 var_r5;
    s32 var_r7;

    PushGeometryCommand(0x11, NULL, 0);

    sp1C = data_027e0208.mUnk_094;
    PushGeometryCommand(0x30, &sp1C, 1);

    sp18 = 0;
    PushGeometryCommand(0x31, &sp18, 1);

    sp14 = 0x1F8081;
    PushGeometryCommand(0x29, &sp14, 1);

    sp10 = 3;
    PushGeometryCommand(0x10, &sp10, 1);

    PushGeometryCommand(0x15, NULL, 0);

    sp2C.x = this->mUnk_5A << 0xB;
    sp2C.y = INT_TO_FX32(this->mUnk_5A);
    sp2C.z = 0x1000;
    PushGeometryCommand(0x1B, &sp2C, 3);

    Mat4p_InitIdentity(&sp44);
    sp44.zColumn.z = 0x10000;
    sp44.wColumn.w = 0x10000;
    PushGeometryCommand(0x18, &sp44, 0x10);
    spC = 2;
    PushGeometryCommand(0x10, &spC, 1);
    temp_r4 = this->mUnk_40;

    var_r7 = (this->mUnk_5C ? 3 : 0);

    sp8 = 0 | 0x40030000 | ((u16) temp_r4 & ~0xE0000000) | (((u32) (temp_r4 & 0x1C000000) >> 0x1A) << 0x1A) |
          (((u32) (temp_r4 & 0x03800000) >> 0x17) << 0x17) | (((u32) (temp_r4 & 0x20000000) >> 0x1D) << 0x1D) |
          (((u32) (temp_r4 & 0x00700000) >> 0x14) << 0x14) | (var_r7 << 0x12);

    PushGeometryCommand(0x2A, &sp8, 1);

    sp4 = (u32) ((u32) (this->mUnk_44 << 0x11) >> 0xD) >> (4 - (((u32) (this->mUnk_40 & 0x1C000000) >> 0x1A) == 2 ? 1 : 0));
    PushGeometryCommand(0x2B, &sp4, 1);

    sp38   = this->mPos;
    sp20.x = sp38.x;
    sp20.y = sp38.y;
    sp20.z = sp38.z;
    PushGeometryCommand(0x1C, &sp20, 3);

    this->func_ov102_0218419c();
    this->func_ov102_021843b4();

    sp0 = 1;
    PushGeometryCommand(0x12, &sp0, 1);
}

void MapObjectUnkPTFL::func_ov102_0218419c() {
    VecFx32 sp68;
    VecFx32 sp5C;
    VecFx32 sp50;
    VecFx32 sp44;
    Mat3p sp20;
    u32 sp1C;
    u32 sp18;
    s32 temp_r0_3;
    s32 temp_r1_3;
    s32 temp_r7;

    PushGeometryCommand(0x11, NULL, 0);

    if (this->mState == 1) {
        sp68.x = (this->mUnk_5A << 0xB) + 0x52;
        sp68.y = FLOAT_TO_FX32(0.0f);
        sp68.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp68, 3);

        temp_r0_3 = INT_TO_FX32(this->mUnk_5A);
        sp5C.x    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(0.54f));
        sp5C.y    = FLOAT_TO_FX32(1.0f);
        sp5C.z    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(1.04f));
        PushGeometryCommand(0x1B, &sp5C, 3);
    } else {
        sp50.x = this->mUnk_5A << 0xB;
        sp50.y = FLOAT_TO_FX32(0.0f);
        sp50.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp50, 3);

        temp_r7 = INT_TO_FX32(this->mUnk_5A);
        sp44.x  = MUL_FX32(temp_r7, FLOAT_TO_FX32(0.5f));
        sp44.y  = FLOAT_TO_FX32(1.0f);
        sp44.z  = MUL_FX32(temp_r7, FLOAT_TO_FX32(1.0f));
        PushGeometryCommand(0x1B, &sp44, 3);
    }

    temp_r1_3 = (u16) (this->mUnk_54 - 0x8000);
    Mat3p_InitZRotation(&sp20, SIN(temp_r1_3), COS(temp_r1_3));

    PushGeometryCommand(0x1A, &sp20, 9);

    sp1C = 1;
    PushGeometryCommand(0x40, &sp1C, 1);

    func_ov102_02183da4(0xB, 0xA, 0xE, 0xF, 4, 0, 0, 0x20, 0x20, 0x20);

    PushGeometryCommand(0x41, NULL, 0);

    sp18 = 1;
    PushGeometryCommand(0x12, &sp18, 1);
}

void MapObjectUnkPTFL::func_ov102_021843b4() {
    VecFx32 sp68;
    VecFx32 sp5C;
    VecFx32 sp50;
    VecFx32 sp44;
    Mat3p sp20;
    u32 sp1C;
    u32 sp18;
    s32 temp_r0_3;
    s32 temp_r7;

    PushGeometryCommand(0x11, NULL, 0);

    if (this->mState == 1) {
        sp68.x = (-this->mUnk_5A << 0xB) - 0x52;
        sp68.y = FLOAT_TO_FX32(0.0f);
        sp68.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp68, 3);

        temp_r0_3 = INT_TO_FX32(this->mUnk_5A);
        sp5C.x    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(0.54f));
        sp5C.y    = FLOAT_TO_FX32(1.0f);
        sp5C.z    = MUL_FX32(temp_r0_3, FLOAT_TO_FX32(1.04f));
        PushGeometryCommand(0x1B, &sp5C, 3);
    } else {
        sp50.x = -this->mUnk_5A << 0xB;
        sp50.y = FLOAT_TO_FX32(0.0f);
        sp50.z = FLOAT_TO_FX32(0.0f);
        PushGeometryCommand(0x1C, &sp50, 3);

        temp_r7 = INT_TO_FX32(this->mUnk_5A);
        sp44.x  = MUL_FX32(temp_r7, FLOAT_TO_FX32(0.5f));
        sp44.y  = FLOAT_TO_FX32(1.0f);
        sp44.z  = MUL_FX32(temp_r7, FLOAT_TO_FX32(1.0f));
        PushGeometryCommand(0x1B, &sp44, 3);
    }

    Mat3p_InitZRotation(&sp20, -SIN(this->mUnk_54), COS(this->mUnk_54));

    PushGeometryCommand(0x1A, &sp20, 9);

    sp1C = 1;
    PushGeometryCommand(0x40, &sp1C, 1);

    func_ov102_02183da4(0xF, 0xE, 0xA, 0xB, 1, 0, 0, 0x20, 0x20, 0);

    PushGeometryCommand(0x41, NULL, 0);

    sp18 = 1;
    PushGeometryCommand(0x12, &sp18, 1);
}

void UnkStruct_027e0cd8_0C::vfunc_0C() {
    this->UnkStruct_027e0cd8_0C_Base::vfunc_0C();

    for (int var_r7 = 0; var_r7 < this->mUnk_1D4; var_r7++) {
        for (int var_r8 = 0; var_r8 < ARRAY_LEN(this->mUnk_170[0]); var_r8++) {
            if (this->mUnk_170[var_r7][var_r8] != NULL) {
                this->mUnk_170[var_r7][var_r8]->mUnk_00.func_01ffc3b4();
            }
        }
    }
}

void UnkStruct_027e0cd8_0C::func_ov102_02184628() {
    if (this->mUnk_110 == 7) {
        this->mUnk_098->func_ov047_0213055c();
    }
}
