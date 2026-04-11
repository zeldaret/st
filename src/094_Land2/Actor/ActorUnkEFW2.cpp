//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFW2.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkEFW2 sActorProfileUnkEFW2;

ARM ActorProfileUnkEFW2 *ActorProfileUnkEFW2::GetProfile() {
    return &sActorProfileUnkEFW2;
}

ARM Actor *ActorProfileUnkEFW2::Create() {
    return new(HeapIndex_2) ActorUnkEFW2();
}

ARM ActorProfileUnkEFW2::ActorProfileUnkEFW2() :
    ActorProfile_Derived1(ActorId_EFW2) {}

ARM ActorUnkEFW2::ActorUnkEFW2() {}

ARM void ActorUnkEFW2::func_ov094_0217092c(void) {}
ARM void ActorUnkEFW2::func_ov094_021709c8(void) {}

ARM ActorUnkEFW2::~ActorUnkEFW2() {}
ARM ActorProfileUnkEFW2::~ActorProfileUnkEFW2() {}
