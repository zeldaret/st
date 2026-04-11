//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMST.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkDMST sActorProfileUnkDMST;

ARM ActorProfileUnkDMST *ActorProfileUnkDMST::GetProfile() {
    return &sActorProfileUnkDMST;
}

ARM Actor *ActorProfileUnkDMST::Create() {
    return new(HeapIndex_2) ActorUnkDMST();
}

ARM ActorProfileUnkDMST::ActorProfileUnkDMST() :
    ActorProfile_Derived1(ActorId_DMST) {}

ARM ActorUnkDMST::ActorUnkDMST() {}

ARM void ActorUnkDMST::func_ov088_02171274(void) {}
ARM void ActorUnkDMST::func_ov088_021712c8(void) {}
ARM void ActorUnkDMST::func_ov088_021712d8(void) {}
ARM void ActorUnkDMST::func_ov088_021712ec(void) {}
ARM void ActorUnkDMST::func_ov088_02171300(void) {}
ARM void ActorUnkDMST::func_ov088_02171350(void) {}

ARM ActorUnkDMST::~ActorUnkDMST() {}
ARM ActorProfileUnkDMST::~ActorProfileUnkDMST() {}
