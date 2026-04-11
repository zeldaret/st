//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKEYB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkKEYB sActorProfileUnkKEYB;

ARM ActorProfileUnkKEYB *ActorProfileUnkKEYB::GetProfile() {
    return &sActorProfileUnkKEYB;
}

ARM Actor *ActorProfileUnkKEYB::Create() {
    return new(HeapIndex_2) ActorUnkKEYB();
}

ARM ActorProfileUnkKEYB::ActorProfileUnkKEYB() :
    ActorProfile_Derived1(ActorId_KEYB) {}

ARM ActorUnkKEYB::ActorUnkKEYB() {}

ARM void ActorUnkKEYB::func_ov041_021235b0(void) {}
ARM void ActorUnkKEYB::func_ov041_021235e8(void) {}
ARM void ActorUnkKEYB::func_ov041_02123630(void) {}

ARM ActorUnkKEYB::~ActorUnkKEYB() {}
ARM ActorProfileUnkKEYB::~ActorProfileUnkKEYB() {}
