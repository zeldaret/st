//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkBSTG.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkBSTG);

Actor *ActorProfileUnkBSTG::Create() {
    return new(HeapIndex_2) ActorUnkBSTG();
}

ActorProfileUnkBSTG::ActorProfileUnkBSTG() :
    ActorProfile(ActorId_BSTG) {}

ActorUnkBSTG::ActorUnkBSTG() {}

void ActorUnkBSTG::func_ov058_0214d794(void) {}
void ActorUnkBSTG::func_ov058_0214d79c(void) {}

ActorUnkBSTG::~ActorUnkBSTG() {}
ActorProfileUnkBSTG::~ActorProfileUnkBSTG() {}
