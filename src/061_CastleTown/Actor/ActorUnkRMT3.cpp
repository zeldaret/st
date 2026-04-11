//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT3.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMT3 sActorProfileUnkRMT3;

ARM ActorProfileUnkRMT3 *ActorProfileUnkRMT3::GetProfile() {
    return &sActorProfileUnkRMT3;
}

ARM Actor *ActorProfileUnkRMT3::Create() {
    return new(HeapIndex_2) ActorUnkRMT3();
}

ARM ActorProfileUnkRMT3::ActorProfileUnkRMT3() :
    ActorProfile_Derived1(ActorId_RMT3) {}

ARM ActorUnkRMT3::ActorUnkRMT3() {}

ARM void ActorUnkRMT3::func_ov061_021583d0(void) {}

ARM ActorUnkRMT3::~ActorUnkRMT3() {}
ARM ActorProfileUnkRMT3::~ActorProfileUnkRMT3() {}
