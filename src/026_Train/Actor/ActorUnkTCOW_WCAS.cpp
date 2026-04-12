//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTCOW_WCAS.hpp"
#include "System/SysNew.hpp"

// --- Actor TCOW ---

ARM DECL_PROFILE(ActorProfileUnkTCOW);

ARM Actor *ActorProfileUnkTCOW::Create() {
    return new(HeapIndex_2) ActorUnkTCOW();
}

ARM ActorProfileUnkTCOW::ActorProfileUnkTCOW() :
    ActorProfile_Derived1(ActorId_TCOW) {}

ARM ActorUnkTCOW::ActorUnkTCOW() {}

// --- Actor WCAS ---

ARM DECL_PROFILE(ActorProfileUnkWCAS);

ARM Actor *ActorProfileUnkWCAS::Create() {
    return new(HeapIndex_2) ActorUnkWCAS();
}

ARM ActorProfileUnkWCAS::ActorProfileUnkWCAS() :
    ActorProfile_Derived1(ActorId_WCAS) {}

ARM ActorUnkWCAS::ActorUnkWCAS() {}

ARM ActorProfileUnkTCOW::~ActorProfileUnkTCOW() {}
ARM ActorProfileUnkWCAS::~ActorProfileUnkWCAS() {}
