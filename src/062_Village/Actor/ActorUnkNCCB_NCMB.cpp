//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCCB_NCMB.hpp"
#include "System/SysNew.hpp"

// --- Actor NCCB ---

static ActorProfileUnkNCCB sActorProfileUnkNCCB;

ARM ActorProfileUnkNCCB *ActorProfileUnkNCCB::GetProfile() {
    return &sActorProfileUnkNCCB;
}

ARM Actor *ActorProfileUnkNCCB::Create() {
    return new(HeapIndex_2) ActorUnkNCCB();
}

ARM ActorProfileUnkNCCB::ActorProfileUnkNCCB() :
    ActorProfile_Derived1(ActorId_NCCB) {}

ARM ActorUnkNCCB::ActorUnkNCCB() {}

// --- Actor NCMB ---

static ActorProfileUnkNCMB sActorProfileUnkNCMB;

ARM ActorProfileUnkNCMB *ActorProfileUnkNCMB::GetProfile() {
    return &sActorProfileUnkNCMB;
}

ARM Actor *ActorProfileUnkNCMB::Create() {
    return new(HeapIndex_2) ActorUnkNCMB();
}

ARM ActorProfileUnkNCMB::ActorProfileUnkNCMB() :
    ActorProfile_Derived1(ActorId_NCMB) {}

ARM ActorUnkNCMB::ActorUnkNCMB() {}

ARM ActorProfileUnkNCCB::~ActorProfileUnkNCCB() {}
ARM ActorProfileUnkNCMB::~ActorProfileUnkNCMB() {}
