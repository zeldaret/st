//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC3.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMC3 sActorProfileUnkRMC3;

ARM ActorProfileUnkRMC3 *ActorProfileUnkRMC3::GetProfile() {
    return &sActorProfileUnkRMC3;
}

ARM Actor *ActorProfileUnkRMC3::Create() {
    return new(HeapIndex_2) ActorUnkRMC3();
}

ARM ActorProfileUnkRMC3::ActorProfileUnkRMC3() :
    ActorProfile_Derived1(ActorId_RMC3) {}

ARM ActorUnkRMC3::ActorUnkRMC3() {}

ARM void ActorUnkRMC3::func_ov060_0215e308(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e31c(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e4b0(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e4c8(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e4dc(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e51c(void) {}
ARM void ActorUnkRMC3::func_ov060_0215e5a4(void) {}

ARM ActorUnkRMC3::~ActorUnkRMC3() {}
ARM ActorProfileUnkRMC3::~ActorProfileUnkRMC3() {}
