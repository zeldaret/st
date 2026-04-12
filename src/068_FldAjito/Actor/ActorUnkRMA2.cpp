//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMA2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMA2);

ARM Actor *ActorProfileUnkRMA2::Create() {
    return new(HeapIndex_2) ActorUnkRMA2();
}

ARM ActorProfileUnkRMA2::ActorProfileUnkRMA2() :
    ActorProfile_Derived1(ActorId_RMA2) {}

ARM ActorUnkRMA2::ActorUnkRMA2() {}

ARM void ActorUnkRMA2::func_ov068_021605a0(void) {}
ARM void ActorUnkRMA2::func_ov068_021605c8(void) {}
ARM void ActorUnkRMA2::func_ov068_021605cc(void) {}

ARM ActorUnkRMA2::~ActorUnkRMA2() {}
ARM ActorProfileUnkRMA2::~ActorProfileUnkRMA2() {}
