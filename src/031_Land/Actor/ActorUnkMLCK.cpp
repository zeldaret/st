#include "Actor/ActorUnkMLCK.hpp"

#include "Actor/ActorManager.hpp"
#include "MainGame/AdventureMode.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"
#include "Unknown/UnkStruct_ov000_020b3000.hpp"
#include "Unknown/UnkStruct_ov000_020b51b8.hpp"
#include "Unknown/UnkStruct_ov000_020b52e8.hpp"
#include "nitro/math.h"

extern "C" unk32 data_ov031_02110bec[];

struct UnkStruct_ov031_02114d28 {
    /* 00 */ u32 mUnk_00;
    /* 04 */ u32 mUnk_04;
    /* 08 */ u32 mUnk_08;

    UnkStruct_ov031_02114d28() {
        this->mUnk_00 = 0x10002;
        this->mUnk_08 = 0x10006;
        this->mUnk_04 = 0x10009;
    }
};
static const UnkStruct_ov031_02114d28 data_ov031_02114d28;

DECL_PROFILE(ActorProfileUnkMLCK);

Actor *ActorProfileUnkMLCK::Create() {
    return new(HeapIndex_2) ActorUnkMLCK();
}

ActorProfileUnkMLCK::ActorProfileUnkMLCK() :
    ActorProfile(ActorId_MLCK) {}

ActorUnkMLCK::ActorUnkMLCK() :
    mUnk_B4(mUnk_A0),
    mUnk_BC(0x4),
    mUnk_C0(0x0),
    mUnk_C2(0x0),
    mUnk_D8(this),
    mUnk_E4(this),
    mUnk_F0(false),
    mUnk_F1(false),
    mUnk_F2(false),
    mUnk_F3(true),
    mUnk_F4(-1) {}

bool ActorUnkMLCK::vfunc_18(unk32 param1) {
    this->mUnk_B8 = this->mUnk_5C.mParams[0];

    UnkStruct_ov031_02112ad4 local_9c(ActorId_MLCK, this->mUnk_5C.mParams[0]);
    Actor **lppActor = gpActorManager->func_01fff350(&local_9c, gpActorManager->mActorTable);

    if (gpActorManager->mUnk_08 != lppActor) {
        return false;
    }

    data_0204a088->func_ov000_020611dc(this, 0x09);

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

// non-matching
void ActorUnkMLCK::vfunc_64(unk32 param1) {
    this->mUnk_BC = param1;
    this->mUnk_C2 = 0xFFFF;
    this->mUnk_C0 = 0x0;

    if (param1 == 0x1) {
        this->mUnk_F1         = false;
        this->mUnk_C4.mUnk_00 = data_ov000_020b52e8.func_ov000_0206f980(this->mUnk_B8);
        this->mUnk_C4.func_ov031_020fb184();
    }
}

void ActorUnkMLCK::vfunc_54(unk32 param1, unk32 param2) {
    if (param2 != 0) {
        this->vfunc_64(0x1);
    }
}

void ActorUnkMLCK::vfunc_58(unk32 param1, unk32 param2) {
    this->mUnk_F0 = true;
}

void ActorUnkMLCK::vfunc_5C(unk32 param1) {
    if (this->mUnk_F1 && this->mUnk_F0) {
        data_027e0d34->func_ov031_020d994c();
        data_ov000_020b51b8.func_ov000_0206d274(data_ov031_02110bec[this->mUnk_B8]);
        this->mUnk_F0 = false;
    }
}

void ActorUnkMLCK::vfunc_60() {
    this->vfunc_64(0x0);
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
    } else {
        this->vfunc_6C();
    }
}

void ActorUnkMLCK::func_ov031_020faeb0() {}

void ActorUnkMLCK::vfunc_6C() {
    if (this->mUnk_5C.mUnk_1A[0] != 0x0) {
        this->func_ov000_02098a88(0x0, 0x1);
    }

    for (ActorUnkMLCK_A0 **ptr = this->mUnk_A0; ptr != this->mUnk_B4; ptr++) {
        (*ptr)->vfunc_00();
    }
}

