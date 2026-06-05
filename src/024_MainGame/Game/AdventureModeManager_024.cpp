#include "Actor/ActorUnkTUTO.hpp"
#include "Game/GameModeAdventure.hpp"
#include "MainGame/AdventureMode.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cf8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "Unknown/UnkStruct_ov024_020d8694.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"
#include "Unknown/UnkStruct_ov026_02138d10.hpp"
#include "Unknown/UnkStruct_ov026_0213f578.hpp"
#include "Unknown/UnkStruct_ov026_0213f590.hpp"
#include "Unknown/UnkStruct_ov031_02118fa4.hpp"
#include "versions.h"

#include <nitro/dc.h>
#include <nitro/g2.h>

extern "C" {
void func_02019b3c();
void func_02019c4c();
void func_02019a74();
void func_0200a7b0(unk32 param1, void *param2, void *param3, void *param4, unk32 param5, unk32 param6, unk32 param7,
                   unk32 param8);
}

extern void *data_ov000_020b64f8;

AdventureModeManager::~AdventureModeManager() {
    delete this->mUnk_1B8;
    delete this->mUnk_170;
    delete this->mUnk_15C;
    delete this->mUnk_1AC;

    UnkStruct_ov024_020d86a0::Destroy();
    UnkStruct_027e0998::Destroy();
}

void AdventureModeManager::func_ov024_020c5288() {
    GX_SetVisiblePlane(17);
}

void AdventureModeManager::func_ov024_020c52a0() {
    GX_SetVisiblePlane(17);
}

void AdventureModeManager::func_ov024_020c52b8() {
    this->func_ov024_020c52f4();

    if (gOverlayManager.IsPlayerSub()) {
        this->func_ov024_020c6d2c(0);
        this->func_ov024_020c6db8(0x1E);
    }
}

void AdventureModeManager::func_ov024_020c52f4() {
    this->func_ov024_020c52a0();
    this->func_ov024_020c530c();
}

void AdventureModeManager::func_ov024_020c530c() {
    GXS_SetGraphicsMode(5);
    G2S_SetBG2Control(1, 0, 13, 2, 0);
    G2S_SetBG3Control(1, 0, 14, 5, 0);
    this->func_ov024_020c6db8(0x1C);
}

void AdventureModeManager::func_ov024_020c5364() {
    this->func_ov024_020c52a0();
    this->func_ov024_020c537c();
}

void AdventureModeManager::func_ov024_020c537c() {
    GXS_SetGraphicsMode(3);
    G2S_SetBG0Control(0, 0, 24, 0, 0);
    this->func_ov024_020c6d2c(1);
    G2S_SetBG2Control(0, 0, 26, 3, 0);
    G2S_SetBG3Control(1, 0, 27, 5, 0);
    this->func_ov024_020c6db8(0x1F);
}

void AdventureModeManager::func_ov024_020c53e8() {
    switch (this->mUnk_154) {
        case 0:
            this->func_ov024_020c52b8();
            data_0204a110.mUnk_D9C.func_0201c494(0);
            break;
        case 1:
            this->func_ov024_020c5364();
            data_0204a110.mUnk_D9C.func_0201c494(1);
            break;
        case 2:
            this->func_ov024_020c52a0();
            this->func_ov024_020c6db8(0x18);
            data_0204a110.mUnk_D9C.func_0201c494(1);
            break;
        case 3:
            if (data_027e09a4->IsTrain()) {
                this->func_ov024_020c5364();
            } else {
                this->func_ov024_020c52f4();
            }

            this->func_ov024_020c6db8(0x1C);
            data_0204a110.mUnk_D9C.func_0201c494(0);

            if (data_0204a110.mUnk_008 == 5) {
                GX_SetVisiblePlane(2);
            }
            break;
        case 4:
            if (data_027e09a4->IsTrain()) {
                this->func_ov024_020c5364();
            } else {
                this->func_ov024_020c52f4();
                this->func_ov024_020c6d2c(0);
            }

            this->func_ov024_020c6db8(0x1E);
            data_0204a110.mUnk_D9C.func_0201c494(1);

            if (data_0204a110.mUnk_008 == 5) {
                GX_SetVisiblePlane(2);
            }
            break;
        case 5:
            if (data_027e09a4->IsTrain()) {
                this->func_ov024_020c537c();
            } else {
                this->func_ov024_020c530c();
            }

            this->func_ov024_020c6db8(0x1C);
            data_0204a110.mUnk_D9C.func_0201c494(0);
            break;
        default:
            break;
    }

    func_02019b3c();
    func_02019c4c();
    func_02019a74();
}

