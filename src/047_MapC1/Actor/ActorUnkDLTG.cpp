//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkDLTG.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkDLTG);

ARM Actor *ActorProfileUnkDLTG::Create() {
    return new(HeapIndex_2) ActorUnkDLTG();
}

ARM ActorProfileUnkDLTG::ActorProfileUnkDLTG() :
    ActorProfile(ActorId_DLTG) {}

ARM ActorUnkDLTG::ActorUnkDLTG() {}

ARM void ActorUnkDLTG::func_ov047_021357fc(void) {}
ARM void ActorUnkDLTG::func_ov047_02135878(void) {}
ARM void ActorUnkDLTG::func_ov047_021358a4(void) {}
ARM void ActorUnkDLTG::func_ov047_021358c0(void) {}

ARM ActorUnkDLTG::~ActorUnkDLTG() {}
ARM ActorProfileUnkDLTG::~ActorProfileUnkDLTG() {}
