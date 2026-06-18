//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTHER.hpp"
#include "System/SysNew.hpp"

DECL_PROFILE(ActorProfileUnkTHER);

Actor *ActorProfileUnkTHER::Create() {
    return new(HeapIndex_2) ActorUnkTHER();
}

ActorProfileUnkTHER::ActorProfileUnkTHER() :
    ActorProfile(ActorId_THER) {}

ActorUnkTHER::ActorUnkTHER() {}

void ActorUnkTHER::func_ov026_02111108(void) {}
void ActorUnkTHER::func_ov026_021111a4(void) {}
void ActorUnkTHER::func_ov026_021111fc(void) {}
void ActorUnkTHER::func_ov026_02111280(void) {}

ActorUnkTHER::~ActorUnkTHER() {}
ActorProfileUnkTHER::~ActorProfileUnkTHER() {}
