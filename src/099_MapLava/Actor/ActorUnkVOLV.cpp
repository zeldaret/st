//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkVOLV.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkVOLV);

Actor *ActorProfileUnkVOLV::Create() {
    return new(HeapIndex_2) ActorUnkVOLV();
}

ActorProfileUnkVOLV::ActorProfileUnkVOLV() :
    ActorProfile_Derived1(ActorId_VOLV) {}

ActorUnkVOLV::ActorUnkVOLV() {}

void ActorUnkVOLV::func_ov099_021819fc(void) {}
void ActorUnkVOLV::func_ov099_02181ae8(void) {}
void ActorUnkVOLV::func_ov099_02181b14(void) {}
void ActorUnkVOLV::func_ov099_02181b28(void) {}

ActorUnkVOLV::~ActorUnkVOLV() {}
ActorProfileUnkVOLV::~ActorProfileUnkVOLV() {}
