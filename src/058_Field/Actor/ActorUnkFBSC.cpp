//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkFBSC.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkFBSC);

ARM Actor *ActorProfileUnkFBSC::Create() {
    return new(HeapIndex_2) ActorUnkFBSC();
}

ARM ActorProfileUnkFBSC::ActorProfileUnkFBSC() :
    ActorProfile(ActorId_FBSC) {}

ARM ActorUnkFBSC::ActorUnkFBSC() {}

ARM void ActorUnkFBSC::func_ov058_0214aab8(void) {}
ARM void ActorUnkFBSC::func_ov058_0214aacc(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab04(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab34(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab68(void) {}
ARM void ActorUnkFBSC::func_ov058_0214ab78(void) {}

ARM ActorUnkFBSC::~ActorUnkFBSC() {}
ARM ActorProfileUnkFBSC::~ActorProfileUnkFBSC() {}
