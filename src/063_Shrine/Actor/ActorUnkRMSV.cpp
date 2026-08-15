//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSV.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorId.hpp"
#include "Actor/ActorUnkRMSW.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "MapObject/MapObjectTreasureSpawned.hpp"
#include "nns/g3d/g3d.h"

char data_ov063_02162578[0x10]; // = "RMSV";
char data_ov063_02162588[0x10]; // = "RMSV_wall";

ActorUnkZLSL_AnimationTag data_ov063_021632ac = {0, "RMSV"};
ActorUnkZLSL_AnimationTag data_ov063_021632c4 = {1, "RMSV"};

extern "C" void func_ov000_02099ff8(unk32 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param8);
extern "C" void func_ov000_02099e58(unk32 *param1, ActorUnkZLSL_AnimationTag param2, unk32 param8);
extern "C" bool func_ov063_0215bb34(ActorUnkRMSV *);

DECL_PROFILE(ActorProfileUnkRMSV);

Actor *ActorProfileUnkRMSV::Create() {
    return new(HeapIndex_2) ActorUnkRMSV();
}

ActorProfileUnkRMSV::ActorProfileUnkRMSV() :
    ActorProfile_Derived1(ActorId_RMSV) {}

ActorUnkRMSV::ActorUnkRMSV() {}

bool ActorUnkRMSV::vfunc_18(unk32 param1) {
    bool res = func_ov063_0215bb34(this);
    ((UnkStruct_ov000_020b31a8 *) &this->mUnk_158)->func_ov000_02099ff8(data_ov063_021632ac, 0x1000);
    func_ov000_02099e58(&this->mUnk_1D4, data_ov063_021632c4, 0x1000);
    ((MapObjectTreasureSpawned *) &this->mUnk_1D4)->vfunc_3C(); //! WARN: NOT a MapObjectTreasureSpawned
    return res;
}

void ActorUnkRMSV::vfunc_20(void) {
    (*(Actor *) &this->mUnk_158).vfunc_34(); // Not an Actor
    (*(Actor *) &this->mUnk_1D4).vfunc_34(); // Not an Actor
}

void ActorUnkRMSV::vfunc_24(void) {
    this->vfunc_20();
}

G3d_Model *ActorUnkRMSV::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSV)->mUnk_3C, data_ov063_02162578);
}

G3d_Model *ActorUnkRMSV::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSV)->mUnk_3C, data_ov063_02162588);
}

void ActorUnkRMSV::func_ov063_0215bd44(void) {}
void ActorUnkRMSV::func_ov063_0215bdec(void) {}
void ActorUnkRMSV::func_ov063_0215bed0(void) {}
void ActorUnkRMSV::func_ov063_0215bee0(void) {}

ActorUnkRMSV::~ActorUnkRMSV() {}
ActorProfileUnkRMSV::~ActorProfileUnkRMSV() {}
