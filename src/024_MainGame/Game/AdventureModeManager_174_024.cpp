#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"

extern "C" void func_ov002_020b6d50(void *);
extern "C" void func_ov002_020b6d68(void *);
extern "C" unk32 func_ov002_020b6cf4(void *, unk32 param1);

THUMB_BEGIN

AdventureModeManager_174::AdventureModeManager_174(GameModeManagerBase_104 *param1) :
    AdventureModeManager_174_Base(param1),
    mUnk_B8(0) {
    data_0204a088->func_ov000_020611dc(this, 5);
}

void AdventureModeManager_174::vfunc_08(unk32 param1) {
    switch (param1) {
        case 1:
        case 6:
            this->mUnk_10.func_0201bb84(0x14, 2, 0x14);
            this->mUnk_10.mUnk_18 = 1;
            data_0204e5f8.func_0201b9a8(&this->mUnk_10);
            break;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        default:
            break;
    }
}

void AdventureModeManager_174::vfunc_0C(unk32 param1) {
    switch (param1) {
        case 1:
        case 6:
            if (this->mUnk_10.mUnk_0D == this->mUnk_10.mUnk_10) {
                data_0204a088->func_ov000_02061230();
            }
            break;
        case 0:
        case 2:
        case 3:
        case 4:
        case 5:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
        case 12:
        case 13:
        default:
            break;
    }
}

void AdventureModeManager_174::vfunc_10(unk32 param1, unk32 param2) {
    if (param2 != 1) {
        return;
    }

    GetAdventureModeManager()->func_ov024_020c699c();

    switch (param1) {
        case 1:
        case 6:
            this->func_ov024_020c88f0();
            this->mUnk_B8 = func_ov002_020b6cf4(&this->mUnk_0C, 0);
            func_ov002_020b6d50(&this->mUnk_BC);
            break;
        case 2:
        case 8:
            data_0204a110.func_02019528();
            data_0204a110.func_02018d78(3);
            data_0204a088->func_ov000_02061248();
            func_ov002_020b6d68(&this->mUnk_BC);
            this->mUnk_B8 = func_ov002_020b6cf4(&this->mUnk_0C, 2);
            break;
        case 12:
        case 13:
            this->mUnk_B8 = func_ov002_020b6cf4(&this->mUnk_0C, 0);
            break;
        case 0:
        case 3:
        case 4:
        case 5:
        case 7:
        case 9:
        case 10:
        case 11:
        default:
            break;
    }
}

void AdventureModeManager_174::vfunc_18(unk32 param1) {
    switch (param1) {
        case 1:
            this->mUnk_10.func_0201bb84(0x14, 2, 0x14);
            this->mUnk_10.mUnk_18 = 1;
            data_0204e5f8.func_0201b9a8(&this->mUnk_10);
            break;
        case 2:
            this->mUnk_10.func_0201bb84(0x14, 2, 0x14);
            this->mUnk_10.mUnk_18 = 0;
            data_0204e5f8.func_0201b9a8(&this->mUnk_10);
            break;
        case 8:
        case 12:
        case 13:
        default:
            break;
    }
}

void AdventureModeManager_174::vfunc_1C(unk32 param1) {
    switch (param1) {
        case 1:
        case 2:
            if (this->mUnk_10.mUnk_0D == this->mUnk_10.mUnk_10) {
                data_0204a088->func_ov000_02061230();
            }
            break;
        case 8:
        case 12:
        case 13:
        default:
            break;
    }
}

bool AdventureModeManager_174::vfunc_20(unk32 param1, unk32 param2) {
    if (param2 == 1) {
        this->mUnk_B8 = 0;

        switch (param1) {
            case 1:
                this->func_ov024_020c8b2c();
                break;
            case 2:
                func_ov002_020b6d50(&this->mUnk_BC);
                data_0204a088->func_ov000_02061248();
                data_0204a110.func_02018d78(5);
                GetAdventureModeManager()->func_ov024_020c555c(5);
                GetAdventureModeManager()->func_ov024_020c53e8();
                GetAdventureModeManager()->vfunc_38(SceneIndex_f_hyral, 0, 0, 0);
                data_0204a110.func_02019528();
                data_0204a110.func_02019538(0x0F, 1);
                break;
            case 8:
                data_0204a110.func_02018d78(5);
                func_ov002_020b6d50(&this->mUnk_BC);
                data_0204a088->func_ov000_02061248();
                data_0204a110.func_02019528();
                data_0204a110.func_02019538(0x0F, 1);
                data_0204a110.GetUnkD9C()->func_0201c494(0);
                break;
            default:
                break;
        }
    }

    //! @bug missing return
}

void AdventureModeManager_174::vfunc_24() {}

THUMB_END

AdventureModeManager_174::~AdventureModeManager_174() {}
