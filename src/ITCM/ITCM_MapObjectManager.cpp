#include "CommonFuncs.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectManager.hpp"

MapObject *MapObjectManager::func_01fff498(Vec2bCpp param1) {
    if (this->mUnk_0C[param1.y][param1.x] < 0) {
        return NULL;
    }

    return this->mMapObjTable[this->mUnk_0C[param1.y][param1.x]];
}

void MapObjectManager::func_01fff4cc(UnkCallback_func_01fff4cc param1, void *param2) {
    MapObject **ptr = this->mMapObjTable;

    while (ptr != this->mUnk_08) {
        if (*ptr != NULL && GET_FLAG((*ptr)->mFlags, MapObjFlag_Alive)) {
            param1(*ptr, param2);
        }

        ptr++;
    }
}

MapObject **MapObjectManager::func_01fff520(UnkStruct_ov000_020b34c4 *param1, MapObject **param2) {
    MapObject **ptr = param2;

    while (ptr != this->mUnk_08) {
        MapObject *ptr2 = *ptr;
        if (ptr2 != NULL && GET_FLAG((ptr2)->mFlags, MapObjFlag_Alive)) {
            if (param1->vfunc_00(ptr2)) {
                break;
            }
        }

        ptr++;
    }

    return ptr;
}

MapObjectId MapObject::GetMapObjectId() {
    return this->mpProfile->mMapObjId;
}

unk32 MapObject::func_01fff590(unk32 param2) {
    Cylinder stack;
    unk32 x;
    unk32 y;
    unk32 z;
    unk32 size;

    size = this->mpProfile->mUnk_08;
    x    = (z = this->mPos.x);
    y    = this->mPos.y;
    z    = this->mPos.z;

    stack.pos.x = x;
    stack.pos.y = y;
    stack.pos.z = z;
    stack.size  = size;
    return func_01ffecdc(param2, &stack);
}
