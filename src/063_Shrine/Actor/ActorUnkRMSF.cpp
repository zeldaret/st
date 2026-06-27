//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSF.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

extern char data_ov063_021625b8[0x10]; // = "RMSF_wall";
extern char data_ov063_021625c8[0x10]; // = "RMSF";

extern char data_ov063_021643e0[0x10];
extern char data_ov063_021643d0[0x10];

inline G3d_Model *GetResource(char *str) {
    return (G3d_Model *) G3d_GetUnkPtr(GET_PROFILE(ActorProfileUnkRMSF)->mUnk_3C.mUnk_50, str);
}

DECL_PROFILE(ActorProfileUnkRMSF);

Actor *ActorProfileUnkRMSF::Create() {
    return new(HeapIndex_2) ActorUnkRMSF();
}

ActorProfileUnkRMSF::ActorProfileUnkRMSF() :
    ActorProfile_Derived1(ActorId_RMSF) {}

ActorUnkRMSF::ActorUnkRMSF() {}

G3d_Model *ActorUnkRMSF::func_ov063_0215c250(void) {
    return GetResource(data_ov063_021625c8);
}

G3d_Model *ActorUnkRMSF::func_ov063_0215c290(void) {
    return GetResource(data_ov063_021625b8);
}

G3d_Model *ActorUnkRMSF::func_ov063_0215dfe4(void) {
    return GetResource(data_ov063_021643e0);
}

G3d_Model *ActorUnkRMSF::func_ov063_0215e024(void) {
    return GetResource(data_ov063_021643d0);
}

ActorUnkRMSF::~ActorUnkRMSF() {}
ActorProfileUnkRMSF::~ActorProfileUnkRMSF() {}
