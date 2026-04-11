//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSIRO_SIRS_SRNM_SRSL.hpp"
#include "System/SysNew.hpp"

// --- Actor SIRO ---

ARM DECL_PROFILE(ActorProfileUnkSIRO);

ARM Actor *ActorProfileUnkSIRO::Create() {
    return new(HeapIndex_2) ActorUnkSIRO();
}

ARM ActorProfileUnkSIRO::ActorProfileUnkSIRO() :
    ActorProfile_Derived1(ActorId_SIRO) {}

ARM ActorUnkSIRO::ActorUnkSIRO() {}

// --- Actor SIRS ---

ARM DECL_PROFILE(ActorProfileUnkSIRS);

ARM Actor *ActorProfileUnkSIRS::Create() {
    return new(HeapIndex_2) ActorUnkSIRS();
}

ARM ActorProfileUnkSIRS::ActorProfileUnkSIRS() :
    ActorProfile_Derived1(ActorId_SIRS) {}

ARM ActorUnkSIRS::ActorUnkSIRS() {}

// --- Actor SRNM ---

ARM DECL_PROFILE(ActorProfileUnkSRNM);

ARM Actor *ActorProfileUnkSRNM::Create() {
    return new(HeapIndex_2) ActorUnkSRNM();
}

ARM ActorProfileUnkSRNM::ActorProfileUnkSRNM() :
    ActorProfile_Derived1(ActorId_SRNM) {}

ARM ActorUnkSRNM::ActorUnkSRNM() {}

// --- Actor SRSL ---

ARM DECL_PROFILE(ActorProfileUnkSRSL);

ARM Actor *ActorProfileUnkSRSL::Create() {
    return new(HeapIndex_2) ActorUnkSRSL();
}

ARM ActorProfileUnkSRSL::ActorProfileUnkSRSL() :
    ActorProfile_Derived1(ActorId_SRSL) {}

ARM ActorUnkSRSL::ActorUnkSRSL() {}

ARM ActorProfileUnkSIRO::~ActorProfileUnkSIRO() {}
ARM ActorProfileUnkSIRS::~ActorProfileUnkSIRS() {}
ARM ActorProfileUnkSRNM::~ActorProfileUnkSRNM() {}
ARM ActorProfileUnkSRSL::~ActorProfileUnkSRSL() {}
