#include "CommonFuncs.hpp"
#include "Item/Item.hpp"
#include "Player/PlayerActorBase.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UICounterManager.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09bc.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cf4.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "flags.h"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/math.h"

extern const unk16 data_ov000_020ab3b8;
extern const unk16 data_ov000_020ab3bc;
extern const unk16 data_ov000_020ab3c0;

bool PlayerLinkActor_9C::func_ov017_020bc640(u32 param1, bool param2, bool param3, u8 param4, u8 param5, VecFx32 *pAccel,
                                             VecFx32 *pPos, VecFx32 *pVel) {
    VecFx32 sp1C;
    s32 temp_r11;
    UnkStruct_027e0ce0_24 *temp_r6;
    s32 var_ge;
    s32 var_r0;
    s32 var_r0_2;
    bool var_r5;
    s32 var_r6;
    unk32 var_r1;
    unk32 var_r1_2;
    u8 var_r2;

    var_r5 = true;

    this->mUnk_0F8 = param1;
    this->mUnk_0FC = param3;
    var_r6         = 1;

    sp1C = *pPos;

    if (!param2) {
        VecFx32_Add(pVel, &this->mUnk_104, pVel);
    }

    if (param1 <= 1) {
        if (this->mUnk_0DE >= 0) {
            var_r6 = this->func_ov000_020849d0(pAccel, pVel);
        } else {
            if (this->mUnk_0DE < 0 && !(this->mUnk_0DC & 0x20)) {
                var_r0_2 = 1;
            } else {
                var_r0_2 = 0;
            }

            if (var_r0_2 == 0) {
                var_r6 = this->func_ov000_02084ac8(param1, pPos, pAccel, pVel);
            }
        }

        this->func_ov000_02084c3c(param1, param4, pVel, pPos);
    } else if (param1 == 3) {
        this->func_ov000_02084c3c(param1, 0, pVel, pPos);
    }

    VecFx32_Copy(pVel, &this->mUnk_06C);
    this->func_ov000_02086758();

    if (param1 <= 2) {
        if (func_ov000_02080998(pPos) != 0) {
            var_r5 = false;
        } else {
            temp_r11 = this->func_ov000_02084e58(param1, param5, &sp1C, pPos, pAccel, pVel, 0xBF);

            if (func_ov000_02080998(pPos) != 0) {
                var_r5 = false;
            } else {
                this->func_ov000_02085274(param1, param5, temp_r11, &sp1C, pPos, pVel);
            }
        }

        if (var_r5 || param1 == 1) {
            if (param1 <= 1) {
                if (param1 == 1 || this->mUnk_0DE >= 0) {
                    this->func_ov000_02085578(var_r6, data_ov000_020ab3c0, data_ov000_020ab3bc, data_ov000_020ab3b8, pVel);
                }

                this->func_ov000_02085718(pVel);
            }
        }
    }

    if (param1 == 1 && !var_r5) {
        if (pPos->y < 0) {
            pPos->y = 0;

            if (pVel->y < 0) {
                pVel->y = 0;
            }

            func_ov000_02085d1c(&this->mUnk_0DC);
        }
    }

    this->func_ov000_020867f4();
    this->func_ov000_02085840(&sp1C, pPos, pVel);

    s16 unk_138 = this->mUnk_138;
    if (unk_138 != -1) {
        temp_r6 = data_027e0ce0->mUnk_24;

        if (temp_r6 == NULL) {
            data_027e0ce0->func_ov000_0208bc1c(0, this->mUnk_13A, this->mUnk_138, 0, &this->mUnk_13C, 0);
        } else {
            RefStruct sp14 = this->mUnk_008.Get32();
            RefStruct *ptr = &sp14;

            if (sp14.acRef.type_index == 0x100) {
                *(u32 *) &var_r1 = -1;
            } else {
                var_r1 = ptr->acRef.unk_id;
            }

            if (!(temp_r6->mUnk_70[var_r1] & 0x01) &&
                temp_r6->func_ov021_020eb870(var_r1, this->mUnk_138, 0, &this->mUnk_13C) != 0) {

                RefStruct sp10 = this->mUnk_008.Get32();
                RefStruct *ptr = &sp10;

                if (sp10.acRef.type_index == 0x100) {
                    var_r1_2 = -1;
                } else {
                    var_r1_2 = ptr->acRef.unk_id;
                }

                data_027e0cf4->func_ov021_020f6f58(var_r1_2, 0x1E, &this->mUnk_13C, 0, 0);
            }
        }
    }

    return var_r5;
}

