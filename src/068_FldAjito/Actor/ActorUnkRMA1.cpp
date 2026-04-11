//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA1.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMA1 sActorProfileUnkRMA1;

ARM ActorProfileUnkRMA1 *ActorProfileUnkRMA1::GetProfile() {
    return &sActorProfileUnkRMA1;
}

ARM Actor *ActorProfileUnkRMA1::Create() {
    return new(HeapIndex_2) ActorUnkRMA1();
}

ARM ActorProfileUnkRMA1::ActorProfileUnkRMA1() :
    ActorProfile_Derived1(ActorId_RMA1) {}

ARM ActorUnkRMA1::ActorUnkRMA1() {}

ARM void ActorUnkRMA1::func_ov068_02160450(void) {}
ARM void ActorUnkRMA1::func_ov068_02160478(void) {}
ARM void ActorUnkRMA1::func_ov068_0216047c(void) {}

ARM ActorUnkRMA1::~ActorUnkRMA1() {}
ARM ActorProfileUnkRMA1::~ActorProfileUnkRMA1() {}
