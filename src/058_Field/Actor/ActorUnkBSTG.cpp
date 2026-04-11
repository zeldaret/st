//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBSTG.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkBSTG sActorProfileUnkBSTG;

ARM ActorProfileUnkBSTG *ActorProfileUnkBSTG::GetProfile() {
    return &sActorProfileUnkBSTG;
}

ARM Actor *ActorProfileUnkBSTG::Create() {
    return new(HeapIndex_2) ActorUnkBSTG();
}

ARM ActorProfileUnkBSTG::ActorProfileUnkBSTG() :
    ActorProfile(ActorId_BSTG) {}

ARM ActorUnkBSTG::ActorUnkBSTG() {}

ARM void ActorUnkBSTG::func_ov058_0214d794(void) {}
ARM void ActorUnkBSTG::func_ov058_0214d79c(void) {}

ARM ActorUnkBSTG::~ActorUnkBSTG() {}
ARM ActorProfileUnkBSTG::~ActorProfileUnkBSTG() {}
