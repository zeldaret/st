//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNCCB_NCMB.hpp"
#include "System/SysNew.hpp"

// --- Actor NCCB ---

ARM DECL_PROFILE(ActorProfileUnkNCCB);

ARM Actor *ActorProfileUnkNCCB::Create() {
    return new(HeapIndex_2) ActorUnkNCCB();
}

ARM ActorProfileUnkNCCB::ActorProfileUnkNCCB() :
    ActorProfile_Derived1(ActorId_NCCB) {}

ARM ActorUnkNCCB::ActorUnkNCCB() {}

// --- Actor NCMB ---

ARM DECL_PROFILE(ActorProfileUnkNCMB);

ARM Actor *ActorProfileUnkNCMB::Create() {
    return new(HeapIndex_2) ActorUnkNCMB();
}

ARM ActorProfileUnkNCMB::ActorProfileUnkNCMB() :
    ActorProfile_Derived1(ActorId_NCMB) {}

ARM ActorUnkNCMB::ActorUnkNCMB() {}

ARM ActorProfileUnkNCCB::~ActorProfileUnkNCCB() {}
ARM ActorProfileUnkNCMB::~ActorProfileUnkNCMB() {}
