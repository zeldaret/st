//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkDFNC.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkDFNC sMapObjectProfileUnkDFNC;

ARM MapObjectProfileUnkDFNC *MapObjectProfileUnkDFNC::GetProfile() {
    return &sMapObjectProfileUnkDFNC;
}

ARM MapObject *MapObjectProfileUnkDFNC::Create() {
    return new(HeapIndex_2) MapObjectUnkDFNC();
}

ARM MapObjectProfileUnkDFNC::MapObjectProfileUnkDFNC() :
    MapObjectProfile(MapObjectId_DFNC) {}

ARM MapObjectUnkDFNC::MapObjectUnkDFNC() {}

ARM void MapObjectUnkDFNC::func_ov060_02160664(void) {}
ARM void MapObjectUnkDFNC::func_ov060_021606b4(void) {}
ARM void MapObjectUnkDFNC::func_ov060_021608c4(void) {}
ARM void MapObjectUnkDFNC::func_ov060_02160924(void) {}
ARM void MapObjectUnkDFNC::func_ov060_02160968(void) {}

ARM MapObjectUnkDFNC::~MapObjectUnkDFNC() {}
ARM MapObjectProfileUnkDFNC::~MapObjectProfileUnkDFNC() {}
