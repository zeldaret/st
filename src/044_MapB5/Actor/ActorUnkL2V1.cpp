//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkL2V1.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkL2V1 sActorProfileUnkL2V1;

ARM ActorProfileUnkL2V1 *ActorProfileUnkL2V1::GetProfile() {
    return &sActorProfileUnkL2V1;
}

ARM Actor *ActorProfileUnkL2V1::Create() {
    return new(HeapIndex_2) ActorUnkL2V1();
}

ARM ActorProfileUnkL2V1::ActorProfileUnkL2V1() :
    ActorProfile_Derived1(ActorId_L2V1) {}

ARM ActorUnkL2V1::ActorUnkL2V1() {}

ARM void ActorUnkL2V1::func_ov044_0212c34c(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c360(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c440(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c464(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c54c(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c560(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c594(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c5a4(void) {}
ARM void ActorUnkL2V1::func_ov044_0212c5f8(void) {}

ARM ActorUnkL2V1::~ActorUnkL2V1() {}
ARM ActorProfileUnkL2V1::~ActorProfileUnkL2V1() {}
