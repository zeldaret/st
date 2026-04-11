//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWAWB_WAWS.hpp"
#include "System/SysNew.hpp"

// --- Actor WAWB ---

static ActorProfileUnkWAWB sActorProfileUnkWAWB;

ARM ActorProfileUnkWAWB *ActorProfileUnkWAWB::GetProfile() {
    return &sActorProfileUnkWAWB;
}

ARM Actor *ActorProfileUnkWAWB::Create() {
    return new(HeapIndex_2) ActorUnkWAWB();
}

ARM ActorProfileUnkWAWB::ActorProfileUnkWAWB() :
    ActorProfile_Derived1(ActorId_WAWB) {}

ARM ActorUnkWAWB::ActorUnkWAWB() {}

// --- Actor WAWS ---

static ActorProfileUnkWAWS sActorProfileUnkWAWS;

ARM ActorProfileUnkWAWS *ActorProfileUnkWAWS::GetProfile() {
    return &sActorProfileUnkWAWS;
}

ARM Actor *ActorProfileUnkWAWS::Create() {
    return new(HeapIndex_2) ActorUnkWAWS();
}

ARM ActorProfileUnkWAWS::ActorProfileUnkWAWS() :
    ActorProfile_Derived1(ActorId_WAWS) {}

ARM ActorUnkWAWS::ActorUnkWAWS() {}

ARM ActorProfileUnkWAWB::~ActorProfileUnkWAWB() {}
ARM ActorProfileUnkWAWS::~ActorProfileUnkWAWS() {}
