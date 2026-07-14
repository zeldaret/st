//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC4.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMC4);

Actor *ActorProfileUnkRMC4::Create() {
    return new(HeapIndex_2) ActorUnkRMC4();
}

ActorProfileUnkRMC4::ActorProfileUnkRMC4() :
    ActorProfile_Derived1(ActorId_RMC4) {}

ActorUnkRMC4::ActorUnkRMC4() {}

void ActorUnkRMC4::func_ov060_0215e680(void) {}
void ActorUnkRMC4::func_ov060_0215e684(void) {}

ActorUnkRMC4::~ActorUnkRMC4() {}
ActorProfileUnkRMC4::~ActorProfileUnkRMC4() {}
