//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGRCM.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkGRCM);

ARM Actor *ActorProfileUnkGRCM::Create() {
    return new(HeapIndex_2) ActorUnkGRCM();
}

ARM ActorProfileUnkGRCM::ActorProfileUnkGRCM() :
    ActorProfile(ActorId_GRCM) {}

ARM ActorUnkGRCM::ActorUnkGRCM() {}

ARM void ActorUnkGRCM::func_ov085_02150c58(void) {}
ARM void ActorUnkGRCM::func_ov085_02150cb8(void) {}
ARM void ActorUnkGRCM::func_ov085_02150cc8(void) {}
ARM void ActorUnkGRCM::func_ov085_02150e64(void) {}
ARM void ActorUnkGRCM::func_ov085_02150e6c(void) {}
ARM void ActorUnkGRCM::func_ov085_02150eb0(void) {}
ARM void ActorUnkGRCM::func_ov085_02150efc(void) {}

ARM ActorUnkGRCM::~ActorUnkGRCM() {}
ARM ActorProfileUnkGRCM::~ActorProfileUnkGRCM() {}