void AdventureModeManager::func_ov024_020c555c(unk32 param1) {
    this->mUnk_154 = param1;
}

void AdventureModeManager::vfunc_24() {
    u16 press;

    this->GameModeManagerBase::vfunc_24();

    if (this->mUnk_150) {
        if (this->mUnk_15C->mUnk_47 && this->mUnk_15C->func_ov017_020c3a00(&this->mButtons, &this->mTouchControl)) {
            this->GameModeManagerBase::vfunc_04(0);
            this->func_ov024_020c5cec();
        }

        if (CHECK_BUTTON_COMBO(this->mButtons.press, PAD_BUTTON_START) && this->mUnk_15C->mUnk_47) {
            this->mUnk_15C->func_ov017_020c3c64();
        }

        if (data_027e09a4->IsTrain()) {
            data_ov026_0213f578->func_ov026_020f4844();
        }

        InputInformations sp24;
        sp24.unk_00 = &this->mNextButtonID;
        sp24.unk_04 = &this->mButtonID;
        sp24.unk_08 = &this->mButtons;
        sp24.unk_0C = &this->mTouchControl;

        for (GameModeManagerBase_104::Iterator it1 = GetBeginIter(this->mUnk_15C->mUnk_04);
             it1 != GetEndIter(this->mUnk_15C->mUnk_04); it1++) {
            //! TODO: regalloc issues when using the iterator
            for (GameModeManagerBase_104_0C *it2 = GetBeginIter(it1->mUnk_0C); it2 != GetEndIter(it1->mUnk_0C);
                 GetNextIter(it2)) {
                it2->vfunc_08(&sp24);
            }
        }

        for (GameModeManagerBase_104::Iterator it = GetBeginIter(this->mUnk_15C->mUnk_04);
             it != GetEndIter(this->mUnk_15C->mUnk_04); it++) {
            it->vfunc_08(&this->mButtons, &this->mTouchControl);
        }

        if (!this->mTouchControl.mState.touch) {
            this->mNextButtonID = -1;
        }

        return;
    }

    bool var_r0;
    if (CHECK_BUTTON_COMBO(this->mButtons.press, PAD_BUTTON_START) && data_027e09a4->IsNotCutscene()) {
        if (!data_027e09b8->func_ov000_020732dc(0) && !data_027e09b8->func_ov000_020732dc(1)) {
            if (!data_027e09b8->func_ov000_020732dc(2) && data_0204e5f8.mUnk_3A == 0 && data_0204e5f8.mUnk_3E == 0 &&
                !data_0204e5f8.mUnk_18) {
                unk32 temp_r0_2 = data_0204a088->mUnk_00;
                if ((temp_r0_2 == 1 || temp_r0_2 == 6) && !data_0204a088->mUnk_127 &&
                    data_0204999c.mUnk_00[HeapIndex_8] != NULL) {
                    this->mNextButtonID = -1;
                    this->vfunc_00();
                    this->mUnk_15C->func_ov017_020c3bc0();
                    data_ov024_020d8694->func_ov024_020cb0c4();

                    if (data_0204a110.mUnk_008 == 1) {
                        data_ov000_020b504c.func_ov000_02067f5c(0);
                    }

                    var_r0 = true;
                } else {
                    goto play_sound;
                }
            } else {
                goto play_sound;
            }
        } else {
        play_sound:
            data_ov000_020b5214.func_ov000_0206db44(0xA4);
            goto do_return;
        }
    } else {
    do_return:
        var_r0 = false;
    }

    if (var_r0) {
        return;
    }

    if (data_027e09a4->IsTrain()) {
        data_027e0ce0->mUnk_38->mUnk_010->func_ov026_020f4870();
    }

    this->func_0201875c();
    this->func_02018908();

    if (this->mTouchControl.mState.touch) {
        bool var_r2 = true;

        if (data_0204a088->mUnk_04 == -1 && data_0204a088->mUnk_08 == -1) {
            var_r2 = false;
        }

        if (var_r2 && data_0204a088->mUnk_08 != 1) {
            goto reset_button_id;
        }
    } else {
    reset_button_id:
        this->mNextButtonID = -1;
    }

    if (this->mUnk_1C0) {
        this->mUnk_1C0 = false;
        this->func_ov024_020c6b8c();
    }

    data_ov024_020d8694->vfunc_08(&this->mButtons, &this->mTouchControl);
    data_ov024_020d86a0->func_ov024_020d167c();
    data_027e0998->func_ov000_02061764();

    if (data_ov000_020b4f70 != NULL && data_027e09b8 != NULL) {
        if (data_027e09b8->func_01ffd420() == 0) {
            data_ov000_020b4f70->func_ov000_02066370();
        }
    }

    if (data_027e09a4->IsCutscene()) {
        return;
    }

    bool var_r2_2 = true;
    if (data_0204a088->mUnk_04 == -1 && data_0204a088->mUnk_08 == -1) {
        var_r2_2 = false;
    }

    if (!var_r2_2 && !data_0204a088->mUnk_127) {
        if (data_0204a110.func_01ff9b50() == BTN_ID_UNK_80) {
            return;
        }

        if (data_0204e5f8.mUnk_3A == 0 && data_0204e5f8.mUnk_3E == 0 && !data_0204e5f8.mUnk_18) {
            // should we open the menu
            press = this->mButtons.press;
            if (CHECK_BUTTON_COMBO(press, PAD_KEY_RIGHT) || CHECK_BUTTON_COMBO(press, PAD_BUTTON_Y)) {
                if (this->func_ov024_020c5dac() != 0) {
                    if (data_0204a088->mUnk_00 != 1) {
                        return;
                    }

                    stack_ov000_02073578 sp18;
                    sp18.unk_08 = 0x06;
                    sp18.unk_00 = 0x0A;
                    data_027e09b8->func_ov000_02073578(&sp18, 1);
                    return;
                }

                if (data_0204a088->mUnk_00 == 1) {
                    data_ov000_020b5214.func_ov000_0206db44(0xA4);
                }
            }

            // should we switch to the map screen
            press = this->mButtons.press;
            if (CHECK_BUTTON_COMBO(press, PAD_KEY_DOWN) || CHECK_BUTTON_COMBO(press, PAD_BUTTON_B)) {
                if (this->func_ov024_020c5f70() != 0) {
                    switch (data_0204a088->mUnk_00) {
                        case 1:
                            stack_ov000_02073578 spC;
                            spC.unk_08 = 0x02;
                            spC.unk_00 = 0x0B;
                            data_027e09b8->func_ov000_02073578(&spC, 1);

                            data_ov000_020b5214.func_ov000_0206db44(0x37);
                            break;
#if !IS_JP
                        case 7:
                            if (data_ov031_02118fa4 == 0) {
                                return;
                            }

                            if (data_ov031_02118fa4->func_ov009_020b670c(1) == 0) {
                                return;
                            }

                            data_0204a088->func_ov000_020611fc(2);
                            data_ov000_020b5214.func_ov000_0206db44(0x37);
                            break;
#endif
                        case 6:
                            data_0204a088->func_ov000_020611fc(2);
                            data_ov000_020b5214.func_ov000_0206db44(0x37);
                            break;
                        default:
                            break;
                    }

                    return;
                }

                unk32 value = data_0204a088->mUnk_00;
                if (!(value != 1 && value != 7 && value != 6)) {
                    data_ov000_020b5214.func_ov000_0206db44(0xA4);
                }
            }

            // should we open the collection
            if (CHECK_BUTTON_COMBO(this->mButtons.press, PAD_BUTTON_SELECT)) {
                if (this->func_ov024_020c60f4()) {
                    switch (data_0204a088->mUnk_00) {
                        case 1:
                            stack_ov000_02073578 stack;
                            stack.unk_08 = 0x05;
                            data_027e09b8->func_ov000_02073578(&stack, 1);
                            data_ov000_020b5214.func_ov000_0206db44(0x37);
                            break;
                        case 6:
                            data_0204a088->func_ov000_020611fc(5);
                            data_ov000_020b5214.func_ov000_0206db44(0x37);
                            break;
                        default:
                            break;
                    }

                    return;
                }

                switch (data_0204a088->mUnk_00) {
                    case 1:
                    case 6:
                        data_ov000_020b5214.func_ov000_0206db44(0xA4);
                        break;
                    default:
                        break;
                }
            }

            if (!data_027e09a4->IsTrain()) {
                return;
            }

            // should we open the rail map
            press = this->mButtons.press;
            if (!CHECK_BUTTON_COMBO(press, PAD_KEY_LEFT)) {
                if (!CHECK_BUTTON_COMBO(press, PAD_BUTTON_A)) {
                    return;
                }

                if (data_ov000_020b504c.func_ov000_02067bc4(0)->vfunc_08()) {
                    return;
                }
            }

            if (this->func_ov024_020c5ecc() != 0) {
                if (data_0204a088->mUnk_00 == 1) {
                    data_ov026_02138d10->func_ov026_020e1440();
                    data_ov000_020b5214.func_ov000_0206db44(0x9019);
                    data_ov000_020b5214.func_ov000_0206db44(0x3B);
                }
            } else if (data_0204a088->mUnk_00 == 1) {
                data_ov000_020b5214.func_ov000_0206db44(0xA4);
            }
        }
    }
}

