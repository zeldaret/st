//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNITF.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkNITF sActorProfileUnkNITF;

ARM ActorProfileUnkNITF *ActorProfileUnkNITF::GetProfile() {
    return &sActorProfileUnkNITF;
}

ARM Actor *ActorProfileUnkNITF::Create() {
    return new(HeapIndex_2) ActorUnkNITF();
}

ARM ActorProfileUnkNITF::ActorProfileUnkNITF() :
    ActorProfile(ActorId_NITF) {}

ARM ActorUnkNITF::ActorUnkNITF() {}

ARM void ActorUnkNITF::func_ov031_020f10c0(void) {}
ARM void ActorUnkNITF::func_ov031_020f10d4(void) {}
ARM void ActorUnkNITF::func_ov031_020f10fc(void) {}
ARM void ActorUnkNITF::func_ov031_020f1140(void) {}
ARM void ActorUnkNITF::func_ov031_020f1178(void) {}
ARM void ActorUnkNITF::func_ov031_020f11a8(void) {}
ARM void ActorUnkNITF::func_ov031_020f11b4(void) {}
ARM void ActorUnkNITF::func_ov031_020f11c0(void) {}
ARM void ActorUnkNITF::func_ov031_020f11cc(void) {}
ARM void ActorUnkNITF::func_ov031_020f11d8(void) {}
ARM void ActorUnkNITF::func_ov031_020f11e4(void) {}
ARM void ActorUnkNITF::func_ov031_020f11f0(void) {}
ARM void ActorUnkNITF::func_ov031_020f11fc(void) {}
ARM void ActorUnkNITF::func_ov031_020f1208(void) {}
ARM void ActorUnkNITF::func_ov031_020f121c(void) {}
ARM void ActorUnkNITF::func_ov031_020f1230(void) {}
ARM void ActorUnkNITF::func_ov031_020f1308(void) {}

ARM ActorUnkNITF::~ActorUnkNITF() {}
ARM ActorProfileUnkNITF::~ActorProfileUnkNITF() {}
