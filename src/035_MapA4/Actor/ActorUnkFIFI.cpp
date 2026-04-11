//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFIFI.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFIFI sActorProfileUnkFIFI;

ARM ActorProfileUnkFIFI *ActorProfileUnkFIFI::GetProfile() {
    return &sActorProfileUnkFIFI;
}

ARM Actor *ActorProfileUnkFIFI::Create() {
    return new(HeapIndex_2) ActorUnkFIFI();
}

ARM ActorProfileUnkFIFI::ActorProfileUnkFIFI() :
    ActorProfile(ActorId_FIFI) {}

ARM ActorUnkFIFI::ActorUnkFIFI() {}

ARM void ActorUnkFIFI::func_ov035_0211e5d8(void) {}
ARM void ActorUnkFIFI::func_ov035_0211e6d0(void) {}

ARM ActorUnkFIFI::~ActorUnkFIFI() {}
ARM ActorProfileUnkFIFI::~ActorProfileUnkFIFI() {}