void AdventureModeManager::func_ov024_020c5cec() {
    data_ov024_020d8698->func_ov024_020cd420();

    if (!data_027e09a4->IsTrain()) {
        data_ov024_020d8698->func_ov024_020cd458(data_027e0ce0->mUnk_2C->mEquippedItem, true);

        if (gOverlayManager.IsPlayerSub() && data_0204a088->mUnk_00 == OverlayIndex_SceneInit) {
            this->mUnk_168->func_ov031_0210df60(1);
        }
    }

    if (this->mUnk_160 != NULL && this->mUnk_160->mUnk_18 != NULL) {
        AdventureModeManager_160_18 *ptr = this->mUnk_160->mUnk_18;
        this->mUnk_104.Append(this->mUnk_160->mUnk_18);
        ptr->vfunc_18();
    }
}

bool AdventureModeManager::func_ov024_020c5dac() {
    int unk_00 = data_0204a088->mUnk_00;

    if (this->func_ov024_020c6af4(4)) {
        if (!data_027e09b8->func_ov000_020732dc(0) && !data_027e09b8->func_ov000_020732dc(1) &&
            !data_027e09b8->func_ov000_020732dc(3) && !data_027e09b8->func_ov000_020732dc(4)) {
            if (data_0204e5f8.mUnk_00.GetNextTarget() == GetLinkListOrigin(data_0204e5f8.mUnk_00) &&
                (unk_00 != 1 || this->func_ov024_020c69d0() != 0) &&
                (data_027e09a4->IsTrain() || this->mUnk_168->func_ov031_0210dfd8() == 0) &&
                (!data_027e09a4->IsTrain() || data_ov026_02138d10->func_ov026_020e18fc() != 0)) {
                return true;
            }
        }
    }

    return false;
}

