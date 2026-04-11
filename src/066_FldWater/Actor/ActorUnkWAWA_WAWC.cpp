//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWA_WAWC.hpp"
#include "System/SysNew.hpp"

// --- Actor WAWA ---

static ActorProfileUnkWAWA sActorProfileUnkWAWA;

ARM ActorProfileUnkWAWA *ActorProfileUnkWAWA::GetProfile() {
    return &sActorProfileUnkWAWA;
}

ARM Actor *ActorProfileUnkWAWA::Create() {
    return new(HeapIndex_2) ActorUnkWAWA();
}

ARM ActorProfileUnkWAWA::ActorProfileUnkWAWA() :
    ActorProfile_Derived1(ActorId_WAWA) {}

ARM ActorUnkWAWA::ActorUnkWAWA() {}

// --- Actor WAWC ---

static ActorProfileUnkWAWC sActorProfileUnkWAWC;

ARM ActorProfileUnkWAWC *ActorProfileUnkWAWC::GetProfile() {
    return &sActorProfileUnkWAWC;
}

ARM Actor *ActorProfileUnkWAWC::Create() {
    return new(HeapIndex_2) ActorUnkWAWC();
}

ARM ActorProfileUnkWAWC::ActorProfileUnkWAWC() :
    ActorProfile_Derived1(ActorId_WAWC) {}

ARM ActorUnkWAWC::ActorUnkWAWC() {}

ARM ActorProfileUnkWAWA::~ActorProfileUnkWAWA() {}
ARM ActorProfileUnkWAWC::~ActorProfileUnkWAWC() {}
