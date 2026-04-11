//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRSG.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkTRSG);

ARM Actor *ActorProfileUnkTRSG::Create() {
    return new(HeapIndex_2) ActorUnkTRSG();
}

ARM ActorProfileUnkTRSG::ActorProfileUnkTRSG() :
    ActorProfile(ActorId_TRSG) {}

ARM ActorUnkTRSG::ActorUnkTRSG() {}

ARM void ActorUnkTRSG::func_ov026_0212369c(void) {}
ARM void ActorUnkTRSG::func_ov026_02123700(void) {}
ARM void ActorUnkTRSG::func_ov026_02123730(void) {}
ARM void ActorUnkTRSG::func_ov026_0212386c(void) {}

ARM ActorUnkTRSG::~ActorUnkTRSG() {}
ARM ActorProfileUnkTRSG::~ActorProfileUnkTRSG() {}
