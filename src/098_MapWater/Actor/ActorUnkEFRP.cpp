//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkEFRP.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkEFRP sActorProfileUnkEFRP;

ARM ActorProfileUnkEFRP *ActorProfileUnkEFRP::GetProfile() {
    return &sActorProfileUnkEFRP;
}

ARM Actor *ActorProfileUnkEFRP::Create() {
    return new(HeapIndex_2) ActorUnkEFRP();
}

ARM ActorProfileUnkEFRP::ActorProfileUnkEFRP() :
    ActorProfile_Derived1(ActorId_EFRP) {}

ARM ActorUnkEFRP::ActorUnkEFRP() {}

ARM void ActorUnkEFRP::func_ov098_02181910(void) {}
ARM void ActorUnkEFRP::func_ov098_02181a30(void) {}
ARM void ActorUnkEFRP::func_ov098_02181acc(void) {}
ARM void ActorUnkEFRP::func_ov098_02181b1c(void) {}
ARM void ActorUnkEFRP::func_ov098_02181b30(void) {}
ARM void ActorUnkEFRP::func_ov098_02181b88(void) {}
ARM void ActorUnkEFRP::func_ov098_02181ba4(void) {}

ARM ActorUnkEFRP::~ActorUnkEFRP() {}
ARM ActorProfileUnkEFRP::~ActorProfileUnkEFRP() {}
