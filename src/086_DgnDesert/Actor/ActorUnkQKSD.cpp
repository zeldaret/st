//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkQKSD.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkQKSD sActorProfileUnkQKSD;

ARM ActorProfileUnkQKSD *ActorProfileUnkQKSD::GetProfile() {
    return &sActorProfileUnkQKSD;
}

ARM Actor *ActorProfileUnkQKSD::Create() {
    return new(HeapIndex_2) ActorUnkQKSD();
}

ARM ActorProfileUnkQKSD::ActorProfileUnkQKSD() :
    ActorProfile_Derived1(ActorId_QKSD) {}

ARM ActorUnkQKSD::ActorUnkQKSD() {}

ARM void ActorUnkQKSD::func_ov086_0215bc50(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bc64(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bcc8(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bcdc(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bcf0(void) {}
ARM void ActorUnkQKSD::func_ov086_0215bd54(void) {}

ARM ActorUnkQKSD::~ActorUnkQKSD() {}
ARM ActorProfileUnkQKSD::~ActorProfileUnkQKSD() {}
