//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMF0.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMF0 sActorProfileUnkRMF0;

ARM ActorProfileUnkRMF0 *ActorProfileUnkRMF0::GetProfile() {
    return &sActorProfileUnkRMF0;
}

ARM Actor *ActorProfileUnkRMF0::Create() {
    return new(HeapIndex_2) ActorUnkRMF0();
}

ARM ActorProfileUnkRMF0::ActorProfileUnkRMF0() :
    ActorProfile_Derived1(ActorId_RMF0) {}

ARM ActorUnkRMF0::ActorUnkRMF0() {}

ARM void ActorUnkRMF0::func_ov064_021592f0(void) {}

ARM ActorUnkRMF0::~ActorUnkRMF0() {}
ARM ActorProfileUnkRMF0::~ActorProfileUnkRMF0() {}
