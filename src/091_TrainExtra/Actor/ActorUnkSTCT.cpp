//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSTCT.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSTCT);

Actor *ActorProfileUnkSTCT::Create() {
    return new(HeapIndex_2) ActorUnkSTCT();
}

ActorProfileUnkSTCT::ActorProfileUnkSTCT() :
    ActorProfile_Derived1(ActorId_STCT) {}

ActorUnkSTCT::ActorUnkSTCT() {}

void ActorUnkSTCT::func_ov091_02169ea8(void) {}
void ActorUnkSTCT::func_ov091_02169eec(void) {}

ActorUnkSTCT::~ActorUnkSTCT() {}
ActorProfileUnkSTCT::~ActorProfileUnkSTCT() {}
