//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVV.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMVV sActorProfileUnkRMVV;

ARM ActorProfileUnkRMVV *ActorProfileUnkRMVV::GetProfile() {
    return &sActorProfileUnkRMVV;
}

ARM Actor *ActorProfileUnkRMVV::Create() {
    return new(HeapIndex_2) ActorUnkRMVV();
}

ARM ActorProfileUnkRMVV::ActorProfileUnkRMVV() :
    ActorProfile_Derived1(ActorId_RMVV) {}

ARM ActorUnkRMVV::ActorUnkRMVV() {}

ARM void ActorUnkRMVV::func_ov059_02162578(void) {}
ARM void ActorUnkRMVV::func_ov059_02162618(void) {}
ARM void ActorUnkRMVV::func_ov059_02162644(void) {}
ARM void ActorUnkRMVV::func_ov059_02162694(void) {}

ARM ActorUnkRMVV::~ActorUnkRMVV() {}
ARM ActorProfileUnkRMVV::~ActorProfileUnkRMVV() {}
