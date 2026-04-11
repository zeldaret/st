//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSIRO_SIRS_SRNM_SRSL.hpp"
#include "System/SysNew.hpp"

// --- Actor SIRO ---

static ActorProfileUnkSIRO sActorProfileUnkSIRO;

ARM ActorProfileUnkSIRO *ActorProfileUnkSIRO::GetProfile() {
    return &sActorProfileUnkSIRO;
}

ARM Actor *ActorProfileUnkSIRO::Create() {
    return new(HeapIndex_2) ActorUnkSIRO();
}

ARM ActorProfileUnkSIRO::ActorProfileUnkSIRO() :
    ActorProfile_Derived1(ActorId_SIRO) {}

ARM ActorUnkSIRO::ActorUnkSIRO() {}

// --- Actor SIRS ---

static ActorProfileUnkSIRS sActorProfileUnkSIRS;

ARM ActorProfileUnkSIRS *ActorProfileUnkSIRS::GetProfile() {
    return &sActorProfileUnkSIRS;
}

ARM Actor *ActorProfileUnkSIRS::Create() {
    return new(HeapIndex_2) ActorUnkSIRS();
}

ARM ActorProfileUnkSIRS::ActorProfileUnkSIRS() :
    ActorProfile_Derived1(ActorId_SIRS) {}

ARM ActorUnkSIRS::ActorUnkSIRS() {}

// --- Actor SRNM ---

static ActorProfileUnkSRNM sActorProfileUnkSRNM;

ARM ActorProfileUnkSRNM *ActorProfileUnkSRNM::GetProfile() {
    return &sActorProfileUnkSRNM;
}

ARM Actor *ActorProfileUnkSRNM::Create() {
    return new(HeapIndex_2) ActorUnkSRNM();
}

ARM ActorProfileUnkSRNM::ActorProfileUnkSRNM() :
    ActorProfile_Derived1(ActorId_SRNM) {}

ARM ActorUnkSRNM::ActorUnkSRNM() {}

// --- Actor SRSL ---

static ActorProfileUnkSRSL sActorProfileUnkSRSL;

ARM ActorProfileUnkSRSL *ActorProfileUnkSRSL::GetProfile() {
    return &sActorProfileUnkSRSL;
}

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
