//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC4.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMC4);

ARM Actor *ActorProfileUnkRMC4::Create() {
    return new(HeapIndex_2) ActorUnkRMC4();
}

ARM ActorProfileUnkRMC4::ActorProfileUnkRMC4() :
    ActorProfile_Derived1(ActorId_RMC4) {}

ARM ActorUnkRMC4::ActorUnkRMC4() {}

ARM void ActorUnkRMC4::func_ov060_0215e680(void) {}
ARM void ActorUnkRMC4::func_ov060_0215e684(void) {}

ARM ActorUnkRMC4::~ActorUnkRMC4() {}
ARM ActorProfileUnkRMC4::~ActorProfileUnkRMC4() {}
