//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTTUT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTTUT);

Actor *ActorProfileUnkTTUT::Create() {
    return new(HeapIndex_2) ActorUnkTTUT();
}

ActorProfileUnkTTUT::ActorProfileUnkTTUT() :
    ActorProfile(ActorId_TTUT) {}

ActorUnkTTUT::ActorUnkTTUT() {}

void ActorUnkTTUT::func_ov091_02175868(void) {}
void ActorUnkTTUT::func_ov091_02175944(void) {}
void ActorUnkTTUT::func_ov091_02175bbc(void) {}

ActorUnkTTUT::~ActorUnkTTUT() {}
ActorProfileUnkTTUT::~ActorProfileUnkTTUT() {}
