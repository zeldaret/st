//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDSFR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkDSFR);

Actor *ActorProfileUnkDSFR::Create() {
    return new(HeapIndex_2) ActorUnkDSFR();
}

ActorProfileUnkDSFR::ActorProfileUnkDSFR() :
    ActorProfile_Derived1(ActorId_DSFR) {}

ActorUnkDSFR::ActorUnkDSFR() {}

void ActorUnkDSFR::func_ov077_02158bf0(void) {}

ActorUnkDSFR::~ActorUnkDSFR() {}
ActorProfileUnkDSFR::~ActorProfileUnkDSFR() {}
