//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkTMDE.hpp"
#include "System/SysNew.hpp"

static MapObjectProfileUnkTMDE sMapObjectProfileUnkTMDE;

ARM MapObjectProfileUnkTMDE *MapObjectProfileUnkTMDE::GetProfile() {
    return &sMapObjectProfileUnkTMDE;
}

ARM MapObject *MapObjectProfileUnkTMDE::Create() {
    return new(HeapIndex_2) MapObjectUnkTMDE();
}

ARM MapObjectProfileUnkTMDE::MapObjectProfileUnkTMDE() :
    MapObjectProfile(MapObjectId_TMDE) {}

ARM MapObjectUnkTMDE::MapObjectUnkTMDE() {}

ARM void MapObjectUnkTMDE::func_ov029_02141b0c(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141b20(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141d0c(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141df4(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141dfc(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141e04(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141e08(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141e0c(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141e80(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141ea0(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141ec0(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141f24(void) {}
ARM void MapObjectUnkTMDE::func_ov029_02141f54(void) {}

ARM MapObjectUnkTMDE::~MapObjectUnkTMDE() {}
ARM MapObjectProfileUnkTMDE::~MapObjectProfileUnkTMDE() {}