bool AdventureModeManager::func_ov024_020c5ecc() {
    if (data_ov026_02138d10->func_ov026_020e13f4() != 0 && data_027e09b8->func_01ffd420() == 0 &&
        func_ov024_020d5304(data_027e09a4->mUnk_00.mSceneIndex) &&
        (data_ov024_020d8660 == NULL || data_ov024_020d8660->mUnk_00 == NULL) && this->func_ov024_020c6a20() != 0 &&
        data_ov026_0213f590.func_ov026_020f7cc0() == 0) {
        return true;
    }

    return false;
}

bool AdventureModeManager::func_ov024_020c5f70() {
    bool var_r4 = false;

    if (data_027e09a4->IsTrain()) {
        var_r4 = true;
    } else if (data_027e0d34 != NULL) {
        var_r4 = data_027e0d34->func_ov031_020d97f4();
    }

    u32 unk_00 = data_0204a088->mUnk_00;
    if (var_r4) {
        if (this->func_ov024_020c6af4(4) && data_0204a110.mUnk_008 != 1 && !data_027e09b8->func_ov000_020732dc(0) &&
            !data_027e09b8->func_ov000_020732dc(1) && !data_027e09b8->func_ov000_020732dc(4)) {
            if (data_0204e5f8.mUnk_00.GetNextTarget() == GetLinkListOrigin(data_0204e5f8.mUnk_00) &&
                (unk_00 == 1 || unk_00 - 6 <= 1) && (unk_00 != 1 || this->func_ov024_020c69d0() != 0) &&
                (data_ov024_020d8660 == NULL || data_ov024_020d8660->mUnk_00 == NULL) &&
                (data_027e09a4->IsTrain() || this->mUnk_168->func_ov031_0210dfd8() == 0) && !data_027e09a4->IsDarkRealm()) {
                return true;
            }
        }
    }

    return false;
}

