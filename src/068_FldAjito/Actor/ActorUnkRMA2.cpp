//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA2.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkRMA2);

Actor *ActorProfileUnkRMA2::Create() {
    return new(HeapIndex_2) ActorUnkRMA2();
}

ActorProfileUnkRMA2::ActorProfileUnkRMA2() :
    ActorProfile_Derived1(ActorId_RMA2) {}

ActorUnkRMA2::ActorUnkRMA2() {}

void ActorUnkRMA2::func_ov068_021605a0(void) {}
void ActorUnkRMA2::func_ov068_021605c8(void) {}
void ActorUnkRMA2::func_ov068_021605cc(void) {}

ActorUnkRMA2::~ActorUnkRMA2() {}
ActorProfileUnkRMA2::~ActorProfileUnkRMA2() {}
