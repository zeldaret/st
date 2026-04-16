#include "MapObject/MapObjectMiniBlocks.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

extern "C" void func_01ff9638(void *, s16);

enum {
    MiniBlocksVariant_BLCM,
    MiniBlocksVariant_BKCT,
    MiniBlocksVariant_BLKF,
    MiniBlocksVariant_Max,
};

static const u32 data_ov000_020af574[] = {
    'BLCM',
    'BKCT',
    'BLKF',
};

ARM DECL_PROFILE(MapObjectProfileMiniBlocks);

ARM MapObject *MapObjectProfileMiniBlocks::Create() {
    return new(HeapIndex_ITCM) MapObjectMiniBlocks();
}

ARM MapObjectProfileMiniBlocks::MapObjectProfileMiniBlocks() :
    MapObjectProfile_Derived1(MapObjectId_MiniBlocks, -1, 0) {
    this->mUnk_06 = -1;
    this->mUnk_1E &= ~0x01;
}

// https://decomp.me/scratch/euvAz
ARM MapObjectMiniBlocks::MapObjectMiniBlocks() :
    mUnk_40() {
    this->mUnk_44 = 0;
    this->mUnk_48 = 1;
}

ARM bool MapObjectMiniBlocks::vfunc_00(void) {
    GET_PROFILE(MapObjectProfileMiniBlocks)
        ->func_ov000_0209ccd8(this->mUnk_20.mUnk_00[1], data_ov000_020af574[this->mUnk_20.mUnk_00[1]]);
    UnkStruct_027e0cd8_0c *pUnkStruct_027e0cd8_0c = data_027e0cd8->mUnk_0c;
    u8 uVar6;

    if (this->mUnk_20.mUnk_00[1] != MiniBlocksVariant_BLKF) {
        Vec2b vec(this->mUnk_3A.x, this->mUnk_3A.y);
        this->mPos.y = pUnkStruct_027e0cd8_0c->func_01ffedf4(&vec);
    }

    Vec3p vec(FLOAT_TO_Q20(0.0f), FLOAT_TO_Q20(0.0f), FLOAT_TO_Q20(0.0f));
    uVar6 = 0;

    switch (this->mUnk_20.mUnk_00[0]) {
        case 4:
        case 5:
        case 6:
        case 7:
            uVar6 = 1;
            break;
        case 8:
        case 9:
        case 10:
        case 11:
            uVar6 = 2;
            break;
        default:
            if (this->mUnk_20.mUnk_00[1] == MiniBlocksVariant_BLKF) {
                vec.x = FLOAT_TO_Q20(0.0f);
                vec.y = FLOAT_TO_Q20(0.0f);
                vec.z = -FLOAT_TO_Q20(0.375f);
            } else {
                vec.x = FLOAT_TO_Q20(0.0f);
                vec.y = FLOAT_TO_Q20(0.0f);
                vec.z = -FLOAT_TO_Q20(0.25f);
            }
            break;
    }

    MapObjectProfile_Derived2_20_Base_50 *ptr =
        GET_PROFILE(MapObjectProfileMiniBlocks)->vfunc_1C(this->mUnk_20.mUnk_00[1])->mUnk_50;
    void *var_r1;
    if (ptr != NULL) {
        u16 *temp_r1 = (u16 *) ((u8 *) ptr + 8);
        u32 *var_r0;

        if (temp_r1 != NULL && uVar6 < ptr->mUnk_09) {
            u32 unk_0E = ptr->mUnk_0E;
            u16 temp   = *((u16 *) ((u8 *) temp_r1 + unk_0E));
            var_r0     = (u32 *) ((u8 *) temp_r1 + unk_0E + 4 + temp * uVar6);
        } else {
            var_r0 = NULL;
        }

        if (var_r0 != NULL) {
            var_r1 = (void *) ((u8 *) ptr + *var_r0);
            goto next;
        }
    }

    var_r1 = NULL;

next:
    this->mUnk_40.vfunc_08((unk32) var_r1);

    unk32 var_r0_2;
    unk32 var_r0;
    switch (this->mUnk_20.mUnk_00[0]) {
        case 1:
        case 6:
        case 8:
            this->mUnk_14 = -0x8000;
            break;
        case 2:
        case 7:
        case 9:
            this->mUnk_14 = 0x4000;
            break;
        case 3:
        case 5:
        case 11:
            this->mUnk_14 = -0x4000;
            break;
        default:
            this->mUnk_14 = 0;
            break;
    }

    func_01ff9638(&vec, -this->mUnk_14);
    Vec3p_Add(&this->mPos, &vec, &this->mPos);
    return true;
}

ARM void MapObjectMiniBlocks::vfunc_14(void) {
    Mat3p m;
    u16 unk_14 = this->mUnk_14;
    Mat3p_InitYRotation(&m, SIN(unk_14), COS(unk_14));
    this->mUnk_40.vfunc_14(&m, &this->mPos);
}

ARM MapObjectMiniBlocks::~MapObjectMiniBlocks() {}
ARM MapObjectProfileMiniBlocks::~MapObjectProfileMiniBlocks() {}
