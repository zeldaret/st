//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRBNT.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRBNT sActorProfileUnkRBNT;

ARM ActorProfileUnkRBNT *ActorProfileUnkRBNT::GetProfile() {
    return &sActorProfileUnkRBNT;
}

ARM Actor *ActorProfileUnkRBNT::Create() {
    return new(HeapIndex_2) ActorUnkRBNT();
}

ARM ActorProfileUnkRBNT::ActorProfileUnkRBNT() :
    ActorProfile_Derived1(ActorId_RBNT) {}

ARM ActorUnkRBNT::ActorUnkRBNT() {}

ARM void ActorUnkRBNT::func_ov026_02121484(void) {}
ARM void ActorUnkRBNT::func_ov026_021214bc(void) {}
ARM void ActorUnkRBNT::func_ov026_02121518(void) {}
ARM void ActorUnkRBNT::func_ov026_02121554(void) {}
ARM void ActorUnkRBNT::func_ov026_02121708(void) {}
ARM void ActorUnkRBNT::func_ov026_02121730(void) {}
ARM void ActorUnkRBNT::func_ov026_0212197c(void) {}
ARM void ActorUnkRBNT::func_ov026_021219e8(void) {}
ARM void ActorUnkRBNT::func_ov026_021219ec(void) {}
ARM void ActorUnkRBNT::func_ov026_02121a50(void) {}
ARM void ActorUnkRBNT::func_ov026_02121a74(void) {}
ARM void ActorUnkRBNT::func_ov026_02121aa8(void) {}
ARM void ActorUnkRBNT::func_ov026_02121b00(void) {}
ARM void ActorUnkRBNT::func_ov026_02121ba4(void) {}
ARM void ActorUnkRBNT::func_ov026_02121bc0(void) {}
ARM void ActorUnkRBNT::func_ov026_02121c00(void) {}
ARM void ActorUnkRBNT::func_ov026_02121c1c(void) {}
ARM void ActorUnkRBNT::func_ov026_02121c5c(void) {}
ARM void ActorUnkRBNT::func_ov026_02121c70(void) {}
ARM void ActorUnkRBNT::func_ov026_02121cd4(void) {}
ARM void ActorUnkRBNT::func_ov026_02121ce8(void) {}
ARM void ActorUnkRBNT::func_ov026_02121d4c(void) {}
ARM void ActorUnkRBNT::func_ov026_02121e28(void) {}
ARM void ActorUnkRBNT::func_ov026_02121e2c(void) {}
ARM void ActorUnkRBNT::func_ov026_02121e68(void) {}
ARM void ActorUnkRBNT::func_ov026_02121f1c(void) {}
ARM void ActorUnkRBNT::func_ov026_02121f80(void) {}
ARM void ActorUnkRBNT::func_ov026_02121f88(void) {}

ARM ActorUnkRBNT::~ActorUnkRBNT() {}
ARM ActorProfileUnkRBNT::~ActorProfileUnkRBNT() {}
