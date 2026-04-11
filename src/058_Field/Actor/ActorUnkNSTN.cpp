//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkNSTN.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkNSTN sActorProfileUnkNSTN;

ARM ActorProfileUnkNSTN *ActorProfileUnkNSTN::GetProfile() {
    return &sActorProfileUnkNSTN;
}

ARM Actor *ActorProfileUnkNSTN::Create() {
    return new(HeapIndex_2) ActorUnkNSTN();
}

ARM ActorProfileUnkNSTN::ActorProfileUnkNSTN() :
    ActorProfile(ActorId_NSTN) {}

ARM ActorUnkNSTN::ActorUnkNSTN() {}

ARM void ActorUnkNSTN::func_ov058_02142abc(void) {}
ARM void ActorUnkNSTN::func_ov058_02142ad0(void) {}
ARM void ActorUnkNSTN::func_ov058_02142ae8(void) {}
ARM void ActorUnkNSTN::func_ov058_02142af0(void) {}
ARM void ActorUnkNSTN::func_ov058_02142b44(void) {}
ARM void ActorUnkNSTN::func_ov058_02142b7c(void) {}
ARM void ActorUnkNSTN::func_ov058_02142bac(void) {}
ARM void ActorUnkNSTN::func_ov058_02142bb8(void) {}
ARM void ActorUnkNSTN::func_ov058_02142bc4(void) {}
ARM void ActorUnkNSTN::func_ov058_02142bd0(void) {}
ARM void ActorUnkNSTN::func_ov058_02142bdc(void) {}
ARM void ActorUnkNSTN::func_ov058_02142be8(void) {}
ARM void ActorUnkNSTN::func_ov058_02142bf4(void) {}
ARM void ActorUnkNSTN::func_ov058_02142c00(void) {}
ARM void ActorUnkNSTN::func_ov058_02142c0c(void) {}
ARM void ActorUnkNSTN::func_ov058_02142c20(void) {}
ARM void ActorUnkNSTN::func_ov058_02142c34(void) {}
ARM void ActorUnkNSTN::func_ov058_02142d08(void) {}

ARM ActorUnkNSTN::~ActorUnkNSTN() {}
ARM ActorProfileUnkNSTN::~ActorProfileUnkNSTN() {}
