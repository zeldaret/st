//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSTCT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkSTCT sActorProfileUnkSTCT;

ARM ActorProfileUnkSTCT *ActorProfileUnkSTCT::GetProfile() {
    return &sActorProfileUnkSTCT;
}

ARM Actor *ActorProfileUnkSTCT::Create() {
    return new(HeapIndex_2) ActorUnkSTCT();
}

ARM ActorProfileUnkSTCT::ActorProfileUnkSTCT() :
    ActorProfile_Derived1(ActorId_STCT) {}

ARM ActorUnkSTCT::ActorUnkSTCT() {}

ARM void ActorUnkSTCT::func_ov091_02169ea8(void) {}
ARM void ActorUnkSTCT::func_ov091_02169eec(void) {}

ARM ActorUnkSTCT::~ActorUnkSTCT() {}
ARM ActorProfileUnkSTCT::~ActorProfileUnkSTCT() {}
