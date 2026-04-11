//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWCH.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSWCH sActorProfileUnkSWCH;

ARM ActorProfileUnkSWCH *ActorProfileUnkSWCH::GetProfile() {
    return &sActorProfileUnkSWCH;
}

ARM Actor *ActorProfileUnkSWCH::Create() {
    return new(HeapIndex_2) ActorUnkSWCH();
}

ARM ActorProfileUnkSWCH::ActorProfileUnkSWCH() :
    ActorProfile(ActorId_SWCH) {}

ARM ActorUnkSWCH::ActorUnkSWCH() {}

ARM void ActorUnkSWCH::func_ov031_020f7b0c(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7b20(void) {}
ARM void ActorUnkSWCH::func_ov031_020f7b88(void) {}

ARM ActorUnkSWCH::~ActorUnkSWCH() {}
ARM ActorProfileUnkSWCH::~ActorProfileUnkSWCH() {}
