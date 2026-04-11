//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKOCH.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkKOCH sActorProfileUnkKOCH;

ARM ActorProfileUnkKOCH *ActorProfileUnkKOCH::GetProfile() {
    return &sActorProfileUnkKOCH;
}

ARM Actor *ActorProfileUnkKOCH::Create() {
    return new(HeapIndex_2) ActorUnkKOCH();
}

ARM ActorProfileUnkKOCH::ActorProfileUnkKOCH() :
    ActorProfile(ActorId_KOCH) {}

ARM ActorUnkKOCH::ActorUnkKOCH() {}

ARM void ActorUnkKOCH::func_ov058_02142440(void) {}
ARM void ActorUnkKOCH::func_ov058_02142448(void) {}
ARM void ActorUnkKOCH::func_ov058_021424a0(void) {}
ARM void ActorUnkKOCH::func_ov058_021425ac(void) {}
ARM void ActorUnkKOCH::func_ov058_021425dc(void) {}
ARM void ActorUnkKOCH::func_ov058_02142614(void) {}
ARM void ActorUnkKOCH::func_ov058_021426b8(void) {}
ARM void ActorUnkKOCH::func_ov058_02142710(void) {}
ARM void ActorUnkKOCH::func_ov058_0214274c(void) {}
ARM void ActorUnkKOCH::func_ov058_0214278c(void) {}
ARM void ActorUnkKOCH::func_ov058_021427b4(void) {}
ARM void ActorUnkKOCH::func_ov058_021427c4(void) {}
ARM void ActorUnkKOCH::func_ov058_021427ec(void) {}
ARM void ActorUnkKOCH::func_ov058_0214283c(void) {}
ARM void ActorUnkKOCH::func_ov058_0214286c(void) {}
ARM void ActorUnkKOCH::func_ov058_021428c8(void) {}
ARM void ActorUnkKOCH::func_ov058_02142928(void) {}
ARM void ActorUnkKOCH::func_ov058_0214292c(void) {}
ARM void ActorUnkKOCH::func_ov058_02142934(void) {}
ARM void ActorUnkKOCH::func_ov058_02142944(void) {}

ARM ActorUnkKOCH::~ActorUnkKOCH() {}
ARM ActorProfileUnkKOCH::~ActorProfileUnkKOCH() {}
