//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNSHD.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkNSHD);

ARM Actor *ActorProfileUnkNSHD::Create() {
    return new(HeapIndex_2) ActorUnkNSHD();
}

ARM ActorProfileUnkNSHD::ActorProfileUnkNSHD() :
    ActorProfile(ActorId_NormalShield) {}

ARM ActorUnkNSHD::ActorUnkNSHD() {}

ARM void ActorUnkNSHD::func_ov062_02158cc8(void) {}
ARM void ActorUnkNSHD::func_ov062_02158ce8(void) {}
ARM void ActorUnkNSHD::func_ov062_02158df4(void) {}
ARM void ActorUnkNSHD::func_ov062_02158e38(void) {}
ARM void ActorUnkNSHD::func_ov062_02158e4c(void) {}

ARM ActorUnkNSHD::~ActorUnkNSHD() {}
ARM ActorProfileUnkNSHD::~ActorProfileUnkNSHD() {}
