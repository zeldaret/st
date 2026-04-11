//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLZET.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkLZET sActorProfileUnkLZET;

ARM ActorProfileUnkLZET *ActorProfileUnkLZET::GetProfile() {
    return &sActorProfileUnkLZET;
}

ARM Actor *ActorProfileUnkLZET::Create() {
    return new(HeapIndex_2) ActorUnkLZET();
}

ARM ActorProfileUnkLZET::ActorProfileUnkLZET() :
    ActorProfile(ActorId_LZET) {}

ARM ActorUnkLZET::ActorUnkLZET() {}

ARM ActorUnkLZET::~ActorUnkLZET() {}
ARM ActorProfileUnkLZET::~ActorProfileUnkLZET() {}
