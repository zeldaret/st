#include "MapObject/MapObjectUnkDRSW.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "versions.h"

extern "C" void func_01ffaf74(Vec3p *, Mat4x3p *, Vec3p *);
extern "C" q20 func_01ffb464(q20);
extern "C" void func_01ff9218(q20 *, q20, q20);

const UnkStruct_ov031_021150b0 data_ov031_02115254(0x1E66);

ARM DECL_PROFILE(MapObjectProfileUnkDRSW);

ARM MapObject *MapObjectProfileUnkDRSW::Create() {
    return new(HeapIndex_ITCM) MapObjectUnkDRSW();
}

ARM MapObjectProfileUnkDRSW::MapObjectProfileUnkDRSW() :
    MapObjectProfile_Derived2(MapObjectId_DRSW, MapObjectId_DRSW) {
    this->mUnk_06 = -1;
    this->mUnk_1E &= ~0x01;
}

ARM MapObjectUnkDRSW::MapObjectUnkDRSW() :
    mUnk_094(0) {
    this->mUnkPos = FLOAT_TO_Q20(0.0f);

#if IS_JP
    this->mUnk_140 = false;
    this->mUnk_141 = false;
#endif

    this->mUnk_8E = true;
    this->mUnk_8F = true;
    this->mUnk_89 = true;
}

ARM bool MapObjectUnkDRSW::vfunc_00(void) {
    this->mUnk_094.vfunc_08(this->vfunc2_10());
    this->func_ov031_020fbf10(true, true);

    if (this->mUnk_20.mUnk_00[3] == 1) {
        this->mUnk_8F = false;
    }

#if IS_JP
    if (this->mUnk_20.mUnk_00[2] == 1) {
        this->mUnk_141 = true;
    }
#endif

    this->mUnk_0F4.mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_0F4.mUnk_0C.z = -FLOAT_TO_Q20(1.35f);

    this->mUnk_0F4.mUnk_18.x = FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_0F4.mUnk_18.z = FLOAT_TO_Q20(0.35f);

    this->mUnk_0F4.mUnk_04 &= ~0x01;
    this->mUnk_0F4.mUnk_08 = 0x7009;

#if IS_JP
    this->mUnk_118.mUnk_0C.x = -FLOAT_TO_Q20(0.35f);
    this->mUnk_118.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_118.mUnk_0C.z = -FLOAT_TO_Q20(1.0f);

    this->mUnk_118.mUnk_18.x = FLOAT_TO_Q20(0.35f);
    this->mUnk_118.mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_118.mUnk_18.z = FLOAT_TO_Q20(1.0f);

    this->mUnk_118.mUnk_04 &= ~0x01;
    this->mUnk_118.mUnk_08 = 0x7009;

    if (!this->IsOrientedVertically()) {
        this->mUnk_10  = &this->mUnk_0F4;
        this->mUnk_140 = true;
    } else if (this->mUnk_141) {
        this->mUnk_10  = &this->mUnk_118;
        this->mUnk_140 = true;
    }
#else
    if (!this->IsOrientedVertically()) {
        this->mUnk_10 = &this->mUnk_0F4;
    }
#endif

    return true;
}

ARM void MapObjectUnkDRSW::vfunc_08(void) {
    if (this->mUnk_20.mUnk_00[3] == 2 && data_027e09b8->func_01ffd420()) {
        this->MapObjectDoorBase::vfunc_08();
    } else if (this->mUnk_16 == 5 && this->vfunc_6C()) {
        this->vfunc_5C(0, 0);
    } else {
        this->MapObjectDoorBase::vfunc_08();
    }
}

ARM bool MapObjectUnkDRSW::vfunc_64(void) {
    return this->func_ov000_0209d29c(0);
}

ARM bool MapObjectUnkDRSW::vfunc_6C(void) {
    if (this->func_ov000_0209d29c(0)) {
        return false;
    }

    return true;
}

ARM void MapObjectUnkDRSW::vfunc_14(void) {
    u16 angle = this->mUnk_14;
    Mat3p m;

    Mat3p_InitYRotation(&m, SIN(angle), COS(angle));

    Vec3p local_40(this->mPos);
    local_40.y -= this->mUnk_6C * 2;
    this->mUnk_094.vfunc_14(&m, &local_40);
}

ARM void MapObjectUnkDRSW::vfunc_18(s8 *param1, s8 param2) {
    this->func_ov031_020fcb78(param1, param2);
}

