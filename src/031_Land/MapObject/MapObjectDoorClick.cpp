#include "MapObject/MapObjectDoorClick.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" f32 func_02039f04(unk32);
extern "C" void func_01ffaf74(Vec3p *, Mat4x3p *, Vec3p *);
extern "C" void func_01ffcfcc(Vec3p *, Vec3p *, Vec3p *);
extern "C" unk32 func_01ffb428(unk32, unk32);
extern "C" unk32 func_01ffb464(unk32 param1);
extern "C" void func_01ff9218(void *, unk32, unk32);

static const u32 data_ov031_02110c1c[] = {
    'DRCG',
    'DRCG',
    'DRTC',
};

static const u16 data_ov031_02110c28[] = {0x00, 0x00, 0x00, 0x00, 0x07, 0x0A, 0x0C, 0x0C, 0x14, 0x00};

const UnkStruct_ov031_021150b0 data_ov031_02115328(0x1E66);

ARM DECL_PROFILE(MapObjectProfileDoorClick);

ARM MapObject *MapObjectProfileDoorClick::Create() {
    return new(HeapIndex_ITCM) MapObjectDoorClick();
}

ARM MapObjectProfileDoorClick::MapObjectProfileDoorClick() :
    MapObjectProfile_Derived1(MapObjectId_DoorClick, -1, 0) {
    this->mUnk_06 = 2;
    this->mUnk_1E |= 0x01;
    this->mUnk_0C = 0x399A;
}

ARM MapObjectDoorClick::MapObjectDoorClick() :
    mUnk_9C(1),
    mUnk_A0(0) {
    this->mUnk_8F = true;
    SET_FLAG(this->mFlags, MapObjFlag_9);
    this->mUnk_18[0] = 0x0E;
    this->func_ov000_0209d2c4(1, 1);
}

ARM u16 MapObjectDoorClick::vfunc2_1C(unk32 param1) {
    return data_ov031_02110c28[param1];
}

// https://decomp.me/scratch/zmw3b
ARM bool MapObjectDoorClick::vfunc_00(void) {
    Vec3p local_1c;
    Vec3p local_28;
    Vec3p local_40[2];

    this->func_ov031_020fbf10(true, false);
    this->mUnk_8B = true;
    this->mUnk_6C = 0;
    this->func_ov031_020fcf0c(1);
    this->mUnk_8D = false;
    this->mUnk_88 = false;
    this->mUnk_78 = 10;
    this->mUnk_A4 = this->mUnk_20.mUnk_00[1];
    this->vfunc2_10();

    local_1c.x = -0x1000;
    local_1c.y = 0;
    local_1c.z = -0x266;
    local_28.y = 0x2000;
    local_28.x = 0x1000;
    local_28.z = 0x266;

    unk32 value = ((this->mUnk_20.mUnk_00[2] & 0xFF) << 8) | 0x21C07006;
    unk32 uVar2;
    if (this->mUnk_20.mUnk_00[3] == 0) {
        uVar2 = 0x1B;
    } else {
        uVar2 = 0x1C;
    }
    this->mUnk_A8.mUnk_07 = uVar2;

    func_01ffcfcc(local_40, &local_1c, &local_28);

    this->mUnk_A8.mUnk_0C.x = local_40[0].x;
    this->mUnk_A8.mUnk_0C.y = local_40[0].y;
    this->mUnk_A8.mUnk_0C.z = local_40[0].z;

    this->mUnk_A8.mUnk_18.x = local_40[1].x;
    this->mUnk_A8.mUnk_18.y = local_40[1].y;
    this->mUnk_A8.mUnk_18.z = local_40[1].z;

    this->mUnk_A8.mUnk_08 = value;
    return true;
}

ARM void MapObjectDoorClick::vfunc_08(void) {
    if (this->mUnk_A4 != 0 && this->func_ov000_0209d29c(0)) {
        this->mUnk_A4 = 0;
    }

    if (this->mUnk_16 == 2) {
        this->mUnk_8B = this->func_ov031_020fcf30();
    }

    switch (this->mUnk_16) {
        case 3:
            this->mUnk_84++;

            if (!this->mUnk_86 && this->vfunc_6C()) {
                this->vfunc_5C(0, 0);
                break;
            }

            this->mUnk_82++;

            if (this->mUnk_82 >= this->vfunc2_1C(4)) {
                this->vfunc_5C(4, 0);
            }

            break;
        case 4:
            this->mUnk_84++;

            if (!this->mUnk_86 && this->vfunc_6C()) {
                this->vfunc_5C(0, 0);
                break;
            }

            this->mUnk_82++;

            if (this->mUnk_82 >= this->vfunc2_1C(5)) {
                this->vfunc_5C(5, 0);
            }

            break;
        case 5:
            this->mUnk_84++;

            if (!this->mUnk_86 && this->vfunc_6C()) {
                this->vfunc_5C(0, 0);
                break;
            }

            this->vfunc_44();
            this->mUnk_80--;

            if (this->mUnk_80 > 0) {
                func_01ff9218(&this->mUnk_6C, 0x1000, func_01ffb464(INT_TO_Q20(this->mUnk_80)));
            }

            if (this->mUnk_88 != false) {
                if (this->mUnk_80 > 1) {
                    this->vfunc_78();
                } else {
                    this->vfunc_7C();
                }
            }

            if (this->mUnk_80 <= 0) {
                if (this->mUnk_80 == 0 && this->mUnk_91) {
                    this->vfunc_40();
                }

                this->mUnk_82++;

                if (this->mUnk_82 >= this->vfunc2_1C(6)) {
                    this->mUnk_82 = this->vfunc2_1C(6);
                    this->vfunc_5C(6, 0);
                }
            }

            break;
        case 6:
            this->mUnk_84++;
            this->mUnk_82++;

            if (this->mUnk_82 >= this->vfunc2_1C(7)) {
                this->mUnk_82 = this->vfunc2_1C(7);
                this->vfunc_5C(7, 0);
            }

            break;
        case 7:
            this->mUnk_84++;
            this->mUnk_82++;

            if (this->mUnk_82 >= this->vfunc2_1C(8)) {
                this->vfunc_5C(8, 0);
            }

            break;
        case 8:
            this->MapObjectDoorBase::vfunc_08();
            break;
        default:
            this->MapObjectDoorBase::vfunc_08();
            break;
    }
}

