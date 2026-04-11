//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTZ.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMTZ sActorProfileUnkRMTZ;

ARM ActorProfileUnkRMTZ *ActorProfileUnkRMTZ::GetProfile() {
    return &sActorProfileUnkRMTZ;
}

ARM Actor *ActorProfileUnkRMTZ::Create() {
    return new(HeapIndex_2) ActorUnkRMTZ();
}

ARM ActorProfileUnkRMTZ::ActorProfileUnkRMTZ() :
    ActorProfile_Derived1(ActorId_RMTZ) {}

ARM ActorUnkRMTZ::ActorUnkRMTZ() {}

ARM void ActorUnkRMTZ::func_ov064_0215958c(void) {}
ARM void ActorUnkRMTZ::func_ov064_021595c8(void) {}
ARM void ActorUnkRMTZ::func_ov064_02159610(void) {}

ARM ActorUnkRMTZ::~ActorUnkRMTZ() {}
ARM ActorProfileUnkRMTZ::~ActorProfileUnkRMTZ() {}
