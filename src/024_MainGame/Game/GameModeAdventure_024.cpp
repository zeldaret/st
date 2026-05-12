#include "Game/GameModeAdventure.hpp"
#include "MainGame/AdventureMode.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204aeac.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov024_020d86a0.hpp"
#include "regs.h"

extern "C" {
void GX_SetGraphicsMode(unk32 param1, unk32 param2, unk32 param3);
void GXS_SetGraphicsMode(unk32 param1);
void func_02019b3c();
void func_02019c4c();
void func_02019a74();
}

AdventureModeManager::~AdventureModeManager() {
    delete this->mUnk_1B8;
    delete this->mUnk_170;
    delete this->mUnk_15C;
    delete this->mUnk_1AC;

    UnkStruct_ov024_020d86a0::Destroy();
    UnkStruct_027e0998::Destroy();
}

void AdventureModeManager::func_ov024_020c5288() {
    REG_DISPCNT &= ~0x1F00;
    REG_DISPCNT |= 0x1100;
}

void AdventureModeManager::func_ov024_020c52a0() {
    REG_DISPCNT &= ~0x1F00;
    REG_DISPCNT |= 0x1100;
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
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & 0x43) | 0x4d08;
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & 0x43) | 0x4e14;
    this->func_ov024_020c6db8(0x1C);
}

void AdventureModeManager::func_ov024_020c5364() {
    this->func_ov024_020c52a0();
    this->func_ov024_020c537c();
}

void AdventureModeManager::func_ov024_020c537c() {
    GXS_SetGraphicsMode(3);
    REG_BG0CNT_SUB = (REG_BG0CNT_SUB & 0x43) | 0x1800;
    this->func_ov024_020c6d2c(1);
    REG_BG2CNT_SUB = (REG_BG2CNT_SUB & 0x43) | 0x1a0c;
    REG_BG3CNT_SUB = (REG_BG3CNT_SUB & 0x43) | 0x5b14;
    this->func_ov024_020c6db8(0x1f);
}

void AdventureModeManager::func_ov024_020c53e8() {
    switch (this->mUnk_154) {
        case 0:
            this->func_ov024_020c52b8();
            data_0204aeac.func_0201c494(0);
            break;
        case 1:
            this->func_ov024_020c5364();
            data_0204aeac.func_0201c494(1);
            break;
        case 2:
            this->func_ov024_020c52a0();
            this->func_ov024_020c6db8(0x18);
            data_0204aeac.func_0201c494(1);
            break;
        case 3:
            if (data_027e09a4->func_01ffd3d8() != 0) {
                this->func_ov024_020c5364();
            } else {
                this->func_ov024_020c52f4();
            }

            this->func_ov024_020c6db8(0x1C);
            data_0204aeac.func_0201c494(0);

            if (data_0204a110.mUnk_008 == 5) {
                REG_DISPCNT &= ~0x1F00;
                REG_DISPCNT |= 0x0200;
            }
            break;
        case 4:
            if (data_027e09a4->func_01ffd3d8() != 0) {
                this->func_ov024_020c5364();
            } else {
                this->func_ov024_020c52f4();
                this->func_ov024_020c6d2c(0);
            }

            this->func_ov024_020c6db8(0x1E);
            data_0204aeac.func_0201c494(1);

            if (data_0204a110.mUnk_008 == 5) {
                REG_DISPCNT &= ~0x1F00;
                REG_DISPCNT |= 0x0200;
            }
            break;
        case 5:
            if (data_027e09a4->func_01ffd3d8() != 0) {
                this->func_ov024_020c537c();
            } else {
                this->func_ov024_020c530c();
            }

            this->func_ov024_020c6db8(0x1C);
            data_0204aeac.func_0201c494(0);
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

void AdventureModeManager::vfunc_24() {}

void AdventureModeManager::func_ov024_020c5cec() {
    data_ov024_020d8698->func_ov024_020cd420();

    if (data_027e09a4->func_01ffd3d8() == 0) {
        data_ov024_020d8698->func_ov024_020cd458(data_027e0ce0->mUnk_2C->mEquippedItem, 1);

        if (gOverlayManager.IsPlayerSub() && data_0204a088->mUnk_00 == OverlayIndex_SceneInit) {
            this->mUnk_168->func_ov031_0210df60(1);
        }
    }

    if (this->mUnk_160 != NULL && this->mUnk_160->mUnk_18 != NULL) {
        AdventureModeManager_160_18 *ptr = this->mUnk_160->mUnk_18;
        GameModeLinkListNode *pUVar3     = (GameModeLinkListNode *) ptr;
        this->mUnk_104.mList.func_020166cc(pUVar3->GetNode());
        ptr->vfunc_18();
    }
}

void AdventureModeManager::func_ov024_020c5dac() {}
void AdventureModeManager::func_ov024_020c5ecc() {}
void AdventureModeManager::func_ov024_020c5f70() {}
void AdventureModeManager::func_ov024_020c60f4() {}
void AdventureModeManager::func_ov024_020c623c() {}
void AdventureModeManager::vfunc_28(unk8 *param1) {}
void AdventureModeManager::vfunc_2C(unk8 *param1) {}
void AdventureModeManager::vfunc_34(unk32 param1, unk32 param2) {}
void AdventureModeManager::vfunc_38(unk32 param1, unk32 param2, unk32 param3, unk32 param4) {}
void AdventureModeManager::func_ov024_020c6514() {}
void AdventureModeManager::func_ov024_020c6674() {}
void AdventureModeManager::func_ov024_020c66c0() {}
void AdventureModeManager::func_ov024_020c671c() {}
void AdventureModeManager::func_ov024_020c6770() {}
void AdventureModeManager::func_ov024_020c681c() {}
void AdventureModeManager::func_ov024_020c6840() {}
void AdventureModeManager::func_ov024_020c68d4() {}
void AdventureModeManager::func_ov024_020c68ec() {}
void AdventureModeManager::func_ov024_020c6930() {}
void AdventureModeManager::func_ov024_020c6940() {}
void AdventureModeManager::func_ov024_020c69d0() {}
void AdventureModeManager::func_ov024_020c6a20() {}
void AdventureModeManager::func_ov024_020c6a48() {}
void AdventureModeManager::func_ov024_020c6af4() {}
void AdventureModeManager::func_ov024_020c6b8c() {}
void AdventureModeManager::func_ov024_020c6c60() {}
void AdventureModeManager::func_ov024_020c6cd4() {}
void AdventureModeManager::func_ov024_020c6ce4() {}
void AdventureModeManager::func_ov024_020c6d04() {}
void AdventureModeManager::func_ov024_020c6d10() {}
void AdventureModeManager::func_ov024_020c6d20() {}
void AdventureModeManager::func_ov024_020c6d2c(unk32 param1) {}
void AdventureModeManager::func_ov024_020c6d64() {}
void AdventureModeManager::func_ov024_020c6db8(unk32 param1) {}
void AdventureModeManager::func_ov024_020c6dec() {}
void AdventureModeManager::func_ov024_020c699c() {}
