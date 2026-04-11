//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRPMT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRPMT sActorProfileUnkRPMT;

ARM ActorProfileUnkRPMT *ActorProfileUnkRPMT::GetProfile() {
    return &sActorProfileUnkRPMT;
}

ARM Actor *ActorProfileUnkRPMT::Create() {
    return new(HeapIndex_2) ActorUnkRPMT();
}

ARM ActorProfileUnkRPMT::ActorProfileUnkRPMT() :
    ActorProfile(ActorId_RPMT) {}

ARM ActorUnkRPMT::ActorUnkRPMT() {}

ARM void ActorUnkRPMT::func_ov041_0212a848(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a850(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a8c8(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a90c(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a94c(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a984(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a988(void) {}
ARM void ActorUnkRPMT::func_ov041_0212a9b8(void) {}
ARM void ActorUnkRPMT::func_ov041_0212ab18(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b238(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b3ac(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b744(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b898(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b89c(void) {}
ARM void ActorUnkRPMT::func_ov041_0212b924(void) {}

ARM ActorUnkRPMT::~ActorUnkRPMT() {}
ARM ActorProfileUnkRPMT::~ActorProfileUnkRPMT() {}
