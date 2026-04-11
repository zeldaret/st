//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC6.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMC6 sActorProfileUnkRMC6;

ARM ActorProfileUnkRMC6 *ActorProfileUnkRMC6::GetProfile() {
    return &sActorProfileUnkRMC6;
}

ARM Actor *ActorProfileUnkRMC6::Create() {
    return new(HeapIndex_2) ActorUnkRMC6();
}

ARM ActorProfileUnkRMC6::ActorProfileUnkRMC6() :
    ActorProfile_Derived1(ActorId_RMC6) {}

ARM ActorUnkRMC6::ActorUnkRMC6() {}

ARM void ActorUnkRMC6::func_ov060_0215e104(void) {}
ARM void ActorUnkRMC6::func_ov060_0215e108(void) {}

ARM ActorUnkRMC6::~ActorUnkRMC6() {}
ARM ActorProfileUnkRMC6::~ActorProfileUnkRMC6() {}