void ActorUnkMLCK::vfunc_70() {
    if (this->mUnk_5C.mUnk_1A[0] != 0x0) {
        this->func_ov000_02098a88(0x0, 0x0);
    }
}

void ActorUnkMLCK::func_ov031_020faf24() {
    if (this->mUnk_C0 != 0xF) {
        return;
    }

    if (this->mUnk_F2 == 0) {
        return;
    }

    bool temp_r7 = this->func_ov031_020fb204(this->mUnk_B8);
    data_0204a088->func_ov000_020611fc(1);
    GetAdventureModeManager()->func_ov024_020c6d10();

    UnkStackStruct1 sp0;
    func_ov000_02072fd0(&sp0);
    sp0.mUnk_00 = 1;
    sp0.mUnk_3A = 0;
    sp0.mUnk_3B = 0;

    VecFx32_Copy(data_027e0ce0->func_01fff148(0), &sp0.mUnk_0C);

    this->mUnk_F4          = data_027e09b8->func_ov000_02073388(&sp0, 0);
    this->mUnk_D8.mUnk_04b = true;
    this->mUnk_D8.mUnk_05  = temp_r7;

    u16 temp_r8 = this->mUnk_B8 + 0x28;
    ActorUnk_vfunc_B0 sp8C;
    sp8C.mUnk_00 = true;
    sp8C.mUnk_0C = temp_r8 | 0x10000;
    sp8C.mUnk_14 = 0;
    sp8C.mUnk_32 = 0;

    VecFx32_Copy(data_027e0ce0->func_01fff148(0), &sp8C.mUnk_34);
    sp8C.mUnk_04 = &this->mUnk_D8;

    data_027e09b8->func_ov000_02073470(&sp8C, 0);

    if (temp_r7 == 0) {
        this->mUnk_E4.mUnk_04b = 0;
        this->mUnk_E4.mUnk_05  = temp_r7 == 0;

        ActorUnk_vfunc_B0 sp40;
        sp40.mUnk_00 = true;
        sp40.mUnk_0C = (u16) (this->mUnk_B8 + 0x88) | 0x10000;
        sp40.mUnk_14 = 0;
        sp40.mUnk_32 = 0;
        VecFx32_Copy(data_027e0ce0->func_01fff148(0), &sp40.mUnk_34);
        sp40.mUnk_04 = &this->mUnk_E4;
        data_027e09b8->func_ov000_02073470(&sp40, 0);
    }

    this->mUnk_F0 = false;
    this->mUnk_F1 = true;
}

void ActorUnkMLCK::func_ov031_020fb104() {
    this->vfunc_64(0x3);
}

void ActorUnkMLCK::func_ov031_020fb11c() {
    this->vfunc_6C();
    data_027e0d34->func_ov031_020d996c();
    this->vfunc_64(0x0);

    for (ActorUnkMLCK_A0 **ptr = this->mUnk_A0; ptr != this->mUnk_B4; ptr++) {
        (*ptr)->vfunc_08();
    }
}

void ActorUnkMLCK_C4::func_ov031_020fb184() {
    this->mUnk_04 = 0;
    this->mUnk_08 = -1;
    this->mUnk_0E = -1;
    this->mUnk_0C = 0;
    this->mUnk_12 = -1;
    this->mUnk_10 = 0;
}

void ActorUnkMLCK_D8::vfunc2_00() {
    if (this->mUnk_04b) {
        this->mUnk_08->func_ov031_020fb104();
    }
}

void ActorUnkMLCK_D8::vfunc2_04() {
    if (this->mUnk_05) {
        this->mUnk_08->func_ov031_020fb11c();
    }
}

void ActorUnkMLCK::func_ov031_020fb1e8(ActorUnkMLCK_A0 *param1) {
    if (this->mUnk_B4 != NULL) {
        *this->mUnk_B4 = param1;
    }

    this->mUnk_B4++;
}

bool ActorUnkMLCK::func_ov031_020fb204(unk32 param1) {
    for (ActorUnkMLCK_A0 **ptr = this->mUnk_A0; ptr != this->mUnk_B4; ptr++) {
        if ((*ptr)->vfunc_04()) {
            return true;
        }
    }

    return false;
}
