//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMGN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDMGN sActorProfileUnkDMGN;

ARM ActorProfileUnkDMGN *ActorProfileUnkDMGN::GetProfile() {
    return &sActorProfileUnkDMGN;
}

ARM Actor *ActorProfileUnkDMGN::Create() {
    return new(HeapIndex_2) ActorUnkDMGN();
}

ARM ActorProfileUnkDMGN::ActorProfileUnkDMGN() :
    ActorProfile(ActorId_DMGN) {}

ARM ActorUnkDMGN::ActorUnkDMGN() {}

ARM void ActorUnkDMGN::func_ov067_0215ad2c(void) {}
ARM void ActorUnkDMGN::func_ov067_0215ad54(void) {}
ARM void ActorUnkDMGN::func_ov067_0215ad9c(void) {}
ARM void ActorUnkDMGN::func_ov067_0215adb0(void) {}
ARM void ActorUnkDMGN::func_ov067_0215adfc(void) {}
ARM void ActorUnkDMGN::func_ov067_0215ae60(void) {}
ARM void ActorUnkDMGN::func_ov067_0215ae64(void) {}
ARM void ActorUnkDMGN::func_ov067_0215aec8(void) {}
ARM void ActorUnkDMGN::func_ov067_0215aecc(void) {}
ARM void ActorUnkDMGN::func_ov067_0215af30(void) {}
ARM void ActorUnkDMGN::func_ov067_0215af34(void) {}
ARM void ActorUnkDMGN::func_ov067_0215afa4(void) {}
ARM void ActorUnkDMGN::func_ov067_0215afd8(void) {}

ARM ActorUnkDMGN::~ActorUnkDMGN() {}
ARM ActorProfileUnkDMGN::~ActorProfileUnkDMGN() {}
