//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT0.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMT0);

Actor *ActorProfileUnkRMT0::Create() {
    return new(HeapIndex_2) ActorUnkRMT0();
}

ActorProfileUnkRMT0::ActorProfileUnkRMT0() :
    ActorProfile_Derived1(ActorId_RMT0) {}

ActorUnkRMT0::ActorUnkRMT0() {}

void ActorUnkRMT0::func_ov061_02157f18(void) {}

ActorUnkRMT0::~ActorUnkRMT0() {}
ActorProfileUnkRMT0::~ActorProfileUnkRMT0() {}
