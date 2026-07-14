//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFIFI.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkFIFI);

Actor *ActorProfileUnkFIFI::Create() {
    return new(HeapIndex_2) ActorUnkFIFI();
}

ActorProfileUnkFIFI::ActorProfileUnkFIFI() :
    ActorProfile(ActorId_FIFI) {}

ActorUnkFIFI::ActorUnkFIFI() {}

void ActorUnkFIFI::func_ov035_0211e5d8(void) {}
void ActorUnkFIFI::func_ov035_0211e6d0(void) {}

ActorUnkFIFI::~ActorUnkFIFI() {}
ActorProfileUnkFIFI::~ActorProfileUnkFIFI() {}
