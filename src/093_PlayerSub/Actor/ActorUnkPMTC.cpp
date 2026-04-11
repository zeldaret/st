//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTC.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPMTC sActorProfileUnkPMTC;

ARM ActorProfileUnkPMTC *ActorProfileUnkPMTC::GetProfile() {
    return &sActorProfileUnkPMTC;
}

ARM Actor *ActorProfileUnkPMTC::Create() {
    return new(HeapIndex_2) ActorUnkPMTC();
}

ARM ActorProfileUnkPMTC::ActorProfileUnkPMTC() :
    ActorProfile_Derived1(ActorId_PMTC) {}

ARM ActorUnkPMTC::ActorUnkPMTC() {}

ActorUnkPMTC::~ActorUnkPMTC() {}
ActorProfileUnkPMTC::~ActorProfileUnkPMTC() {}