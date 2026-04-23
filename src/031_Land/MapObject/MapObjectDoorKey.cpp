#include "MapObject/MapObjectDoorKey.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" f32 func_02039f04(unk32);
extern "C" void func_01ffaf74(Vec3p *, Mat4x3p *, Vec3p *);

const UnkStruct_ov031_021150b0 data_ov031_02115184(0x1E66);

ARM DECL_PROFILE(MapObjectProfileDoorKey);

ARM MapObject *MapObjectProfileDoorKey::Create() {
    return new(HeapIndex_ITCM) MapObjectDoorKey();
}

ARM MapObjectProfileDoorKey::MapObjectProfileDoorKey() :
    MapObjectProfile_Derived2(MapObjectId_DoorKey, MapObjectId_DoorKey) {
    this->mUnk_0E = 1;
    this->mUnk_06 = 2;
    this->mUnk_1E |= 0x01;
    this->mUnk_0C = 0x2666;
}

ARM MapObjectDoorKey::MapObjectDoorKey() :
    mUnk_94(GetUnkPointer1<MapObjectProfileDoorKey>()),
    mUnk_9C(1),
    mUnk_A0(0),
    mUnk_A4(false) {
    this->mUnk_8F = true;
    SET_FLAG(this->mFlags, MapObjFlag_9);
    this->mUnk_18[0] = 0x0E;
}

ARM bool MapObjectDoorKey::vfunc_00(void) {
    this->func_ov031_020fbf10(true, false);
    return true;
}

ARM void MapObjectDoorKey::vfunc_08(void) {
    this->MapObjectDoorBase::vfunc_08();
    this->mUnk_A4 = false;
}

ARM void MapObjectDoorKey::vfunc_18(s8 *param1, s8 param2) {
    this->MapObjectDoorBase::func_ov031_020fcb78(param1, param2);
}

// https://decomp.me/scratch/XO3u2
ARM void MapObjectDoorKey::vfunc_14(void) {
    f32 factor;
    f32 uVar3;
    s32 sVar2;
    s32 sVar2_2;
    u16 uVar2;

    if (this->mUnk_8B) {
        uVar3  = func_02039f04(this->mUnk_6C) / 4096.0f;
        factor = 16384.0f;
    } else {
        uVar3  = func_02039f04(this->mUnk_6C) / 4096.0f;
        factor = -16384.0f;
    }

    s32 mul   = factor * uVar3;
    sVar2     = (s16) mul;
    u16 angle = (u16) sVar2;

    Mat3p m;
    Vec3p local_48;
    Vec3p temp;

    Mat3p_InitYRotation(&m, SIN(angle), COS(angle));
    temp.x     = this->mPos.x - FLOAT_TO_Q20(1.0f) + this->mUnk_70;
    temp.z     = this->mPos.z;
    temp.y     = this->mPos.y;
    local_48.x = temp.x;
    local_48.y = temp.y;
    local_48.z = temp.z;
    this->mUnk_94.vfunc_14(&m, &local_48);

    u16 var = (-0x8000 - sVar2);
    Mat3p_InitYRotation(&m, SIN(var), COS(var));
    temp.x     = this->mPos.x + FLOAT_TO_Q20(1.0f) - this->mUnk_70;
    temp.z     = this->mPos.z;
    temp.y     = this->mPos.y;
    local_48.x = temp.x;
    local_48.y = temp.y;
    local_48.z = temp.z;
    this->mUnk_94.vfunc_14(&m, &local_48);
}

ARM void MapObjectDoorKey::vfunc_5C(unk32 param1, unk32 param2) {
    this->mUnk_8D = true;
    this->MapObjectDoorBase::vfunc_5C(param1, param2);

    switch (this->mUnk_16) {
        case 3:
            if (param2 == 0) {
                data_027e0ce0->mUnk_2C->func_ov000_020a87c8(-1);
            }

            UNSET_FLAG(this->mFlags, MapObjFlag_9);
            data_027e09a8->func_ov000_02071b30(0x134, &this->mPos, 0);
            break;
        case 8:
            UNSET_FLAG(this->mFlags, MapObjFlag_9);
            break;
        default:
            break;
    }
}

