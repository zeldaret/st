//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3ST.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkE3ST sActorProfileUnkE3ST;

ARM ActorProfileUnkE3ST *ActorProfileUnkE3ST::GetProfile() {
    return &sActorProfileUnkE3ST;
}

ARM Actor *ActorProfileUnkE3ST::Create() {
    return new(HeapIndex_2) ActorUnkE3ST();
}

ARM ActorProfileUnkE3ST::ActorProfileUnkE3ST() :
    ActorProfile(ActorId_E3ST) {}

ARM ActorUnkE3ST::ActorUnkE3ST() {}

ARM void ActorUnkE3ST::func_ov090_02171510(void) {}

ARM ActorUnkE3ST::~ActorUnkE3ST() {}
ARM ActorProfileUnkE3ST::~ActorProfileUnkE3ST() {}
