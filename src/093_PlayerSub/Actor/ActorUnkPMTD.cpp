//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTD.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkPMTD);

Actor *ActorProfileUnkPMTD::Create() {
    return new(HeapIndex_2) ActorUnkPMTD();
}

ActorProfileUnkPMTD::ActorProfileUnkPMTD() :
    ActorProfile_Derived1(ActorId_PMTD) {}

ActorUnkPMTD::ActorUnkPMTD() {}

ActorUnkPMTD::~ActorUnkPMTD() {}
ActorProfileUnkPMTD::~ActorProfileUnkPMTD() {}
