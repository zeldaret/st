//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSIRO_SIRS_SRNM_SRSL.hpp"
#include "System/SysNew.hpp"

// --- Actor SIRO ---

DECL_PROFILE(ActorProfileUnkSIRO);

Actor *ActorProfileUnkSIRO::Create() {
    return new(HeapIndex_2) ActorUnkSIRO();
}

ActorProfileUnkSIRO::ActorProfileUnkSIRO() :
    ActorProfile_Derived1(ActorId_SIRO) {}

ActorUnkSIRO::ActorUnkSIRO() {}

// --- Actor SIRS ---

DECL_PROFILE(ActorProfileUnkSIRS);

Actor *ActorProfileUnkSIRS::Create() {
    return new(HeapIndex_2) ActorUnkSIRS();
}

ActorProfileUnkSIRS::ActorProfileUnkSIRS() :
    ActorProfile_Derived1(ActorId_SIRS) {}

ActorUnkSIRS::ActorUnkSIRS() {}

// --- Actor SRNM ---

DECL_PROFILE(ActorProfileUnkSRNM);

Actor *ActorProfileUnkSRNM::Create() {
    return new(HeapIndex_2) ActorUnkSRNM();
}

ActorProfileUnkSRNM::ActorProfileUnkSRNM() :
    ActorProfile_Derived1(ActorId_SRNM) {}

ActorUnkSRNM::ActorUnkSRNM() {}

// --- Actor SRSL ---

DECL_PROFILE(ActorProfileUnkSRSL);

Actor *ActorProfileUnkSRSL::Create() {
    return new(HeapIndex_2) ActorUnkSRSL();
}

ActorProfileUnkSRSL::ActorProfileUnkSRSL() :
    ActorProfile_Derived1(ActorId_SRSL) {}

ActorUnkSRSL::ActorUnkSRSL() {}

ActorProfileUnkSIRO::~ActorProfileUnkSIRO() {}
ActorProfileUnkSIRS::~ActorProfileUnkSIRS() {}
ActorProfileUnkSRNM::~ActorProfileUnkSRNM() {}
ActorProfileUnkSRSL::~ActorProfileUnkSRSL() {}
