//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSEAT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSEAT);

Actor *ActorProfileUnkSEAT::Create() {
    return new(HeapIndex_2) ActorUnkSEAT();
}

ActorProfileUnkSEAT::ActorProfileUnkSEAT() :
    ActorProfile_Derived1(ActorId_SEAT) {}

ActorUnkSEAT::ActorUnkSEAT() {}

void ActorUnkSEAT::func_ov098_021820f0(void) {}
void ActorUnkSEAT::func_ov098_02182110(void) {}
void ActorUnkSEAT::func_ov098_0218212c(void) {}
void ActorUnkSEAT::func_ov098_02182140(void) {}

ActorUnkSEAT::~ActorUnkSEAT() {}
ActorProfileUnkSEAT::~ActorProfileUnkSEAT() {}
