#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"

THUMB_BEGIN

AdventureModeManager_178_Base::AdventureModeManager_178_Base(GameModeManagerBase_104 *param1) :
    AdventureModeManager_174_Base(param1) {}

void AdventureModeManager_178_Base::vfunc_08(unk32 param1) {
    if (param1 == 1 || param1 == 5) {
        this->mUnk_10.func_0201bb84(0x14, 2, 0x14);
        data_0204e5f8.func_0201b9a8(&this->mUnk_10);
    }
}

void AdventureModeManager_178_Base::vfunc_0C(unk32 param1) {
    if (this->mUnk_10.mUnk_0D == this->mUnk_10.mUnk_10) {
        data_0204a088->func_ov000_02061230();
    }
}

void AdventureModeManager_178_Base::vfunc_18(unk32 param1) {
    if (param1 == 1 || param1 == 5) {
        this->mUnk_10.func_0201bb84(0x14, 2, 0x14);
        data_0204e5f8.func_0201b9a8(&this->mUnk_10);
    }
}

void AdventureModeManager_178_Base::vfunc_1C(unk32 param1) {
    if (this->mUnk_10.mUnk_0D == this->mUnk_10.mUnk_10) {
        data_0204a088->func_ov000_02061230();
    }
}

THUMB_END
