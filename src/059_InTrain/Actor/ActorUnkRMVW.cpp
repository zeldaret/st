//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMVW.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMVW sActorProfileUnkRMVW;

ARM ActorProfileUnkRMVW *ActorProfileUnkRMVW::GetProfile() {
    return &sActorProfileUnkRMVW;
}

ARM Actor *ActorProfileUnkRMVW::Create() {
    return new(HeapIndex_2) ActorUnkRMVW();
}

ARM ActorProfileUnkRMVW::ActorProfileUnkRMVW() :
    ActorProfile_Derived1(ActorId_RMVW) {}

ARM ActorUnkRMVW::ActorUnkRMVW() {}

ARM void ActorUnkRMVW::func_ov059_021622c0(void) {}
ARM void ActorUnkRMVW::func_ov059_02162360(void) {}
ARM void ActorUnkRMVW::func_ov059_0216238c(void) {}
ARM void ActorUnkRMVW::func_ov059_021623dc(void) {}

ARM ActorUnkRMVW::~ActorUnkRMVW() {}
ARM ActorProfileUnkRMVW::~ActorProfileUnkRMVW() {}
