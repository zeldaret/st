//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkPSNP.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkPSNP sActorProfileUnkPSNP;

THUMB ActorProfileUnkPSNP *ActorProfileUnkPSNP::GetProfile() {
    return &sActorProfileUnkPSNP;
}

THUMB Actor *ActorProfileUnkPSNP::Create() {
    return new(HeapIndex_2) ActorUnkPSNP();
}

THUMB ActorProfileUnkPSNP::ActorProfileUnkPSNP() :
    ActorProfile_Derived1(ActorId_PSNP, ActorId_PSEM) {}

THUMB ActorUnkPSNP::ActorUnkPSNP() {}

THUMB void ActorUnkPSNP::func_ov059_021604b8(void) {}
THUMB void ActorUnkPSNP::func_ov059_021605c8(void) {}
THUMB void ActorUnkPSNP::func_ov059_021605d4(void) {}
THUMB void ActorUnkPSNP::func_ov059_02160608(void) {}
ARM void ActorUnkPSNP::func_ov059_02160644(void) {}
ARM void ActorUnkPSNP::func_ov059_02160698(void) {}
ARM void ActorUnkPSNP::func_ov059_02160720(void) {}
ARM void ActorUnkPSNP::func_ov059_0216074c(void) {}
ARM void ActorUnkPSNP::func_ov059_0216079c(void) {}
ARM void ActorUnkPSNP::func_ov059_02160908(void) {}
ARM void ActorUnkPSNP::func_ov059_0216091c(void) {}
ARM void ActorUnkPSNP::func_ov059_0216094c(void) {}
ARM void ActorUnkPSNP::func_ov059_02160950(void) {}
ARM void ActorUnkPSNP::func_ov059_02160980(void) {}
ARM void ActorUnkPSNP::func_ov059_021609bc(void) {}
ARM void ActorUnkPSNP::func_ov059_021609ec(void) {}
ARM void ActorUnkPSNP::func_ov059_02160a38(void) {}
ARM void ActorUnkPSNP::func_ov059_02160a68(void) {}
ARM void ActorUnkPSNP::func_ov059_02160a78(void) {}
ARM void ActorUnkPSNP::func_ov059_02160ab0(void) {}
ARM void ActorUnkPSNP::func_ov059_02160b14(void) {}
ARM void ActorUnkPSNP::func_ov059_02160b48(void) {}
ARM void ActorUnkPSNP::func_ov059_02160ba4(void) {}
ARM void ActorUnkPSNP::func_ov059_02160bd4(void) {}
ARM void ActorUnkPSNP::func_ov059_02160c18(void) {}
ARM void ActorUnkPSNP::func_ov059_02160c30(void) {}
ARM void ActorUnkPSNP::func_ov059_02160c48(void) {}
ARM void ActorUnkPSNP::func_ov059_02160cac(void) {}
ARM void ActorUnkPSNP::func_ov059_02160cb0(void) {}
ARM void ActorUnkPSNP::func_ov059_02160cc8(void) {}
ARM void ActorUnkPSNP::func_ov059_02160d08(void) {}
ARM void ActorUnkPSNP::func_ov059_02160db4(void) {}

ARM ActorUnkPSNP::~ActorUnkPSNP() {}
ARM ActorProfileUnkPSNP::~ActorProfileUnkPSNP() {}
