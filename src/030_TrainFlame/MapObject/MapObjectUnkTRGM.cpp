//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTRGM.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTRGM sMapObjectProfileUnkTRGM;

ARM MapObjectProfileUnkTRGM *MapObjectProfileUnkTRGM::GetProfile() {
    return &sMapObjectProfileUnkTRGM;
}

ARM MapObject *MapObjectProfileUnkTRGM::Create() {
    return new(HeapIndex_2) MapObjectUnkTRGM();
}

ARM MapObjectProfileUnkTRGM::MapObjectProfileUnkTRGM() :
    MapObjectProfile(MapObjectId_TRGM) {}

ARM MapObjectUnkTRGM::MapObjectUnkTRGM() {}

ARM void MapObjectUnkTRGM::func_ov030_02142edc(void) {}
ARM void MapObjectUnkTRGM::func_ov030_02142fc4(void) {}
ARM void MapObjectUnkTRGM::func_ov030_02143058(void) {}
ARM void MapObjectUnkTRGM::func_ov030_02143070(void) {}
ARM void MapObjectUnkTRGM::func_ov030_021430b0(void) {}
ARM void MapObjectUnkTRGM::func_ov030_021430d0(void) {}
ARM void MapObjectUnkTRGM::func_ov030_021430f0(void) {}
ARM void MapObjectUnkTRGM::func_ov030_021430f8(void) {}

ARM MapObjectUnkTRGM::~MapObjectUnkTRGM() {}
ARM MapObjectProfileUnkTRGM::~MapObjectProfileUnkTRGM() {}
