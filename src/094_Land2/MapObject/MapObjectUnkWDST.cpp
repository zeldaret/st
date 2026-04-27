//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkWDST.hpp"
#include "Item/Item.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

ARM DECL_PROFILE(MapObjectProfileUnkWDST);

ARM MapObject *MapObjectProfileUnkWDST::Create() {
    return new(HeapIndex_2) MapObjectUnkWDST();
}

ARM MapObjectProfileUnkWDST::MapObjectProfileUnkWDST() :
    MapObjectProfile(MapObjectId_WDST) {}

ARM MapObjectUnkWDST::MapObjectUnkWDST() {}

ARM void MapObjectUnkWDST::func_ov094_02171d4c(void) {}
ARM void MapObjectUnkWDST::func_ov094_02171e58(void) {}
ARM void MapObjectUnkWDST::func_ov094_02171e9c(void) {}
ARM void MapObjectUnkWDST::func_ov094_02171fbc(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172030(void) {}

ARM void MapObjectUnkWDST::func_ov094_02172290(void) {
    if (!data_027e09b8->func_01ffd420()) {
        if (this->mUnk_B8 != 2) {
            data_027e0d34->TryItemGive(this->mUnk_B8 + ItemId_PanFluteSong_101);
        }

        this->func_ov094_02172c94(5);
    }
}

ARM void MapObjectUnkWDST::func_ov094_021722e0(void) {}
ARM void MapObjectUnkWDST::func_ov094_021722f4(void) {}
ARM void MapObjectUnkWDST::func_ov094_021726a0(void) {}
ARM void MapObjectUnkWDST::func_ov094_021726ac(void) {}
ARM void MapObjectUnkWDST::func_ov094_021727d4(void) {}
ARM void MapObjectUnkWDST::func_ov094_021728a4(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172930(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172a18(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172a44(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172ae0(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172af4(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172bfc(void) {}
ARM void MapObjectUnkWDST::func_ov094_02172c94(unk32 param1) {}
ARM void MapObjectUnkWDST::func_ov094_0217310c(void) {}
ARM void MapObjectUnkWDST::func_ov094_021731e4(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173464(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173494(void) {}
ARM void MapObjectUnkWDST::func_ov094_021734d4(void) {}
ARM void MapObjectUnkWDST::func_ov094_021734fc(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173514(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173520(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173574(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173578(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173584(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173618(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173620(void) {}
ARM void MapObjectUnkWDST::func_ov094_02173680(void) {}
ARM void MapObjectUnkWDST::func_ov094_021738c0(void) {}

ARM MapObjectUnkWDST::~MapObjectUnkWDST() {}
ARM MapObjectProfileUnkWDST::~MapObjectProfileUnkWDST() {}
