//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkKEYB.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkKEYB);

Actor *ActorProfileUnkKEYB::Create() {
    return new(HeapIndex_2) ActorUnkKEYB();
}

ActorProfileUnkKEYB::ActorProfileUnkKEYB() :
    ActorProfile_Derived1(ActorId_KEYB) {}

ActorUnkKEYB::ActorUnkKEYB() {}

void ActorUnkKEYB::func_ov041_021235b0(void) {}
void ActorUnkKEYB::func_ov041_021235e8(void) {}
void ActorUnkKEYB::func_ov041_02123630(void) {}

ActorUnkKEYB::~ActorUnkKEYB() {}
ActorProfileUnkKEYB::~ActorProfileUnkKEYB() {}
