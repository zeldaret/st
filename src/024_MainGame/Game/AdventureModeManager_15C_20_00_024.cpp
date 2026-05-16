#include "MainGame/AdventureMode.hpp"
#include "Message/BMG.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"

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

    this->mUnk_0C.mList.func_020166cc(this->mUnk_020);
    this->mUnk_0C.mList.func_020166cc(this->mUnk_024);

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

void AdventureModeManager_15C_20_00::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {}

AdventureModeManager_15C_20_00::~AdventureModeManager_15C_20_00() {}
