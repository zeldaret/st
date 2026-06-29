//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSW.hpp"
#include "nns/g3d/g3d.h"

char data_ov063_02162598[0x10]; // = "RMSW_wall";
char data_ov063_021625a8[0x10]; // = "RMSW";

DECL_PROFILE(ActorProfileUnkRMSW);

Actor *ActorProfileUnkRMSW::Create() {
    return new(HeapIndex_2) ActorUnkRMSW();
}

ActorProfileUnkRMSW::ActorProfileUnkRMSW() :
    ActorProfile_Derived1(ActorId_RMSW) {}

ActorUnkRMSW::ActorUnkRMSW() {}

void ActorUnkRMSW::vfunc_18(void) {}

void ActorUnkRMSW::vfunc_20(void) {
    (*(Actor *) &this->mUnk_158).vfunc_34(); // Not an Actor
}

void ActorUnkRMSW::vfunc_24(void) {
    this->vfunc_20();
}

G3d_Model *ActorUnkRMSW::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSW)->mUnk_3C, data_ov063_021625a8);
}

G3d_Model *ActorUnkRMSW::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSW)->mUnk_3C, data_ov063_02162598);
}

ActorUnkRMSW::~ActorUnkRMSW() {}
ActorProfileUnkRMSW::~ActorProfileUnkRMSW() {}
