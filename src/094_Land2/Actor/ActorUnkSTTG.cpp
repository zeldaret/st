#include "Actor/ActorUnkSTTG.hpp"
#include "Actor/Actor.hpp"
#include "CommonFuncs.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/fx/consts.h"
#include "nitro/math.h"
#include "nitro/mi.h"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

DECL_PROFILE(ActorProfileUnkSTTG);

Actor *ActorProfileUnkSTTG::Create() {
    return new(HeapIndex_2) ActorUnkSTTG();
}

ActorProfileUnkSTTG::ActorProfileUnkSTTG() :
    ActorProfile_Derived1(ActorId_STTG) {
    for (unk8 i = 0; i < 2; i++) {
        mUnk_16[i] = 2;
    }
}

extern VecFx32 data_027e07d4;

ActorUnkSTTG::ActorUnkSTTG() :
    mUnk_94(NULL),
    mUnk_F4(NULL),
    mUnk_10C(),
    mUnk_12C(this),
    mUnk_154(&data_027e07d4, 0),
    mUnk_164(data_027e07d4),
    mUnk_170(data_027e07d4),
    mUnk_17C(0),
    mUnk_180(0),
    mUnk_184(0),
    mUnk_188(0),
    mUnk_18A(0),
    mUnk_18C(0),
    mUnk_18E(0),
    mUnk_190(0),
    mUnk_192(0) {
    this->func_ov000_0209862c(4);
    SET_FLAG(mFlags, ActorFlag_9);
    MI_CpuFill32(0, &mUnk_130, 0x24);
    mUnk_F8  = 0;
    mUnk_FA  = 0;
    mUnk_100 = 0;
    mUnk_108 = 0;
    mUnk_FC  = 0x800;
    mUnk_104 = 0x1000;
}

extern const char data_ov094_02175f84[16 * 3]; // = {"target_high", "target_low", "target_goron"}

// non-matching (regalloc)
bool ActorUnkSTTG::Init(unk32 param1) {
#pragma unused(param1)
    mUnk_34          = &mUnk_154;
    mUnk_10C.mUnk_04 = 0x40;

    mUnk_94.vfunc_08(
        G3d_GetUnkPtr(GET_PROFILE(ActorProfileUnkSTTG)->vfunc_04()->mUnk_50, &data_ov094_02175f84[mUnk_5C.mParams[0] * 16]));
    mUnk_94.func_ov000_02057c38(4, 2);

    mUnk_F4  = this;
    mUnk_48  = 0;
    mUnk_180 = mUnk_5C.mParams[1] << 10;
    mUnk_17C = -FX_F32_TO_FX32(1.1f);
    UNSET_FLAG(mFlags, 1);

    this->func_ov000_0209862c(0);
    this->func_ov094_0216a760(0);
    return true;
}

unk32 ActorUnkSTTG::func_ov094_0216a5d4(UnkStruct_func_ov094_0216a5d4_0 *param1, UnkStruct_func_ov094_0216a5d4_1 *param2) {
    fx16 y = param2->vec.y;
    if (y > 0) {
        VecFx32 *vec = param1->vec;
        vec->x       = param2->vec.x;
        vec->y       = y;
        vec->z       = param2->vec.z;
    }
    return 1;
}

void ActorUnkSTTG::Setup(void) {}
void ActorUnkSTTG::func_ov094_0216a74c(void) {}

void ActorUnkSTTG::func_ov094_0216a760(ActorState state) {
    mState = state;
}

void ActorUnkSTTG::vfunc_24(void) {
    if (mState != 0) {
        return;
    }
    this->Update();
}

void ActorUnkSTTG::Update(void) {}

void ActorUnkSTTG::func_ov094_0216a84c(void) {
    if (this->func_ov094_0216ab34() != 0) {
        this->func_ov094_0216a760(1);
    }
}

void ActorUnkSTTG::func_ov094_0216a870(void) {}
void ActorUnkSTTG::func_ov094_0216a928(void) {}

void ActorUnkSTTG::func_ov094_0216aa78(void) {
    func_01ff916c(&mUnk_17C, -FX_F32_TO_FX32(1.1f), 0x400);

    VecFx32_Init(0, mUnk_17C + 0x99A, 0, &mUnk_154.center);
    MTX_MultVec33(&mUnk_154.center, &mUnk_130, &mUnk_154.center);

    this->func_ov094_0216aee8();

    if (mUnk_17C <= -FX_F32_TO_FX32(1.1f)) {
        UNSET_FLAG(mFlags, 0);
    }
}

void ActorUnkSTTG::vfunc_2C(unk32 param1) {
#pragma unused(param1)
    VecFx32 vec1, vec2;
    VecFx32_Init(FX32_ONE, FX32_ONE, FX32_ONE, &vec1);
    this->func_ov094_0216b150(&vec2, this);
    mUnk_94.vfunc_10(&vec1, &mUnk_130, &vec2);
}

unk32 ActorUnkSTTG::func_ov094_0216ab34(void) {}
void ActorUnkSTTG::func_ov094_0216ada8(void) {}

void ActorUnkSTTG::func_ov094_0216aec0(VecFx32 *vec, ActorUnkSTTG *actor) {
    VecFx32_Init(0, 0, FX32_ONE, vec);
    MTX_MultVec33(vec, &actor->mUnk_130, vec);
}

void ActorUnkSTTG::func_ov094_0216aee8(void) {}

void ActorUnkSTTG::func_ov094_0216b150(VecFx32 *vec, ActorUnkSTTG *actor) {
    VecFx32_Init(actor->mUnk_130._10, actor->mUnk_130._11, actor->mUnk_130._12, vec);
    func_01ff93c0(vec, actor->mUnk_17C);
    VEC_Add(vec, &actor->mPos, vec);
}

void ActorUnkSTTG::func_ov094_0216b1a4(void) {}
