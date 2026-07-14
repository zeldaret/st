//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS0.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMS0);

Actor *ActorProfileUnkRMS0::Create() {
    return new(HeapIndex_2) ActorUnkRMS0();
}

ActorProfileUnkRMS0::ActorProfileUnkRMS0() :
    ActorProfile_Derived1(ActorId_RMS0) {}

ActorUnkRMS0::ActorUnkRMS0() {}

void ActorUnkRMS0::func_ov065_02158e08(void) {}

ActorUnkRMS0::~ActorUnkRMS0() {}
ActorProfileUnkRMS0::~ActorProfileUnkRMS0() {}
