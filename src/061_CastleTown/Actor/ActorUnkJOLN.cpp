//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkJOLN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkJOLN sActorProfileUnkJOLN;

ARM ActorProfileUnkJOLN *ActorProfileUnkJOLN::GetProfile() {
    return &sActorProfileUnkJOLN;
}

ARM Actor *ActorProfileUnkJOLN::Create() {
    return new(HeapIndex_2) ActorUnkJOLN();
}

ARM ActorProfileUnkJOLN::ActorProfileUnkJOLN() :
    ActorProfile_Derived1(ActorId_JOLN) {}

ARM ActorUnkJOLN::ActorUnkJOLN() {}

ARM void ActorUnkJOLN::func_ov061_02159048(void) {}
ARM void ActorUnkJOLN::func_ov061_0215906c(void) {}
ARM void ActorUnkJOLN::func_ov061_02159078(void) {}
ARM void ActorUnkJOLN::func_ov061_02159080(void) {}

ARM ActorUnkJOLN::~ActorUnkJOLN() {}
ARM ActorProfileUnkJOLN::~ActorProfileUnkJOLN() {}
