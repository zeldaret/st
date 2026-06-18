//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWA_WAWC.hpp"
#include "System/SysNew.hpp"

// --- Actor WAWA ---

DECL_PROFILE(ActorProfileUnkWAWA);

Actor *ActorProfileUnkWAWA::Create() {
    return new(HeapIndex_2) ActorUnkWAWA();
}

ActorProfileUnkWAWA::ActorProfileUnkWAWA() :
    ActorProfile_Derived1(ActorId_WAWA) {}

ActorUnkWAWA::ActorUnkWAWA() {}

// --- Actor WAWC ---

DECL_PROFILE(ActorProfileUnkWAWC);

Actor *ActorProfileUnkWAWC::Create() {
    return new(HeapIndex_2) ActorUnkWAWC();
}

ActorProfileUnkWAWC::ActorProfileUnkWAWC() :
    ActorProfile_Derived1(ActorId_WAWC) {}

ActorUnkWAWC::ActorUnkWAWC() {}

ActorProfileUnkWAWA::~ActorProfileUnkWAWA() {}
ActorProfileUnkWAWC::~ActorProfileUnkWAWC() {}
