//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSVC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDSVC);

Actor *ActorProfileUnkDSVC::Create() {
    return new(HeapIndex_2) ActorUnkDSVC();
}

ActorProfileUnkDSVC::ActorProfileUnkDSVC() :
    ActorProfile_Derived1(ActorId_DSVC) {}

ActorUnkDSVC::ActorUnkDSVC() {}

void ActorUnkDSVC::func_ov084_0215af5c(void) {}

ActorUnkDSVC::~ActorUnkDSVC() {}
ActorProfileUnkDSVC::~ActorProfileUnkDSVC() {}
