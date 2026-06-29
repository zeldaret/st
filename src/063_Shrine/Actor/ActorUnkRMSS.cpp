//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSS.hpp"
#include "System/SysNew.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

extern char data_ov063_021625f8[0x10]; // =
extern char data_ov063_02162608[0x10]; // =

DECL_PROFILE(ActorProfileUnkRMSS);

Actor *ActorProfileUnkRMSS::Create() {
    return new(HeapIndex_2) ActorUnkRMSS();
}

ActorProfileUnkRMSS::ActorProfileUnkRMSS() :
    ActorProfile_Derived1(ActorId_RMSS) {}

ActorUnkRMSS::ActorUnkRMSS() {}

G3d_Model *ActorUnkRMSS::vfunc_54(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSS)->mUnk_3C, data_ov063_02162608);
}

G3d_Model *ActorUnkRMSS::vfunc_58(void) {
    return GetModelFromProfile3(&GET_PROFILE(ActorProfileUnkRMSS)->mUnk_3C, data_ov063_021625f8);
}

ActorUnkRMSS::~ActorUnkRMSS() {}
ActorProfileUnkRMSS::~ActorProfileUnkRMSS() {}
