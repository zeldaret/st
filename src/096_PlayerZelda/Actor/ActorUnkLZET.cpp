//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLZET.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkLZET);

Actor *ActorProfileUnkLZET::Create() {
    return new(HeapIndex_2) ActorUnkLZET();
}

ActorProfileUnkLZET::ActorProfileUnkLZET() :
    ActorProfile(ActorId_LZET) {}

ActorUnkLZET::ActorUnkLZET() {}

ActorUnkLZET::~ActorUnkLZET() {}
ActorProfileUnkLZET::~ActorProfileUnkLZET() {}
