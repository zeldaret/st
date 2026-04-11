//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBMHN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBMHN sActorProfileUnkBMHN;

ARM ActorProfileUnkBMHN *ActorProfileUnkBMHN::GetProfile() {
    return &sActorProfileUnkBMHN;
}

ARM Actor *ActorProfileUnkBMHN::Create() {
    return new(HeapIndex_2) ActorUnkBMHN();
}

ARM ActorProfileUnkBMHN::ActorProfileUnkBMHN() :
    ActorProfile(ActorId_BMHN) {}

ARM ActorUnkBMHN::ActorUnkBMHN() {}

ARM ActorUnkBMHN::~ActorUnkBMHN() {}
ARM ActorProfileUnkBMHN::~ActorProfileUnkBMHN() {}
