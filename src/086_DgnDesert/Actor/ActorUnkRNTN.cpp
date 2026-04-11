//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRNTN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRNTN sActorProfileUnkRNTN;

ARM ActorProfileUnkRNTN *ActorProfileUnkRNTN::GetProfile() {
    return &sActorProfileUnkRNTN;
}

ARM Actor *ActorProfileUnkRNTN::Create() {
    return new(HeapIndex_2) ActorUnkRNTN();
}

ARM ActorProfileUnkRNTN::ActorProfileUnkRNTN() :
    ActorProfile_Derived1(ActorId_RNTN) {}

ARM ActorUnkRNTN::ActorUnkRNTN() {}

ARM void ActorUnkRNTN::func_ov086_0215bfb4(void) {}
ARM void ActorUnkRNTN::func_ov086_0215c3cc(void) {}
ARM void ActorUnkRNTN::func_ov086_0215c838(void) {}
ARM void ActorUnkRNTN::func_ov086_0215c8fc(void) {}
ARM void ActorUnkRNTN::func_ov086_0215ccf8(void) {}
ARM void ActorUnkRNTN::func_ov086_0215cdd8(void) {}
ARM void ActorUnkRNTN::func_ov086_0215cf94(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d154(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d394(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d610(void) {}
ARM void ActorUnkRNTN::func_ov086_0215d890(void) {}

ARM ActorUnkRNTN::~ActorUnkRNTN() {}
ARM ActorProfileUnkRNTN::~ActorProfileUnkRNTN() {}
