#include "Actor/ActorUnkMLCK.hpp"

#include "Actor/ActorManager.hpp"
#include "MainGame/AdventureMode.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b52e8.hpp"

extern "C" unk32 data_ov031_02110bec[];
extern "C" unk32 data_ov031_02112ad4;

DECL_PROFILE(ActorProfileUnkMLCK);

Actor *ActorProfileUnkMLCK::Create() {
    return new(HeapIndex_2) ActorUnkMLCK();
}

ActorProfileUnkMLCK::ActorProfileUnkMLCK() :
    ActorProfile(ActorId_MLCK) {}

ActorUnkMLCK::ActorUnkMLCK() :
    mUnk_B4(mUnk_A0) {}

bool ActorUnkMLCK::vfunc_18(unk32 param1) {
    this->mUnk_B8 = this->mUnk_5C.mParams[0];

    struct {
        void *ptr;
        unk32 actorId;
        unk32 param;
    } local_9c;
    local_9c.actorId = ActorId_MLCK;
    local_9c.param   = this->mUnk_5C.mParams[0];
    local_9c.ptr     = &data_ov031_02112ad4;
    Actor **lppActor = gpActorManager->func_01fff350(&local_9c, gpActorManager->mActorTable);

    if (gpActorManager->mUnk_08 != lppActor) {
        return false;
    }
    void *param = this;
    if (param != NULL) {
        param = &this->mUnk_94;
    }
    data_0204a088->func_ov000_020611dc(param, 0x9);
    bool var1 = true;
    if (!((u16) gpMiscAdvManager->mSongs & (1 << this->mUnk_B8))) {
        var1 = false;
    }
    bool var2;
    if (var1 == false) {
        var2 = false;
    } else {
        var2 = true;
    }

    this->mUnk_B4 = this->mUnk_A0;
    this->mUnk_F2 = var2;
    this->vfunc_64(0x0);
    return true;
}

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
    for (ActorUnkMLCK_B4 *ptr = this->mUnk_A0; ptr != this->mUnk_B4; ++ptr) {
        ptr->mUnk_00->vfunc_00();
    }
}

void ActorUnkMLCK::vfunc_70() {
    if (this->mUnk_5C.mUnk_1A[0] == 0x0) {
        return;
    }
    this->func_ov000_02098a88(0x0, 0x0);
}

// non-matching
void ActorUnkMLCK::func_ov031_020faf24() {}

void ActorUnkMLCK::func_ov031_020fb104() {
    this->vfunc_64(0x3);
}

// non-matching
void ActorUnkMLCK::func_ov031_020fb11c() {
    this->vfunc_6C();
    data_027e0d34->func_ov031_020d996c();
    this->vfunc_64(0x0);
    for (ActorUnkMLCK_B4 *ptr = this->mUnk_A0; ptr != this->mUnk_B4; ++ptr) {
        ptr->mUnk_00->vfunc_08();
    }
}

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

void ActorUnkMLCK::func_ov031_020fb1e8(ActorUnkMLCK_B4_00 *param1) {
    if (this->mUnk_B4 != NULL) {
        this->mUnk_B4->mUnk_00 = param1;
    }
    ++this->mUnk_B4;
}

// non-matching
void ActorUnkMLCK::func_ov031_020fb204() {}

ActorUnkMLCK::~ActorUnkMLCK() {}
ActorProfileUnkMLCK::~ActorProfileUnkMLCK() {}
