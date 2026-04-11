//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWPCL.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkWPCL sActorProfileUnkWPCL;

ARM ActorProfileUnkWPCL *ActorProfileUnkWPCL::GetProfile() {
    return &sActorProfileUnkWPCL;
}

ARM Actor *ActorProfileUnkWPCL::Create() {
    return new(HeapIndex_2) ActorUnkWPCL();
}

ARM ActorProfileUnkWPCL::ActorProfileUnkWPCL() :
    ActorProfile(ActorId_WPCL) {}

ARM ActorUnkWPCL::ActorUnkWPCL() {}

ARM void ActorUnkWPCL::func_ov045_02128f58(void) {}

ARM ActorUnkWPCL::~ActorUnkWPCL() {}
ARM ActorProfileUnkWPCL::~ActorProfileUnkWPCL() {}
