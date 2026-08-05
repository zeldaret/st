//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCASE.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorRef.hpp"
#include "MapObject/MapObjectProfile_Derived2_20.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "nitro/fx.h"
#include "nitro/math.h"
#include "nns/g3d/g3d.h"

extern const void *data_ov063_02162558;
extern const void *data_ov063_02162568;

extern "C" void func_ov000_0207b70c(ActorUnkCASE_174 *param1, Actor *param2);

DECL_PROFILE(ActorProfileUnkCASE);

Actor *ActorProfileUnkCASE::Create() {
    return new(HeapIndex_2) ActorUnkCASE();
}

ActorProfileUnkCASE::ActorProfileUnkCASE() :
    ActorProfile_Derived1(ActorId_CASE) {
    VecFx32_Init(0, 0x666, 0, &mUnk_04.pos);
    mUnk_04.size = 0x800;
}

UnkStruct_ov000_020b19f0::UnkStruct_ov000_020b19f0(G3d_Model *pModel) :
    ModelRender(pModel) {}

UnkStruct_ov000_020b3268::UnkStruct_ov000_020b3268(G3d_Model *pModel) :
    UnkStruct_ov000_020b19f0(pModel) {}

UnkStruct_ov063_021631a0::UnkStruct_ov063_021631a0(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(ModelRender::func_ov000_02057f18(&data_ov063_02162568)) {}

ActorUnkCASE_150::ActorUnkCASE_150(Actor *param1) :
    Actor_C4(param1, 1) {
    mUnk_20 = param1;
    mUnk_04 = 1;
}

ActorUnkCASE_174::ActorUnkCASE_174(Actor *param1) {
    mUnk_04 = 0;
    mUnk_2C = param1;
}

void ActorUnkCASE_174::vfunc_10(Actor *actor) {
    ((ActorUnkCASE *) mUnk_2C)->func_ov063_0215b724();
    func_ov000_0207b70c(this, actor);
}

ActorUnkCASE::ActorUnkCASE() :
    mUnk_0B0(G3d_GetModelPtr(((MapObjectProfile_Derived2_20 *) GET_PROFILE(ActorProfileUnkCASE)->vfunc_04())->mUnk_50)),
    mUnk_120(0),
    mUnk_124(this),
    mUnk_14C(NULL),
    mUnk_150(this),
    mUnk_174(this),
    mUnk_1C8(0),
    mUnk_1CC(0),
    mUnk_1D0(0),
    mUnk_1D4(0),
    mUnk_1D8(0),
    mUnk_1DC(0),
    mUnk_1E0(0),
    mUnk_1E4(0),
    mUnk_1F4(0) {
    UNSET_FLAG(mFlags, ActorFlag_6);
    mUnk_40 = &mUnk_150;
    // SET_FLAG(&mUnk_124.mUnk_04, ActorFlag_13);
    mUnk_124.mUnk_04 = 0 | (1 << ActorFlag_13); // doesn't match
    mUnk_124.mUnk_24 = 1;
    mUnk_38          = (Actor_38 *) &mUnk_1E8;
    mUnk_38->mUnk_08 = 4;
    mUnk_A8          = &data_ov063_02162558;
}

void ActorUnkCASE::vfunc_10(Cylinder *param1) {
    if (mUnk_14C != NULL) {
        ((ActorUnkCASE *) mUnk_14C)->vfunc_10(param1);
        return;
    }
    VecFx32_Copy(&mPos, &param1->pos); // doesn't match
    param1->size = 0x800;
}

bool ActorUnkCASE::vfunc_18(unk32 param1) {}
void ActorUnkCASE::vfunc_20() {}

void ActorUnkCASE::vfunc_24() {
    u32 state = mState;
    if (state != 1 && state != 2) {
        return;
    }
    this->vfunc_20();
}

void ActorUnkCASE::vfunc_2C(unk32 param1) {}

void ActorUnkCASE::func_ov063_0215ab70(void) {}
void ActorUnkCASE::func_ov063_0215aba4(void) {}
void ActorUnkCASE::func_ov063_0215abd8(void) {}
void ActorUnkCASE::func_ov063_0215ac4c(void) {}
void ActorUnkCASE::func_ov063_0215ac68(void) {}
void ActorUnkCASE::func_ov063_0215ac8c(void) {}
void ActorUnkCASE::func_ov063_0215acc8(void) {}
void ActorUnkCASE::func_ov063_0215acec(ActorRef *ref1, ActorRef ref2) {};
void ActorUnkCASE::func_ov063_0215ae6c(void) {}
void ActorUnkCASE::func_ov063_0215ae80(void) {}
void ActorUnkCASE::func_ov063_0215aefc(void) {}
void ActorUnkCASE::func_ov063_0215af54(void) {}
void ActorUnkCASE::func_ov063_0215af58(void) {}
void ActorUnkCASE::func_ov063_0215af5c(void) {}
void ActorUnkCASE::func_ov063_0215af60(void) {}
void ActorUnkCASE::func_ov063_0215afa4(void) {}
void ActorUnkCASE::func_ov063_0215afb8(void) {}
void ActorUnkCASE::func_ov063_0215b054(void) {}
void ActorUnkCASE::func_ov063_0215b090(void) {}
void ActorUnkCASE::func_ov063_0215b1bc(void) {}
void ActorUnkCASE::func_ov063_0215b244(void) {}
void ActorUnkCASE::func_ov063_0215b2b0(void) {}
void ActorUnkCASE::func_ov063_0215b2c4(void) {}
void ActorUnkCASE::func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle) {}
void ActorUnkCASE::func_ov063_0215b724(void) {}
void ActorUnkCASE::func_ov063_0215b814(void) {}
void ActorUnkCASE::func_ov063_0215b854(void) {}
void ActorUnkCASE::func_ov063_0215b8e8(void) {}
void ActorUnkCASE::func_ov063_0215b99c(void) {}
void ActorUnkCASE::func_ov063_0215ba64(void) {}

ActorUnkCASE::~ActorUnkCASE() {}
ActorProfileUnkCASE::~ActorProfileUnkCASE() {}
