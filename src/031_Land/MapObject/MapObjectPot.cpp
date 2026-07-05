#include "MapObject/MapObjectPot.hpp"

#include "Actor/ActorId.hpp"
#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"

#include "limits.h"

extern "C" MapObject_10 data_ov031_02118010;

extern "C" fx32 func_01ffe868(VecFx32 *, unk32, unk32);
extern "C" void func_ov031_020e0f30(ActorRef);

DECL_PROFILE(MapObjectProfilePot);

MapObject *MapObjectProfilePot::Create() {
    return new(HeapIndex_ITCM) MapObjectPot();
}

MapObjectProfilePot::MapObjectProfilePot() :
    MapObjectProfilePot_Base(MapObjectId_TSUB, MapObjectId_TSUB) {
    this->mUnk_0E           = 0x0;
    this->mUnk_D4.mUnk_08   = 0x7007;
    this->mUnk_D4.mUnk_0C.x = FLOAT_TO_FX32(0.0f);
    this->mUnk_D4.mUnk_0C.y = FLOAT_TO_FX32(0.0f);
    this->mUnk_D4.mUnk_0C.z = FLOAT_TO_FX32(0.0f);
    this->mUnk_D4.mUnk_18.x = FLOAT_TO_FX32(0.5f);
    this->mUnk_D4.mUnk_18.y = FLOAT_TO_FX32(1.2f);
    this->mUnk_06           = 0x0;
    this->mUnk_0C           = 0x1000;
}

ModelRender_ov000_020b198c::ModelRender_ov000_020b198c(G3d_Model *pModel, unk8 param2) :
    ModelRenderBase(pModel),
    mUnk_08(param2),
    mUnk_0A(0x0),
    mUnk_0C(0x0) {
    this->vfunc_08(pModel);
}

// non-matching
MapObjectPot::MapObjectPot() :
    mUnk_48(NULL, 0x1) {
    this->mUnk_40 = ActorId_NTUB;
    this->mUnk_10 = &data_ov031_02118010;
    SET_FLAG(this->mFlags, MapObjFlag_8);
}

void MapObjectPot::vfunc_04() {
    this->mPos.y = INT_MAX - FLOAT_TO_FX32(1.0f);
    this->mPos.y = func_01ffe868(&this->mPos, 0x1, 0x0);
}

void MapObjectPot::vfunc_14() {
    this->func_ov000_0209d518(&this->mPos, 0x5A7, 0x5A7, 0x1F);
    this->mUnk_48.vfunc_18(&this->mPos);
}

// non-matching
bool MapObjectPot::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {
    switch (param2) {
        case 0xD:
            this->vfunc_44(0x1, 0x0);
            func_ov031_020e0f30(param1);
            return true;
        case 0x0:
        case 0x1:
        case 0x7:
        case 0x8:
        case 0xA:
        case 0xB:
            this->vfunc_44(0x1, 0x0);
            return true;
        case 0x3:
        case 0xC:
            this->vfunc_44(0x1, 0x0);
            return false;
        case 0x4:
            if (data_027e0d38->func_ov031_020d9c04(0x1, 0x0, 0x0)) {
                Actor *actor = gpActorManager->func_01fff3b4(param1);
                if (actor != NULL) {
                    this->mUnk_14 = actor->mAngle;
                    this->vfunc_44(0x3, 0x0);
                }
            }
        default:
            return true;
    }
}

void MapObjectPot::vfunc_24(MapObject *param1, VecFx32 param2) {
    this->func_ov000_0209d8e8((MapObjectPot_Base *) param1, param2.x);
    param1->func_ov000_0209d614(0x1);

    if (((MapObjectPot_Base *) param1)->func_ov000_0209da64() != 0x65) {
        return;
    }

    if (param1->mUnk_20.mUnk_0A[0] == 0x0) {
        return;
    }

    param1->func_ov000_0209d2c4(0x0, true);
}

bool MapObjectPot::vfunc_3C() {
    if (this->func_ov000_0209da64() == 0x65) {
        return false;
    }
    if (this->func_ov000_0209da64() == 0x0) {
        return this->func_ov000_0209d668() == 0x0;
    }
    return false;
}

bool MapObjectPot::vfunc_40() {
    if (this->func_ov000_0209da64() == 0x65) {
        if (!this->func_ov000_0209d29c(0x0)) {
            return true;
        }
        if (this->mUnk_20.mUnk_0A[0] == 0x0) {
            return true;
        }
    }
    return false;
}

void MapObjectPot::vfunc_48() {
    data_027e09a8->func_ov000_02071b30(0x100, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    VecFx32 stack_09;
    VecFx32_Init(this->mPos.x, this->mPos.y + this->mUnk_48.mUnk_0C, this->mPos.z, &stack_09);
    data_027e0cec->func_ov000_0209feac(0x8FF, &stack_09, 0x4, 0x0, 0x0);

    data_027e0cec->func_ov000_0209feac(0x900, &stack_09, 0x4, 0x0, 0x0);

    data_027e0cec->func_ov000_0209feac(0x822, &stack_09, 0x4, 0x0, 0x0);

    if (this->func_ov000_0209da64() != 0x65) {
        return;
    }

    if (this->mUnk_20.mUnk_0A[0] == 0x0) {
        return;
    }
    this->func_ov000_0209d2c4(0x0, true);
}

unk32 MapObjectPot::vfunc_54() {
    if (this->func_ov000_0209da64() == 0x65) {
        return 0x1;
    }

    if (this->func_ov000_0209d668()) {
        return 0x1;
    }

    return this->func_ov000_0209da64();
}

MapObjectPot::~MapObjectPot() {}
MapObjectProfilePot::~MapObjectProfilePot() {}
