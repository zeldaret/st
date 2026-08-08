//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkYKAP_YKCP_YKEP.hpp"
#include "System/SysNew.hpp"
#include "versions.h"

// --- Actor YKAP ---

#if IS_JP
THUMB_BEGIN
#endif

DECL_PROFILE(ActorProfileUnkYKAP);

Actor *ActorProfileUnkYKAP::Create() {
    return new(HeapIndex_2) ActorUnkYKAP();
}

ActorProfileUnkYKAP::ActorProfileUnkYKAP() :
    ActorProfile_Derived1(ActorId_YKAP) {}

ActorUnkYKAP::ActorUnkYKAP() {}

// --- Actor YKCP ---

DECL_PROFILE(ActorProfileUnkYKCP);

Actor *ActorProfileUnkYKCP::Create() {
    return new(HeapIndex_2) ActorUnkYKCP();
}

ActorProfileUnkYKCP::ActorProfileUnkYKCP() :
    ActorProfile_Derived1(ActorId_YKCP) {}

ActorUnkYKCP::ActorUnkYKCP() {}

// --- Actor YKEP ---

DECL_PROFILE(ActorProfileUnkYKEP);

Actor *ActorProfileUnkYKEP::Create() {
    return new(HeapIndex_2) ActorUnkYKEP();
}

ActorProfileUnkYKEP::ActorProfileUnkYKEP() :
    ActorProfile_Derived1(ActorId_YKEP) {}

#if IS_JP
THUMB_END
#endif

ActorUnkYKEP::ActorUnkYKEP() {}

ActorProfileUnkYKAP::~ActorProfileUnkYKAP() {}
ActorProfileUnkYKCP::~ActorProfileUnkYKCP() {}
ActorProfileUnkYKEP::~ActorProfileUnkYKEP() {}
