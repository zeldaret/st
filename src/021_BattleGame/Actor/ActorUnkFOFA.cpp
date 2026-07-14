//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOFA.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkFOFA);

Actor *ActorProfileUnkFOFA::Create() {
    return new(HeapIndex_2) ActorUnkFOFA();
}

ActorProfileUnkFOFA::ActorProfileUnkFOFA() :
    ActorProfile(ActorId_FOFA) {}

ActorUnkFOFA::ActorUnkFOFA() {}

void ActorUnkFOFA::func_ov021_020f3a34(void) {}

ActorUnkFOFA::~ActorUnkFOFA() {}
ActorProfileUnkFOFA::~ActorProfileUnkFOFA() {}
