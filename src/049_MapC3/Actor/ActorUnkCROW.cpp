//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkCROW.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkCROW sActorProfileUnkCROW;

ARM ActorProfileUnkCROW *ActorProfileUnkCROW::GetProfile() {
    return &sActorProfileUnkCROW;
}

ARM Actor *ActorProfileUnkCROW::Create() {
    return new(HeapIndex_2) ActorUnkCROW();
}

ARM ActorProfileUnkCROW::ActorProfileUnkCROW() :
    ActorProfile_Derived1(ActorId_CROW) {}

ARM ActorUnkCROW::ActorUnkCROW() {}

ARM void ActorUnkCROW::func_ov049_02132330(void) {}
ARM void ActorUnkCROW::func_ov049_02132344(void) {}
ARM void ActorUnkCROW::func_ov049_021324dc(void) {}
ARM void ActorUnkCROW::func_ov049_0213259c(void) {}
ARM void ActorUnkCROW::func_ov049_02132600(void) {}
ARM void ActorUnkCROW::func_ov049_02132604(void) {}
ARM void ActorUnkCROW::func_ov049_021326d8(void) {}
ARM void ActorUnkCROW::func_ov049_02132714(void) {}
ARM void ActorUnkCROW::func_ov049_0213275c(void) {}
ARM void ActorUnkCROW::func_ov049_02132a40(void) {}
ARM void ActorUnkCROW::func_ov049_02132cf0(void) {}
ARM void ActorUnkCROW::func_ov049_02132d1c(void) {}
ARM void ActorUnkCROW::func_ov049_02132e00(void) {}
ARM void ActorUnkCROW::func_ov049_02132ea8(void) {}
ARM void ActorUnkCROW::func_ov049_02132f28(void) {}
ARM void ActorUnkCROW::func_ov049_02132fec(void) {}
ARM void ActorUnkCROW::func_ov049_02133068(void) {}
ARM void ActorUnkCROW::func_ov049_02133128(void) {}
ARM void ActorUnkCROW::func_ov049_02133488(void) {}
ARM void ActorUnkCROW::func_ov049_02133520(void) {}
ARM void ActorUnkCROW::func_ov049_02133594(void) {}
ARM void ActorUnkCROW::func_ov049_02133798(void) {}
ARM void ActorUnkCROW::func_ov049_021338ac(void) {}
ARM void ActorUnkCROW::func_ov049_02133a68(void) {}
ARM void ActorUnkCROW::func_ov049_02133acc(void) {}
ARM void ActorUnkCROW::func_ov049_02133af4(void) {}
ARM void ActorUnkCROW::func_ov049_02133b34(void) {}
ARM void ActorUnkCROW::func_ov049_02133bf4(void) {}
ARM void ActorUnkCROW::func_ov049_02133c70(void) {}
ARM void ActorUnkCROW::func_ov049_02133ce0(void) {}
ARM void ActorUnkCROW::func_ov049_02133d4c(void) {}
ARM void ActorUnkCROW::func_ov049_02133da4(void) {}
ARM void ActorUnkCROW::func_ov049_02133dec(void) {}
ARM void ActorUnkCROW::func_ov049_02133e70(void) {}
ARM void ActorUnkCROW::func_ov049_02133eb4(void) {}
ARM void ActorUnkCROW::func_ov049_02133ed8(void) {}
ARM void ActorUnkCROW::func_ov049_02133f04(void) {}
ARM void ActorUnkCROW::func_ov049_02133fbc(void) {}
ARM void ActorUnkCROW::func_ov049_021340a8(void) {}
ARM void ActorUnkCROW::func_ov049_021340cc(void) {}
ARM void ActorUnkCROW::func_ov049_021340f8(void) {}
ARM void ActorUnkCROW::func_ov049_02134104(void) {}

ARM ActorUnkCROW::~ActorUnkCROW() {}
ARM ActorProfileUnkCROW::~ActorProfileUnkCROW() {}
