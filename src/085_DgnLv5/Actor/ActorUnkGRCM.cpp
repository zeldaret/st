//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGRCM.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkGRCM);

Actor *ActorProfileUnkGRCM::Create() {
    return new(HeapIndex_2) ActorUnkGRCM();
}

ActorProfileUnkGRCM::ActorProfileUnkGRCM() :
    ActorProfile(ActorId_GRCM) {}

ActorUnkGRCM::ActorUnkGRCM() {}

void ActorUnkGRCM::func_ov085_02150c58(void) {}
void ActorUnkGRCM::func_ov085_02150cb8(void) {}
void ActorUnkGRCM::func_ov085_02150cc8(void) {}
void ActorUnkGRCM::func_ov085_02150e64(void) {}
void ActorUnkGRCM::func_ov085_02150e6c(void) {}
void ActorUnkGRCM::func_ov085_02150eb0(void) {}
void ActorUnkGRCM::func_ov085_02150efc(void) {}

ActorUnkGRCM::~ActorUnkGRCM() {}
ActorProfileUnkGRCM::~ActorProfileUnkGRCM() {}
