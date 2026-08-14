#include "Actor/ActorUnkSKDO.hpp"

#include "Map/MapObjectId.hpp"
#include "MapObject/MapObjectManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov000_020b34c4.hpp"

extern "C" bool func_ov000_0209c348();
extern "C" fx32 func_01ffb9cc(VecFx32 *, VecFx32 *);

DECL_PROFILE(ActorProfileUnkSKDO);

Actor *ActorProfileUnkSKDO::Create() {
    return new(HeapIndex_2) ActorUnkSKDO();
}

ActorProfileUnkSKDO::ActorProfileUnkSKDO() :
    ActorProfile(ActorId_SKDO) {}

ActorUnkSKDO::ActorUnkSKDO() :
    mUnk_98(NULL) {}

bool ActorUnkSKDO::vfunc_18(unk32 param1) {
    return true;
}

void ActorUnkSKDO::vfunc_1C() {
    ActorUnkSKDO_ov031_02115ce8 stack(MapObjectId_SKDI);
    stack.mUnk_08 = this->mPos;
    stack.mUnk_14 = FLOAT_TO_FX32(2.0f);

    MapObject **mapObject = gpMapObjManager->func_01fff520(&stack, gpMapObjManager->mMapObjTable);

    if (gpMapObjManager->mUnk_08 != mapObject) {
        this->mUnk_98 = (MapObjectUnkSKDI *) *mapObject;
    }
}

void ActorUnkSKDO::vfunc_20() {
    unk32 var2 = 0x0;
    if (this->mUnk_98->vfunc_40() == 0x2) {
        var2 = 0x1;
    }
    this->func_ov000_02098a88(0x0, var2);
}

void ActorUnkSKDO::vfunc_54(unk32 param1) {
    this->mUnk_94 = param1;
}

bool ActorUnkSKDO_ov031_02115ce8::vfunc_00(MapObject *param1) {
    if (func_ov000_0209c348()) {
        if (func_01ffb9cc(&param1->mPos, &this->mUnk_08) < this->mUnk_14) {
            return true;
        }
    }
    return false;
}
