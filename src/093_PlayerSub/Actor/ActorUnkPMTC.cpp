//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkPMTC);

ARM Actor *ActorProfileUnkPMTC::Create() {
    return new(HeapIndex_2) ActorUnkPMTC();
}

ARM ActorProfileUnkPMTC::ActorProfileUnkPMTC() :
    ActorProfile_Derived1(ActorId_PMTC) {}

ARM ActorUnkPMTC::ActorUnkPMTC() {}

ARM ActorUnkPMTC::~ActorUnkPMTC() {}
ARM ActorProfileUnkPMTC::~ActorProfileUnkPMTC() {}
