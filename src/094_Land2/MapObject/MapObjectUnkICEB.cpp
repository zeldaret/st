//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkICEB.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkICEB sMapObjectProfileUnkICEB;

ARM MapObjectProfileUnkICEB *MapObjectProfileUnkICEB::GetProfile() {
    return &sMapObjectProfileUnkICEB;
}

ARM MapObject *MapObjectProfileUnkICEB::Create() {
    return new(HeapIndex_2) MapObjectUnkICEB();
}

ARM MapObjectProfileUnkICEB::MapObjectProfileUnkICEB() :
    MapObjectProfile(MapObjectId_ICEB) {}

ARM MapObjectUnkICEB::MapObjectUnkICEB() {}

ARM void MapObjectUnkICEB::func_ov094_02173c10(void) {}
ARM void MapObjectUnkICEB::func_ov094_02173c40(void) {}
ARM void MapObjectUnkICEB::func_ov094_02173d34(void) {}
ARM void MapObjectUnkICEB::func_ov094_0217425c(void) {}
ARM void MapObjectUnkICEB::func_ov094_021742d8(void) {}
ARM void MapObjectUnkICEB::func_ov094_02174360(void) {}
ARM void MapObjectUnkICEB::func_ov094_0217448c(void) {}
ARM void MapObjectUnkICEB::func_ov094_0217460c(void) {}
ARM void MapObjectUnkICEB::func_ov094_02174694(void) {}
ARM void MapObjectUnkICEB::func_ov094_021746ac(void) {}
ARM void MapObjectUnkICEB::func_ov094_021746cc(void) {}
ARM void MapObjectUnkICEB::func_ov094_02174870(void) {}
ARM void MapObjectUnkICEB::func_ov094_02174888(void) {}

ARM MapObjectUnkICEB::~MapObjectUnkICEB() {}
ARM MapObjectProfileUnkICEB::~MapObjectProfileUnkICEB() {}
