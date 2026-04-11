//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkATTG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkATTG sActorProfileUnkATTG;

ARM ActorProfileUnkATTG *ActorProfileUnkATTG::GetProfile() {
    return &sActorProfileUnkATTG;
}

ARM Actor *ActorProfileUnkATTG::Create() {
    return new(HeapIndex_2) ActorUnkATTG();
}

ARM ActorProfileUnkATTG::ActorProfileUnkATTG() :
    ActorProfile(ActorId_ATTG) {}

ARM ActorUnkATTG::ActorUnkATTG() {}

ARM void ActorUnkATTG::func_ov031_020f3dfc(void) {}
ARM void ActorUnkATTG::func_ov031_020f3e50(void) {}
ARM void ActorUnkATTG::func_ov031_020f3eac(void) {}
ARM void ActorUnkATTG::func_ov031_020f3eec(void) {}
ARM void ActorUnkATTG::func_ov031_020f4014(void) {}

ARM ActorUnkATTG::~ActorUnkATTG() {}
ARM ActorProfileUnkATTG::~ActorProfileUnkATTG() {}