ARM void MapObjectUnkDRSW::vfunc_74(void) {
    Vec3p local_20(this->mPos);
    Vec3p local_2c(0, 0, 0x666);
    Mat4x3p m;
    u16 angle = this->mUnk_14;

    Mat4x3p_InitYRotation(&m, SIN(angle), COS(angle));
    func_01ffaf74(&local_2c, &m, &local_2c);
    Vec3p_Add(&local_20, &local_2c, &local_20);

    data_027e0cec->func_ov000_0209ff8c(&this->mUnk_68, 0x8CF, &local_20, 4);

    if (this->mUnk_68.mUnk_00 != NULL) {
        this->mUnk_68.mUnk_00->mUnk_A4 = this->mUnk_14;
    }
}

ARM void *MapObjectUnkDRSW::vfunc2_10(void) {
    return GetUnkPointer1<MapObjectProfileUnkDRSW>();
}

ARM void MapObjectUnkDRSW::vfunc_50(void) {
#if IS_JP
    if (!this->mUnk_140) {
        return;
    }

    u16 uVar1 = this->GetDirection();

    if (!this->IsOrientedVertically()) {
        this->mUnkPos = FLOAT_TO_Q20(0.35f);

        this->mUnk_0F4.mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
        this->mUnk_0F4.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
        this->mUnk_0F4.mUnk_0C.z = FLOAT_TO_Q20(0.35f);

        this->mUnk_0F4.mUnk_18.x = FLOAT_TO_Q20(1.0f);
        this->mUnk_0F4.mUnk_18.y = FLOAT_TO_Q20(2.4f);
        this->mUnk_0F4.mUnk_18.z = FLOAT_TO_Q20(0.35f);
        return;
    }

    if (!this->mUnk_141) {
        return;
    }

    if (uVar1 == 3) {
        this->mUnkPos = FLOAT_TO_Q20(0.35f);

        this->mUnk_118.mUnk_0C.x = FLOAT_TO_Q20(0.35f);
        this->mUnk_118.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
        this->mUnk_118.mUnk_0C.z = -FLOAT_TO_Q20(1.0f);

        this->mUnk_118.mUnk_18.x = FLOAT_TO_Q20(0.35f);
        this->mUnk_118.mUnk_18.y = FLOAT_TO_Q20(2.4f);
        this->mUnk_118.mUnk_18.z = FLOAT_TO_Q20(1.0f);
    } else {
        this->mUnkPos = -FLOAT_TO_Q20(0.35f);

        this->mUnk_118.mUnk_0C.x = -FLOAT_TO_Q20(0.35f);
        this->mUnk_118.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
        this->mUnk_118.mUnk_0C.z = -FLOAT_TO_Q20(1.0f);

        this->mUnk_118.mUnk_18.x = -FLOAT_TO_Q20(0.35f);
        this->mUnk_118.mUnk_18.y = FLOAT_TO_Q20(2.4f);
        this->mUnk_118.mUnk_18.z = FLOAT_TO_Q20(1.0f);
    }
#else
    this->mUnkPos = FLOAT_TO_Q20(0.35f);

    this->mUnk_0F4.mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_0F4.mUnk_0C.z = FLOAT_TO_Q20(0.35f);

    this->mUnk_0F4.mUnk_18.x = FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_0F4.mUnk_18.z = FLOAT_TO_Q20(0.35f);
#endif
}

