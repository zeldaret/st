#include "Player/PlayerActorBase.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nitro/types.h"

extern "C" unk32 func_01ffb9cc(VecFx32 *, VecFx32 *);
extern "C" void func_01ff9770(VecFx32 *, unk32);
extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, void *);
extern "C" void func_01ff97c8(VecFx32 *, int);
extern "C" unk32 func_ov000_02078aec();
extern "C" unk32 func_ov000_0205b090();
extern "C" unk32 func_ov000_0205b0ac(s16 param1);
extern "C" unk32 func_01ffb428(unk32, unk32);
extern "C" unk32 func_01ffbbe0();
extern "C" unk32 func_ov000_0208832c(s16, unk32);

extern u16 data_ov000_020afd08;
extern unk32 data_ov000_020afd0c;
extern unk32 data_ov000_020afd10;
extern const unk32 data_ov000_020afd14;
extern unk32 data_ov000_020afd18;

// https://decomp.me/scratch/jtWsb
void UnkStruct_027e0ce0_30_00::func_ov017_020bbf7c(ItemManager *pItemMgr) {
    VecFx32 sp4C;
    UnkStackStruct_ov000_02077590 sp2C;
    VecFx32 sp20;
    VecFx32 sp14;
    VecFx32 sp8;
    Vec2s sp4;

    s32 var_r0_2;
    s32 var_r1;
    s32 var_r2;
    s32 var_r2_2;
    s32 var_r6;
    bool var_r7;
    s32 temp_r8_5;
    bool var_r9;

    VecFx32_Copy(&this->mUnk_00, &this->mUnk_0C);
    this->mUnk_1C = this->mUnk_18;

    if (this->mpPlayer != NULL) {
        if (this->mUnk_28 == 0) {
            if (data_027e09b8->func_ov000_020732dc(2) == 0 && data_0204a088->mUnk_04 == 1) {
                if (data_0204a088->mUnk_08 == 2 || data_0204a088->mUnk_08 == 6) {
                    UnkStruct_027e09bc_0C *temp_r8 = data_027e09bc->mUnk_04[2];

                    UnkStackStruct_ov000_02077590 *temp_r0_2 = func_ov000_02077590(0x1B);
                    sp2C                                     = *temp_r0_2;

                    sp2C.mUnk_06 = temp_r8->func_ov000_02078698();
                    sp2C.mUnk_04 = temp_r8->func_ov000_0207868c();
                    sp2C.mUnk_02 = temp_r8->mUnk_0CA;
                    sp2C.mUnk_08 = MUL_FX32(func_01ffb9cc(&temp_r8->mUnk_040, &temp_r8->mUnk_034), data_ov000_020afd0c);

                    sp4C = this->mpPlayer->mPos;
                    sp4C.y += data_ov000_020afd14;
                    temp_r8->func_ov000_0207834c(&sp4C, &sp2C, data_ov000_020afd08);

                    this->mUnk_28 = true;
                }
            }
        } else if (data_0204a088->mUnk_08 == 1) {
            if (data_0204a088->mUnk_00 != -1 && data_0204a088->mUnk_00 != 5 && data_0204a088->mUnk_00 != 9) {
                this->func_ov000_020a8af4(1);
            }
        }
    }

    if (this->mUnk_20 > 1) {
        this->mUnk_20--;
        return;
    }

    this->mUnk_20 = 0;

    if (this->mUnk_2C != NULL) {
        this->mUnk_2C->func_ov026_020de908(this);
        this->mUnk_18 = 0x10;
        return;
    }

    if (this->mUnk_30 != NULL) {
        VecFx32_Copy(&this->mUnk_30->mUnk_00, &this->mUnk_00);
        this->mUnk_00.y += data_ov000_020afd14;
        this->mUnk_18 = 0x01;
        return;
    }

    var_r9 = this->mUnk_34->UnkCheck1();

    if (this->mpZelda != NULL) {
        this->mUnk_18 = this->mpZelda->func_ov093_0216e8e4(this);

        if (this->mUnk_18 != 0) {
            if (this->mUnk_18 == 4 && pItemMgr != NULL) {
                pItemMgr->func_ov000_020a8a5c();
            }

            if (var_r9 != 0) {
                this->mUnk_00.y = this->mpZelda->mPos.y + 0x191F;
                return;
            }

            this->mUnk_00.y += data_ov000_020afd14;

            if (this->mUnk_18 != 3) {
                return;
            }

            if (!(this->mUnk_34->mUnk_104 & 0x40)) {
                return;
            }

            func_01ffb714(&this->mpPlayer->mPos, &this->mpZelda->mPos, &sp14);
            sp14.y = 0;

            VecFx32_Copy(&this->mpPlayer->mPos, &sp20);
            sp20.y += data_ov000_020ab4dc[PlayerCharacter_Link].mUnk_66 / 2;

            if (!data_027e09bc->mUnk_04[0]->func_01ffd43c(&sp4, &sp20, 1)) {
                return;
            }

            unk32 temp_r4 = data_ov000_020afd18;

            unk32 temp_r3_5 = (temp_r4 * 256) / 2;
            fx32 temp_r2_3  = sp4.x - 128;
            if (temp_r2_3 > -temp_r3_5 || temp_r2_3 >= temp_r3_5) {
                return;
            }

            unk32 temp_r3_6 = (temp_r4 * 192) / 2;
            fx32 temp_r2_4  = sp4.y - 96;
            if (temp_r2_4 > -temp_r3_6 || temp_r2_4 >= temp_r3_6) {
                return;
            }

            var_r6   = func_ov000_0205b090();
            var_r0_2 = func_ov000_0205b0ac(sp4.y);

            if (var_r6 < 0) {
                var_r6 = (s16) -var_r6;
            }

            if (var_r0_2 < 0) {
                var_r0_2 = (s16) -var_r0_2;
            }

            if (var_r6 <= var_r0_2) {
                var_r6 = var_r0_2;
            }

            if (var_r6 <= 0x1000) {
                func_01ff97c8(&sp14, data_ov000_020afd10);
            } else {
                var_r2_2 = 0;

                if (temp_r4 != 0x1000) {
                    var_r2_2 = func_01ffb428(var_r6 - temp_r4, 0x1000 - temp_r4);
                }

                if (var_r2_2 <= 0) {
                    return;
                }

                if (var_r2_2 > 0x1000) {
                    var_r2_2 = 0x1000;
                }

                func_01ff97c8(&sp14, ROUND_FX32(data_ov000_020afd10 * var_r2_2));
            }

            VecFx32_Add(&this->mUnk_00, &sp14, &this->mUnk_00);
            return;
        }
    }

    if (pItemMgr != NULL) {
        this->mUnk_18 = pItemMgr->func_ov000_020a8a74(this);

        if (this->mUnk_18 != 0) {
            PlayerLinkActor *temp_r10_2 = this->mpPlayer;

            if (var_r9 != 0) {
                this->mUnk_00.y = this->mpZelda->mPos.y + 0x191F;
            } else {
                this->mUnk_00.y += data_ov000_020afd14;
            }

            if (this->mUnk_18 == 0x0D) {
                VecFx32_SubXZ(&this->mUnk_00, &temp_r10_2->mPos, &sp8);

                PlayerLinkActor_9C *ptr = this->mpPlayer->mUnk_90;
                s16 value1              = func_01ffbbe0();
                temp_r8_5               = func_ov000_0208832c(value1, ptr->func_ov000_02084944());

                if (VecFx32_Length(&sp8) <= temp_r8_5) {
                    if (data_027e0ce0->func_ov000_0208bf34(0)) {
                        var_r7 = 0;
                        goto comp;
                    }

                    if (!(sp8.x == 0 && sp8.z == 0 ? 1 : 0)) {
                        func_01ff9770(&sp8, temp_r8_5);
                        this->mUnk_00.x = temp_r10_2->mPos.x + sp8.x;
                        this->mUnk_00.z = temp_r10_2->mPos.z + sp8.z;
                    }
                }
            }

            UnkStruct_027e09bc_0C *temp_r7 = data_027e09bc->mUnk_04[2];

            if (this->mUnk_18 != this->mUnk_1C) {
                temp_r7->func_ov000_02078534(&temp_r7->mUnk_040, 4);
                var_r7 = 1;
            } else {
                if (func_ov000_02078aec() == 0) {
                    if (pItemMgr != 0) {
                        pItemMgr->func_ov000_020a8a5c();
                    }

                    var_r7 = 0;
                } else {
                    UnkStackStruct_ov000_02084344 *temp_r0_10 = func_ov000_02084344(this->mUnk_18);
                    temp_r7->func_ov000_02078aa4(this, temp_r0_10->mUnk_00, temp_r0_10->mUnk_02, temp_r0_10->mUnk_04);

                    var_r7 = 1;
                }
            }

        comp:
            if (var_r7 != 0) {
                return;
            }
        }
    }

    this->mUnk_18 = this->mpPlayer->func_ov000_0208dd60(this);

    if (var_r9 != 0) {
        this->mUnk_00.y = this->mpZelda->mPos.y + 0x191F;
    } else {
        this->mUnk_00.y += data_ov000_020afd14;
    }
}

void UnkStruct_027e0ce0_30::func_ov017_020bc5fc(ItemManager *pItemMgr) {
    if (this->mUnk_00 != NULL) {
        this->mUnk_00->func_ov017_020bbf7c(pItemMgr);
        return;
    }

    for (u32 i = 0; i < ARRAY_LEN(this->mUnk_08); i++) {
        if (this->mUnk_08[i] != NULL) {
            this->mUnk_08[i]->func_ov021_020ebc68();
        }
    }
}
