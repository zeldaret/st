//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMT0.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMT0);

ARM Actor *ActorProfileUnkRMT0::Create() {
    return new(HeapIndex_2) ActorUnkRMT0();
}

ARM ActorProfileUnkRMT0::ActorProfileUnkRMT0() :
    ActorProfile_Derived1(ActorId_RMT0) {}

ARM ActorUnkRMT0::ActorUnkRMT0() {}

ARM void ActorUnkRMT0::func_ov061_02157f18(void) {}

ARM ActorUnkRMT0::~ActorUnkRMT0() {}
ARM ActorProfileUnkRMT0::~ActorProfileUnkRMT0() {}
