//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkWPCH.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkWPCH sActorProfileUnkWPCH;

ARM ActorProfileUnkWPCH *ActorProfileUnkWPCH::GetProfile() {
    return &sActorProfileUnkWPCH;
}

ARM Actor *ActorProfileUnkWPCH::Create() {
    return new(HeapIndex_2) ActorUnkWPCH();
}

ARM ActorProfileUnkWPCH::ActorProfileUnkWPCH() :
    ActorProfile(ActorId_WPCH) {}

ARM ActorUnkWPCH::ActorUnkWPCH() {}

ARM void ActorUnkWPCH::func_ov058_0214d500(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d508(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d540(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d558(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d570(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d684(void) {}
ARM void ActorUnkWPCH::func_ov058_0214d694(void) {}

ARM ActorUnkWPCH::~ActorUnkWPCH() {}
ARM ActorProfileUnkWPCH::~ActorProfileUnkWPCH() {}
