//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSD.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkRMSD);

ARM Actor *ActorProfileUnkRMSD::Create() {
    return new(HeapIndex_2) ActorUnkRMSD();
}

ARM ActorProfileUnkRMSD::ActorProfileUnkRMSD() :
    ActorProfile_Derived1(ActorId_RMSD) {}

ARM ActorUnkRMSD::ActorUnkRMSD() {}

ARM void ActorUnkRMSD::func_ov063_0215c408(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c45c(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c474(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c488(void) {}
ARM void ActorUnkRMSD::func_ov063_0215c4c8(void) {}

ARM ActorUnkRMSD::~ActorUnkRMSD() {}
ARM ActorProfileUnkRMSD::~ActorProfileUnkRMSD() {}
