//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCLZN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkCLZN);

Actor *ActorProfileUnkCLZN::Create() {
    return new(HeapIndex_2) ActorUnkCLZN();
}

ActorProfileUnkCLZN::ActorProfileUnkCLZN() :
    ActorProfile(ActorId_CLZN) {}

ActorUnkCLZN::ActorUnkCLZN() {}

void ActorUnkCLZN::func_ov021_020f3940(void) {}
void ActorUnkCLZN::func_ov021_020f3964(void) {}

ActorUnkCLZN::~ActorUnkCLZN() {}
ActorProfileUnkCLZN::~ActorProfileUnkCLZN() {}
