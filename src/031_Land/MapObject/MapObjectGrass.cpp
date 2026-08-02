#include "MapObject/MapObjectGrass.hpp"

#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

DECL_PROFILE(MapObjectProfileGrass);

MapObject *MapObjectProfileGrass::Create() {
    return new(HeapIndex_ITCM) MapObjectGrass();
}

// non-matching
MapObjectProfileGrass::MapObjectProfileGrass() :
    MapObjectProfile_Derived2(MapObjectId_Grass, MapObjectId_Grass) {}

MapObjectGrass::MapObjectGrass() :
    mUnk_58(0x0),
    mUnk_5C(FLOAT_TO_FX32(0.0f)),
    mUnk_64(-1) {
    this->mUnk_62 = 0x0;
    this->mUnk_60 = 0x0;
    SET_FLAG(this->mFlags, MapObjFlag_6);
}

// non-matching
bool MapObjectGrass::vfunc_00() {}

void MapObjectGrass::vfunc_08() {
    MapObjState state = this->mState;
    if (state != MapObjGrassState_1) {
        if (state == MapObjGrassState_2 && this->func_ov031_021016b4()) {
            this->vfunc_38(MapObjGrassState_3, 0x0);
        }
    } else if (this->func_ov031_02101778()) {
        this->vfunc_38(MapObjGrassState_0, 0x0);
    }
    if (this->mUnk_64 > -1) {
        --this->mUnk_64;
    }
}

// non-matching
void MapObjectGrass::vfunc_14() {
    VecFx32 vec;
    for (unk32 i = 0; i < ARRAY_LEN(this->mUnk_40); ++i) {
        VecFx32_Add(&this->mUnk_40[i], &this->mPos, &vec);
        vec.x += this->mUnk_5C;
    }
}

bool MapObjectGrass::vfunc_38(MapObjState state, unk32 param2) {
    if (this->mState == state) {
        return true;
    }
    this->mState = state;
    switch (this->mState) {
        case MapObjGrassState_0:
            this->mUnk_5C = FLOAT_TO_FX32(0.0f);
            if (param2 != 0) {
                this->func_ov031_021018a4(0x0);
            }
            break;
        case MapObjGrassState_2:
            this->mUnk_58 = 0x0;
            this->mUnk_5C = FLOAT_TO_FX32(0.0f);

            VecFx32 vec;
            for (unk32 i = 0; i < ARRAY_LEN(this->mUnk_40); ++i) {
                VecFx32_Init(this->mUnk_40[i].x, this->mUnk_40[i].y + FLOAT_TO_FX32(0.35f), this->mUnk_40[i].z, &vec);
                VecFx32_Add(&vec, &this->mPos, &vec);
                this->vfunc_3C(&vec);
            }

            if (this->GetMapObjectId() == MapObjectId_GRSV) {
                data_027e09a8->func_ov000_02071b30(0xFB, &this->mPos, 0);
            } else {
                data_027e09a8->func_ov000_02071b30(0xF7, &this->mPos, 0);
            }
            this->func_ov031_021018a4(0x1);
            break;
        case MapObjGrassState_1:
            this->mUnk_5C = FLOAT_TO_FX32(0.0f);
            this->mUnk_58 = 0x0;
            break;
        case MapObjGrassState_3:
            this->mUnk_5C = FLOAT_TO_FX32(0.0f);
            this->func_ov031_021018a4(0x1);
            break;
        default:
            break;
    }
    return true;
}

// non-matching
bool MapObjectGrass::func_ov031_021016b4() {}

void MapObjectGrass::vfunc_3C(VecFx32 *param1) {
    data_027e0cec->func_ov000_0209feac(0x923, param1, 0x4, 0x0, 0x0);
}

bool MapObjectGrass::func_ov031_02101778() {
    this->mUnk_5C = gRandom.Next32(0x4CD) + 0xFFFFFD9A;
    if (this->mUnk_58 >= 4U) {
        return true;
    }
    ++this->mUnk_58;
    return false;
}

bool MapObjectGrass::vfunc_1C(ActorRef param1, unk32 param2, VecFx32 *param3) {
    if (this->mUnk_64 != -0x1) {
        return false;
    }
    switch (param2) {
        case 0x7:
        case 0x8:
        case 0xC:
            if (this->mState >= MapObjGrassState_2) {
                return false;
            }
            this->vfunc_38(MapObjGrassState_2, 0x0);
            return false;
        case 0x4:
            if (this->mState >= MapObjGrassState_1) {
                return false;
            }
            this->vfunc_38(MapObjGrassState_1, 0x0);
            return false;
        default:
            return false;
    }
}

void MapObjectGrass::func_ov031_021018a4(unk16 param1) {
    if (param1 != 0x0) {
        this->mUnk_60 = 0x4;
        this->mUnk_62 = 0x4;
        return;
    }
    if (this->mUnk_20.mParams[1] == 0x1) {
        this->mUnk_60 = 0x3;
    } else {
        this->mUnk_60 = gRandom.Next32(0x3);
    }
    this->mUnk_62 = gRandom.Next32(0x3);
}

unk32 MapObjectGrass::func_ov031_02101950() {
    if (!(this->mState != MapObjGrassState_0 && this->mState != MapObjGrassState_1)) {
        return 0x15;
    }
    return 0x16;
}

void MapObjectGrass::func_ov031_02101968(unk32 param1) {
    if (param1 != 0x0) {
        this->mUnk_64 = 0xA;
    }
}

// non-matching
void MapObjectGrass::func_ov031_02101978(unk32 param1, VecFx32 *param2) {
    VecFx32_Copy(param2, &this->mUnk_40[param1]);
}