bool AdventureModeManager::func_ov024_020c60f4() {
    bool var_r4 = false;

    if (data_027e09a4->IsTrain()) {
        var_r4 = true;
    } else if (data_027e0d34 != NULL) {
        var_r4 = data_027e0d34->func_ov031_020d97e4();
    }

    u32 unk_00 = data_0204a088->mUnk_00;

    if (var_r4 && this->func_ov024_020c6af4(4) && !data_027e09b8->func_ov000_020732dc(0) &&
        !data_027e09b8->func_ov000_020732dc(1) && !data_027e09b8->func_ov000_020732dc(2) &&
        !data_027e09b8->func_ov000_020732dc(4) && (unk_00 == 1 || unk_00 == 6) &&
        (unk_00 != 1 || this->func_ov024_020c69d0() != 0) && data_ov024_020d8660->mUnk_00 == NULL &&
        (data_ov024_020d8660 == NULL || data_ov024_020d8660->mUnk_00 == NULL) && !data_027e09a4->IsDarkRealm()) {
        return true;
    }

    return false;
}

bool AdventureModeManager::func_ov024_020c623c() {
    u32 scene = data_027e09a4->mUnk_00.mSceneIndex;

    if ((gOverlayManager.IsMapA6() && ActorUnkTUTO::func_ov037_02120a64() != 0) ||
        (data_027e09a4->GetCurrentCourseEntry()->unk_10 == 6 && scene == SceneIndex_f_trnnpc) ||
        (data_ov024_020d8660 != NULL && data_ov024_020d8660->mUnk_00 != NULL) || (scene - SceneIndex_b_last1 <= 3)) {
        return false;
    }

    return true;
}

void AdventureModeManager::vfunc_28(unk8 *param1) {
    this->GameModeManagerBase::vfunc_28(param1);
    data_027e0998->func_ov000_02061768();
    this->func_02018a14(param1);

    if (this->mUnk_1BC != NULL) {
        this->mUnk_1BC->func_ov024_020d072c(param1);
    }

    if (data_ov000_020b4f70 != NULL) {
        data_ov000_020b4f70->func_ov000_0206645c(param1);
    }
}

void AdventureModeManager::DrawUI(unk8 *param1) {
    s8 value = *param1;

    this->func_02018984(param1);
    this->func_02018830(param1);
    data_ov024_020d8694->vfunc_10(param1);

    if (this->mUnk_150 && value != -1) {
        if (this->mUnk_15C->mUnk_47) {
            u32 savedUnk[2];
            savedUnk[1] = this->mNextButtonID;
            savedUnk[0] = (u32) param1;

            for (GameModeManagerBase_104::Iterator it1 = GetBeginIterReverse(this->mUnk_15C->mUnk_04);
                 it1 != GetEndIter(this->mUnk_15C->mUnk_04); it1--) {
                for (GameModeManagerBase_104_0C::Iterator it2 = GetBeginIterReverse(it1->mUnk_0C);
                     it2 != GetEndIter(it1->mUnk_0C); it2--) {
                    it2->vfunc_0C(savedUnk);
                }
            }

            for (GameModeManagerBase_104::Iterator it = GetBeginIterReverse(this->mUnk_15C->mUnk_04);
                 it != GetEndIter(this->mUnk_15C->mUnk_04); it--) {
                it->vfunc_10(param1);
            }
        }
    }
}

