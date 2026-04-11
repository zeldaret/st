//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkHLMG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkHLMG sActorProfileUnkHLMG;

ARM ActorProfileUnkHLMG *ActorProfileUnkHLMG::GetProfile() {
    return &sActorProfileUnkHLMG;
}

ARM Actor *ActorProfileUnkHLMG::Create() {
    return new(HeapIndex_2) ActorUnkHLMG();
}

ARM ActorProfileUnkHLMG::ActorProfileUnkHLMG() :
    ActorProfile(ActorId_HLMG) {}

ARM ActorUnkHLMG::ActorUnkHLMG() {}

ARM void ActorUnkHLMG::func_ov030_0214b258(void) {}
ARM void ActorUnkHLMG::func_ov030_0214b260(void) {}
ARM void ActorUnkHLMG::func_ov030_0214b27c(void) {}
ARM void ActorUnkHLMG::func_ov030_0214b29c(void) {}
ARM void ActorUnkHLMG::func_ov030_0214b664(void) {}
ARM void ActorUnkHLMG::func_ov030_0214ba60(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bb38(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bb6c(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bbb8(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bc00(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bc50(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bcdc(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bd74(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bd84(void) {}
ARM void ActorUnkHLMG::func_ov030_0214bdb4(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c084(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c178(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c1ac(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c1c0(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c21c(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c268(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c30c(void) {}
ARM void ActorUnkHLMG::func_ov030_0214c31c(void) {}

ARM ActorUnkHLMG::~ActorUnkHLMG() {}
ARM ActorProfileUnkHLMG::~ActorProfileUnkHLMG() {}
