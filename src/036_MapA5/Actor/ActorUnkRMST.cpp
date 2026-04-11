//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMST.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMST sActorProfileUnkRMST;

ARM ActorProfileUnkRMST *ActorProfileUnkRMST::GetProfile() {
    return &sActorProfileUnkRMST;
}

ARM Actor *ActorProfileUnkRMST::Create() {
    return new(HeapIndex_2) ActorUnkRMST();
}

ARM ActorProfileUnkRMST::ActorProfileUnkRMST() :
    ActorProfile_Derived1(ActorId_RMST) {}

ARM ActorUnkRMST::ActorUnkRMST() {}

ARM void ActorUnkRMST::func_ov036_0211dea0(void) {}

ARM ActorUnkRMST::~ActorUnkRMST() {}
ARM ActorProfileUnkRMST::~ActorProfileUnkRMST() {}
