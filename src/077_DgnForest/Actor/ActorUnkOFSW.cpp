//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOFSW.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkOFSW sActorProfileUnkOFSW;

ARM ActorProfileUnkOFSW *ActorProfileUnkOFSW::GetProfile() {
    return &sActorProfileUnkOFSW;
}

ARM Actor *ActorProfileUnkOFSW::Create() {
    return new(HeapIndex_2) ActorUnkOFSW();
}

ARM ActorProfileUnkOFSW::ActorProfileUnkOFSW() :
    ActorProfile(ActorId_OFSW) {}

ARM ActorUnkOFSW::ActorUnkOFSW() {}

ARM void ActorUnkOFSW::func_ov077_0215ab4c(void) {}
ARM void ActorUnkOFSW::func_ov077_0215ab6c(void) {}
ARM void ActorUnkOFSW::func_ov077_0215abc4(void) {}

ARM ActorUnkOFSW::~ActorUnkOFSW() {}
ARM ActorProfileUnkOFSW::~ActorProfileUnkOFSW() {}
