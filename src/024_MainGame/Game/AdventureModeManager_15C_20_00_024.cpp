#include "MainGame/AdventureMode.hpp"
#include "Message/BMG.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "regs.h"
#include "versions.h"

extern "C" void GX_func_0008(void *, unk32, unk32);

AdventureModeManager_15C_20_00::AdventureModeManager_15C_20_00(bool param1) :
    mUnk_778(false),
    mUnk_779(param1),
    mUnk_77A(-1) {
    if (param1 != 0) {
        this->mUnk_1B8.mUnk_20 = 2;
        this->mUnk_250.mUnk_20 = 2;
        this->mUnk_020         = &this->mUnk_1B8;
        this->mUnk_024         = &this->mUnk_250;
        this->mUnk_01C         = 3;
    } else {
        this->mUnk_0F8.mUnk_20 = 2;
        this->mUnk_158.mUnk_20 = 2;
        this->mUnk_020         = &this->mUnk_0F8;
        this->mUnk_024         = &this->mUnk_158;
        this->mUnk_01C         = 0;
    }

    this->mUnk_0C.Append(this->mUnk_020);
    this->mUnk_0C.Append(this->mUnk_024);

    this->mUnk_028.mUnk_04 = this->mUnk_020;
    this->mUnk_078.mUnk_04 = this->mUnk_024;
}

void AdventureModeManager_15C_20_00::func_ov024_020ca48c() {
    if (this->mUnk_779) {
        this->mUnk_1B8.func_ov000_02063a3c(0x28, 0x57, 0, 0x0A, 0x57, 0);
        this->mUnk_250.func_ov000_02063a3c(0x29, 0x57, 1, 0x0B, 0x57, 1);
        this->mUnk_300.func_ov000_02062f18(this->mUnk_020, 0x57, 0);
        this->mUnk_53C.func_ov000_02062f18(this->mUnk_024, 0x57, 1);
        this->mUnk_2E8.UnknownAction(0x57, 0x02);
    } else {
        this->mUnk_0F8.func_ov000_020633c0(0x28, 0x56, 1, 0x03, 0x56, 1);
        this->mUnk_158.func_ov000_020633c0(0x29, 0x56, 2, 0x03, 0x56, 0);
        this->mUnk_300.func_ov000_02062f18(this->mUnk_020, 0x56, 0);
        this->mUnk_53C.func_ov000_02062f18(this->mUnk_024, 0x56, 1);
    }
}

void AdventureModeManager_15C_20_00::func_ov024_020ca5c8() {
    this->mUnk_020->mUnk_2B = true;
    this->mUnk_020->mUnk_2A = true;
    this->mUnk_024->mUnk_2B = true;
    this->mUnk_024->mUnk_2A = true;

    if (data_ov024_020d8660 != NULL && data_ov024_020d8660->mUnk_00 != NULL) {
        this->mUnk_300.mUnk_04.func_0201f730(BMG_ID(BMGGroup_maingame, MsgIndex_Continue1));
        this->mUnk_53C.mUnk_04.func_0201f730(BMG_ID(BMGGroup_maingame, MsgIndex_MiniGameQuit));
    } else {
        this->mUnk_300.mUnk_04.func_0201f730(BMG_ID(BMGGroup_maingame, MsgIndex_Continue1));
        this->mUnk_53C.mUnk_04.func_0201f730(BMG_ID(BMGGroup_maingame, MsgIndex_SaveAndQuit1));
    }

    this->mUnk_778 = true;
}

void AdventureModeManager_15C_20_00::func_ov024_020ca658() {
    if (this->mUnk_778) {
        this->mUnk_020->mUnk_2B = false;
        this->mUnk_020->mUnk_2A = false;
        this->mUnk_024->mUnk_2B = false;
        this->mUnk_024->mUnk_2A = false;
        this->mUnk_53C.mUnk_04.func_0201f498();
        this->mUnk_300.mUnk_04.func_0201f498();
        this->mUnk_778 = false;
    }
}

void AdventureModeManager_15C_20_00::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    switch (this->mUnk_01C) {
        case 1:
        case 2:
            this->mUnk_028.func_ov000_02063f64();
            this->mUnk_078.func_ov000_02063f64();

            if (!this->mUnk_779 && !this->mUnk_0C8.mUnk_0C) {
                this->mUnk_0C8.UpdateLogic();

#if IS_JP
                GX_func_0008(&REG_BLDCNT, 0x2F, this->mUnk_0C8.func_0201edbc());

                if (data_0204a110.mUnk_008 != 1) {
                    GX_func_0008(&REG_BLDCNT_SUB, 0x3F, this->mUnk_0C8.func_0201edbc());
                }
#else
                GX_func_0008(&REG_BLDCNT, 0x0F, this->mUnk_0C8.func_0201edbc());

                if (data_0204a110.mUnk_008 != 1) {
                    GX_func_0008(&REG_BLDCNT_SUB, 0x1F, this->mUnk_0C8.func_0201edbc());
                }
#endif
            }

            if (!this->func_ov017_020c19a0()) {
                if (this->mUnk_01C == 1) {
                    this->mUnk_01C = 3;
                } else {
                    this->mUnk_01C = 0;

                    if (data_ov024_020d8660->func_ov024_020c4d74() && this->mUnk_77A == 0x2A) {
                        data_ov024_020d8660->mUnk_00->vfunc_28();
                    }
                }
            }

            break;
        case 3: {
            switch (data_0204a110.func_01ff9b50()) {
                case 0x28:
                    data_ov000_020b5214.func_ov000_0206db44(0x04);
                    this->mUnk_77A = data_0204a110.func_01ff9b50();
                    this->func_ov017_020c1c80(1);
                    break;
                case 0x29:
                    if (data_ov024_020d8660 != NULL && data_ov024_020d8660->func_ov024_020c4d74()) {
                        data_ov000_020b5214.func_ov000_0206db44(0x04);
                        this->mUnk_77A = 0x2A;
                        this->func_ov017_020c1c80(0);
                    } else {
                        data_ov000_020b5214.func_ov000_0206db44(0x04);
                        this->mUnk_77A = data_0204a110.func_01ff9b50();
                        this->func_ov017_020c1c80(0);
                    }
                    break;
                default:
                    break;
            }

            break;
        }
        default:
            break;
    }
}

AdventureModeManager_15C_20_00::~AdventureModeManager_15C_20_00() {}
