//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMVS);

ARM Actor *ActorProfileUnkRMVS::Create() {
    return new(HeapIndex_2) ActorUnkRMVS();
}

ARM ActorProfileUnkRMVS::ActorProfileUnkRMVS() :
    ActorProfile_Derived1(ActorId_RMVS) {}

ARM ActorUnkRMVS::ActorUnkRMVS() {}

ARM void ActorUnkRMVS::func_ov059_02162008(void) {}
ARM void ActorUnkRMVS::func_ov059_021620a8(void) {}
ARM void ActorUnkRMVS::func_ov059_021620d4(void) {}
ARM void ActorUnkRMVS::func_ov059_02162124(void) {}

ARM ActorUnkRMVS::~ActorUnkRMVS() {}
ARM ActorProfileUnkRMVS::~ActorProfileUnkRMVS() {}
