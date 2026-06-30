#include "MapObject/MapObjectManager.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

MapObject *MapObjectManager::AllocateMapObject(MapObjectId mapObjId, Vec2b param2, u16 param3, unk32 param4, u8 param5) {
    s16 *pUnkPos = &this->mUnk_0C[param2.y][param2.x];

    if (*pUnkPos >= 0) {
        return NULL;
    }

    MapObject **ppTable = this->mMapObjTable;

    while (ppTable != this->mMapObjTableEnd && *ppTable != NULL ? true : false) {
        ppTable++;
    }

    if (ppTable != this->mMapObjTableEnd) {
        VecFx32 sp14;

        UnkStruct_MapObjCreateData spawnData;
        spawnData.raw_pos = 0;
        spawnData.unk_00  = 0x1000;
        spawnData.pos.x   = param2.x;
        spawnData.pos.y   = param2.y;

        data_027e0cd8->mUnk_0C->func_ov000_020808f4(&sp14, (void *) &param2, param5);

        UnkStruct_ov000_020b5d34_00 args;
        args.mUnk_00 = (unk32 *) &spawnData;
        args.mUnk_04 = (MapObject_20 *) param4;
        args.mUnk_08 = &sp14;
        args.mUnk_0C = (s16 *) &param3;

        data_ov000_020b5d34.mUnk_00 = &args;
        MapObject *pMapObj          = data_ov000_020b5d34.CreateMapObject(mapObjId);
        *ppTable                    = pMapObj;

        if (pMapObj->vfunc_00()) {
            // init was successful, proceed and return the pointer

            // this seems to set map object table index in an array that uses tile pos to figure out which map obj it is
            *pUnkPos = ppTable - this->mMapObjTable;

            MapObject **ppNext = ppTable + 1;
            if (ppNext <= this->mUnk_08) {
                ppNext = this->mUnk_08;
            }

            this->mUnk_08 = ppNext;
            return pMapObj;
        } else {
            // init failed, destroy the new map object and return NULL
            delete pMapObj;
            *ppTable = NULL;
        }
    }

    return NULL;
}