bool UnkStruct_027e0ce0_40::func_ov017_020bc95c(bool param1) {
    UnkStruct_027e09bc_0C_268 sp8;
    sp8.unk_00   = 0;
    sp8.unk_04   = 0;
    sp8.unk_06   = false;
    sp8.unk_07   = 0;
    sp8.unk_08.x = 0;
    sp8.unk_08.y = 0;
    sp8.unk_08.z = 0;

    bool var_r4 = false;

    if (!param1) {
        var_r4 = this->mUnk_014.mTouchControl.mState.touch;

        if (!GET_FLAG2(this->mUnk_104, UnkFlags3_5)) {
            sp8.unk_00 = this->mUnk_014.mUnk_3C;
            sp8.unk_04 = this->mUnk_014.mUnk_44;
            sp8.unk_06 = var_r4;

            STACK_PAD(4);
            if (this->Unk78HasValue()) {
                sp8.unk_07 = this->mUnk_078->func_ov031_020dcfb4(&sp8.unk_08);
            }
        }
    }

    UnkStruct_027e09bc_0C *temp_r0_2 = data_027e09bc->func_ov000_02077468(this->mUnk_000, 0);
    temp_r0_2->mUnk_268              = sp8;

    return var_r4;
}

const bool UnkStruct_027e0ce0_40_Base::UnknownInline1(bool param1, unk32 param2) {
    if (this->GetItemMgr() != NULL && !GET_FLAG2(this->mUnk_104, UnkFlags3_5)) {
        if (data_027e0d34->func_ov031_020d9a4c(1) != 0) {
            bool ret = true;

            UnkStruct_0204a088 *ptr = data_0204a088;
            if (ptr->mUnk_04 == OverlayIndex_None && ptr->mUnk_08 == OverlayIndex_None) {
                ret = false;
            }

            if (ret) {
                if (param2 == 3 && ptr->IsUnknownCheck2(OverlayIndex_RailEdit, OverlayIndex_SceneInit)) {
                    return true;
                }
            } else if (!param1 && !(data_027e09b8->mUnk_94 & 8) &&
                       ((CHECK_BUTTON_COMBO(this->mButtons.cur, PAD_BUTTON_L | PAD_BUTTON_R) &&
                         data_0204a110.func_01ff9b64() != 3) ||
                        param2 == 3)) {
                return true;
            }
        } else if (!param1 && CHECK_BUTTON_COMBO(this->mButtons.press, PAD_BUTTON_L | PAD_BUTTON_R) &&
                   !(gpUICounterManager != NULL && gpUICounterManager->func_ov024_020cd5c0(2) == 0) &&
                   this->mpItemManager->GetCurrentItem() != ItemId_None) {
            data_ov000_020b5214.func_ov000_0206db44(0x66);
        }
    }

    return false;
}