void AdventureModeManager::vfunc_34(unk32 param1, unk32 param2) {
    this->mUnk_004.func_0201c0e4();

    switch (param1) {
        case 0:
            this->func_ov024_020c53e8();

            if (param2 == 1) {
                data_027e0998->func_ov000_02061850(0);

                if (this->mUnk_1B8 != 0) {
                    this->mUnk_1B8->func_ov024_020d06d0();
                }

                if (this->mUnk_1BC != 0) {
                    this->mUnk_1BC->func_ov024_020d06d0();
                }

                if (data_027e0cf8 != NULL && data_027e0cf8->mUnk_1C != 0) {
                    data_027e0cf8->func_ov024_020c7780();
                }
            }

            break;
        case 1:
            this->func_ov024_020c5288();
            break;
        default:
            break;
    }
}

void AdventureModeManager::vfunc_38(u32 param1, u8 param2, unk16 param3, unk16 param4) {
    this->func_ov024_020c6514(param1, param2, param3, param4);
}

void AdventureModeManager::func_ov024_020c6514(SceneIndex sceneIndex, u8 param2, unk16 param3, unk16 param4) {
    if (data_027e09a4->IsDarkRealm()) {
        UnkStruct2 auStack_34("Screen/Bg/Darea.bin", 1);
        auStack_34.func_020154ec("DAR");
        DC_FlushAll();

        UnkResult auStack_44("DAR:Darea3", "DAR:Darea", "DAR:Darea");
        func_0200a7b0(7, auStack_44.mUnk_00, auStack_44.mUnk_04, auStack_44.mUnk_08, 0, 0, 0x1B, 5);

        data_027e0998->mUnk_44 = param4;
    } else {
        this->func_ov000_02060fc8(sceneIndex, param2, param3, param4);
    }

    s32 var_r1 = this->GetMapPaintIndex(sceneIndex, param2);
    bool var_r2;
    var_r2 = true;
    if (var_r1 != 0xFF) {
        var_r2 = false;
    }
    this->mAllowMapPaint = var_r2;

    this->mUnk_1B8->func_ov024_020d13cc(var_r1);
    this->mUnk_1B8->func_ov024_020d06d0();
    this->mUnk_1CC.sceneIndex = sceneIndex;
    this->mUnk_1CC.unk_04     = param2;
    this->mUnk_1CC.unk_06     = param4;

    if (param3 != 0) {
        this->mUnk_1C4.sceneIndex = sceneIndex;
        this->mUnk_1C4.unk_04     = param2;
        this->mUnk_1C4.unk_06     = param4;
    }
}

u8 AdventureModeManager::GetMapPaintIndex(SceneIndex sceneIndex, u8 param2) {
    if (param2 == 99) {
        return data_027e09a0->GetCourseEntry(sceneIndex)->defaultMapPaintIndex;
    }

    return data_027e09a0->GetRoomEntry(sceneIndex, data_027e09a0->GetRoomEntryIndex())->mapPaintIndex;
}

void AdventureModeManager::func_ov024_020c66c0() {
    this->vfunc_38(this->mUnk_1C4.sceneIndex, this->mUnk_1C4.unk_04, 1, this->mUnk_1C4.unk_06);

    if (this->mUnk_1BC != NULL) {
        this->mUnk_1BC->func_ov024_020d06d0();
        this->func_ov024_020c6db8(0x1E);
    }

    this->func_ov024_020c699c();
}

void AdventureModeManager::func_ov024_020c671c() {
    this->func_ov024_020c6770(this->mUnk_1C4.sceneIndex, this->mUnk_1C4.unk_04, 1, this->mUnk_1C4.unk_06);

    if (data_027e09a4->IsTrain()) {
        data_027e0ce0->mUnk_38->mUnk_158->func_ov026_020dc2d0();
    }
}

void AdventureModeManager::func_ov024_020c6770(SceneIndex sceneIndex, u8 param2, unk16 param3, unk16 param4) {
    this->func_ov024_020c6514(sceneIndex, param2, param3, param4);

    if (data_027e09a4->IsTrain()) {
        data_027e0cf8->func_ov024_020c77b0(1);
    } else {
        data_027e0cf8->func_ov024_020c77b0(0);
    }

    this->func_ov024_020c6840(sceneIndex);
    data_027e0cf8->func_ov024_020c7780();

    if (this->mUnk_1AC->GetListLength() == 0) {
        AdventureModeManager_1AC *ptr = this->mUnk_1AC;
        this->mUnk_158->Append(ptr);
        ptr->vfunc_18();
    }
}

