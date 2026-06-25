//! TODO: This file was generated automatically and might contain errors

#include "Actor/ActorUnkRMSF.hpp"
#include "nns/g3d/g3d.h"
#include "profile.hpp"

const char data_ov063_021625b8[0x10] = "RMSF_wall";
const char data_ov063_021625c8[0x10] = "RMSF";

DECL_PROFILE(ActorProfileUnkRMSF);

Actor *ActorProfileUnkRMSF::Create() {
    return new(HeapIndex_2) ActorUnkRMSF();
}

ActorProfileUnkRMSF::ActorProfileUnkRMSF() :
    ActorProfile_Derived1(ActorId_RMSF) {}

ActorUnkRMSF::ActorUnkRMSF() {}

G3d_Model *ActorUnkRMSF::func_ov063_0215c250(void) {
    BMDSectionModel *section = GET_PROFILE(ActorProfileUnkRMSF)->mUnk_3C.mUnk_50;
    u32 *offset;
    if (section != 0 && (offset = G3d_0200f05c(&section->modelList, data_ov063_021625c8), offset != 0)) {
        return (G3d_Model *) ((u8 *) section + *offset);
    }
    return NULL;
}

G3d_Model *ActorUnkRMSF::func_ov063_0215c290(void) {
    BMDSectionModel *section = GET_PROFILE(ActorProfileUnkRMSF)->mUnk_3C.mUnk_50;
    u32 *offset;
    if (section != 0 && (offset = G3d_0200f05c(&section->modelList, data_ov063_021625b8), offset != 0)) {
        return (G3d_Model *) ((u8 *) section + *offset);
    }
    return NULL;
}

ActorUnkRMSF::~ActorUnkRMSF() {}
ActorProfileUnkRMSF::~ActorProfileUnkRMSF() {}
