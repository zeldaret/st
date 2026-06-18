//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCCB_NCMB.hpp"
#include "System/SysNew.hpp"

// --- Actor NCCB ---

DECL_PROFILE(ActorProfileUnkNCCB);

Actor *ActorProfileUnkNCCB::Create() {
    return new(HeapIndex_2) ActorUnkNCCB();
}

ActorProfileUnkNCCB::ActorProfileUnkNCCB() :
    ActorProfile_Derived1(ActorId_NCCB) {}

ActorUnkNCCB::ActorUnkNCCB() {}

// --- Actor NCMB ---

DECL_PROFILE(ActorProfileUnkNCMB);

Actor *ActorProfileUnkNCMB::Create() {
    return new(HeapIndex_2) ActorUnkNCMB();
}

ActorProfileUnkNCMB::ActorProfileUnkNCMB() :
    ActorProfile_Derived1(ActorId_NCMB) {}

ActorUnkNCMB::ActorUnkNCMB() {}

ActorProfileUnkNCCB::~ActorProfileUnkNCCB() {}
ActorProfileUnkNCMB::~ActorProfileUnkNCMB() {}