ARM bool MapObjectDoorKey::func_ov031_020fea88(void) {
    if (this->mUnk_A4) {
        return false;
    }

    if (data_027e0ce0->mUnk_2C->mKeyAmount != 0) {
        return true;
    }

    return false;
}

ARM unk32 MapObjectDoorKey::vfunc_28(void) {
    if (this->mUnk_A4) {
        return -1;
    }

    if (data_027e0ce0->mUnk_2C->mKeyAmount == 0) {
        return -1;
    }

    switch (this->mUnk_16) {
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
            return -1;
        default:
            this->vfunc_5C(3, 0);
            break;
    }

    return 0;
}

ARM bool MapObjectDoorKey::vfunc_64(void) {
    return this->func_ov000_0209d668();
}

ARM bool MapObjectDoorKey::vfunc_68(void) {
    return false;
}

ARM bool MapObjectDoorKey::vfunc_6C(void) {
    return false;
}

ARM void MapObjectDoorKey::vfunc_74(void) {
    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_68, 0x89E, &this->mPos, 4);
    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_A0, 0x89E, &this->mPos, 4);
}

ARM void MapObjectDoorKey::vfunc_7C(void) {
    this->MapObjectDoorBase::vfunc_7C();

    if (this->mUnk_A0.mUnk_00 != NULL) {
        this->mUnk_A0.func_ov000_020a0334();
    }
}

ARM void MapObjectDoorKey::vfunc_78(void) {
    Vec3p local_24;
    Vec3p local_30;
    Vec3p VStack_3c;
    Vec3p VStack_48;
    Mat4x3p m;
    Vec3p local_84;
    Vec3p local_90;

    Vec3p temp;
    temp.x = this->mPos.x;
    temp.z = this->mPos.z;
    temp.y = this->mPos.y;

    local_24.x = temp.x - FLOAT_TO_Q20(0.999f);
    local_24.y = temp.y;
    local_24.z = temp.z;

    local_30.x = temp.x + FLOAT_TO_Q20(0.999f);
    local_30.y = temp.y;
    local_30.z = temp.z;

    f32 div   = func_02039f04(this->mUnk_6C) / 4096.0f;
    s16 angle = 16384.0f * div;

    Mat4x3p_InitYRotation(&m, SIN((u16) angle), COS((u16) angle));

    local_84.x = FLOAT_TO_Q20(1.0f);
    local_84.y = 0;
    local_84.z = 0;

    local_90.x = 0;
    local_90.y = 0;
    local_90.z = FLOAT_TO_Q20(0.3299f);

    func_01ffaf74(&local_90, &m, &local_90);
    func_01ffaf74(&local_84, &m, &local_84);

    Vec3p_Add(&local_24, &local_90, &local_24);
    Vec3p_Add(&local_24, &local_84, &VStack_3c);

    local_90.x = -local_90.x;
    local_84.x = -local_84.x;
    Vec3p_Add(&local_30, &local_90, &local_30);
    Vec3p_Add(&local_30, &local_84, &VStack_48);

    if (this->mUnk_68.mUnk_00 != NULL) {
        this->mUnk_68.mUnk_00->func_ov000_02052c48(&VStack_3c, &local_24);
    }

    if (this->mUnk_A0.mUnk_00 != NULL) {
        this->mUnk_A0.mUnk_00->func_ov000_02052c48(&VStack_48, &local_30);
    }
}

ARM void MapObjectDoorKey::vfunc_40(void) {
    data_027e09a8->func_ov000_02071b30(0x136, &this->mPos, 0);
}

ARM void MapObjectDoorKey::vfunc_44(void) {
    unk32 stack = *(u32 *) &this->mUnk_38;
    data_027e09a8->func_ov000_02071d34(&stack, 0x135, &this->mPos, 0);
}

ARM void MapObjectDoorKey::vfunc_48(void) {}

ARM void MapObjectDoorKey::vfunc_4C(void) {}

ARM MapObjectDoorKey::~MapObjectDoorKey() {}
ARM MapObjectProfileDoorKey::~MapObjectProfileDoorKey() {}
