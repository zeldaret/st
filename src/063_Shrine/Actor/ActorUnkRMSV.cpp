//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSV.hpp"
#include "nns/g3d/g3d.h"

char data_ov063_02162578[0x10]; // = "RMSV";
char data_ov063_02162588[0x10]; // = "RMSV_wall";

DECL_PROFILE(ActorProfileUnkRMSV);

Actor *ActorProfileUnkRMSV::Create() {
    return new(HeapIndex_2) ActorUnkRMSV();
}

ActorProfileUnkRMSV::ActorProfileUnkRMSV() :
    ActorProfile_Derived1(ActorId_RMSV) {}

ActorUnkRMSV::ActorUnkRMSV() {}

void ActorUnkRMSV::vfunc_18(void) {}

void ActorUnkRMSV::vfunc_20(void) {}

void ActorUnkRMSV::vfunc_24(void) {
    this->vfunc_20();
}

void ActorUnkRMSV::vfunc_50(void) {}

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
