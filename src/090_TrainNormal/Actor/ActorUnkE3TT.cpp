//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkE3TT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkE3TT sActorProfileUnkE3TT;

ARM ActorProfileUnkE3TT *ActorProfileUnkE3TT::GetProfile() {
    return &sActorProfileUnkE3TT;
}

ARM Actor *ActorProfileUnkE3TT::Create() {
    return new(HeapIndex_2) ActorUnkE3TT();
}

ARM ActorProfileUnkE3TT::ActorProfileUnkE3TT() :
    ActorProfile(ActorId_E3TT) {}

ARM ActorUnkE3TT::ActorUnkE3TT() {}

ARM void ActorUnkE3TT::func_ov090_021711a4(void) {}
ARM void ActorUnkE3TT::func_ov090_021711d4(void) {}

ARM ActorUnkE3TT::~ActorUnkE3TT() {}
ARM ActorProfileUnkE3TT::~ActorProfileUnkE3TT() {}
