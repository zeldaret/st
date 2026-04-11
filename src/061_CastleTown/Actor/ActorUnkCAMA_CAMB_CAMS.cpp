//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCAMA_CAMB_CAMS.hpp"
#include "System/SysNew.hpp"

// --- Actor CAMA ---

static ActorProfileUnkCAMA sActorProfileUnkCAMA;

ARM ActorProfileUnkCAMA *ActorProfileUnkCAMA::GetProfile() {
    return &sActorProfileUnkCAMA;
}

ARM Actor *ActorProfileUnkCAMA::Create() {
    return new(HeapIndex_2) ActorUnkCAMA();
}

ARM ActorProfileUnkCAMA::ActorProfileUnkCAMA() :
    ActorProfile_Derived1(ActorId_CAMA) {}

ARM ActorUnkCAMA::ActorUnkCAMA() {}

// --- Actor CAMB ---

static ActorProfileUnkCAMB sActorProfileUnkCAMB;

ARM ActorProfileUnkCAMB *ActorProfileUnkCAMB::GetProfile() {
    return &sActorProfileUnkCAMB;
}

ARM Actor *ActorProfileUnkCAMB::Create() {
    return new(HeapIndex_2) ActorUnkCAMB();
}

ARM ActorProfileUnkCAMB::ActorProfileUnkCAMB() :
    ActorProfile_Derived1(ActorId_CAMB) {}

ARM ActorUnkCAMB::ActorUnkCAMB() {}

// --- Actor CAMS ---

static ActorProfileUnkCAMS sActorProfileUnkCAMS;

ARM ActorProfileUnkCAMS *ActorProfileUnkCAMS::GetProfile() {
    return &sActorProfileUnkCAMS;
}

ARM Actor *ActorProfileUnkCAMS::Create() {
    return new(HeapIndex_2) ActorUnkCAMS();
}

ARM ActorProfileUnkCAMS::ActorProfileUnkCAMS() :
    ActorProfile_Derived1(ActorId_CAMS) {}

ARM ActorUnkCAMS::ActorUnkCAMS() {}

ARM ActorProfileUnkCAMA::~ActorProfileUnkCAMA() {}
ARM ActorProfileUnkCAMB::~ActorProfileUnkCAMB() {}
ARM ActorProfileUnkCAMS::~ActorProfileUnkCAMS() {}
