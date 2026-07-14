//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOFSW.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkOFSW);

Actor *ActorProfileUnkOFSW::Create() {
    return new(HeapIndex_2) ActorUnkOFSW();
}

ActorProfileUnkOFSW::ActorProfileUnkOFSW() :
    ActorProfile(ActorId_OFSW) {}

ActorUnkOFSW::ActorUnkOFSW() {}

void ActorUnkOFSW::func_ov077_0215ab4c(void) {}
void ActorUnkOFSW::func_ov077_0215ab6c(void) {}
void ActorUnkOFSW::func_ov077_0215abc4(void) {}

ActorUnkOFSW::~ActorUnkOFSW() {}
ActorProfileUnkOFSW::~ActorProfileUnkOFSW() {}
