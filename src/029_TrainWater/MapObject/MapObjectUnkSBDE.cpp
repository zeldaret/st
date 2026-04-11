//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkSBDE.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkSBDE sMapObjectProfileUnkSBDE;

ARM MapObjectProfileUnkSBDE *MapObjectProfileUnkSBDE::GetProfile() {
    return &sMapObjectProfileUnkSBDE;
}

ARM MapObject *MapObjectProfileUnkSBDE::Create() {
    return new(HeapIndex_2) MapObjectUnkSBDE();
}

ARM MapObjectProfileUnkSBDE::MapObjectProfileUnkSBDE() :
    MapObjectProfile(MapObjectId_SBDE) {}

ARM MapObjectUnkSBDE::MapObjectUnkSBDE() {}

ARM void MapObjectUnkSBDE::func_ov029_021438cc(void) {}
ARM void MapObjectUnkSBDE::func_ov029_02143990(void) {}
ARM void MapObjectUnkSBDE::func_ov029_02143df4(void) {}
ARM void MapObjectUnkSBDE::func_ov029_02143e08(void) {}
ARM void MapObjectUnkSBDE::func_ov029_02143f44(void) {}
ARM void MapObjectUnkSBDE::func_ov029_02143fdc(void) {}

ARM MapObjectUnkSBDE::~MapObjectUnkSBDE() {}
ARM MapObjectProfileUnkSBDE::~MapObjectProfileUnkSBDE() {}
