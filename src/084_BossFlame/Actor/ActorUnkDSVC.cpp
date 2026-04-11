//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSVC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDSVC sActorProfileUnkDSVC;

ARM ActorProfileUnkDSVC *ActorProfileUnkDSVC::GetProfile() {
    return &sActorProfileUnkDSVC;
}

ARM Actor *ActorProfileUnkDSVC::Create() {
    return new(HeapIndex_2) ActorUnkDSVC();
}

ARM ActorProfileUnkDSVC::ActorProfileUnkDSVC() :
    ActorProfile_Derived1(ActorId_DSVC) {}

ARM ActorUnkDSVC::ActorUnkDSVC() {}

ARM void ActorUnkDSVC::func_ov084_0215af5c(void) {}

ARM ActorUnkDSVC::~ActorUnkDSVC() {}
ARM ActorProfileUnkDSVC::~ActorProfileUnkDSVC() {}
