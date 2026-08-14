//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkOLDS.hpp"
#include "System/SysNew.hpp"

#include "versions.h"

#if IS_JP
THUMB_BEGIN
#endif

DECL_PROFILE(ActorProfileUnkOLDS);

Actor *ActorProfileUnkOLDS::Create() {
    return new(HeapIndex_2) ActorUnkOLDS();
}

ActorProfileUnkOLDS::ActorProfileUnkOLDS() :
    ActorProfile_Derived1(ActorId_OLDS) {}

ActorUnkOLDS::ActorUnkOLDS() {}

void ActorUnkOLDS::func_ov040_0212cd8c(void) {}

#if IS_JP
THUMB_END
#endif

void ActorUnkOLDS::func_ov040_0212cee4(void) {}
void ActorUnkOLDS::func_ov040_0212cefc(void) {}
void ActorUnkOLDS::func_ov040_0212cf34(void) {}
void ActorUnkOLDS::func_ov040_0212cf5c(void) {}
void ActorUnkOLDS::func_ov040_0212cf74(void) {}
void ActorUnkOLDS::func_ov040_0212cfac(void) {}
void ActorUnkOLDS::func_ov040_0212cfb8(void) {}
void ActorUnkOLDS::func_ov040_0212cfd4(void) {}
void ActorUnkOLDS::func_ov040_0212d040(void) {}

ActorUnkOLDS::~ActorUnkOLDS() {}
ActorProfileUnkOLDS::~ActorProfileUnkOLDS() {}