void UnkStruct_027e0ce0_40::func_ov017_020bca40(bool param1, unk32 param2) {
    UNSET_FLAG2(this->mUnk_104, UnkFlags3_10);

    if (this->CheckUnk104(UnkFlags3_0)) {
        if (!data_02049b18.func_020137c8(this->mUnk_000)->touch) {
            UNSET_FLAG2(this->mUnk_104, UnkFlags3_0);
            UNSET_FLAG2(this->mUnk_104, UnkFlags3_1);
        } else if (param1) {
            SET_FLAG2(this->mUnk_104, UnkFlags3_1);
        } else if (data_027e09bc->func_ov000_02077468(this->mUnk_000, 0)->mUnk_230->vfunc_08() == 0) {
            if (this->CheckUnk104(UnkFlags3_1)) {
                UNSET_FLAG2(this->mUnk_104, UnkFlags3_0);
                UNSET_FLAG2(this->mUnk_104, UnkFlags3_1);
            }
        } else {
            SET_FLAG2(this->mUnk_104, UnkFlags3_1);
        }
    }

    if (this->mpItemManager != NULL && this->CheckUnk104(UnkFlags3_9)) {
        if (param2 == 0x2D || data_0204a088->mUnk_08 == OverlayIndex_RailEdit ||
            data_0204a088->mUnk_00 == OverlayIndex_RailEdit) {
            UNSET_FLAG2(this->mUnk_104, UnkFlags3_8);
        } else if (!param1) {
            if (param2 == 4) {
                if (!this->mButtons.CheckCurButtonCombo(PAD_BUTTON_L | PAD_BUTTON_R)) {
                    if (data_0204a110.func_01ff9b64() != 4) {
                        UNSET_FLAG2(this->mUnk_104, UnkFlags3_8);
                    }
                }
            } else if ((CHECK_BUTTON_COMBO(this->mButtons.release, PAD_BUTTON_L) &&
                        !this->mButtons.CheckCurButtonCombo(PAD_BUTTON_R)) ||
                       (CHECK_BUTTON_COMBO(this->mButtons.release, PAD_BUTTON_R) &&
                        !this->mButtons.CheckCurButtonCombo(PAD_BUTTON_L))) {
                if (data_0204a110.func_01ff9b64() != 4) {
                    UNSET_FLAG2(this->mUnk_104, UnkFlags3_8);
                }
            }
        }
    } else if (this->UnknownInline1(param1, param2)) {
        SET_FLAG2(this->mUnk_104, UnkFlags3_8);
    } else if (GET_FLAG2(this->mUnk_104, UnkFlags3_8) &&
               data_0204a088->IsUnknownCheck3(OverlayIndex_None, OverlayIndex_None) && !data_0204a088->IsUnknownCheck1(6, 1)) {
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_8);
    } else if (!param1) {
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_8);
    }

    if (param1) {
        SET_FLAG2(this->mUnk_104, UnkFlags3_2);
    }
}

