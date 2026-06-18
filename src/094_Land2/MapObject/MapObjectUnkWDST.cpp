//! TODO: This file was generated automatically and might contain errors

#include "MapObject/MapObjectUnkWDST.hpp"
#include "Item/Item.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

DECL_PROFILE(MapObjectProfileUnkWDST);

MapObject *MapObjectProfileUnkWDST::Create() {
    return new(HeapIndex_2) MapObjectUnkWDST();
}

MapObjectProfileUnkWDST::MapObjectProfileUnkWDST() :
    MapObjectProfile(MapObjectId_WDST) {}

MapObjectUnkWDST::MapObjectUnkWDST() {}

void MapObjectUnkWDST::func_ov094_02171d4c(void) {}
void MapObjectUnkWDST::func_ov094_02171e58(void) {}
void MapObjectUnkWDST::func_ov094_02171e9c(void) {}
void MapObjectUnkWDST::func_ov094_02171fbc(void) {}
void MapObjectUnkWDST::func_ov094_02172030(void) {}

void MapObjectUnkWDST::func_ov094_02172290(void) {
    if (!data_027e09b8->func_01ffd420()) {
        if (this->mUnk_B8 != 2) {
            data_027e0d34->TryItemGive(this->mUnk_B8 + ItemId_PanFluteSong_101);
        }

        this->func_ov094_02172c94(5);
    }
}

void MapObjectUnkWDST::func_ov094_021722e0(void) {}
void MapObjectUnkWDST::func_ov094_021722f4(void) {}
void MapObjectUnkWDST::func_ov094_021726a0(void) {}
void MapObjectUnkWDST::func_ov094_021726ac(void) {}
void MapObjectUnkWDST::func_ov094_021727d4(void) {}
void MapObjectUnkWDST::func_ov094_021728a4(void) {}
void MapObjectUnkWDST::func_ov094_02172930(void) {}
void MapObjectUnkWDST::func_ov094_02172a18(void) {}
void MapObjectUnkWDST::func_ov094_02172a44(void) {}
void MapObjectUnkWDST::func_ov094_02172ae0(void) {}
void MapObjectUnkWDST::func_ov094_02172af4(void) {}
void MapObjectUnkWDST::func_ov094_02172bfc(void) {}
void MapObjectUnkWDST::func_ov094_02172c94(unk32 param1) {}
void MapObjectUnkWDST::func_ov094_0217310c(void) {}
void MapObjectUnkWDST::func_ov094_021731e4(void) {}
void MapObjectUnkWDST::func_ov094_02173464(void) {}
void MapObjectUnkWDST::func_ov094_02173494(void) {}
void MapObjectUnkWDST::func_ov094_021734d4(void) {}
void MapObjectUnkWDST::func_ov094_021734fc(void) {}
void MapObjectUnkWDST::func_ov094_02173514(void) {}
void MapObjectUnkWDST::func_ov094_02173520(void) {}
void MapObjectUnkWDST::func_ov094_02173574(void) {}
void MapObjectUnkWDST::func_ov094_02173578(void) {}
void MapObjectUnkWDST::func_ov094_02173584(void) {}
void MapObjectUnkWDST::func_ov094_02173618(void) {}
void MapObjectUnkWDST::func_ov094_02173620(void) {}
void MapObjectUnkWDST::func_ov094_02173680(void) {}
void MapObjectUnkWDST::func_ov094_021738c0(void) {}

MapObjectUnkWDST::~MapObjectUnkWDST() {}
MapObjectProfileUnkWDST::~MapObjectProfileUnkWDST() {}
