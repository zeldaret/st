//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC1.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMC1);

Actor *ActorProfileUnkRMC1::Create() {
    return new(HeapIndex_2) ActorUnkRMC1();
}

ActorProfileUnkRMC1::ActorProfileUnkRMC1() :
    ActorProfile_Derived1(ActorId_RMC1) {}

ActorUnkRMC1::ActorUnkRMC1() {}

void ActorUnkRMC1::func_ov060_0215d900(void) {}

ActorUnkRMC1::~ActorUnkRMC1() {}
ActorProfileUnkRMC1::~ActorProfileUnkRMC1() {}
