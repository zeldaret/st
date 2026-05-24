#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include <nitro/reg.h>

extern "C" AdventureModeManager_190_10 *func_ov011_020b8e54(void *, int);

THUMB_BEGIN

bool AdventureModeManager_190_14::vfunc_0C() {
    return data_0204a088->func_ov000_02061224();
}

bool AdventureModeManager_190_38::vfunc_0C() {
    return this->mpParent->func_ov024_020ca280();
}

AdventureModeManager_190::AdventureModeManager_190(GameModeManagerBase_104 *param1) :
    mUnk_0C(param1),
    mUnk_10(NULL),
    mUnk_38(this),
    mUnk_60(-1) {
    data_0204a088->func_ov000_020611dc(this, 0x15);
}

void AdventureModeManager_190::vfunc_08(unk32 param1) {
    if (param1 == 1) {
        this->func_ov024_020ca21c();
    }
}

void AdventureModeManager_190::vfunc_0C(unk32 param1) {
    if (param1 == 1 && this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
        data_0204a088->func_ov000_02061230();
    }
}

void AdventureModeManager_190::vfunc_10(unk32 param1, unk32 param2) {
    if (param1 == 1) {
        data_0204a088->func_ov000_02061248();
        this->mUnk_10   = func_ov011_020b8e54(&this->mUnk_0C, this->mUnk_60);
        REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0x1F00) | 0x1800;
    }
}

void AdventureModeManager_190::vfunc_18(unk32 param1) {
    if (param1 == 1) {
        this->func_ov024_020ca21c();
    }
}

void AdventureModeManager_190::vfunc_1C(unk32 param1) {
    if (param1 == 1 && this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
        data_0204a088->func_ov000_02061230();
    }
}

void AdventureModeManager_190::vfunc_20(unk32 param1, unk32 param2) {
    if (param1 == 1) {
        this->mUnk_10 = NULL;
        data_0204a088->func_ov000_02061248();

        if (data_027e09a4->func_01ffd3d8()) {
            GetAdventureModeManager()->func_ov024_020c555c(1);
            GetAdventureModeManager()->func_ov024_020c53e8();
        } else {
            GetAdventureModeManager()->func_ov024_020c555c(0);
            GetAdventureModeManager()->func_ov024_020c53e8();
        }

        if (data_027e09a4->func_01ffd3d8()) {
            GetAdventureModeManager()->func_ov024_020c671c();
        } else {
            GetAdventureModeManager()->func_ov024_020c66c0();
        }
    }
}

void AdventureModeManager_190::func_ov024_020ca21c() {
    this->mUnk_14.func_0201bb84(0x14, 2, 0x14);
    this->mUnk_14.mUnk_18 = false;
    this->mUnk_14.mUnk_19 = true;
    data_0204e5f8.func_0201b9a8(&this->mUnk_14);
}

bool AdventureModeManager_190::func_ov024_020ca24c(unk32 param1) {
    this->mUnk_60 = param1;
    this->mUnk_38.func_0201bb84(0x14, 2, 0x14);
    this->mUnk_38.mUnk_18 = false;
    this->mUnk_38.mUnk_19 = true;
    data_0204e5f8.func_0201b9a8(&this->mUnk_38);
}

bool AdventureModeManager_190::func_ov024_020ca280() {
    return this->mUnk_10->func_ov011_020b8f20(this->mUnk_60);
}

THUMB_END
