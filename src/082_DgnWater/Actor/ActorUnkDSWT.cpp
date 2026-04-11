//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSWT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDSWT sActorProfileUnkDSWT;

ARM ActorProfileUnkDSWT *ActorProfileUnkDSWT::GetProfile() {
    return &sActorProfileUnkDSWT;
}

ARM Actor *ActorProfileUnkDSWT::Create() {
    return new(HeapIndex_2) ActorUnkDSWT();
}

ARM ActorProfileUnkDSWT::ActorProfileUnkDSWT() :
    ActorProfile_Derived1(ActorId_DSWT) {}

ARM ActorUnkDSWT::ActorUnkDSWT() {}

ARM void ActorUnkDSWT::func_ov082_02157ae8(void) {}

ARM ActorUnkDSWT::~ActorUnkDSWT() {}
ARM ActorProfileUnkDSWT::~ActorProfileUnkDSWT() {}
