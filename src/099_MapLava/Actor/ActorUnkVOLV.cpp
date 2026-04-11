//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkVOLV.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkVOLV sActorProfileUnkVOLV;

ARM ActorProfileUnkVOLV *ActorProfileUnkVOLV::GetProfile() {
    return &sActorProfileUnkVOLV;
}

ARM Actor *ActorProfileUnkVOLV::Create() {
    return new(HeapIndex_2) ActorUnkVOLV();
}

ARM ActorProfileUnkVOLV::ActorProfileUnkVOLV() :
    ActorProfile_Derived1(ActorId_VOLV) {}

ARM ActorUnkVOLV::ActorUnkVOLV() {}

ARM void ActorUnkVOLV::func_ov099_021819fc(void) {}
ARM void ActorUnkVOLV::func_ov099_02181ae8(void) {}
ARM void ActorUnkVOLV::func_ov099_02181b14(void) {}
ARM void ActorUnkVOLV::func_ov099_02181b28(void) {}

ARM ActorUnkVOLV::~ActorUnkVOLV() {}
ARM ActorProfileUnkVOLV::~ActorProfileUnkVOLV() {}
