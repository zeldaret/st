//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS3.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMS3);

Actor *ActorProfileUnkRMS3::Create() {
    return new(HeapIndex_2) ActorUnkRMS3();
}

ActorProfileUnkRMS3::ActorProfileUnkRMS3() :
    ActorProfile_Derived1(ActorId_RMS3) {}

ActorUnkRMS3::ActorUnkRMS3() {}

void ActorUnkRMS3::func_ov065_02159174(void) {}

ActorUnkRMS3::~ActorUnkRMS3() {}
ActorProfileUnkRMS3::~ActorProfileUnkRMS3() {}
