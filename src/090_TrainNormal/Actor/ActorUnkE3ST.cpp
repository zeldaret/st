//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3ST.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkE3ST);

Actor *ActorProfileUnkE3ST::Create() {
    return new(HeapIndex_2) ActorUnkE3ST();
}

ActorProfileUnkE3ST::ActorProfileUnkE3ST() :
    ActorProfile(ActorId_E3ST) {}

ActorUnkE3ST::ActorUnkE3ST() {}

void ActorUnkE3ST::func_ov090_02171510(void) {}

ActorUnkE3ST::~ActorUnkE3ST() {}
ActorProfileUnkE3ST::~ActorProfileUnkE3ST() {}
