//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCASE.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorRef.hpp"
#include "MapObject/MapObjectProfile_Derived2_20.hpp"
#include "Render/ModelRender.hpp"
#include "System/SysNew.hpp"
#include "nitro/fx.h"
#include "nns/g3d/g3d.h"

extern const void *data_ov063_02162568;

DECL_PROFILE(ActorProfileUnkCASE);

Actor *ActorProfileUnkCASE::Create() {
    return new(HeapIndex_2) ActorUnkCASE();
}

ActorProfileUnkCASE::ActorProfileUnkCASE() :
    ActorProfile_Derived1(ActorId_CASE) {}

UnkStruct_ov000_020b19f0::UnkStruct_ov000_020b19f0(G3d_Model *pModel) :
    ModelRender(pModel) {}

UnkStruct_ov000_020b3268::UnkStruct_ov000_020b3268(G3d_Model *pModel) :
    UnkStruct_ov000_020b19f0(pModel) {}

UnkStruct_ov063_021631a0::UnkStruct_ov063_021631a0(G3d_Model *pModel) :
    UnkStruct_ov000_020b3268(pModel),
    mUnk_6C(ModelRender::func_ov000_02057f18(&data_ov063_02162568)) {}
UnkStruct_ov063_021631a0::~UnkStruct_ov063_021631a0() {}

ActorUnkCASE_150::ActorUnkCASE_150(Actor *param1) :
    Actor_C4(param1) {
    mUnk_20 = param1;
    mUnk_04 = 1;
}

ActorUnkCASE_174::ActorUnkCASE_174(Actor *param1) {
    mUnk_04 = 0;
    mUnk_2C = param1;
}
ActorUnkCASE_174::~ActorUnkCASE_174() {}

void ActorUnkCASE_174::vfunc_10(Actor *actor) {}

ActorUnkCASE::ActorUnkCASE() :
    mUnk_0B0(G3d_GetModelPtr(((MapObjectProfile_Derived2_20 *) GET_PROFILE(ActorProfileUnkCASE)->vfunc_04())->mUnk_50)),
    mUnk_120(0),
    mUnk_124(this),
    mUnk_14C(0),
    mUnk_150(this),
    mUnk_174(this),
    mUnk_1C8(0),
    mUnk_1CC(0),
    mUnk_1D0(0),
    mUnk_1D4(0),
    mUnk_1D8(0),
    mUnk_1DC(0),
    mUnk_1E0(0),
    mUnk_1E4(0) {}

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
void ActorUnkCASE::func_ov063_0215ae94(void) {}
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
void ActorUnkCASE::func_ov063_0215b2c8(void) {}
void ActorUnkCASE::func_ov063_0215b2ec(void) {}
void ActorUnkCASE::func_ov063_0215b624(void) {}
void ActorUnkCASE::func_ov063_0215b6c8(VecFx32 *param1, UnkAngleStruct angle) {}
void ActorUnkCASE::func_ov063_0215b724(void) {}
void ActorUnkCASE::func_ov063_0215b7cc(void) {}
void ActorUnkCASE::func_ov063_0215b814(void) {}
void ActorUnkCASE::func_ov063_0215b854(void) {}
void ActorUnkCASE::func_ov063_0215b8e8(void) {}
void ActorUnkCASE::func_ov063_0215b99c(void) {}
void ActorUnkCASE::func_ov063_0215ba64(void) {}
void ActorUnkCASE::func_ov063_0215bab0(void) {}

ActorUnkCASE::~ActorUnkCASE() {}
ActorProfileUnkCASE::~ActorProfileUnkCASE() {}
