//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMBD.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRMBD sActorProfileUnkRMBD;

ARM ActorProfileUnkRMBD *ActorProfileUnkRMBD::GetProfile() {
    return &sActorProfileUnkRMBD;
}

ARM Actor *ActorProfileUnkRMBD::Create() {
    return new(HeapIndex_2) ActorUnkRMBD();
}

ARM ActorProfileUnkRMBD::ActorProfileUnkRMBD() :
    ActorProfile_Derived1(ActorId_RMBD) {}

ARM ActorUnkRMBD::ActorUnkRMBD() {}

ARM void ActorUnkRMBD::func_ov045_0212352c(void) {}
ARM void ActorUnkRMBD::func_ov045_02123540(void) {}
ARM void ActorUnkRMBD::func_ov045_0212360c(void) {}
ARM void ActorUnkRMBD::func_ov045_02123960(void) {}
ARM void ActorUnkRMBD::func_ov045_02123c0c(void) {}
ARM void ActorUnkRMBD::func_ov045_02123c44(void) {}
ARM void ActorUnkRMBD::func_ov045_02123cac(void) {}
ARM void ActorUnkRMBD::func_ov045_02123cb0(void) {}
ARM void ActorUnkRMBD::func_ov045_02123d44(void) {}
ARM void ActorUnkRMBD::func_ov045_02123e4c(void) {}
ARM void ActorUnkRMBD::func_ov045_02123e5c(void) {}
ARM void ActorUnkRMBD::func_ov045_02123e94(void) {}
ARM void ActorUnkRMBD::func_ov045_02123ec0(void) {}
ARM void ActorUnkRMBD::func_ov045_02123edc(void) {}
ARM void ActorUnkRMBD::func_ov045_02123f08(void) {}
ARM void ActorUnkRMBD::func_ov045_02123ff0(void) {}
ARM void ActorUnkRMBD::func_ov045_0212413c(void) {}
ARM void ActorUnkRMBD::func_ov045_0212415c(void) {}

ARM ActorUnkRMBD::~ActorUnkRMBD() {}
ARM ActorProfileUnkRMBD::~ActorProfileUnkRMBD() {}
