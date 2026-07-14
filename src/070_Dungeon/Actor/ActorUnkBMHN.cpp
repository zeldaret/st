//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBMHN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkBMHN);

Actor *ActorProfileUnkBMHN::Create() {
    return new(HeapIndex_2) ActorUnkBMHN();
}

ActorProfileUnkBMHN::ActorProfileUnkBMHN() :
    ActorProfile(ActorId_BMHN) {}

ActorUnkBMHN::ActorUnkBMHN() {}

ActorUnkBMHN::~ActorUnkBMHN() {}
ActorProfileUnkBMHN::~ActorProfileUnkBMHN() {}