bool AdventureModeManager::func_ov024_020c681c() {
    if (this->mUnk_1C4.sceneIndex == this->mUnk_1CC.sceneIndex && this->mUnk_1C4.unk_04 == this->mUnk_1CC.unk_04) {
        return true;
    }

    return false;
}

void AdventureModeManager::func_ov024_020c6840(SceneIndex sceneIndex) {
    if (this->func_ov024_020c6d64() != 0) {
        return;
    }

    if (data_027e0cf8->mUnk_1C) {
        data_027e0cf8->func_ov024_020c7724();
    }

    {
        UnkDataStruct3 uStack_e8(0x1770);
        uStack_e8.mUnk_04.func_ov024_020d2538(sceneIndex, 0, uStack_e8.mUnk_00.unk_00);
        data_027e0cf8->func_ov024_020c755c(&uStack_e8.mUnk_04);
        uStack_e8.mUnk_04.func_ov024_020d2518();
    }
}

void AdventureModeManager::func_ov024_020c68d4(Vec2s *param1, unk32 param2) {
    data_027e0cf8->func_ov024_020c77d0(param1, param2);
}

bool AdventureModeManager::func_ov024_020c68ec(unk32 param1, unk32 param2) {
    if (param1 != 0) {
        this->mUnk_18C->func_ov024_020ca068(param2);
        return data_0204a088->func_ov000_020611fc(8);
    }

    return data_0204a088->func_ov000_020611fc(1);
}

void AdventureModeManager::func_ov024_020c6930() {
    this->mUnk_18C->func_ov024_020ca074();
}

bool AdventureModeManager::func_ov024_020c6940(unk32 param1, unk32 param2) {
    if (param1 != 0) {
        if (data_0204a088->mUnk_00 == 1) {

#if IS_JP
            if (data_027e09b8->mUnk_94 & 8) {
                data_027e09b8->func_ov000_02074d78(3);
            }
#endif

            this->mUnk_190->mUnk_60 = param2;
            return data_0204a088->func_ov000_020611fc(21);
        }

        return this->mUnk_190->func_ov024_020ca24c(param2);
    }

    return data_0204a088->func_ov000_020611fc(1);
}

void AdventureModeManager::func_ov024_020c699c() {
    if (data_027e0cf8->mUnk_1C) {
        data_027e0cf8->func_ov024_020c7724();
        this->mUnk_1AC->Detach();
    }
}

unk32 AdventureModeManager::func_ov024_020c69d0() {
    if (data_027e09a4->IsTrain()) {
        unk32 uVar2 = 0;

        if (this->mUnk_16C != NULL && this->mUnk_16C->func_ov026_020d8e30() != 0) {
            uVar2 = 1;
        }

        return uVar2;
    }

    return this->mUnk_168->func_ov031_0210dfcc();
}

unk32 AdventureModeManager::func_ov024_020c6a20() {
    unk32 uVar2 = 0;

    if (this->mUnk_16C != NULL && this->mUnk_16C->func_ov026_020d8e44() != 0) {
        uVar2 = 1;
    }

    return uVar2;
}

void AdventureModeManager::func_ov024_020c6a48(unk32 param1, bool param2) {
    switch (param1) {
        case 0:
        case 1:
        case 2:
        case 3:
            data_ov024_020d8698->func_ov024_020cd4e4(param1, param2);
            break;
        case 4:
            if (data_027e09a4->IsTrain()) {
                this->mUnk_16C->func_ov026_020d8dd4(param2);
            } else {
                this->mUnk_168->func_ov031_0210df70(param2);
            }
            break;
        case 5:
            data_ov024_020d8698->func_ov024_020cd4e4(param1, param2);
            this->func_ov024_020c6a48(4, param2);
            break;
        default:
            break;
    }
}

bool AdventureModeManager::func_ov024_020c6af4(unk32 param1) {
    switch (param1) {
        case 0:
        case 1:
        case 2:
        case 3:
            if (data_ov024_020d8698 == NULL) {
                return false;
            }

            return data_ov024_020d8698->func_ov024_020cd5c0(param1);
        case 4:
            if (data_027e09a4->IsTrain()) {
                if (this->mUnk_16C != NULL) {
                    return this->mUnk_16C->mUnk_1C;
                }

                return false;
            }

            if (this->mUnk_168 != NULL) {
                return this->mUnk_168->mUnk_20;
            }

            return false;
        default:
            break;
    }

    return false;
}

