//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS1.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMS1);

ARM Actor *ActorProfileUnkRMS1::Create() {
    return new(HeapIndex_2) ActorUnkRMS1();
}

ARM ActorProfileUnkRMS1::ActorProfileUnkRMS1() :
    ActorProfile_Derived1(ActorId_RMS1) {}

ARM ActorUnkRMS1::ActorUnkRMS1() {}

ARM void ActorUnkRMS1::func_ov065_02158f2c(void) {}

ARM ActorUnkRMS1::~ActorUnkRMS1() {}
ARM ActorProfileUnkRMS1::~ActorProfileUnkRMS1() {}
