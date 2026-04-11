//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC1.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMC1 sActorProfileUnkRMC1;

ARM ActorProfileUnkRMC1 *ActorProfileUnkRMC1::GetProfile() {
    return &sActorProfileUnkRMC1;
}

ARM Actor *ActorProfileUnkRMC1::Create() {
    return new(HeapIndex_2) ActorUnkRMC1();
}

ARM ActorProfileUnkRMC1::ActorProfileUnkRMC1() :
    ActorProfile_Derived1(ActorId_RMC1) {}

ARM ActorUnkRMC1::ActorUnkRMC1() {}

ARM void ActorUnkRMC1::func_ov060_0215d900(void) {}

ARM ActorUnkRMC1::~ActorUnkRMC1() {}
ARM ActorProfileUnkRMC1::~ActorProfileUnkRMC1() {}
