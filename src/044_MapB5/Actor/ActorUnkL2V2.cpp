//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkL2V2.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkL2V2);

ARM Actor *ActorProfileUnkL2V2::Create() {
    return new(HeapIndex_2) ActorUnkL2V2();
}

ARM ActorProfileUnkL2V2::ActorProfileUnkL2V2() :
    ActorProfile_Derived1(ActorId_L2V2) {}

ARM ActorUnkL2V2::ActorUnkL2V2() {}

ARM void ActorUnkL2V2::func_ov044_0212c760(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c7d4(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c7e8(void) {}
ARM void ActorUnkL2V2::func_ov044_0212c7fc(void) {}

ARM ActorUnkL2V2::~ActorUnkL2V2() {}
ARM ActorProfileUnkL2V2::~ActorProfileUnkL2V2() {}
