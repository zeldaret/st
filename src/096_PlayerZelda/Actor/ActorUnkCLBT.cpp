//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLBT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCLBT sActorProfileUnkCLBT;

ARM ActorProfileUnkCLBT *ActorProfileUnkCLBT::GetProfile() {
    return &sActorProfileUnkCLBT;
}

ARM Actor *ActorProfileUnkCLBT::Create() {
    return new(HeapIndex_2) ActorUnkCLBT();
}

ARM ActorProfileUnkCLBT::ActorProfileUnkCLBT() :
    ActorProfile(ActorId_CLBT) {}

ARM ActorUnkCLBT::ActorUnkCLBT() {}

ARM void ActorUnkCLBT::func_ov096_0217a7cc(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a80c(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a858(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a894(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a8cc(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a910(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a948(void) {}
ARM void ActorUnkCLBT::func_ov096_0217a9e4(void) {}

ARM ActorUnkCLBT::~ActorUnkCLBT() {}
ARM ActorProfileUnkCLBT::~ActorProfileUnkCLBT() {}
