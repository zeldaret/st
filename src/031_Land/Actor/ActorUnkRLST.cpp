//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRLST.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRLST sActorProfileUnkRLST;

ARM ActorProfileUnkRLST *ActorProfileUnkRLST::GetProfile() {
    return &sActorProfileUnkRLST;
}

ARM Actor *ActorProfileUnkRLST::Create() {
    return new(HeapIndex_2) ActorUnkRLST();
}

ARM ActorProfileUnkRLST::ActorProfileUnkRLST() :
    ActorProfile_Derived1(ActorId_RLST) {}

ARM ActorUnkRLST::ActorUnkRLST() {}

ARM void ActorUnkRLST::func_ov031_020f8354(void) {}
ARM void ActorUnkRLST::func_ov031_020f83e4(void) {}
ARM void ActorUnkRLST::func_ov031_020f849c(void) {}
ARM void ActorUnkRLST::func_ov031_020f8674(void) {}
ARM void ActorUnkRLST::func_ov031_020f8688(void) {}
ARM void ActorUnkRLST::func_ov031_020f869c(void) {}
ARM void ActorUnkRLST::func_ov031_020f878c(void) {}
ARM void ActorUnkRLST::func_ov031_020f8824(void) {}
ARM void ActorUnkRLST::func_ov031_020f8880(void) {}
ARM void ActorUnkRLST::func_ov031_020f8948(void) {}
ARM void ActorUnkRLST::func_ov031_020f89f4(void) {}
ARM void ActorUnkRLST::func_ov031_020f8a04(void) {}
ARM void ActorUnkRLST::func_ov031_020f8a2c(void) {}
ARM void ActorUnkRLST::func_ov031_020f8a38(void) {}
ARM void ActorUnkRLST::func_ov031_020f8a3c(void) {}
ARM void ActorUnkRLST::func_ov031_020f8a58(void) {}
ARM void ActorUnkRLST::func_ov031_020f8b58(void) {}
ARM void ActorUnkRLST::func_ov031_020f8bc4(void) {}
ARM void ActorUnkRLST::func_ov031_020f8de8(void) {}
ARM void ActorUnkRLST::func_ov031_020f8ed4(void) {}
ARM void ActorUnkRLST::func_ov031_020f8f0c(void) {}
ARM void ActorUnkRLST::func_ov031_020f8f10(void) {}
ARM void ActorUnkRLST::func_ov031_020f8f30(void) {}
ARM void ActorUnkRLST::func_ov031_020f9018(void) {}
ARM void ActorUnkRLST::func_ov031_020f9050(void) {}
ARM void ActorUnkRLST::func_ov031_020f916c(void) {}
ARM void ActorUnkRLST::func_ov031_020f91ac(void) {}
ARM void ActorUnkRLST::func_ov031_020f9250(void) {}
ARM void ActorUnkRLST::func_ov031_020f92cc(void) {}
ARM void ActorUnkRLST::func_ov031_020f9340(void) {}
ARM void ActorUnkRLST::func_ov031_020f93bc(void) {}
ARM void ActorUnkRLST::func_ov031_020f9494(void) {}
ARM void ActorUnkRLST::func_ov031_020f9554(void) {}
ARM void ActorUnkRLST::func_ov031_020f97cc(void) {}
ARM void ActorUnkRLST::func_ov031_020f98e4(void) {}
ARM void ActorUnkRLST::func_ov031_020f9af4(void) {}
ARM void ActorUnkRLST::func_ov031_020f9af8(void) {}
ARM void ActorUnkRLST::func_ov031_020f9ba4(void) {}
ARM void ActorUnkRLST::func_ov031_020f9cc0(void) {}
ARM void ActorUnkRLST::func_ov031_020f9cf4(void) {}
ARM void ActorUnkRLST::func_ov031_020f9d60(void) {}

ARM ActorUnkRLST::~ActorUnkRLST() {}
ARM ActorProfileUnkRLST::~ActorProfileUnkRLST() {}
