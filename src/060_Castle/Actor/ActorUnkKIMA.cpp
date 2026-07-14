//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKIMA.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkKIMA);

Actor *ActorProfileUnkKIMA::Create() {
    return new(HeapIndex_2) ActorUnkKIMA();
}

ActorProfileUnkKIMA::ActorProfileUnkKIMA() :
    ActorProfile_Derived1(ActorId_KIMA) {}

ActorUnkKIMA::ActorUnkKIMA() {}

void ActorUnkKIMA::func_ov060_02160334(void) {}
void ActorUnkKIMA::func_ov060_02160340(void) {}
void ActorUnkKIMA::func_ov060_02160348(void) {}

ActorUnkKIMA::~ActorUnkKIMA() {}
ActorProfileUnkKIMA::~ActorProfileUnkKIMA() {}
