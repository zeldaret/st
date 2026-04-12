//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDMSS.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDMSS);

ARM Actor *ActorProfileUnkDMSS::Create() {
    return new(HeapIndex_2) ActorUnkDMSS();
}

ARM ActorProfileUnkDMSS::ActorProfileUnkDMSS() :
    ActorProfile_Derived1(ActorId_DMSS) {}

ARM ActorUnkDMSS::ActorUnkDMSS() {}

ARM void ActorUnkDMSS::func_ov088_02171494(void) {}
ARM void ActorUnkDMSS::func_ov088_021714a8(void) {}
ARM void ActorUnkDMSS::func_ov088_021714fc(void) {}
ARM void ActorUnkDMSS::func_ov088_0217150c(void) {}
ARM void ActorUnkDMSS::func_ov088_02171520(void) {}
ARM void ActorUnkDMSS::func_ov088_02171534(void) {}
ARM void ActorUnkDMSS::func_ov088_021715c8(void) {}

ARM ActorUnkDMSS::~ActorUnkDMSS() {}
ARM ActorProfileUnkDMSS::~ActorProfileUnkDMSS() {}
