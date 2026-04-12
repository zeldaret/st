//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYKAP_YKCP_YKEP.hpp"
#include "System/SysNew.hpp"

// --- Actor YKAP ---

ARM DECL_PROFILE(ActorProfileUnkYKAP);

ARM Actor *ActorProfileUnkYKAP::Create() {
    return new(HeapIndex_2) ActorUnkYKAP();
}

ARM ActorProfileUnkYKAP::ActorProfileUnkYKAP() :
    ActorProfile_Derived1(ActorId_YKAP) {}

ARM ActorUnkYKAP::ActorUnkYKAP() {}

// --- Actor YKCP ---

ARM DECL_PROFILE(ActorProfileUnkYKCP);

ARM Actor *ActorProfileUnkYKCP::Create() {
    return new(HeapIndex_2) ActorUnkYKCP();
}

ARM ActorProfileUnkYKCP::ActorProfileUnkYKCP() :
    ActorProfile_Derived1(ActorId_YKCP) {}

ARM ActorUnkYKCP::ActorUnkYKCP() {}

// --- Actor YKEP ---

ARM DECL_PROFILE(ActorProfileUnkYKEP);

ARM Actor *ActorProfileUnkYKEP::Create() {
    return new(HeapIndex_2) ActorUnkYKEP();
}

ARM ActorProfileUnkYKEP::ActorProfileUnkYKEP() :
    ActorProfile_Derived1(ActorId_YKEP) {}

ARM ActorUnkYKEP::ActorUnkYKEP() {}

ARM ActorProfileUnkYKAP::~ActorProfileUnkYKAP() {}
ARM ActorProfileUnkYKCP::~ActorProfileUnkYKCP() {}
ARM ActorProfileUnkYKEP::~ActorProfileUnkYKEP() {}
