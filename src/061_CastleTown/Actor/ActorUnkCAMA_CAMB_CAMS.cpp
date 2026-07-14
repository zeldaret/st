//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMA_CAMB_CAMS.hpp"
#include "System/SysNew.hpp"

// --- Actor CAMA ---

DECL_PROFILE(ActorProfileUnkCAMA);

Actor *ActorProfileUnkCAMA::Create() {
    return new(HeapIndex_2) ActorUnkCAMA();
}

ActorProfileUnkCAMA::ActorProfileUnkCAMA() :
    ActorProfile_Derived1(ActorId_CAMA) {}

ActorUnkCAMA::ActorUnkCAMA() {}

// --- Actor CAMB ---

DECL_PROFILE(ActorProfileUnkCAMB);

Actor *ActorProfileUnkCAMB::Create() {
    return new(HeapIndex_2) ActorUnkCAMB();
}

ActorProfileUnkCAMB::ActorProfileUnkCAMB() :
    ActorProfile_Derived1(ActorId_CAMB) {}

ActorUnkCAMB::ActorUnkCAMB() {}

// --- Actor CAMS ---

DECL_PROFILE(ActorProfileUnkCAMS);

Actor *ActorProfileUnkCAMS::Create() {
    return new(HeapIndex_2) ActorUnkCAMS();
}

ActorProfileUnkCAMS::ActorProfileUnkCAMS() :
    ActorProfile_Derived1(ActorId_CAMS) {}

ActorUnkCAMS::ActorUnkCAMS() {}

ActorProfileUnkCAMA::~ActorProfileUnkCAMA() {}
ActorProfileUnkCAMB::~ActorProfileUnkCAMB() {}
ActorProfileUnkCAMS::~ActorProfileUnkCAMS() {}
