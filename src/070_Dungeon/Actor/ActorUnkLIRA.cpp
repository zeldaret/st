//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkLIRA.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkLIRA sActorProfileUnkLIRA;

ARM ActorProfileUnkLIRA *ActorProfileUnkLIRA::GetProfile() {
    return &sActorProfileUnkLIRA;
}

ARM Actor *ActorProfileUnkLIRA::Create() {
    return new(HeapIndex_2) ActorUnkLIRA();
}

ARM ActorProfileUnkLIRA::ActorProfileUnkLIRA() :
    ActorProfile_Derived1(ActorId_LIRA) {}

ARM ActorUnkLIRA::ActorUnkLIRA() {}

ARM void ActorUnkLIRA::func_ov070_0214286c(void) {}
ARM void ActorUnkLIRA::func_ov070_021428b4(void) {}
ARM void ActorUnkLIRA::func_ov070_02142b48(void) {}
ARM void ActorUnkLIRA::func_ov070_02142b78(void) {}
ARM void ActorUnkLIRA::func_ov070_02142bb0(void) {}
ARM void ActorUnkLIRA::func_ov070_02142c28(void) {}
ARM void ActorUnkLIRA::func_ov070_02142ca0(void) {}
ARM void ActorUnkLIRA::func_ov070_02142d50(void) {}
ARM void ActorUnkLIRA::func_ov070_02142e04(void) {}
ARM void ActorUnkLIRA::func_ov070_02142edc(void) {}
ARM void ActorUnkLIRA::func_ov070_02142f1c(void) {}
ARM void ActorUnkLIRA::func_ov070_02142f58(void) {}
ARM void ActorUnkLIRA::func_ov070_02142f94(void) {}
ARM void ActorUnkLIRA::func_ov070_02142f98(void) {}
ARM void ActorUnkLIRA::func_ov070_02143064(void) {}
ARM void ActorUnkLIRA::func_ov070_02143074(void) {}
ARM void ActorUnkLIRA::func_ov070_02143078(void) {}
ARM void ActorUnkLIRA::func_ov070_021430d4(void) {}
ARM void ActorUnkLIRA::func_ov070_021430f8(void) {}
ARM void ActorUnkLIRA::func_ov070_02143198(void) {}
ARM void ActorUnkLIRA::func_ov070_021431c8(void) {}
ARM void ActorUnkLIRA::func_ov070_02143220(void) {}
ARM void ActorUnkLIRA::func_ov070_02143244(void) {}
ARM void ActorUnkLIRA::func_ov070_0214328c(void) {}
ARM void ActorUnkLIRA::func_ov070_021432b4(void) {}
ARM void ActorUnkLIRA::func_ov070_02143308(void) {}
ARM void ActorUnkLIRA::func_ov070_02143350(void) {}
ARM void ActorUnkLIRA::func_ov070_021433d0(void) {}
ARM void ActorUnkLIRA::func_ov070_02143414(void) {}

ARM ActorUnkLIRA::~ActorUnkLIRA() {}
ARM ActorProfileUnkLIRA::~ActorProfileUnkLIRA() {}
