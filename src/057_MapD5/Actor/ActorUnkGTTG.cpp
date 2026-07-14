//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGTTG.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkGTTG);

Actor *ActorProfileUnkGTTG::Create() {
    return new(HeapIndex_2) ActorUnkGTTG();
}

ActorProfileUnkGTTG::ActorProfileUnkGTTG() :
    ActorProfile(ActorId_GTTG) {}

ActorUnkGTTG::ActorUnkGTTG() {}

void ActorUnkGTTG::func_ov057_0213a8b8(void) {}

ActorUnkGTTG::~ActorUnkGTTG() {}
ActorProfileUnkGTTG::~ActorProfileUnkGTTG() {}
