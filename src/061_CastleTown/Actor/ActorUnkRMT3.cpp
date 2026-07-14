//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT3.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMT3);

Actor *ActorProfileUnkRMT3::Create() {
    return new(HeapIndex_2) ActorUnkRMT3();
}

ActorProfileUnkRMT3::ActorProfileUnkRMT3() :
    ActorProfile_Derived1(ActorId_RMT3) {}

ActorUnkRMT3::ActorUnkRMT3() {}

void ActorUnkRMT3::func_ov061_021583d0(void) {}

ActorUnkRMT3::~ActorUnkRMT3() {}
ActorProfileUnkRMT3::~ActorProfileUnkRMT3() {}
