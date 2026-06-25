//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWB_WAWS.hpp"
#include "System/SysNew.hpp"

// --- Actor WAWB ---

DECL_PROFILE(ActorProfileUnkWAWB);

Actor *ActorProfileUnkWAWB::Create() {
    return new(HeapIndex_2) ActorUnkWAWB();
}

ActorProfileUnkWAWB::ActorProfileUnkWAWB() :
    ActorProfile_Derived1(ActorId_WAWB) {}

ActorUnkWAWB::ActorUnkWAWB() {}

// --- Actor WAWS ---

DECL_PROFILE(ActorProfileUnkWAWS);

Actor *ActorProfileUnkWAWS::Create() {
    return new(HeapIndex_2) ActorUnkWAWS();
}

ActorProfileUnkWAWS::ActorProfileUnkWAWS() :
    ActorProfile_Derived1(ActorId_WAWS) {}

ActorUnkWAWS::ActorUnkWAWS() {}

ActorProfileUnkWAWB::~ActorProfileUnkWAWB() {}
ActorProfileUnkWAWS::~ActorProfileUnkWAWS() {}
