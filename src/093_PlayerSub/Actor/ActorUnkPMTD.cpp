//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTD.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPMTD sActorProfileUnkPMTD;

ARM ActorProfileUnkPMTD *ActorProfileUnkPMTD::GetProfile() {
    return &sActorProfileUnkPMTD;
}

ARM Actor *ActorProfileUnkPMTD::Create() {
    return new(HeapIndex_2) ActorUnkPMTD();
}

ARM ActorProfileUnkPMTD::ActorProfileUnkPMTD() :
    ActorProfile_Derived1(ActorId_PMTD) {}

ARM ActorUnkPMTD::ActorUnkPMTD() {}

ActorUnkPMTD::~ActorUnkPMTD() {}
ActorProfileUnkPMTD::~ActorProfileUnkPMTD() {}
