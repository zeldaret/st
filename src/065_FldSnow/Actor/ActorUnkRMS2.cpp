//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMS2.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMS2);

Actor *ActorProfileUnkRMS2::Create() {
    return new(HeapIndex_2) ActorUnkRMS2();
}

ActorProfileUnkRMS2::ActorProfileUnkRMS2() :
    ActorProfile_Derived1(ActorId_RMS2) {}

ActorUnkRMS2::ActorUnkRMS2() {}

void ActorUnkRMS2::func_ov065_02159050(void) {}

ActorUnkRMS2::~ActorUnkRMS2() {}
ActorProfileUnkRMS2::~ActorProfileUnkRMS2() {}
