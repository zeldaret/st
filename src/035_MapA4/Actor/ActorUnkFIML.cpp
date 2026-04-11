//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFIML.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkFIML sActorProfileUnkFIML;

ARM ActorProfileUnkFIML *ActorProfileUnkFIML::GetProfile() {
    return &sActorProfileUnkFIML;
}

ARM Actor *ActorProfileUnkFIML::Create() {
    return new(HeapIndex_2) ActorUnkFIML();
}

ARM ActorProfileUnkFIML::ActorProfileUnkFIML() :
    ActorProfile_Derived1(ActorId_FIML) {}

ARM ActorUnkFIML::ActorUnkFIML() {}

ARM void ActorUnkFIML::func_ov035_0211bdf8(void) {}
ARM void ActorUnkFIML::func_ov035_0211be0c(void) {}
ARM void ActorUnkFIML::func_ov035_0211bf40(void) {}
ARM void ActorUnkFIML::func_ov035_0211bf74(void) {}
ARM void ActorUnkFIML::func_ov035_0211bfe8(void) {}
ARM void ActorUnkFIML::func_ov035_0211c55c(void) {}
ARM void ActorUnkFIML::func_ov035_0211c594(void) {}
ARM void ActorUnkFIML::func_ov035_0211c5c4(void) {}
ARM void ActorUnkFIML::func_ov035_0211c5e8(void) {}
ARM void ActorUnkFIML::func_ov035_0211c68c(void) {}
ARM void ActorUnkFIML::func_ov035_0211c754(void) {}
ARM void ActorUnkFIML::func_ov035_0211c768(void) {}
ARM void ActorUnkFIML::func_ov035_0211c780(void) {}
ARM void ActorUnkFIML::func_ov035_0211c8f0(void) {}
ARM void ActorUnkFIML::func_ov035_0211cc70(void) {}
ARM void ActorUnkFIML::func_ov035_0211ccd8(void) {}
ARM void ActorUnkFIML::func_ov035_0211cd0c(void) {}
ARM void ActorUnkFIML::func_ov035_0211cdd0(void) {}
ARM void ActorUnkFIML::func_ov035_0211d128(void) {}
ARM void ActorUnkFIML::func_ov035_0211d1a8(void) {}
ARM void ActorUnkFIML::func_ov035_0211d270(void) {}
ARM void ActorUnkFIML::func_ov035_0211d2d8(void) {}
ARM void ActorUnkFIML::func_ov035_0211d37c(void) {}
ARM void ActorUnkFIML::func_ov035_0211d430(void) {}
ARM void ActorUnkFIML::func_ov035_0211d5a0(void) {}
ARM void ActorUnkFIML::func_ov035_0211d620(void) {}
ARM void ActorUnkFIML::func_ov035_0211d7b8(void) {}
ARM void ActorUnkFIML::func_ov035_0211d7f4(void) {}
ARM void ActorUnkFIML::func_ov035_0211d814(void) {}
ARM void ActorUnkFIML::func_ov035_0211d870(void) {}
ARM void ActorUnkFIML::func_ov035_0211d8fc(void) {}
ARM void ActorUnkFIML::func_ov035_0211db34(void) {}
ARM void ActorUnkFIML::func_ov035_0211db48(void) {}
ARM void ActorUnkFIML::func_ov035_0211db74(void) {}
ARM void ActorUnkFIML::func_ov035_0211dc10(void) {}
ARM void ActorUnkFIML::func_ov035_0211dc68(void) {}
ARM void ActorUnkFIML::func_ov035_0211dcc4(void) {}
ARM void ActorUnkFIML::func_ov035_0211dd10(void) {}
ARM void ActorUnkFIML::func_ov035_0211dd2c(void) {}
ARM void ActorUnkFIML::func_ov035_0211e050(void) {}
ARM void ActorUnkFIML::func_ov035_0211e05c(void) {}
ARM void ActorUnkFIML::func_ov035_0211e370(void) {}
ARM void ActorUnkFIML::func_ov035_0211e460(void) {}

ARM ActorUnkFIML::~ActorUnkFIML() {}
ARM ActorProfileUnkFIML::~ActorProfileUnkFIML() {}
