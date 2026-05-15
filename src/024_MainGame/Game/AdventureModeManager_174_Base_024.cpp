#include "MainGame/AdventureMode.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkStruct_02049f8c.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e095c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cdc.hpp"
#include "Unknown/UnkStruct_ov000_020b4f70.hpp"

THUMB_BEGIN

bool AdventureModeManager_174_Base_10::vfunc_0C() {
    data_0204a088->func_ov000_02061224();
}

bool AdventureModeManager_174_Base_10::vfunc_10() {
    data_0204a088->func_ov000_02061224();
}

AdventureModeManager_174_Base::AdventureModeManager_174_Base(GameModeManagerBase_104 *param1) :
    mUnk_0C(param1) {
    this->mUnk_A4   = 99;
    this->mUnk_A6   = 99;
    this->mUnk_A8   = 0;
    this->mUnk_AA   = 0;
    this->mUnk_B0   = 0x1000;
    this->mUnk_B4.x = 0;
    this->mUnk_B4.y = 0;
    this->mUnk_3C.func_ov000_02071f98();
}

void AdventureModeManager_174_Base::func_ov024_020c88f0() {
    this->mUnk_38 = data_0204a110.mUnk_DF0;
    if (data_0204a110.mUnk_DF0 != 0) {
        data_0204a110.func_02018be0(0);
    }

    data_027e095c->func_ov000_020592ec();
    data_027e095c->func_ov000_020592a0();
    data_ov000_020b504c.func_ov000_02067bf0()->vfunc_18(1);
    data_0204a110.func_02019528();
    this->mUnk_34 = data_0204a110.mUnk_008;
    data_0204a110.func_02018d78(3);
    data_0204a088->func_ov000_02061248();

    if (data_0204a110.mUnk_DF4 == 0) {
        data_0204a110.func_02018c2c();
    }

    if (data_ov000_020b4f70 != NULL) {
        data_ov000_020b4f70->func_ov000_0206654c();
    }

    if (data_0204a110.mUnk_DC0.mUnk_00) {
        data_0204a110.mUnk_DC0.func_0201dd58(1, 3);
        this->mUnk_B0 = data_0204a110.mUnk_DC0.mUnk_08->func_0201ec30();

        Vec2s auStack_14;
        func_0201e8d4(&auStack_14, data_0204a110.mUnk_DC0.mUnk_04);
        this->mUnk_B4.x = auStack_14.x;

        Vec2s auStack_18;
        func_0201e8d4(&auStack_18, data_0204a110.mUnk_DC0.mUnk_04);
        this->mUnk_B4.y = auStack_18.y;
    }

    data_ov000_020b504c.func_ov000_02068068(1);
    data_0204a088->mUnk_120 = NULL;

    UnkStruct_027e09ac *ptr = data_027e09ac;
    this->mUnk_3C           = data_027e09ac->mUnk_014;
    this->mUnk_A4           = ptr->mUnk_14C;
    this->mUnk_A6           = ptr->mUnk_14E;
    this->mUnk_A8           = ptr->mUnk_150;
    this->mUnk_AA           = ptr->mUnk_152;

    ptr->func_ov000_020726f0(0x21, 0, 0);
    data_02049ba0.Unload(OverlaySlot_17);
    data_ov000_020b504c.func_ov000_02067b20();
}

void AdventureModeManager_174_Base::func_ov024_020c8b2c() {
    data_027e09ac->func_ov000_020729c4(&this->mUnk_3C, this->mUnk_A6, this->mUnk_A4, this->mUnk_A8, this->mUnk_AA);

    if (this->mUnk_38 != data_0204a110.mUnk_DF0) {
        data_0204a110.func_02018be0(this->mUnk_38);
    }

    data_027e0cdc->func_ov000_02082a48(0);
    data_027e095c->func_ov000_020592ec();
    data_027e095c->func_ov000_020592a0();
    data_0204a088->func_ov000_02061248();
    data_027e0cd8->func_ov000_02081c28();

    AdventureModeManager *pAdvMgr = GetAdventureModeManager();
    if (data_027e09a4->func_01ffd3d8()) {
        GetAdventureModeManager()->func_ov024_020c555c(1);
    } else {
        if (data_027e0998->func_ov024_020c7354()) {
            GetAdventureModeManager()->func_ov024_020c555c(4);
        } else {
            GetAdventureModeManager()->func_ov024_020c555c(0);
        }
    }

    GetAdventureModeManager()->func_ov024_020c53e8();
    data_0204a110.func_02019528();
    data_0204a110.func_02018d78(0);

    if (this->mUnk_34 == 1) {
        data_0204a110.mUnk_DFE = 1;
    }

    if (data_027e09a4->IsDarkRealm()) {
        data_0204a110.func_02019538(6, 1);
    } else {
        if (data_027e09a4->func_01ffd3d8()) {
            data_0204a110.func_02019538(4, 1);
        } else {
            data_0204a110.func_02019538(0, 1);
        }
    }

    if (data_027e09a4->func_01ffd3d8() || data_027e0998->func_ov024_020c7354()) {
        pAdvMgr->func_ov024_020c671c();
    } else {
        pAdvMgr->func_ov024_020c66c0();
    }

    if (data_0204a110.mUnk_DF4 == 1) {
        data_0204a110.func_02018c2c();
    }

    if (data_ov000_020b4f70 != NULL) {
        data_ov000_020b4f70->func_ov000_020665b8();
    }

    unk32 temp = this->mUnk_B0;
    if (this->mUnk_B0 != 0x1000) {
        Vec2s copy;
        copy.x = this->mUnk_B4.x;
        copy.y = this->mUnk_B4.y;

        Vec2s sp18;
        sp18.x = copy.x;
        sp18.y = copy.y;

        Vec2s sp14;
        sp14.x = 0;
        sp14.y = 0;

        data_0204a110.mUnk_DC0.func_0201db14(0x1000, temp, &sp14, &sp18, 1, 3);

        this->mUnk_B0   = 0x1000;
        this->mUnk_B4.x = 0;
        this->mUnk_B4.y = 0;
    }

    data_ov000_020b504c.func_ov000_02068068(0);
    data_0204a088->mUnk_120 = 0xffff;
    data_02049f8c.mUnk_00   = this->mUnk_AC;
    data_ov000_020b504c.func_ov000_02067b60();
}

THUMB_END