ARM void MapObjectUnkDRSW::vfunc_54(void) {
    this->func_ov031_020fcf0c(1);

#if IS_JP
    if (!this->mUnk_140) {
        return;
    }

    u16 uVar1 = this->GetDirection();

    if (!this->IsOrientedVertically()) {
        if (this->mUnk_80 > 0) {
            func_01ff9218(&this->mUnkPos, -FLOAT_TO_Q20(1.35f), func_01ffb464(INT_TO_Q20(this->mUnk_80)));
        }

        q20 temp_118             = this->mUnkPos;
        this->mUnk_0F4.mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
        this->mUnk_0F4.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
        this->mUnk_0F4.mUnk_0C.z = temp_118;

        this->mUnk_0F4.mUnk_18.x = FLOAT_TO_Q20(1.0f);
        this->mUnk_0F4.mUnk_18.y = FLOAT_TO_Q20(2.4f);
        this->mUnk_0F4.mUnk_18.z = FLOAT_TO_Q20(0.35f);
        return;
    }

    if (!this->mUnk_141) {
        return;
    }

    s16 cond_80 = this->mUnk_80;

    if (uVar1 == 3) {
        if (this->mUnk_80 > 0) {
            func_01ff9218(&this->mUnkPos, -FLOAT_TO_Q20(0.35f), func_01ffb464(INT_TO_Q20(this->mUnk_80)));
        }

        this->mUnk_118.mUnk_0C.x = this->mUnkPos;
        this->mUnk_118.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
        this->mUnk_118.mUnk_0C.z = -FLOAT_TO_Q20(1.0f);

        this->mUnk_118.mUnk_18.x = FLOAT_TO_Q20(0.35f);
        this->mUnk_118.mUnk_18.y = FLOAT_TO_Q20(2.4f);
        this->mUnk_118.mUnk_18.z = FLOAT_TO_Q20(1.0f);
    } else {
        if (this->mUnk_80 > 0) {
            func_01ff9218(&this->mUnkPos, FLOAT_TO_Q20(0.35f), func_01ffb464(INT_TO_Q20(this->mUnk_80)));
        }

        this->mUnk_118.mUnk_0C.x = -FLOAT_TO_Q20(0.35f);
        this->mUnk_118.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
        this->mUnk_118.mUnk_0C.z = -FLOAT_TO_Q20(1.0f);

        this->mUnk_118.mUnk_18.x = this->mUnkPos;
        this->mUnk_118.mUnk_18.y = FLOAT_TO_Q20(2.4f);
        this->mUnk_118.mUnk_18.z = FLOAT_TO_Q20(1.0f);
    }
#else
    if (this->mUnk_80 > 0) {
        func_01ff9218(&this->mUnkPos, -FLOAT_TO_Q20(1.35f), func_01ffb464(INT_TO_Q20(this->mUnk_80)));
    }

    q20 temp_118             = this->mUnkPos;
    this->mUnk_0F4.mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_0F4.mUnk_0C.z = temp_118;

    this->mUnk_0F4.mUnk_18.x = FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_0F4.mUnk_18.z = FLOAT_TO_Q20(0.35f);
#endif
}

ARM void MapObjectUnkDRSW::vfunc_58(void) {
#if IS_JP
    if (!this->mUnk_140) {
        return;
    }

    if (!this->IsOrientedVertically()) {
        this->mUnk_0F4.mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
        this->mUnk_0F4.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
        this->mUnk_0F4.mUnk_0C.z = -FLOAT_TO_Q20(1.35f);

        this->mUnk_0F4.mUnk_18.x = FLOAT_TO_Q20(1.0f);
        this->mUnk_0F4.mUnk_18.y = FLOAT_TO_Q20(2.4f);
        this->mUnk_0F4.mUnk_18.z = FLOAT_TO_Q20(0.35f);
    } else {
        if (this->mUnk_141) {
            this->mUnk_118.mUnk_0C.x = -FLOAT_TO_Q20(0.35f);
            this->mUnk_118.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
            this->mUnk_118.mUnk_0C.z = -FLOAT_TO_Q20(1.0f);

            this->mUnk_118.mUnk_18.x = FLOAT_TO_Q20(0.35f);
            this->mUnk_118.mUnk_18.y = FLOAT_TO_Q20(2.4f);
            this->mUnk_118.mUnk_18.z = FLOAT_TO_Q20(1.0f);
        }
    }
#else
    this->mUnk_0F4.mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_0F4.mUnk_0C.z = -FLOAT_TO_Q20(1.35f);

    this->mUnk_0F4.mUnk_18.x = FLOAT_TO_Q20(1.0f);
    this->mUnk_0F4.mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_0F4.mUnk_18.z = FLOAT_TO_Q20(0.35f);
#endif
}

ARM void MapObjectUnkDRSW::vfunc_40(void) {
    data_027e09a8->func_ov000_02071b30(0x131, &this->mPos, 0);
}

ARM void MapObjectUnkDRSW::vfunc_44(void) {
    unk32 local_c = *(u32 *) &this->mUnk_38;
    data_027e09a8->func_ov000_02071d34(&local_c, 0x130, &this->mPos, 0);
}

ARM void MapObjectUnkDRSW::vfunc_48(void) {
    data_027e09a8->func_ov000_02071b30(0x133, &this->mPos, 0);
}

ARM void MapObjectUnkDRSW::vfunc_4C(void) {
    unk32 local_c = *(u32 *) &this->mUnk_38;
    data_027e09a8->func_ov000_02071d34(&local_c, 0x132, &this->mPos, 0);
}

ARM MapObjectUnkDRSW::~MapObjectUnkDRSW() {}
ARM MapObjectProfileUnkDRSW::~MapObjectProfileUnkDRSW() {}
