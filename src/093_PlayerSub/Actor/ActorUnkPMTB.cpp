//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPMTB.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkPMTB);

ARM Actor *ActorProfileUnkPMTB::Create() {
    return new(HeapIndex_2) ActorUnkPMTB();
}

ARM ActorProfileUnkPMTB::ActorProfileUnkPMTB() :
    ActorProfile_Derived1(ActorId_PMTB) {}

ARM ActorUnkPMTB::ActorUnkPMTB() {}

ARM ActorUnkPMTB::~ActorUnkPMTB() {}
ARM ActorProfileUnkPMTB::~ActorProfileUnkPMTB() {}
