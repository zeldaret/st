//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMST.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMST);

Actor *ActorProfileUnkRMST::Create() {
    return new(HeapIndex_2) ActorUnkRMST();
}

ActorProfileUnkRMST::ActorProfileUnkRMST() :
    ActorProfile_Derived1(ActorId_RMST) {}

ActorUnkRMST::ActorUnkRMST() {}

void ActorUnkRMST::func_ov036_0211dea0(void) {}

ActorUnkRMST::~ActorUnkRMST() {}
ActorProfileUnkRMST::~ActorProfileUnkRMST() {}
