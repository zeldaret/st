//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFOFA.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkFOFA);

ARM Actor *ActorProfileUnkFOFA::Create() {
    return new(HeapIndex_2) ActorUnkFOFA();
}

ARM ActorProfileUnkFOFA::ActorProfileUnkFOFA() :
    ActorProfile(ActorId_FOFA) {}

ARM ActorUnkFOFA::ActorUnkFOFA() {}

ARM void ActorUnkFOFA::func_ov021_020f3a34(void) {}

ARM ActorUnkFOFA::~ActorUnkFOFA() {}
ARM ActorProfileUnkFOFA::~ActorProfileUnkFOFA() {}