bool UnkStruct_027e0ce0_40::func_ov017_020bcde8(bool param1) {
    s32 temp_r6;
    bool var_r7;

    temp_r6 = data_0204a110.func_01ff9b50();

    if (this->mUnk_094.mUnk_69 != 0) {
        this->mUnk_094.mUnk_69--;
    }

    if (param1) {
        this->func_ov017_020bca40(param1, temp_r6);
        this->mUnk_094.func_ov017_020bd478();

        this->mUnk_094.mUnk_66 = 2;
        this->mUnk_094.mUnk_6A = 0;
        this->mUnk_094.mUnk_68 = 5;

        if (this->mUnk_074 != 0) {
            this->mUnk_074->func_ov031_020e0c34();
        }

        this->mUnk_07C.func_ov000_020968e0();

        if (GET_FLAG2(this->mUnk_104, UnkFlags3_5) && data_0204a088->mUnk_04 == OverlayIndex_SceneInit) {
            if (!(data_0204a088->mUnk_08 != OverlayIndex_Collect && data_0204a088->mUnk_08 != OverlayIndex_RailEdit)) {
                this->func_ov093_02168020(0);
            }
        }

        return this->func_ov017_020bc95c(param1);
    }

    this->mButtons.func_02013b24(this->mButtons.func_02013c08(this->mUnk_000 == -1 ? data_02049b18.mUnk_2A : 0));
    this->func_ov017_020bca40(param1, temp_r6);

    var_r7 = true;

    if (this->mUnk_094.mUnk_67 != 0) {
        this->mUnk_094.mUnk_67--;
        var_r7 = false;
    } else if (!GET_FLAG2(this->mUnk_104, UnkFlags3_0) && temp_r6 == -1) {
        if (data_0204a110.func_01ff9b78() != 0) {
            //! TODO: fake match
            goto block_22;
        }
    } else {
    block_22:
        var_r7 = false;
    }

    this->mUnk_014.func_ov017_020be44c(this->mUnk_000, var_r7);

    if (this->mUnk_074 != NULL) {
        this->mUnk_074->func_ov102_0218323c(&this->mUnk_014, var_r7 && !GET_FLAG2(this->mUnk_104, UnkFlags3_9));
    }

    bool var_r3 = true;
    if (temp_r6 != -1 || GET_FLAG2(this->mUnk_104, UnkFlags3_5)) {
        var_r3 = false;
    }
    this->mUnk_094.func_ov017_020bd300(&this->mUnk_014, 0x15, var_r3);

    bool var_r10;
    if (GET_FLAG2(this->mUnk_104, UnkFlags3_5)) {
        var_r10 = true;
    } else {
        var_r10 = false;
    }

    UnkParamStruct1 sp0;
    UnkParamStruct1 *ptr = (UnkParamStruct1 *) &sp0;
    func_ov000_0208a7a4(ptr, &this->mUnk_094);
    this->mUnk_07C.func_ov017_020be2ec(&this->mUnk_014, var_r10, *ptr);

    if (this->mUnk_094.mUnk_64 != 0) {
        this->mUnk_094.mUnk_64--;
    }

    if (this->mUnk_094.mUnk_65 != 0) {
        this->mUnk_094.mUnk_65--;
    }

    if (this->mUnk_094.mUnk_66 != 0) {
        this->mUnk_094.mUnk_66--;
    }

    if (this->mUnk_094.mUnk_68 != 0) {
        this->mUnk_094.mUnk_68--;
    }

    if (this->mUnk_094.mUnk_6A != 0) {
        this->mUnk_094.mUnk_6A--;
    }

    if (temp_r6 == 2) {
        if (GET_FLAG2(this->mUnk_104, UnkFlags3_5)) {
            this->mUnk_094.mUnk_6C = 2;
        } else {
            this->func_ov093_021680fc(1);
            this->mUnk_094.mUnk_6C = 1;
        }

        SET_FLAG2(this->mUnk_104, UnkFlags3_3);
        this->mUnk_094.mUnk_60 = this->mUnk_014.mTouchControl.mTouchPosLast;
    } else {
        switch (temp_r6) {
            case 0:
                this->func_ov093_021680fc(1);
                break;
            case 1:
                this->func_ov093_02168020(1);
                break;
            default:
                if (this->mUnk_094.mUnk_6C != 0 && !this->mUnk_014.mTouchControl.mState.touch) {
                    //! TODO: UnkCheck1() don't work
                    bool var_r1_2 = false;

                    if (this->IsUnk78() != NULL && this->mUnk_078->UnkCheck1()) {
                        var_r1_2 = true;
                    }

                    if (!var_r1_2) {
                        SET_FLAG2(this->mUnk_104, UnkFlags3_6);
                    }

                    this->func_ov093_02168258();
                }
                break;
        }

        if (GET_FLAG2(this->mUnk_104, UnkFlags3_3)) {
            if (this->mUnk_014.mTouchControl.mState.touch) {
                if (ABS(this->mUnk_014.mTouchControl.mState.touchPos.x - this->mUnk_094.mUnk_60.x) > 12 ||
                    ABS(this->mUnk_014.mTouchControl.mState.touchPos.y - this->mUnk_094.mUnk_60.y) > 12 ||
                    this->mUnk_014.mTouchControl.mState.touchPos.x < 8 ||
                    this->mUnk_014.mTouchControl.mState.touchPos.x >= 248 ||
                    this->mUnk_014.mTouchControl.mState.touchPos.y < 8 ||
                    this->mUnk_014.mTouchControl.mState.touchPos.y >= 184) {
                    UNSET_FLAG2(this->mUnk_104, UnkFlags3_3);
                    this->mUnk_094.mUnk_64 = 0x20;
                }
            } else {
                //! TODO: fake match
                UNSET_FLAG2(*(volatile UnkFlags3 *) &this->mUnk_104, UnkFlags3_3);
                this->mUnk_094.mUnk_64 = 0x00;
            }
        }
    }

    if (this->mUnk_094.mUnk_69 != 0 || GET_FLAG2(this->mUnk_104, UnkFlags3_2)) {
        UNSET_FLAG2(this->mUnk_104, UnkFlags3_2);
        SET_FLAG2(this->mUnk_104, UnkFlags3_10);
        this->mUnk_094.mUnk_5C = 0x00;
    } else if (GET_FLAG2(this->mUnk_104, UnkFlags3_5) || this->mUnk_094.mUnk_67 != 0) {
        SET_FLAG2(this->mUnk_104, UnkFlags3_10);
        this->mUnk_094.mUnk_5C = 0x00;
    } else {
        this->mUnk_094.mUnk_5C = this->mUnk_014.func_ov000_02096b1c(this->mUnk_094.mUnk_6A == 0);
    }

    return this->func_ov017_020bc95c(param1);
}
