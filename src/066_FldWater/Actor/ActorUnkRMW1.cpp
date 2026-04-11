//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMW1.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMW1 sActorProfileUnkRMW1;

ARM ActorProfileUnkRMW1 *ActorProfileUnkRMW1::GetProfile() {
    return &sActorProfileUnkRMW1;
}

ARM Actor *ActorProfileUnkRMW1::Create() {
    return new(HeapIndex_2) ActorUnkRMW1();
}

ARM ActorProfileUnkRMW1::ActorProfileUnkRMW1() :
    ActorProfile_Derived1(ActorId_RMW1) {}

ARM ActorUnkRMW1::ActorUnkRMW1() {}

ARM void ActorUnkRMW1::func_ov066_0215c4bc(void) {}

ARM ActorUnkRMW1::~ActorUnkRMW1() {}
ARM ActorProfileUnkRMW1::~ActorProfileUnkRMW1() {}
