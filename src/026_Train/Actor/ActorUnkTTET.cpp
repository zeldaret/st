//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTTET.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTTET sActorProfileUnkTTET;

ARM ActorProfileUnkTTET *ActorProfileUnkTTET::GetProfile() {
    return &sActorProfileUnkTTET;
}

ARM Actor *ActorProfileUnkTTET::Create() {
    return new(HeapIndex_2) ActorUnkTTET();
}

ARM ActorProfileUnkTTET::ActorProfileUnkTTET() :
    ActorProfile(ActorId_TTET) {}

ARM ActorUnkTTET::ActorUnkTTET() {}

ARM void ActorUnkTTET::func_ov026_02122f14(void) {}
ARM void ActorUnkTTET::func_ov026_02122f94(void) {}
ARM void ActorUnkTTET::func_ov026_02122ff8(void) {}
ARM void ActorUnkTTET::func_ov026_021230b0(void) {}
ARM void ActorUnkTTET::func_ov026_02123110(void) {}
ARM void ActorUnkTTET::func_ov026_0212344c(void) {}
ARM void ActorUnkTTET::func_ov026_02123544(void) {}
ARM void ActorUnkTTET::func_ov026_021235bc(void) {}
ARM void ActorUnkTTET::func_ov026_021235c4(void) {}

ARM ActorUnkTTET::~ActorUnkTTET() {}
ARM ActorProfileUnkTTET::~ActorProfileUnkTTET() {}
