//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNSHD.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkNSHD);

Actor *ActorProfileUnkNSHD::Create() {
    return new(HeapIndex_2) ActorUnkNSHD();
}

ActorProfileUnkNSHD::ActorProfileUnkNSHD() :
    ActorProfile(ActorId_NormalShield) {}

ActorUnkNSHD::ActorUnkNSHD() {}

void ActorUnkNSHD::func_ov062_02158cc8(void) {}
void ActorUnkNSHD::func_ov062_02158ce8(void) {}
void ActorUnkNSHD::func_ov062_02158df4(void) {}
void ActorUnkNSHD::func_ov062_02158e38(void) {}
void ActorUnkNSHD::func_ov062_02158e4c(void) {}

ActorUnkNSHD::~ActorUnkNSHD() {}
ActorProfileUnkNSHD::~ActorProfileUnkNSHD() {}
