//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWA_WAWC.hpp"
#include "System/SysNew.hpp"

// --- Actor WAWA ---

ARM DECL_PROFILE(ActorProfileUnkWAWA);

ARM Actor *ActorProfileUnkWAWA::Create() {
    return new(HeapIndex_2) ActorUnkWAWA();
}

ARM ActorProfileUnkWAWA::ActorProfileUnkWAWA() :
    ActorProfile_Derived1(ActorId_WAWA) {}

ARM ActorUnkWAWA::ActorUnkWAWA() {}

// --- Actor WAWC ---

ARM DECL_PROFILE(ActorProfileUnkWAWC);

ARM Actor *ActorProfileUnkWAWC::Create() {
    return new(HeapIndex_2) ActorUnkWAWC();
}

ARM ActorProfileUnkWAWC::ActorProfileUnkWAWC() :
    ActorProfile_Derived1(ActorId_WAWC) {}

ARM ActorUnkWAWC::ActorUnkWAWC() {}

ARM ActorProfileUnkWAWA::~ActorProfileUnkWAWA() {}
ARM ActorProfileUnkWAWC::~ActorProfileUnkWAWC() {}
