#include "Game/GameModeManager.hpp"
#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_ov000_020b504c.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "types.h"

extern "C" unk32 func_020196b0(unk32);

struct UnkStruct_ov017_020c3f3c {
    /* 00 */ unk32 unk_00;

    UnkStruct_ov017_020c3f3c() {
        this->unk_00 = 0x10005;
    }
};

static const UnkStruct_ov017_020c3f3c data_ov017_020c3f3c;

static PTMFBool<AdventureModeManager_15C> data_ov017_020c3f40[] = {
    &AdventureModeManager_15C::func_ov017_020c39f8,
    &AdventureModeManager_15C::func_ov017_020c3a38,
    &AdventureModeManager_15C::func_ov017_020c3b58,
};

void AdventureModeManager_15C::func_ov017_020c39f0(unk32 param1) {
    this->mUnk_00 = param1;
}

bool AdventureModeManager_15C::func_ov017_020c39f8() {
    return true;
}

bool AdventureModeManager_15C::func_ov017_020c3a00(Input *pButtons, TouchControl *pTouchControl) {
#pragma unused(pButtons, pTouchControl)
    bool ptmfResult;
    CALL_PTMF_RET(PTMFBool<AdventureModeManager_15C>, data_ov017_020c3f40[this->mUnk_00]);
    return ptmfResult;
}

bool AdventureModeManager_15C::func_ov017_020c3a38() {
    if (this->mUnk_46 && data_0204a110.func_02019548() != 0) {
        this->mUnk_46         = false;
        this->mUnk_28.mUnk_10 = 0;
        this->mUnk_20.mUnk_00->func_ov024_020ca48c();
        this->mUnk_20.mUnk_00->func_ov024_020ca5c8();
        this->mUnk_20.mUnk_00->func_ov017_020c18e4();
        this->mUnk_20.mUnk_00->func_ov017_020c1a0c(1);

        AdventureModeManager_15C_20_00 *ptr = this->mUnk_20.mUnk_00;
        this->mUnk_20.mUnk_04->Append(ptr);
        ptr->vfunc_18();

        this->mUnk_45 = true;
    }

    switch (this->mUnk_20.mUnk_00->func_ov017_020c18c4()) {
        case 0x28:
            this->func_ov017_020c3ca4();
            return true;
        case 0x29:
            data_ov000_020b504c.func_ov000_0206807c(data_ov017_020c3f3c.unk_00, &this->mUnk_28);
            this->func_ov017_020c39f0(2);
            break;
        case 0x2A:
            this->mUnk_47 = false;
            this->func_ov017_020c39f0(0);
            this->func_ov017_020c3d98();
            this->mUnk_20.mUnk_00->Detach();
            return true;
        default:
            break;
    }

    return false;
}

bool AdventureModeManager_15C::func_ov017_020c3b58() {
    if ((u16) this->mUnk_28.mUnk_08 != 0xFFFF) {
        this->mUnk_28.vfunc_04();

        if ((u16) this->mUnk_28.mUnk_08 == 0xFFFF) {
            this->mUnk_44 = 1;
            this->mUnk_20.mUnk_00->func_ov017_020c19cc();
            this->func_ov017_020c39f0(1);
        }
    }

    return false;
}

void AdventureModeManager_15C::func_ov017_020c3bc0() {
    this->mUnk_46 = true;
    this->mUnk_47 = true;
    this->func_ov017_020c39f0(1);
    this->mUnk_44 = 0;
    this->mUnk_48 = GetAdventureModeManager()->mUnk_0F8;

    if (data_027e09a4->IsTrain()) {
        if (data_027e09a4->IsDarkRealm()) {
            data_0204a110.func_02019538(0x1B, 0);
            return;
        }

        data_0204a110.func_02019538(0x1A, 0);
        return;
    }

    data_0204a110.func_02019538(0x19, 0);
}

void AdventureModeManager_15C::func_ov017_020c3c64() {
    if (this->mUnk_00 != 1) {
        return;
    }

    if (this->mUnk_20.mUnk_00->func_ov017_020c19a0() != 0) {
        return;
    }

    data_ov000_020b5214.func_ov000_0206db44(0x31);
    this->mUnk_20.mUnk_00->func_ov017_020c19cc();
}

void AdventureModeManager_15C::func_ov017_020c3ca4() {
    this->mUnk_47 = 0;
    this->func_ov017_020c39f0(0);
    this->func_ov017_020c3d98();

    if (data_ov024_020d8660 != NULL && data_ov024_020d8660->mUnk_1C == 1) {
        data_0204a110.func_02019538(0x20, 1);
        unk32 value = func_020196b0(0x25);
        GetAdventureModeManager()->mUnk_004.func_0201c0c4(value);
    } else {
        data_0204a110.func_02019538(this->mUnk_48, 1);
    }

    this->mUnk_20.mUnk_00->Detach();

    if (data_027e09a4->IsTrain() || (data_027e09a4->IsSceneModeAdventure() && data_027e0998->func_ov024_020c7354())) {
        data_0204a110.mUnk_D9C.func_0201c494(1);
        return;
    }

    data_0204a110.mUnk_D9C.func_0201c494(0);
}

void AdventureModeManager_15C::func_ov017_020c3d98() {
    if (this->mUnk_45) {
        this->mUnk_20.mUnk_00->func_ov024_020ca658();
        this->mUnk_45 = false;
    }
}
