//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkJOLN.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkJOLN);

Actor *ActorProfileUnkJOLN::Create() {
    return new(HeapIndex_2) ActorUnkJOLN();
}

ActorProfileUnkJOLN::ActorProfileUnkJOLN() :
    ActorProfile_Derived1(ActorId_JOLN) {}

ActorUnkJOLN::ActorUnkJOLN() {}

void ActorUnkJOLN::func_ov061_02159048(void) {}
void ActorUnkJOLN::func_ov061_0215906c(void) {}
void ActorUnkJOLN::func_ov061_02159078(void) {}
void ActorUnkJOLN::func_ov061_02159080(void) {}

ActorUnkJOLN::~ActorUnkJOLN() {}
ActorProfileUnkJOLN::~ActorProfileUnkJOLN() {}
