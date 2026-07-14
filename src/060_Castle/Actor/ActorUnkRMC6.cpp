//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMC6.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMC6);

Actor *ActorProfileUnkRMC6::Create() {
    return new(HeapIndex_2) ActorUnkRMC6();
}

ActorProfileUnkRMC6::ActorProfileUnkRMC6() :
    ActorProfile_Derived1(ActorId_RMC6) {}

ActorUnkRMC6::ActorUnkRMC6() {}

void ActorUnkRMC6::func_ov060_0215e104(void) {}
void ActorUnkRMC6::func_ov060_0215e108(void) {}

ActorUnkRMC6::~ActorUnkRMC6() {}
ActorProfileUnkRMC6::~ActorProfileUnkRMC6() {}
