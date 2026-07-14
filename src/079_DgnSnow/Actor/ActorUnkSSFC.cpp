//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkSSFC.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkSSFC);

Actor *ActorProfileUnkSSFC::Create() {
    return new(HeapIndex_2) ActorUnkSSFC();
}

ActorProfileUnkSSFC::ActorProfileUnkSSFC() :
    ActorProfile(ActorId_SSFC) {}

ActorUnkSSFC::ActorUnkSSFC() {}

void ActorUnkSSFC::func_ov079_02152be8(void) {}
void ActorUnkSSFC::func_ov079_02152ccc(void) {}
void ActorUnkSSFC::func_ov079_02152e00(void) {}
void ActorUnkSSFC::func_ov079_02152e4c(void) {}
void ActorUnkSSFC::func_ov079_02152ed4(void) {}

ActorUnkSSFC::~ActorUnkSSFC() {}
ActorProfileUnkSSFC::~ActorProfileUnkSSFC() {}
