//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOLB_SOLC_SOLD.hpp"
#include "System/SysNew.hpp"

// --- Actor SOLB ---

static ActorProfileUnkSOLB sActorProfileUnkSOLB;

ARM ActorProfileUnkSOLB *ActorProfileUnkSOLB::GetProfile() {
    return &sActorProfileUnkSOLB;
}

ARM Actor *ActorProfileUnkSOLB::Create() {
    return new(HeapIndex_2) ActorUnkSOLB();
}

ARM ActorProfileUnkSOLB::ActorProfileUnkSOLB() :
    ActorProfile_Derived1(ActorId_SoldierBoy) {}

ARM ActorUnkSOLB::ActorUnkSOLB() {}

// --- Actor SOLC ---

static ActorProfileUnkSOLC sActorProfileUnkSOLC;

ARM ActorProfileUnkSOLC *ActorProfileUnkSOLC::GetProfile() {
    return &sActorProfileUnkSOLC;
}

ARM Actor *ActorProfileUnkSOLC::Create() {
    return new(HeapIndex_2) ActorUnkSOLC();
}

ARM ActorProfileUnkSOLC::ActorProfileUnkSOLC() :
    ActorProfile_Derived1(ActorId_SOLC) {}

ARM ActorUnkSOLC::ActorUnkSOLC() {}

// --- Actor SOLD ---

static ActorProfileUnkSOLD sActorProfileUnkSOLD;

ARM ActorProfileUnkSOLD *ActorProfileUnkSOLD::GetProfile() {
    return &sActorProfileUnkSOLD;
}

ARM Actor *ActorProfileUnkSOLD::Create() {
    return new(HeapIndex_2) ActorUnkSOLD();
}

ARM ActorProfileUnkSOLD::ActorProfileUnkSOLD() :
    ActorProfile_Derived1(ActorId_Soldier) {}

ARM ActorUnkSOLD::ActorUnkSOLD() {}

ARM ActorProfileUnkSOLB::~ActorProfileUnkSOLB() {}
ARM ActorProfileUnkSOLC::~ActorProfileUnkSOLC() {}
ARM ActorProfileUnkSOLD::~ActorProfileUnkSOLD() {}
