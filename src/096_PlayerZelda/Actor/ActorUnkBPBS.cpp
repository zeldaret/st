//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBPBS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBPBS sActorProfileUnkBPBS;

ARM ActorProfileUnkBPBS *ActorProfileUnkBPBS::GetProfile() {
    return &sActorProfileUnkBPBS;
}

ARM Actor *ActorProfileUnkBPBS::Create() {
    return new(HeapIndex_2) ActorUnkBPBS();
}

ARM ActorProfileUnkBPBS::ActorProfileUnkBPBS() :
    ActorProfile_Derived1(ActorId_BPBS) {}

ARM ActorUnkBPBS::ActorUnkBPBS() {}

ARM void ActorUnkBPBS::func_ov096_0217adb8(void) {}
ARM void ActorUnkBPBS::func_ov096_0217add8(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b130(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b144(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b158(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b16c(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b354(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b378(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b3a4(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b3ec(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b46c(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b5bc(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b88c(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b980(void) {}
ARM void ActorUnkBPBS::func_ov096_0217b9ac(void) {}
ARM void ActorUnkBPBS::func_ov096_0217bc4c(void) {}
ARM void ActorUnkBPBS::func_ov096_0217bcb8(void) {}
ARM void ActorUnkBPBS::func_ov096_0217bfd0(void) {}
ARM void ActorUnkBPBS::func_ov096_0217c03c(void) {}
ARM void ActorUnkBPBS::func_ov096_0217c29c(void) {}
ARM void ActorUnkBPBS::func_ov096_0217c2ec(void) {}
ARM void ActorUnkBPBS::func_ov096_0217c3e8(void) {}
ARM void ActorUnkBPBS::func_ov096_0217c3f8(void) {}
ARM void ActorUnkBPBS::func_ov096_0217c548(void) {}
ARM void ActorUnkBPBS::func_ov096_0217c818(void) {}
ARM void ActorUnkBPBS::func_ov096_0217cb90(void) {}
ARM void ActorUnkBPBS::func_ov096_0217cc48(void) {}
ARM void ActorUnkBPBS::func_ov096_0217cc74(void) {}
ARM void ActorUnkBPBS::func_ov096_0217ccfc(void) {}
ARM void ActorUnkBPBS::func_ov096_0217cecc(void) {}
ARM void ActorUnkBPBS::func_ov096_0217cee4(void) {}
ARM void ActorUnkBPBS::func_ov096_0217cf18(void) {}
ARM void ActorUnkBPBS::func_ov096_0217d084(void) {}
ARM void ActorUnkBPBS::func_ov096_0217d19c(void) {}
ARM void ActorUnkBPBS::func_ov096_0217d1b8(void) {}
ARM void ActorUnkBPBS::func_ov096_0217d234(void) {}

ARM ActorUnkBPBS::~ActorUnkBPBS() {}
ARM ActorProfileUnkBPBS::~ActorProfileUnkBPBS() {}
