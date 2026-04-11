//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRYAW.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRYAW sActorProfileUnkRYAW;

ARM ActorProfileUnkRYAW *ActorProfileUnkRYAW::GetProfile() {
    return &sActorProfileUnkRYAW;
}

ARM Actor *ActorProfileUnkRYAW::Create() {
    return new(HeapIndex_2) ActorUnkRYAW();
}

ARM ActorProfileUnkRYAW::ActorProfileUnkRYAW() :
    ActorProfile_Derived1(ActorId_RYAW) {}

ARM ActorUnkRYAW::ActorUnkRYAW() {}

ARM void ActorUnkRYAW::func_ov070_0214c204(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c218(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c22c(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c354(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c4d4(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c4f4(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c6fc(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c74c(void) {}
ARM void ActorUnkRYAW::func_ov070_0214c81c(void) {}
ARM void ActorUnkRYAW::func_ov070_0214cc08(void) {}
ARM void ActorUnkRYAW::func_ov070_0214cc78(void) {}
ARM void ActorUnkRYAW::func_ov070_0214cdac(void) {}
ARM void ActorUnkRYAW::func_ov070_0214ce04(void) {}
ARM void ActorUnkRYAW::func_ov070_0214ce88(void) {}
ARM void ActorUnkRYAW::func_ov070_0214cfb4(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d174(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d214(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d268(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d2a4(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d2e0(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d5d4(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d854(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d860(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d958(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d9cc(void) {}
ARM void ActorUnkRYAW::func_ov070_0214d9f4(void) {}
ARM void ActorUnkRYAW::func_ov070_0214da88(void) {}
ARM void ActorUnkRYAW::func_ov070_0214dac4(void) {}
ARM void ActorUnkRYAW::func_ov070_0214db34(void) {}
ARM void ActorUnkRYAW::func_ov070_0214db90(void) {}

ARM ActorUnkRYAW::~ActorUnkRYAW() {}
ARM ActorProfileUnkRYAW::~ActorProfileUnkRYAW() {}
