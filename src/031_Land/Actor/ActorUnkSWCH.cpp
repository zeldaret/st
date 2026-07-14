//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWCH.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSWCH);

Actor *ActorProfileUnkSWCH::Create() {
    return new(HeapIndex_2) ActorUnkSWCH();
}

ActorProfileUnkSWCH::ActorProfileUnkSWCH() :
    ActorProfile(ActorId_SWCH) {}

ActorUnkSWCH::ActorUnkSWCH() {}

void ActorUnkSWCH::func_ov031_020f7b0c(void) {}
void ActorUnkSWCH::func_ov031_020f7b20(void) {}
void ActorUnkSWCH::func_ov031_020f7b88(void) {}

ActorUnkSWCH::~ActorUnkSWCH() {}
ActorProfileUnkSWCH::~ActorProfileUnkSWCH() {}
