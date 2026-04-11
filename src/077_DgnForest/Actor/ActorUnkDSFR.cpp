//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSFR.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDSFR sActorProfileUnkDSFR;

ARM ActorProfileUnkDSFR *ActorProfileUnkDSFR::GetProfile() {
    return &sActorProfileUnkDSFR;
}

ARM Actor *ActorProfileUnkDSFR::Create() {
    return new(HeapIndex_2) ActorUnkDSFR();
}

ARM ActorProfileUnkDSFR::ActorProfileUnkDSFR() :
    ActorProfile_Derived1(ActorId_DSFR) {}

ARM ActorUnkDSFR::ActorUnkDSFR() {}

ARM void ActorUnkDSFR::func_ov077_02158bf0(void) {}

ARM ActorUnkDSFR::~ActorUnkDSFR() {}
ARM ActorProfileUnkDSFR::~ActorProfileUnkDSFR() {}
