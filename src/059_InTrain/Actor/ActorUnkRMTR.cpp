//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMTR.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMTR);

Actor *ActorProfileUnkRMTR::Create() {
    return new(HeapIndex_2) ActorUnkRMTR();
}

ActorProfileUnkRMTR::ActorProfileUnkRMTR() :
    ActorProfile_Derived1(ActorId_RMTR) {}

ActorUnkRMTR::ActorUnkRMTR() {}

void ActorUnkRMTR::func_ov059_02162a9c(void) {}
void ActorUnkRMTR::func_ov059_02162ad4(void) {}
void ActorUnkRMTR::func_ov059_02162af4(void) {}

ActorUnkRMTR::~ActorUnkRMTR() {}
ActorProfileUnkRMTR::~ActorProfileUnkRMTR() {}
