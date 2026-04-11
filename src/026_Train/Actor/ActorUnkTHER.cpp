//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkTHER.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkTHER sActorProfileUnkTHER;

ARM ActorProfileUnkTHER *ActorProfileUnkTHER::GetProfile() {
    return &sActorProfileUnkTHER;
}

ARM Actor *ActorProfileUnkTHER::Create() {
    return new(HeapIndex_2) ActorUnkTHER();
}

ARM ActorProfileUnkTHER::ActorProfileUnkTHER() :
    ActorProfile(ActorId_THER) {}

ARM ActorUnkTHER::ActorUnkTHER() {}

ARM void ActorUnkTHER::func_ov026_02111108(void) {}
ARM void ActorUnkTHER::func_ov026_021111a4(void) {}
ARM void ActorUnkTHER::func_ov026_021111fc(void) {}
ARM void ActorUnkTHER::func_ov026_02111280(void) {}

ARM ActorUnkTHER::~ActorUnkTHER() {}
ARM ActorProfileUnkTHER::~ActorProfileUnkTHER() {}
