//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKIMA.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkKIMA sActorProfileUnkKIMA;

ARM ActorProfileUnkKIMA *ActorProfileUnkKIMA::GetProfile() {
    return &sActorProfileUnkKIMA;
}

ARM Actor *ActorProfileUnkKIMA::Create() {
    return new(HeapIndex_2) ActorUnkKIMA();
}

ARM ActorProfileUnkKIMA::ActorProfileUnkKIMA() :
    ActorProfile_Derived1(ActorId_KIMA) {}

ARM ActorUnkKIMA::ActorUnkKIMA() {}

ARM void ActorUnkKIMA::func_ov060_02160334(void) {}
ARM void ActorUnkKIMA::func_ov060_02160340(void) {}
ARM void ActorUnkKIMA::func_ov060_02160348(void) {}

ARM ActorUnkKIMA::~ActorUnkKIMA() {}
ARM ActorProfileUnkKIMA::~ActorProfileUnkKIMA() {}
