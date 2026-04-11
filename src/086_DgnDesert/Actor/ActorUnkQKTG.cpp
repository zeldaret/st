//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkQKTG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkQKTG sActorProfileUnkQKTG;

ARM ActorProfileUnkQKTG *ActorProfileUnkQKTG::GetProfile() {
    return &sActorProfileUnkQKTG;
}

ARM Actor *ActorProfileUnkQKTG::Create() {
    return new(HeapIndex_2) ActorUnkQKTG();
}

ARM ActorProfileUnkQKTG::ActorProfileUnkQKTG() :
    ActorProfile(ActorId_QKTG) {}

ARM ActorUnkQKTG::ActorUnkQKTG() {}

ARM void ActorUnkQKTG::func_ov086_0215dd28(void) {}
ARM void ActorUnkQKTG::func_ov086_0215dd68(void) {}
ARM void ActorUnkQKTG::func_ov086_0215de08(void) {}
ARM void ActorUnkQKTG::func_ov086_0215de1c(void) {}

ARM ActorUnkQKTG::~ActorUnkQKTG() {}
ARM ActorProfileUnkQKTG::~ActorProfileUnkQKTG() {}
