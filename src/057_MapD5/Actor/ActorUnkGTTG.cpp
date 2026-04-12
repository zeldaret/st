//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGTTG.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkGTTG);

ARM Actor *ActorProfileUnkGTTG::Create() {
    return new(HeapIndex_2) ActorUnkGTTG();
}

ARM ActorProfileUnkGTTG::ActorProfileUnkGTTG() :
    ActorProfile(ActorId_GTTG) {}

ARM ActorUnkGTTG::ActorUnkGTTG() {}

ARM void ActorUnkGTTG::func_ov057_0213a8b8(void) {}

ARM ActorUnkGTTG::~ActorUnkGTTG() {}
ARM ActorProfileUnkGTTG::~ActorProfileUnkGTTG() {}
