//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSSFC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkSSFC);

ARM Actor *ActorProfileUnkSSFC::Create() {
    return new(HeapIndex_2) ActorUnkSSFC();
}

ARM ActorProfileUnkSSFC::ActorProfileUnkSSFC() :
    ActorProfile(ActorId_SSFC) {}

ARM ActorUnkSSFC::ActorUnkSSFC() {}

ARM void ActorUnkSSFC::func_ov079_02152be8(void) {}
ARM void ActorUnkSSFC::func_ov079_02152ccc(void) {}
ARM void ActorUnkSSFC::func_ov079_02152e00(void) {}
ARM void ActorUnkSSFC::func_ov079_02152e4c(void) {}
ARM void ActorUnkSSFC::func_ov079_02152ed4(void) {}

ARM ActorUnkSSFC::~ActorUnkSSFC() {}
ARM ActorProfileUnkSSFC::~ActorProfileUnkSSFC() {}
