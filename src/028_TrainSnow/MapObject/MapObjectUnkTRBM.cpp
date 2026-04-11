//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRBM.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRBM sMapObjectProfileUnkTRBM;

ARM MapObjectProfileUnkTRBM *MapObjectProfileUnkTRBM::GetProfile() {
    return &sMapObjectProfileUnkTRBM;
}

ARM MapObject *MapObjectProfileUnkTRBM::Create() {
    return new(HeapIndex_2) MapObjectUnkTRBM();
}

ARM MapObjectProfileUnkTRBM::MapObjectProfileUnkTRBM() :
    MapObjectProfile(MapObjectId_TRBM) {}

ARM MapObjectUnkTRBM::MapObjectUnkTRBM() {}

ARM void MapObjectUnkTRBM::func_ov028_02144ec4(void) {}
ARM void MapObjectUnkTRBM::func_ov028_02144fb0(void) {}
ARM void MapObjectUnkTRBM::func_ov028_02145024(void) {}
ARM void MapObjectUnkTRBM::func_ov028_0214503c(void) {}
ARM void MapObjectUnkTRBM::func_ov028_0214507c(void) {}
ARM void MapObjectUnkTRBM::func_ov028_0214509c(void) {}
ARM void MapObjectUnkTRBM::func_ov028_021450bc(void) {}

ARM MapObjectUnkTRBM::~MapObjectUnkTRBM() {}
ARM MapObjectProfileUnkTRBM::~MapObjectProfileUnkTRBM() {}
