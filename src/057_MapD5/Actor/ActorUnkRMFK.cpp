//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMFK.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMFK sActorProfileUnkRMFK;

ARM ActorProfileUnkRMFK *ActorProfileUnkRMFK::GetProfile() {
    return &sActorProfileUnkRMFK;
}

ARM Actor *ActorProfileUnkRMFK::Create() {
    return new(HeapIndex_2) ActorUnkRMFK();
}

ARM ActorProfileUnkRMFK::ActorProfileUnkRMFK() :
    ActorProfile_Derived1(ActorId_RMFK) {}

ARM ActorUnkRMFK::ActorUnkRMFK() {}

ARM void ActorUnkRMFK::func_ov057_0213a1d4(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a1e8(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a43c(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a44c(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a540(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a544(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a558(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a640(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a6b8(void) {}
ARM void ActorUnkRMFK::func_ov057_0213a6f8(void) {}

ARM ActorUnkRMFK::~ActorUnkRMFK() {}
ARM ActorProfileUnkRMFK::~ActorProfileUnkRMFK() {}
