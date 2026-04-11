//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkAJEM.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkAJEM sActorProfileUnkAJEM;

ARM ActorProfileUnkAJEM *ActorProfileUnkAJEM::GetProfile() {
    return &sActorProfileUnkAJEM;
}

ARM Actor *ActorProfileUnkAJEM::Create() {
    return new(HeapIndex_2) ActorUnkAJEM();
}

ARM ActorProfileUnkAJEM::ActorProfileUnkAJEM() :
    ActorProfile_Derived1(ActorId_AJEM) {}

ARM ActorUnkAJEM::ActorUnkAJEM() {}

ARM void ActorUnkAJEM::func_ov068_02159490(void) {}
ARM void ActorUnkAJEM::func_ov068_021594a4(void) {}
ARM void ActorUnkAJEM::func_ov068_02159508(void) {}
ARM void ActorUnkAJEM::func_ov068_0215952c(void) {}
ARM void ActorUnkAJEM::func_ov068_02159574(void) {}
ARM void ActorUnkAJEM::func_ov068_02159800(void) {}
ARM void ActorUnkAJEM::func_ov068_021598ac(void) {}
ARM void ActorUnkAJEM::func_ov068_0215991c(void) {}
ARM void ActorUnkAJEM::func_ov068_021599a4(void) {}
ARM void ActorUnkAJEM::func_ov068_02159a14(void) {}
ARM void ActorUnkAJEM::func_ov068_02159a44(void) {}
ARM void ActorUnkAJEM::func_ov068_02159ad4(void) {}
ARM void ActorUnkAJEM::func_ov068_02159bf4(void) {}
ARM void ActorUnkAJEM::func_ov068_02159c74(void) {}
ARM void ActorUnkAJEM::func_ov068_02159e08(void) {}
ARM void ActorUnkAJEM::func_ov068_02159e78(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a018(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a0a0(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a258(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a354(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a358(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a3d8(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a3dc(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a46c(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a5c8(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a5e8(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a654(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a70c(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a76c(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a790(void) {}
ARM void ActorUnkAJEM::func_ov068_0215a800(void) {}

ARM ActorUnkAJEM::~ActorUnkAJEM() {}
ARM ActorProfileUnkAJEM::~ActorProfileUnkAJEM() {}
