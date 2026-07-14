//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSOLB_SOLC_SOLD.hpp"
#include "System/SysNew.hpp"

// --- Actor SOLB ---

DECL_PROFILE(ActorProfileUnkSOLB);

Actor *ActorProfileUnkSOLB::Create() {
    return new(HeapIndex_2) ActorUnkSOLB();
}

ActorProfileUnkSOLB::ActorProfileUnkSOLB() :
    ActorProfile_Derived1(ActorId_SoldierBoy) {}

ActorUnkSOLB::ActorUnkSOLB() {}

// --- Actor SOLC ---

DECL_PROFILE(ActorProfileUnkSOLC);

Actor *ActorProfileUnkSOLC::Create() {
    return new(HeapIndex_2) ActorUnkSOLC();
}

ActorProfileUnkSOLC::ActorProfileUnkSOLC() :
    ActorProfile_Derived1(ActorId_SOLC) {}

ActorUnkSOLC::ActorUnkSOLC() {}

// --- Actor SOLD ---

DECL_PROFILE(ActorProfileUnkSOLD);

Actor *ActorProfileUnkSOLD::Create() {
    return new(HeapIndex_2) ActorUnkSOLD();
}

ActorProfileUnkSOLD::ActorProfileUnkSOLD() :
    ActorProfile_Derived1(ActorId_Soldier) {}

ActorUnkSOLD::ActorUnkSOLD() {}

ActorProfileUnkSOLB::~ActorProfileUnkSOLB() {}
ActorProfileUnkSOLC::~ActorProfileUnkSOLC() {}
ActorProfileUnkSOLD::~ActorProfileUnkSOLD() {}
