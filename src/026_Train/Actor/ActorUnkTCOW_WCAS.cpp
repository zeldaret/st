//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTCOW_WCAS.hpp"
#include "System/SysNew.hpp"

// --- Actor TCOW ---

DECL_PROFILE(ActorProfileUnkTCOW);

Actor *ActorProfileUnkTCOW::Create() {
    return new(HeapIndex_2) ActorUnkTCOW();
}

ActorProfileUnkTCOW::ActorProfileUnkTCOW() :
    ActorProfile_Derived1(ActorId_TCOW) {}

ActorUnkTCOW::ActorUnkTCOW() {}

// --- Actor WCAS ---

DECL_PROFILE(ActorProfileUnkWCAS);

Actor *ActorProfileUnkWCAS::Create() {
    return new(HeapIndex_2) ActorUnkWCAS();
}

ActorProfileUnkWCAS::ActorProfileUnkWCAS() :
    ActorProfile_Derived1(ActorId_WCAS) {}

ActorUnkWCAS::ActorUnkWCAS() {}

ActorProfileUnkTCOW::~ActorProfileUnkTCOW() {}
ActorProfileUnkWCAS::~ActorProfileUnkWCAS() {}
