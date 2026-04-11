//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkGORS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkGORS sActorProfileUnkGORS;

ARM ActorProfileUnkGORS *ActorProfileUnkGORS::GetProfile() {
    return &sActorProfileUnkGORS;
}

ARM Actor *ActorProfileUnkGORS::Create() {
    return new(HeapIndex_2) ActorUnkGORS();
}

ARM ActorProfileUnkGORS::ActorProfileUnkGORS() :
    ActorProfile_Derived1(ActorId_GORS) {}

ARM ActorUnkGORS::ActorUnkGORS() {}

ARM void ActorUnkGORS::func_ov067_021596a4(void) {}
ARM void ActorUnkGORS::func_ov067_02159720(void) {}
ARM void ActorUnkGORS::func_ov067_02159754(void) {}
ARM void ActorUnkGORS::func_ov067_021597a8(void) {}
ARM void ActorUnkGORS::func_ov067_021598b8(void) {}
ARM void ActorUnkGORS::func_ov067_02159920(void) {}
ARM void ActorUnkGORS::func_ov067_02159948(void) {}
ARM void ActorUnkGORS::func_ov067_02159954(void) {}
ARM void ActorUnkGORS::func_ov067_02159960(void) {}
ARM void ActorUnkGORS::func_ov067_0215996c(void) {}
ARM void ActorUnkGORS::func_ov067_021599d0(void) {}
ARM void ActorUnkGORS::func_ov067_02159ad0(void) {}
ARM void ActorUnkGORS::func_ov067_02159ba8(void) {}
ARM void ActorUnkGORS::func_ov067_02159c48(void) {}
ARM void ActorUnkGORS::func_ov067_02159c90(void) {}
ARM void ActorUnkGORS::func_ov067_02159cec(void) {}
ARM void ActorUnkGORS::func_ov067_02159d10(void) {}
ARM void ActorUnkGORS::func_ov067_02159d20(void) {}
ARM void ActorUnkGORS::func_ov067_02159d28(void) {}

ARM ActorUnkGORS::~ActorUnkGORS() {}
ARM ActorProfileUnkGORS::~ActorProfileUnkGORS() {}
