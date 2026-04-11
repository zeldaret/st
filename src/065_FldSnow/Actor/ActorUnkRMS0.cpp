//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS0.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMS0 sActorProfileUnkRMS0;

ARM ActorProfileUnkRMS0 *ActorProfileUnkRMS0::GetProfile() {
    return &sActorProfileUnkRMS0;
}

ARM Actor *ActorProfileUnkRMS0::Create() {
    return new(HeapIndex_2) ActorUnkRMS0();
}

ARM ActorProfileUnkRMS0::ActorProfileUnkRMS0() :
    ActorProfile_Derived1(ActorId_RMS0) {}

ARM ActorUnkRMS0::ActorUnkRMS0() {}

ARM void ActorUnkRMS0::func_ov065_02158e08(void) {}

ARM ActorUnkRMS0::~ActorUnkRMS0() {}
ARM ActorProfileUnkRMS0::~ActorProfileUnkRMS0() {}
