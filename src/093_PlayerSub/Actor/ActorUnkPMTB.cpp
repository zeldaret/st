//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTB.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkPMTB);

Actor *ActorProfileUnkPMTB::Create() {
    return new(HeapIndex_2) ActorUnkPMTB();
}

ActorProfileUnkPMTB::ActorProfileUnkPMTB() :
    ActorProfile_Derived1(ActorId_PMTB) {}

ActorUnkPMTB::ActorUnkPMTB() {}

ActorUnkPMTB::~ActorUnkPMTB() {}
ActorProfileUnkPMTB::~ActorProfileUnkPMTB() {}
