//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBSN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRBSN sActorProfileUnkRBSN;

ARM ActorProfileUnkRBSN *ActorProfileUnkRBSN::GetProfile() {
    return &sActorProfileUnkRBSN;
}

ARM Actor *ActorProfileUnkRBSN::Create() {
    return new(HeapIndex_2) ActorUnkRBSN();
}

ARM ActorProfileUnkRBSN::ActorProfileUnkRBSN() :
    ActorProfile_Derived1(ActorId_RBSN) {}

ARM ActorUnkRBSN::ActorUnkRBSN() {}

ARM void ActorUnkRBSN::func_ov080_0215ead8(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eaec(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb54(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb58(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb6c(void) {}
ARM void ActorUnkRBSN::func_ov080_0215eb80(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ebd0(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ebf4(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ec04(void) {}
ARM void ActorUnkRBSN::func_ov080_0215ec50(void) {}

ARM ActorUnkRBSN::~ActorUnkRBSN() {}
ARM ActorProfileUnkRBSN::~ActorProfileUnkRBSN() {}
