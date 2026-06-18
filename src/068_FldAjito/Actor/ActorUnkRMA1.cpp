//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA1.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMA1);

Actor *ActorProfileUnkRMA1::Create() {
    return new(HeapIndex_2) ActorUnkRMA1();
}

ActorProfileUnkRMA1::ActorProfileUnkRMA1() :
    ActorProfile_Derived1(ActorId_RMA1) {}

ActorUnkRMA1::ActorUnkRMA1() {}

void ActorUnkRMA1::func_ov068_02160450(void) {}
void ActorUnkRMA1::func_ov068_02160478(void) {}
void ActorUnkRMA1::func_ov068_0216047c(void) {}

ActorUnkRMA1::~ActorUnkRMA1() {}
ActorProfileUnkRMA1::~ActorProfileUnkRMA1() {}
