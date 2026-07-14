#include "Actor/ActorUnkPMST.hpp"
#include "Actor/ActorUnkPMTT.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "System/OverlayManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"
#include "versions.h"

#include <nitro/mi.h>

extern "C" bool func_ov026_0210d664(SceneIndex sceneIndex, MapObjectId mapObjId);

MapObjectManager *MapObjectManager::Create() {
    return new(HeapIndex_1) MapObjectManager();
}

MapObjectManager::MapObjectManager() {
    this->mMapObjTable    = NULL;
    this->mMapObjTableEnd = NULL;
    this->mUnk_0C         = NULL;
    this->mUnk_10         = NULL;
    this->mUnk_14         = NULL;
    this->mUnk_6C         = &this->mUnk_1C;
}

MapObjectManager::~MapObjectManager() {
    if (this->mUnk_0C != NULL) {
        delete this->mUnk_0C;
    }

    if (this->mMapObjTable != NULL) {
        delete this->mMapObjTable;
    }
}

void MapObjectManager::func_ov001_020bac9c() {
    MapObject **ppMapObjTable = this->mMapObjTable;

    while (ppMapObjTable != this->mUnk_08) {
        MapObject *pMapObj = *ppMapObjTable;

        if (pMapObj != NULL) {
            // alive and uninitialized?
            if (GET_FLAG(pMapObj->mFlags, MapObjFlag_Alive) && !GET_FLAG(pMapObj->mFlags, MapObjFlag_4)) {
                pMapObj->vfunc_04();
                SET_FLAG(pMapObj->mFlags, MapObjFlag_4);
            }
        }

        ppMapObjTable++;
    }
}

void MapObjectManager::func_ov001_020bacd8(ZOBHeader *pHeader) {
    u16 unk_0A = pHeader->unk_0A;
    u16 unk_08 = pHeader->unk_08;

    this->mUnk_18 = 0;
    this->mUnk_1A = 0;

    int aligned0A = ALIGN_NEXT(unk_0A, 8);
    int aligned08 = ALIGN_NEXT(unk_08, 8);

    int iVar5 = data_027e09a0->func_ov000_020702a8(data_027e09a4->CurrentSceneIndex())->mUnk_22;

    s32 allocCount;
    if (data_027e09a4->IsTrain()) {
        if (data_027e09a4->GetCurrentCourseEntry()->unk_10 == 4) {
            allocCount = aligned0A + 0x80;
        } else {
            allocCount = aligned0A + 0x40;
        }
    } else if (gOverlayManager.IsBossDesert()) {
        allocCount = aligned0A + 0x40;
    } else {
        allocCount = aligned0A + 0x18;
    }

    if (this->mMapObjTable != NULL) {
        delete this->mMapObjTable;
    }

    this->mMapObjTable    = (MapObject **) ::operator new(allocCount * 4, HeapIndex_1);
    this->mMapObjTableEnd = (MapObject **) ((uintptr_t) this->mMapObjTable + allocCount * 4);

    MI_CpuFill32(0, this->mMapObjTable, (this->mMapObjTableEnd - this->mMapObjTable) * 4);
    this->mUnk_08 = this->mMapObjTable;
    data_0204999c.func_ov001_020ba5ac(aligned08 + iVar5, 0x80);
}

void MapObjectManager::func_ov001_020bad80() {
    data_0204999c.func_ov001_020ba5c0();

    if (this->mMapObjTable != 0) {
        delete this->mMapObjTable;
    }

    this->mMapObjTable    = NULL;
    this->mMapObjTableEnd = NULL;
}

void MapObjectManager::func_ov001_020bada0() {
    if (gOverlayManager.IsDungeonForest()) {
        ActorUnkPMST::func_ov077_02159db4();
    }

#if IS_JP
    if (gOverlayManager.IsMapB3()) {
        ActorUnkPMTT::func_ov042_0212d8a4();
    }
#endif
}

void MapObjectManager::func_ov001_020badb4() {
    int i                     = 0;
    MapObject **ppMapObjTable = this->mMapObjTable;

    while (ppMapObjTable < this->mUnk_08) {
        MapObject *pMapObj = *ppMapObjTable;

        if (pMapObj != NULL) {
            this->func_ov000_0209c444(i);
        }

        ppMapObjTable++;
        i++;
    }

    this->mUnk_08 = this->mMapObjTable;
}

void MapObjectManager::func_ov001_020bade0() {
    MapObjectProfile **ptr1 = data_ov000_020b5d34.func_ov000_0209c6a0();
    MapObjectProfile **ptr2 = data_ov000_020b5d34.func_ov000_0209c6ac();

    while (ptr1 != ptr2) {

        if (*ptr1 != NULL) {
            bool iVar4 = false;

            if (data_027e09a4->IsTrain()) {
                iVar4 = func_ov026_0210d664(data_027e09a4->CurrentSceneIndex(), (*ptr1)->mMapObjId);
            }

            if ((*ptr1)->mUnk_1C && !iVar4) {
                MapObjectProfile::func_ov000_0209c8ec((*ptr1));
            }
        }

        ptr1++;
        ptr2 = data_ov000_020b5d34.func_ov000_0209c6ac();
    }
}

void MapObjectManager::func_ov001_020bae40(ZeldaObjectList *pObjList) {
    for (s32 i = 0; i < pObjList->header.nEntries; i++) {
        MapObjectProfile::func_ov000_0209c8ec(data_ov000_020b5d34.GetProfileFromId(pObjList->aIdList[i]));
    }
}

void MapObjectManager::func_ov001_020bae6c() {
    MapObjectProfile **ptr1 = data_ov000_020b5d34.func_ov000_0209c6a0();
    MapObjectProfile **ptr2 = data_ov000_020b5d34.func_ov000_0209c6ac();

    while (ptr1 != ptr2) {
        if (*ptr1 != NULL) {
            (*ptr1)->func_ov000_0209c970();
        }

        ptr1++;
        ptr2 = data_ov000_020b5d34.func_ov000_0209c6ac();
    }
}

void MapObjectManager::func_ov001_020baea0(u16 *param1) {
    this->mUnk_14 = (s16 *) ::operator new(param1[0] * param1[1] * sizeof(s16), HeapIndex_1);
    MI_CpuFill16(0xFFFF, this->mUnk_14, param1[0] * param1[1] * 2);

    u16 param1_1 = param1[1];

    if (this->mUnk_0C != NULL) {
        delete this->mUnk_0C;
    }

    this->mUnk_0C = (s16 **) ::operator new(param1_1 * 4, HeapIndex_1);
    this->mUnk_10 = (s16 **) ((uintptr_t) this->mUnk_0C + param1_1 * 4);

    for (u32 i = 0; i < this->mUnk_10 - this->mUnk_0C; i++) {
        this->mUnk_0C[i] = &this->mUnk_14[param1[0] * i];
    }

    this->mUnk_18 = param1[0];
    this->mUnk_1A = param1[1];
}

void MapObjectManager::func_ov001_020baf28() {
    if (this->mUnk_0C != NULL) {
        delete this->mUnk_0C;
    }

    this->mUnk_0C = NULL;
    this->mUnk_10 = NULL;

    DELETE(this->mUnk_14);

    this->mUnk_18 = 0;
    this->mUnk_1A = 0;
}

DECL_INSTANCE(MapObjectManager, gpMapObjManager);
