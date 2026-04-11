//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMV0.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMV0 sActorProfileUnkRMV0;

ARM ActorProfileUnkRMV0 *ActorProfileUnkRMV0::GetProfile() {
    return &sActorProfileUnkRMV0;
}

ARM Actor *ActorProfileUnkRMV0::Create() {
    return new(HeapIndex_2) ActorUnkRMV0();
}

ARM ActorProfileUnkRMV0::ActorProfileUnkRMV0() :
    ActorProfile_Derived1(ActorId_RMV0) {}

ARM ActorUnkRMV0::ActorUnkRMV0() {}

ARM void ActorUnkRMV0::func_ov067_02159dd0(void) {}

ARM ActorUnkRMV0::~ActorUnkRMV0() {}
ARM ActorProfileUnkRMV0::~ActorProfileUnkRMV0() {}
