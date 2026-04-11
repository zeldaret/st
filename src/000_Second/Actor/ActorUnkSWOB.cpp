//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSWOB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSWOB sActorProfileUnkSWOB;

ARM ActorProfileUnkSWOB *ActorProfileUnkSWOB::GetProfile() {
    return &sActorProfileUnkSWOB;
}

ARM Actor *ActorProfileUnkSWOB::Create() {
    return new(HeapIndex_2) ActorUnkSWOB();
}

ARM ActorProfileUnkSWOB::ActorProfileUnkSWOB() :
    ActorProfile(ActorId_SWOB) {}

ARM ActorUnkSWOB::ActorUnkSWOB() {}

ARM void ActorUnkSWOB::func_ov000_0209a948(void) {}
ARM void ActorUnkSWOB::func_ov000_0209a9b4(void) {}
ARM void ActorUnkSWOB::func_ov000_0209aa30(void) {}

ARM ActorUnkSWOB::~ActorUnkSWOB() {}
ARM ActorProfileUnkSWOB::~ActorProfileUnkSWOB() {}
