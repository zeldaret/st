//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSGMG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSGMG sActorProfileUnkSGMG;

ARM ActorProfileUnkSGMG *ActorProfileUnkSGMG::GetProfile() {
    return &sActorProfileUnkSGMG;
}

ARM Actor *ActorProfileUnkSGMG::Create() {
    return new(HeapIndex_2) ActorUnkSGMG();
}

ARM ActorProfileUnkSGMG::ActorProfileUnkSGMG() :
    ActorProfile(ActorId_SGMG) {}

ARM ActorUnkSGMG::ActorUnkSGMG() {}

ARM void ActorUnkSGMG::func_ov030_0214d8d0(void) {}
ARM void ActorUnkSGMG::func_ov030_0214d8e0(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dbb4(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dc30(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dc80(void) {}
ARM void ActorUnkSGMG::func_ov030_0214dc90(void) {}

ARM ActorUnkSGMG::~ActorUnkSGMG() {}
ARM ActorProfileUnkSGMG::~ActorProfileUnkSGMG() {}
