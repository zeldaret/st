#include "MapObject/MapObjectManager.hpp"

struct UnkStruct {
    unk32 one;
    unk32 two;
    unk32 three;
    unk32 four;
};

extern "C" void func_01ffecdc(int, void *);

MapObject *MapObjectManager::func_01fff498(UnkStruct_func_01fff498 param1) {
    if (this->mUnk_0C[param1.valueIndex][param1.ptrIndex] < 0) {
        return NULL;
    }

    return this->mMapObjTable[this->mUnk_0C[param1.valueIndex][param1.ptrIndex]];
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

// non-matching
MapObject **MapObjectManager::func_01fff520(UnkStruct_ov000_020b34c4 *param1, MapObject **param2) {
    MapObject **ptr = param2;

    while (ptr != this->mUnk_08) {
        MapObject *ptr2 = *ptr;
        if (ptr2 != NULL && GET_FLAG((ptr2)->mFlags, MapObjFlag_Alive)) {
            UnkStruct_ov000_020b34c4_Callback cb = *param1->mUnk_00;

            if ((*cb)(param1, ptr2)) {
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

void MapObject::func_01fff590(unk32 param2) {
    UnkStruct stack;
    unk32 one;
    unk32 two;
    unk32 three;
    unk32 four;

    four  = this->mpProfile->mUnk_08;
    one   = (three = this->mPos.x);
    two   = this->mPos.y;
    three = this->mPos.z;

    stack.one   = one;
    stack.two   = two;
    stack.three = three;
    stack.four  = four;
    func_01ffecdc(param2, &stack);
}
