//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkMTFB.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkMTFB sActorProfileUnkMTFB;

ARM ActorProfileUnkMTFB *ActorProfileUnkMTFB::GetProfile() {
    return &sActorProfileUnkMTFB;
}

ARM Actor *ActorProfileUnkMTFB::Create() {
    return new(HeapIndex_2) ActorUnkMTFB();
}

ARM ActorProfileUnkMTFB::ActorProfileUnkMTFB() :
    ActorProfile_Derived1(ActorId_MTFB) {}

ARM ActorUnkMTFB::ActorUnkMTFB() {}

ARM void ActorUnkMTFB::func_ov092_02171be8(void) {}
ARM void ActorUnkMTFB::func_ov092_02171cb4(void) {}
ARM void ActorUnkMTFB::func_ov092_02171d60(void) {}
ARM void ActorUnkMTFB::func_ov092_02171f14(void) {}
ARM void ActorUnkMTFB::func_ov092_02172070(void) {}
ARM void ActorUnkMTFB::func_ov092_0217207c(void) {}
ARM void ActorUnkMTFB::func_ov092_02172190(void) {}
ARM void ActorUnkMTFB::func_ov092_021722ac(void) {}
ARM void ActorUnkMTFB::func_ov092_021722c0(void) {}
ARM void ActorUnkMTFB::func_ov092_02172420(void) {}
ARM void ActorUnkMTFB::func_ov092_02172544(void) {}
ARM void ActorUnkMTFB::func_ov092_021726e4(void) {}
ARM void ActorUnkMTFB::func_ov092_021728ec(void) {}
ARM void ActorUnkMTFB::func_ov092_02172920(void) {}
ARM void ActorUnkMTFB::func_ov092_02172940(void) {}
ARM void ActorUnkMTFB::func_ov092_02172ca4(void) {}
ARM void ActorUnkMTFB::func_ov092_02172d30(void) {}
ARM void ActorUnkMTFB::func_ov092_02172e38(void) {}
ARM void ActorUnkMTFB::func_ov092_02172eb4(void) {}
ARM void ActorUnkMTFB::func_ov092_021730ac(void) {}
ARM void ActorUnkMTFB::func_ov092_02173294(void) {}
ARM void ActorUnkMTFB::func_ov092_02173324(void) {}
ARM void ActorUnkMTFB::func_ov092_02173354(void) {}
ARM void ActorUnkMTFB::func_ov092_021734cc(void) {}
ARM void ActorUnkMTFB::func_ov092_02173518(void) {}
ARM void ActorUnkMTFB::func_ov092_021735b8(void) {}

ARM ActorUnkMTFB::~ActorUnkMTFB() {}
ARM ActorProfileUnkMTFB::~ActorProfileUnkMTFB() {}
