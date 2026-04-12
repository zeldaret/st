//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTD.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkPMTD);

ARM Actor *ActorProfileUnkPMTD::Create() {
    return new(HeapIndex_2) ActorUnkPMTD();
}

ARM ActorProfileUnkPMTD::ActorProfileUnkPMTD() :
    ActorProfile_Derived1(ActorId_PMTD) {}

ARM ActorUnkPMTD::ActorUnkPMTD() {}

ARM ActorUnkPMTD::~ActorUnkPMTD() {}
ARM ActorProfileUnkPMTD::~ActorProfileUnkPMTD() {}
