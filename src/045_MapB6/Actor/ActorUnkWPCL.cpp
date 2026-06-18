//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWPCL.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkWPCL);

Actor *ActorProfileUnkWPCL::Create() {
    return new(HeapIndex_2) ActorUnkWPCL();
}

ActorProfileUnkWPCL::ActorProfileUnkWPCL() :
    ActorProfile(ActorId_WPCL) {}

ActorUnkWPCL::ActorUnkWPCL() {}

void ActorUnkWPCL::func_ov045_02128f58(void) {}

ActorUnkWPCL::~ActorUnkWPCL() {}
ActorProfileUnkWPCL::~ActorProfileUnkWPCL() {}
