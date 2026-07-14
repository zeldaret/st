#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"

extern "C" unk32 func_ov004_020b697c(void *, unk32 param1);

THUMB_BEGIN

AdventureModeManager_178::AdventureModeManager_178(GameModeManagerBase_104 *param1) :
    AdventureModeManager_178_Base(param1),
    mUnk_B8(0) {
    data_0204a088->func_ov000_020611dc(this, 0x0D);
}

void AdventureModeManager_178::vfunc_10(unk32 param1, unk32 param2) {
    if (param2 == 1) {
        data_0204a088->func_ov000_02061248();
        this->mUnk_B8 = func_ov004_020b697c(&this->mUnk_0C, 0);
    }
}

void AdventureModeManager_178::vfunc_20(unk32 param1, unk32 param2) {
    if (param2 == 1) {
        this->mUnk_B8 = 0;
        data_0204a088->func_ov000_02061248();
        data_0204a110.func_02019528();
    }
}

THUMB_END
