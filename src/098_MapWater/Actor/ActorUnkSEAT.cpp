//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSEAT.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkSEAT);

ARM Actor *ActorProfileUnkSEAT::Create() {
    return new(HeapIndex_2) ActorUnkSEAT();
}

ARM ActorProfileUnkSEAT::ActorProfileUnkSEAT() :
    ActorProfile_Derived1(ActorId_SEAT) {}

ARM ActorUnkSEAT::ActorUnkSEAT() {}

ARM void ActorUnkSEAT::func_ov098_021820f0(void) {}
ARM void ActorUnkSEAT::func_ov098_02182110(void) {}
ARM void ActorUnkSEAT::func_ov098_0218212c(void) {}
ARM void ActorUnkSEAT::func_ov098_02182140(void) {}

ARM ActorUnkSEAT::~ActorUnkSEAT() {}
ARM ActorProfileUnkSEAT::~ActorProfileUnkSEAT() {}