void AdventureModeManager::func_ov024_020c6b8c() {
    if (this->mUnk_1B4 && data_ov024_020d8698 != NULL) {
        data_ov024_020d8698->Detach();
    }

    if (data_ov024_020d8698 != NULL) {
        UnkStruct_020d8698 *ptr = data_ov024_020d8698;
        this->mUnk_104.Append(ptr);
        ptr->vfunc_18();

        if (!this->mUnk_1B4) {
            data_ov024_020d8698->func_ov024_020cd094();
        }

        this->mUnk_1B4 = true;
    }

    if (!data_027e09a4->IsTrain()) {
        if (!this->mUnk_1B5 && this->mUnk_1B0 != NULL) {
            AdventureModeManager_1B0 *ptr = this->mUnk_1B0;
            this->mUnk_104.Append(ptr);
            ptr->vfunc_18();

            this->mUnk_1B5 = true;
        }
    }
}

void AdventureModeManager::func_ov024_020c6c60() {
    if (this->mUnk_1B4 && data_ov024_020d8698 != NULL) {
        data_ov024_020d8698->Detach();
        this->mUnk_1B4 = false;
    }

    if (!data_027e09a4->IsTrain()) {
        if (this->mUnk_1B5 && this->mUnk_1B0 != NULL) {
            this->mUnk_1B0->Detach();
            this->mUnk_1B5 = false;
        }
    }
}

void AdventureModeManager::func_ov024_020c6cd4() {
    this->mUnk_16C->func_ov026_020d8e58();
}

bool AdventureModeManager::func_ov024_020c6ce4() {
    if (data_0204a110.mUnk_008 == 5 || data_0204a110.mUnk_008 == 3) {
        return true;
    }

    return false;
}

unk32 AdventureModeManager::func_ov024_020c6d04() {
    return this->mUnk_194->mUnk_0C;
}

void AdventureModeManager::func_ov024_020c6d10() {
    this->mUnk_168->mUnk_21 = true;
}

void AdventureModeManager::func_ov024_020c6d20(unk32 param1) {
    this->mUnk_180->mUnk_40 = param1;
}

void AdventureModeManager::func_ov024_020c6d2c(unk32 param1) {
    if (param1) {
        G2S_SetBG1Control(0, 0, 25, 1, 0);
    } else {
        G2S_SetBG1Control(0, 0, 12, 0, 0);
    }
}

bool AdventureModeManager::func_ov024_020c6d64() {
    if (data_027e09a4 != NULL && data_ov000_020b64f8 != NULL) {
        if (data_027e09a4->IsCutscene() && Cutscene_GetParamEntry(data_027e09a4->mUnk_00.mCutsceneIndex)->mUnk_18 == 1) {
            return true;
        }
    }

    return false;
}

void AdventureModeManager::func_ov024_020c6db8(unk32 param1) {
    if (this->func_ov024_020c6d64()) {
        this->func_02018bc4(0x10);
    } else {
        this->func_02018bc4(param1);
    }
}

bool AdventureModeManager::func_ov024_020c6dec() {
    if (this->mUnk_1CC.sceneIndex == data_027e09a4->mUnk_00.mSceneIndex) {
        if (this->mUnk_1CC.sceneIndex == data_027e09a4->mUnk_00.mSceneIndex) {
            if (this->mUnk_1CC.unk_04 == data_027e0cd8->func_ov000_02081d5c()) {
                return true;
            }
        }
    }

    return false;
}

AdventureModeManager_1AC::AdventureModeManager_1AC() {
    this->mUnk_18 = true;
    this->mUnk_19 = true;
}

AdventureModeManager_1AC::~AdventureModeManager_1AC() {}

void AdventureModeManager_1AC::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    data_027e0cf8->func_ov017_020c390c();
}

void AdventureModeManager_1AC::vfunc_10(unk8 *param1) {
    data_027e0cf8->func_ov017_020c397c();
}

void AdventureModeManager_1AC::vfunc_14(unk8 *param1) {
    data_027e0cf8->func_ov017_020c39d4();
}