ARM void MapObjectDoorClick::vfunc_18(s8 *param1, s8 param2) {
    this->func_ov031_020fcb78(param1, param2);
}

// https://decomp.me/scratch/3XTMj
ARM void MapObjectDoorClick::vfunc_14(void) {
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

ARM void MapObjectDoorClick::vfunc_5C(unk32 param1, unk32 param2) {
    s32 var_r6;
    u32 temp_r8;
    UnkStackStruct1 sp8;
    s16 sp4;
    s16 *sp4Ptr;

    this->mUnk_16 = param1;

    switch (this->mUnk_16) {
        case 3:
            this->vfunc_7C();

            u16 result    = ROUND_Q20(MUL_Q20(func_01ffb428(0x1000 - this->mUnk_6C, 0x1000), INT_TO_Q20(this->mUnk_78)));
            this->mUnk_80 = result;

            if (this->mUnk_8A) {
                this->mUnk_82 = 0;
                this->mUnk_84 = 0;

                UNSET_FLAG(this->mFlags, MapObjFlag_9);
                this->vfunc2_18();
                this->func_ov000_0209d2c4(1, 1);
            }

            break;
        case 8:
            if (this->mUnk_20.mUnk_00[2] & 0xFF) {
                this->MapObjectDoorBase::vfunc_5C(param1, param2);
                this->func_ov031_020fcf0c(1);
                this->mUnk_10 = this->vfunc2_14();
                break;
            }

            // fallthrough
        default:
            this->MapObjectDoorBase::vfunc_5C(param1, param2);
            break;
    }
}

ARM MapObject_10 *MapObjectDoorClick::vfunc2_14(void) {
    return &this->mUnk_A8;
}

ARM bool MapObjectDoorClick::func_ov031_020ffde4(void) {
    switch (this->mUnk_A4) {
        case 0:
            return true;
        case 1:
            if (!this->mUnk_8B) {
                return true;
            }
            break;
        default:
            break;
    }

    return false;
}

ARM unk32 MapObjectDoorClick::vfunc_28(void) {
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

ARM bool MapObjectDoorClick::vfunc_64(void) {
    return this->func_ov000_0209d29c(1);
}

ARM bool MapObjectDoorClick::vfunc_68(void) {
    return false;
}

ARM bool MapObjectDoorClick::vfunc_6C(void) {
    return false;
}

ARM void MapObjectDoorClick::vfunc_74(void) {
    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_68, 0x89E, &this->mPos, 4);
    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_A0, 0x89E, &this->mPos, 4);
}

ARM void MapObjectDoorClick::vfunc_7C(void) {
    this->MapObjectDoorBase::vfunc_7C();

    if (this->mUnk_A0.mUnk_00 != NULL) {
        this->mUnk_A0.func_ov000_020a0334();
    }
}

ARM void MapObjectDoorClick::vfunc_78(void) {
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
    s16 angle = 21845.0f * div;

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

ARM void MapObjectDoorClick::vfunc2_10(void) {
    unk32 index = this->mUnk_20.mUnk_00[0];
    this->mUnk_94.vfunc_08(GetUnkPointer2<MapObjectProfileDoorClick>(index, data_ov031_02110c1c[index]));
}

ARM void MapObjectDoorClick::vfunc_40(void) {
    data_027e09a8->func_ov000_02071b30(0x143, &this->mPos, 0);
}

ARM void MapObjectDoorClick::vfunc_44(void) {
    unk32 local_c = *(u32 *) &this->mUnk_38;
    data_027e09a8->func_ov000_02071d34(&local_c, 0x142, &this->mPos, 0);
}

ARM void MapObjectDoorClick::vfunc_48(void) {}

ARM void MapObjectDoorClick::vfunc_4C(void) {}

ARM void MapObjectDoorClick::vfunc2_18(void) {}
