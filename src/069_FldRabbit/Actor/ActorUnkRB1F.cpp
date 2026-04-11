//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRB1F.hpp"
#include "System/SysNew.hpp"

static ActorProfileUnkRB1F sActorProfileUnkRB1F;

ARM ActorProfileUnkRB1F *ActorProfileUnkRB1F::GetProfile() {
    return &sActorProfileUnkRB1F;
}

ARM Actor *ActorProfileUnkRB1F::Create() {
    return new(HeapIndex_2) ActorUnkRB1F();
}

ARM ActorProfileUnkRB1F::ActorProfileUnkRB1F() :
    ActorProfile_Derived1(ActorId_RB1F) {}

ARM ActorUnkRB1F::ActorUnkRB1F() {}

ARM void ActorUnkRB1F::func_ov069_02159000(void) {}
ARM void ActorUnkRB1F::func_ov069_02159014(void) {}
ARM void ActorUnkRB1F::func_ov069_021591c8(void) {}
ARM void ActorUnkRB1F::func_ov069_02159260(void) {}
ARM void ActorUnkRB1F::func_ov069_02159278(void) {}
ARM void ActorUnkRB1F::func_ov069_021592c8(void) {}
ARM void ActorUnkRB1F::func_ov069_02159400(void) {}
ARM void ActorUnkRB1F::func_ov069_02159404(void) {}
ARM void ActorUnkRB1F::func_ov069_0215944c(void) {}
ARM void ActorUnkRB1F::func_ov069_02159508(void) {}
ARM void ActorUnkRB1F::func_ov069_02159678(void) {}
ARM void ActorUnkRB1F::func_ov069_02159690(void) {}
ARM void ActorUnkRB1F::func_ov069_021596f8(void) {}
ARM void ActorUnkRB1F::func_ov069_0215990c(void) {}
ARM void ActorUnkRB1F::func_ov069_02159938(void) {}
ARM void ActorUnkRB1F::func_ov069_02159974(void) {}
ARM void ActorUnkRB1F::func_ov069_021599a8(void) {}
ARM void ActorUnkRB1F::func_ov069_021599cc(void) {}
ARM void ActorUnkRB1F::func_ov069_02159a20(void) {}
ARM void ActorUnkRB1F::func_ov069_02159ca4(void) {}
ARM void ActorUnkRB1F::func_ov069_02159ccc(void) {}
ARM void ActorUnkRB1F::func_ov069_02159dcc(void) {}
ARM void ActorUnkRB1F::func_ov069_02159df4(void) {}
ARM void ActorUnkRB1F::func_ov069_02159e0c(void) {}
ARM void ActorUnkRB1F::func_ov069_02159e38(void) {}
ARM void ActorUnkRB1F::func_ov069_02159e5c(void) {}
ARM void ActorUnkRB1F::func_ov069_02159e6c(void) {}
ARM void ActorUnkRB1F::func_ov069_02159ec0(void) {}

ARM ActorUnkRB1F::~ActorUnkRB1F() {}
ARM ActorProfileUnkRB1F::~ActorProfileUnkRB1F() {}
