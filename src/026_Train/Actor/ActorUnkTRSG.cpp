//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTRSG.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTRSG);

Actor *ActorProfileUnkTRSG::Create() {
    return new(HeapIndex_2) ActorUnkTRSG();
}

ActorProfileUnkTRSG::ActorProfileUnkTRSG() :
    ActorProfile(ActorId_TRSG) {}

ActorUnkTRSG::ActorUnkTRSG() {}

void ActorUnkTRSG::func_ov026_0212369c(void) {}
void ActorUnkTRSG::func_ov026_02123700(void) {}
void ActorUnkTRSG::func_ov026_02123730(void) {}
void ActorUnkTRSG::func_ov026_0212386c(void) {}

ActorUnkTRSG::~ActorUnkTRSG() {}
ActorProfileUnkTRSG::~ActorProfileUnkTRSG() {}
