//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC5.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMC5 sActorProfileUnkRMC5;

ARM ActorProfileUnkRMC5 *ActorProfileUnkRMC5::GetProfile() {
    return &sActorProfileUnkRMC5;
}

ARM Actor *ActorProfileUnkRMC5::Create() {
    return new(HeapIndex_2) ActorUnkRMC5();
}

ARM ActorProfileUnkRMC5::ActorProfileUnkRMC5() :
    ActorProfile_Derived1(ActorId_RMC5) {}

ARM ActorUnkRMC5::ActorUnkRMC5() {}

ARM void ActorUnkRMC5::func_ov060_0215e7fc(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e800(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e884(void) {}
ARM void ActorUnkRMC5::func_ov060_0215e898(void) {}

ARM ActorUnkRMC5::~ActorUnkRMC5() {}
ARM ActorProfileUnkRMC5::~ActorProfileUnkRMC5() {}
