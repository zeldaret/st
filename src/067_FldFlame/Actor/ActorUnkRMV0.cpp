//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMV0.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMV0);

Actor *ActorProfileUnkRMV0::Create() {
    return new(HeapIndex_2) ActorUnkRMV0();
}

ActorProfileUnkRMV0::ActorProfileUnkRMV0() :
    ActorProfile_Derived1(ActorId_RMV0) {}

ActorUnkRMV0::ActorUnkRMV0() {}

void ActorUnkRMV0::func_ov067_02159dd0(void) {}

ActorUnkRMV0::~ActorUnkRMV0() {}
ActorProfileUnkRMV0::~ActorProfileUnkRMV0() {}
