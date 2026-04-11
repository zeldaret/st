//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT2.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMT2 sActorProfileUnkRMT2;

ARM ActorProfileUnkRMT2 *ActorProfileUnkRMT2::GetProfile() {
    return &sActorProfileUnkRMT2;
}

ARM Actor *ActorProfileUnkRMT2::Create() {
    return new(HeapIndex_2) ActorUnkRMT2();
}

ARM ActorProfileUnkRMT2::ActorProfileUnkRMT2() :
    ActorProfile_Derived1(ActorId_RMT2) {}

ARM ActorUnkRMT2::ActorUnkRMT2() {}

ARM void ActorUnkRMT2::func_ov061_021582ac(void) {}

ARM ActorUnkRMT2::~ActorUnkRMT2() {}
ARM ActorProfileUnkRMT2::~ActorProfileUnkRMT2() {}
