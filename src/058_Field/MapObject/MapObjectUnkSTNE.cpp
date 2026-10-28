#include "MapObject/MapObjectUnkSTNE.hpp"

#include "Actor/ActorManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_027e0d38.hpp"

static MapObject_10_Pot data_ov058_0215775c = MapObject_10_Pot();

DECL_PROFILE(MapObjectProfileUnkSTNE);

MapObject *MapObjectProfileUnkSTNE::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkSTNE();
}

MapObjectProfileUnkSTNE::MapObjectProfileUnkSTNE() :
    MapObjectProfileUnkSTNE_Base(MapObjectId_STNE, MapObjectId_STNE) {
    this->mUnk_0E         = 0x0;
    this->mUnk_D4.mUnk_08 = 0x7007;
    VecFx32_Init(0, 0, 0, &this->mUnk_D4.mUnk_0C);
    this->mUnk_D4.mUnk_18.x = FX_F32_TO_FX32(0.5f);
    this->mUnk_D4.mUnk_18.y = 0x1333;

    this->mUnk_06 = 0x1;
    this->mUnk_0C = 0x1333;
}

MapObjectUnkSTNE::MapObjectUnkSTNE() :
    mUnk_48(G3d_GetModelPtr(GET_PROFILE(MapObjectProfileUnkSTNE)->mUnk_20.mUnk_50), 0x1),
    mUnk_58(0x0),
    mUnk_5C(0x0),
    mUnk_60(true),
    mUnk_61(0x0) {
    this->mUnk_40 = ActorId_NSTN;
    this->mUnk_10 = &data_ov058_0215775c;

    SET_FLAG(this->mFlags, MapObjFlag_8);
}

bool MapObjectUnkSTNE::vfunc_1C(RefStruct param1, unk32 param2, VecFx32 *param3) {
#pragma unused(param3)
    switch (param2) {
        case 0x0:
        case 0x1:
            this->SetState(0x1, 0x0);
            break;

        case 0x4:
            if (data_027e0d38->func_ov031_020d9c04(0x2, 0x0, 0x0)) {
                Actor *actor = gpActorManager->func_01fff3b4(param1);
                if (actor != NULL) {
                    this->mAngle.angle_s = actor->mAngle.angle_s;
                    this->SetState(0x3, 0x0);
                }
            }
            break;

        default:
            break;
    }

    return true;
}
void MapObjectUnkSTNE::vfunc_48() {
    data_027e09a8->func_ov000_02071b30(0x101, &this->mPos, 0x0);
    data_027e09a8->func_ov000_02071eac(&this->mPos);

    VecFx32 vec;
    VecFx32_Init(this->mPos.x, this->mPos.y + this->mUnk_48.mUnk_0C, this->mPos.z, &vec);

    data_027e0cec->func_ov000_0209feac(0x8D0, &vec, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x8D1, &vec, 0x4, 0x0, 0x0);
    data_027e0cec->func_ov000_0209feac(0x821, &vec, 0x4, 0x0, 0x0);
}

// non-matching
bool MapObjectUnkSTNE::SetState(MapObjState state, unk32 param2) {
    bool stateResult = this->MapObjectPot_Base::SetState(state, param2);

    if (this->func_ov058_0214efb8() && !GET_FLAG(this->mFlags, MapObjFlag_Alive)) {
        SET_FLAG(this->mFlags, MapObjFlag_Alive);
        this->mUnk_10 = NULL;
        this->mUnk_58 = 0x1;
    }

    return stateResult;
}

void MapObjectUnkSTNE::vfunc_08() {
    this->MapObject::vfunc_08();

    if (this->mUnk_58 != 0x1) {
        return;
    }
}

void MapObjectUnkSTNE::vfunc_14(unk32 param1) {
#pragma unused(param1)
    if (this->mUnk_58 == 0x1) {
        return;
    }

    this->MapObject::func_ov000_0209d518(&this->mPos, 0xA1D, 0x723, 0x1F);

    this->mUnk_48.vfunc_18(&this->mPos);
}

bool MapObjectUnkSTNE::func_ov058_0214efb8() {
    return this->mUnk_20.mParams[1] != 0x0;
}

// non-matching
void MapObjectUnkSTNE::vfunc_24(MapObject *param1, VecFx32 param2) {
    ((MapObjectPot_Base *) param1)->MapObjectPot_Base::vfunc_24(param1, param2);
}

bool MapObjectUnkSTNE::vfunc_4C() {
    return this->mUnk_60;
}

MapObjectUnkSTNE::~MapObjectUnkSTNE() {}
MapObjectProfileUnkSTNE::~MapObjectProfileUnkSTNE() {}
