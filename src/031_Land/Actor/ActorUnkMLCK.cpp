#include "Actor/ActorUnkMLCK.hpp"

#include "MainGame/AdventureMode.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b52e8.hpp"

extern "C" unk32 data_ov031_02110bec[];

DECL_PROFILE(ActorProfileUnkMLCK);

Actor *ActorProfileUnkMLCK::Create() {
    return new(HeapIndex_2) ActorUnkMLCK();
}

ActorProfileUnkMLCK::ActorProfileUnkMLCK() :
    ActorProfile(ActorId_MLCK) {}

ActorUnkMLCK::ActorUnkMLCK() {}

// non-matching
bool ActorUnkMLCK::vfunc_18(unk32 param1) {}

void ActorUnkMLCK::vfunc_54(unk32 param1, unk32 param2) {
    if (!param2) {
        return;
    }
    this->vfunc_64(0x1);
}

void ActorUnkMLCK::vfunc_58() {
    this->mUnk_F0 = true;
}

void ActorUnkMLCK::vfunc_5C() {
    if (!this->mUnk_F1 || !this->mUnk_F0) {
        return;
    }
    data_027e0d34->func_ov031_020d994c();
    data_ov000_020b51b8.func_ov000_0206d274(data_ov031_02110bec[this->mUnk_B8]);
    this->mUnk_F0 = false;
}

void ActorUnkMLCK::vfunc_60() {
    this->vfunc_64(0x0);
}

// non-matching
void ActorUnkMLCK::vfunc_64(unk32 param1) {
    this->mUnk_BC = param1;
    this->mUnk_C2 = 0xFFFF;
    this->mUnk_C0 = 0x0;
    if (param1 != 0x1) {
        return;
    }

    this->mUnk_F1 = false;
    this->mUnk_C4 = data_ov000_020b52e8.func_ov000_0206f980(this->mUnk_B8);
    this->mUnk_C4->func_ov031_020fb184();
}

void ActorUnkMLCK::vfunc_68() {
    if (data_0204a088->mUnk_04 != -1 || data_0204a088->mUnk_08 != -1) {
        return;
    }
    if (this->mUnk_F2) {
        data_ov000_020b51b8.func_ov000_0206d274(0x83);
        GetAdventureModeManager()->func_ov024_020c6d04()->mUnk_C4 = 0x1;
        GetAdventureModeManager()->func_ov024_020c6d10();
        this->vfunc_64(0x2);
        return;
    }
    this->vfunc_6C();
}

// non-matching
void ActorUnkMLCK::func_ov031_020faeb0() {}

void ActorUnkMLCK::vfunc_6C() {
    if (this->mUnk_5C.mUnk_1A[0] != 0x0) {
        this->func_ov000_02098a88(0x0, 0x1);
    }
    for (ActorUnkMLCK_B4 *ptr = &this->mUnk_A0; ptr != this->mUnk_B4; ++ptr) {
        ptr->mUnk_00->vfunc_00();
    }
}

// non-matching
void ActorUnkMLCK::vfunc_70() {}
// non-matching
void ActorUnkMLCK::func_ov031_020faf24() {}

void ActorUnkMLCK::func_ov031_020fb104() {
    this->vfunc_64(0x3);
}

// non-matching
void ActorUnkMLCK::func_ov031_020fb11c() {}
// non-matching
void ActorUnkMLCK::func_ov031_020fb184() {}

void ActorUnkMLCK_D8::vfunc2_00() {
    if (!this->mUnk_04) {
        return;
    }
    this->mUnk_08->func_ov031_020fb104();
}

void ActorUnkMLCK_D8::vfunc2_04() {
    if (!this->mUnk_05) {
        return;
    }
    this->mUnk_08->func_ov031_020fb11c();
}

void ActorUnkMLCK::func_ov031_020fb1e8(unk32 param1) {
    if (this->mUnk_B4 != NULL) {
        this->mUnk_B4->mUnk_00 = (ActorUnkMLCK_B4_00 *) param1;
    }
    ++this->mUnk_B4;
}

// non-matching
void ActorUnkMLCK::func_ov031_020fb204() {}

ActorUnkMLCK::~ActorUnkMLCK() {}
ActorProfileUnkMLCK::~ActorProfileUnkMLCK() {}
