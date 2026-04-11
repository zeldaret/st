//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOLDS.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkOLDS sActorProfileUnkOLDS;

ARM ActorProfileUnkOLDS *ActorProfileUnkOLDS::GetProfile() {
    return &sActorProfileUnkOLDS;
}

ARM Actor *ActorProfileUnkOLDS::Create() {
    return new(HeapIndex_2) ActorUnkOLDS();
}

ARM ActorProfileUnkOLDS::ActorProfileUnkOLDS() :
    ActorProfile_Derived1(ActorId_OLDS) {}

ARM ActorUnkOLDS::ActorUnkOLDS() {}

ARM void ActorUnkOLDS::func_ov040_0212cd8c(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cee4(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cefc(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cf34(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cf5c(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cf74(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cfac(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cfb8(void) {}
ARM void ActorUnkOLDS::func_ov040_0212cfd4(void) {}
ARM void ActorUnkOLDS::func_ov040_0212d040(void) {}

ARM ActorUnkOLDS::~ActorUnkOLDS() {}
ARM ActorProfileUnkOLDS::~ActorProfileUnkOLDS() {}
