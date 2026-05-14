#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "regs.h"

extern "C" GameModeManagerBase_104 *func_ov008_020b6520(void *);

bool AdventureModeManager_170_14::vfunc_0C() {
    return data_0204a088->func_ov000_02061224();
}

AdventureModeManager_170::AdventureModeManager_170(GameModeManagerBase_104 *param1) :
    mUnk_0C(0),
    mUnk_10(param1),
    mUnk_38(0) {
    data_0204a088->func_ov000_020611dc(this, 4);
}

AdventureModeManager_170::~AdventureModeManager_170() {}

void AdventureModeManager_170::vfunc_08(unk32 param1) {
    if (param1 == 1) {
        this->mUnk_14.func_0201bb84(0x3C, 2, 0x3C);
        data_0204e5f8.func_0201b9a8(&this->mUnk_14);
    }
}

void AdventureModeManager_170::vfunc_0C(unk32 param1) {
    if (param1 != 1) {
        return;
    }

    if (this->mUnk_14.mUnk_0D == this->mUnk_14.mUnk_10) {
        data_0204a088->func_ov000_02061230();
    }

    if (this->mUnk_38 > 0) {
        this->mUnk_38--;

        if (this->mUnk_38 == 0) {
            REG_DISPCNT     = (REG_DISPCNT & ~0x1F00) | 0x1000;
            REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0x1F00) | 0x1000;
        }
    }
}

void AdventureModeManager_170::vfunc_10(unk32 param1, unk32 param2) {
    if (data_0204a110.mUnk_008 == 1) {
        data_0204a110.mUnk_DFE = 1;
    }

    data_0204e5f8.mUnk_38 = 0;

    if (data_ov000_020b4f70 != NULL) {
        data_ov000_020b4f70->func_ov000_020662e8();
    }

    data_ov000_020b504c.func_ov000_02067bf0()->vfunc_18(1);
    data_0204a110.func_02019538(0x1C, 1);
    data_0204a088->func_ov000_02061248();
    data_027e0ce0->mUnk_34->func_ov008_020b6a50();

    this->mUnk_0C           = func_ov008_020b6520(&this->mUnk_10);
    data_0204a088->mUnk_120 = 0;
    this->mUnk_38           = 2;
    data_ov000_020b5214.func_ov000_0206d83c(0x0A);
}

void AdventureModeManager_170::vfunc_18(unk32 param1) {
    this->mUnk_0C = 0;
}

void AdventureModeManager_170::vfunc_24() {
    data_0204e5f8.mUnk_38   = true;
    data_0204a088->mUnk_120 = -1;
}
