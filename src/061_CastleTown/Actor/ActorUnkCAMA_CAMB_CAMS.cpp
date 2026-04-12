//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMA_CAMB_CAMS.hpp"
#include "System/SysNew.hpp"

// --- Actor CAMA ---

ARM DECL_PROFILE(ActorProfileUnkCAMA);

ARM Actor *ActorProfileUnkCAMA::Create() {
    return new(HeapIndex_2) ActorUnkCAMA();
}

ARM ActorProfileUnkCAMA::ActorProfileUnkCAMA() :
    ActorProfile_Derived1(ActorId_CAMA) {}

ARM ActorUnkCAMA::ActorUnkCAMA() {}

// --- Actor CAMB ---

ARM DECL_PROFILE(ActorProfileUnkCAMB);

ARM Actor *ActorProfileUnkCAMB::Create() {
    return new(HeapIndex_2) ActorUnkCAMB();
}

ARM ActorProfileUnkCAMB::ActorProfileUnkCAMB() :
    ActorProfile_Derived1(ActorId_CAMB) {}

ARM ActorUnkCAMB::ActorUnkCAMB() {}

// --- Actor CAMS ---

ARM DECL_PROFILE(ActorProfileUnkCAMS);

ARM Actor *ActorProfileUnkCAMS::Create() {
    return new(HeapIndex_2) ActorUnkCAMS();
}

ARM ActorProfileUnkCAMS::ActorProfileUnkCAMS() :
    ActorProfile_Derived1(ActorId_CAMS) {}

ARM ActorUnkCAMS::ActorUnkCAMS() {}

ARM ActorProfileUnkCAMA::~ActorProfileUnkCAMA() {}
ARM ActorProfileUnkCAMB::~ActorProfileUnkCAMB() {}
ARM ActorProfileUnkCAMS::~ActorProfileUnkCAMS() {}
