//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGOVT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkGOVT sActorProfileUnkGOVT;

ARM ActorProfileUnkGOVT *ActorProfileUnkGOVT::GetProfile() {
    return &sActorProfileUnkGOVT;
}

ARM Actor *ActorProfileUnkGOVT::Create() {
    return new(HeapIndex_2) ActorUnkGOVT();
}

ARM ActorProfileUnkGOVT::ActorProfileUnkGOVT() :
    ActorProfile(ActorId_GOVT) {}

ARM ActorUnkGOVT::ActorUnkGOVT() {}

ARM void ActorUnkGOVT::func_ov030_0214cf58(void) {}
ARM void ActorUnkGOVT::func_ov030_0214cf9c(void) {}
ARM void ActorUnkGOVT::func_ov030_0214cfe0(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d018(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d050(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d054(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d078(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d278(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d594(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d5d4(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d5d8(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d604(void) {}
ARM void ActorUnkGOVT::func_ov030_0214d624(void) {}

ARM ActorUnkGOVT::~ActorUnkGOVT() {}
ARM ActorProfileUnkGOVT::~ActorProfileUnkGOVT() {}
