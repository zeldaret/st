//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkPMTC);

Actor *ActorProfileUnkPMTC::Create() {
    return new(HeapIndex_2) ActorUnkPMTC();
}

ActorProfileUnkPMTC::ActorProfileUnkPMTC() :
    ActorProfile_Derived1(ActorId_PMTC) {}

ActorUnkPMTC::ActorUnkPMTC() {}

ActorUnkPMTC::~ActorUnkPMTC() {}
ActorProfileUnkPMTC::~ActorProfileUnkPMTC() {}
