//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkMBBS.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkMBBS sMapObjectProfileUnkMBBS;

ARM MapObjectProfileUnkMBBS *MapObjectProfileUnkMBBS::GetProfile() {
    return &sMapObjectProfileUnkMBBS;
}

ARM MapObject *MapObjectProfileUnkMBBS::Create() {
    return new(HeapIndex_2) MapObjectUnkMBBS();
}

ARM MapObjectProfileUnkMBBS::MapObjectProfileUnkMBBS() :
    MapObjectProfile(MapObjectId_MBBS) {}

ARM MapObjectUnkMBBS::MapObjectUnkMBBS() {}

ARM void MapObjectUnkMBBS::func_ov094_02175040(void) {}
ARM void MapObjectUnkMBBS::func_ov094_0217506c(void) {}
ARM void MapObjectUnkMBBS::func_ov094_02175088(void) {}
ARM void MapObjectUnkMBBS::func_ov094_0217509c(void) {}
ARM void MapObjectUnkMBBS::func_ov094_02175174(void) {}
ARM void MapObjectUnkMBBS::func_ov094_02175190(void) {}
ARM void MapObjectUnkMBBS::func_ov094_021751dc(void) {}
ARM void MapObjectUnkMBBS::func_ov094_021751fc(void) {}
ARM void MapObjectUnkMBBS::func_ov094_02175218(void) {}
ARM void MapObjectUnkMBBS::func_ov094_02175258(void) {}
ARM void MapObjectUnkMBBS::func_ov094_021752f4(void) {}

ARM MapObjectUnkMBBS::~MapObjectUnkMBBS() {}
ARM MapObjectProfileUnkMBBS::~MapObjectProfileUnkMBBS() {}
