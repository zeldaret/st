#include "MapObject/MapObject.hpp"
#include "Actor/Actor.hpp"
#include "Actor/ActorManager.hpp"
#include "Physics/Cylinder.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_027e0998.hpp"
#include "Unknown/UnkStruct_027e09b4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_020b5d34.hpp"

extern "C" void func_01ffb714(Vec3p *, Vec3p *, void *);
extern "C" void func_01ffb9cc(Vec3p *, Vec3p *);
extern "C" u16 func_01ffbbe0(q20 x, q20 z);
extern "C" void func_01ffecdc(unk32 param1, Cylinder *param2);
extern "C" bool func_01ffd768(unk32, void *, void *, unk8);

extern "C" void func_ov000_020973f4(void *, void *, u32, void *, int); //! TODO: solve oddity

ARM MapObject::MapObject() {
    this->mUnk_10   = NULL;
    this->mUnk_16   = -1;
    this->mFlags[0] = 0;
    this->mUnk_20.func_ov000_0209c7c8();
    *(u32 *) &this->mUnk_38 = 0;

    UnkStruct_ov000_020b5d34 *ptr1 = &data_ov000_020b5d34;
    this->mpProfile                = ptr1->mpProfile;

    UnkStruct_ov000_020b5d34_00 *ptr2 = ptr1->mUnk_00;

    *(u32 *) &this->mUnk_38 = *ptr2->mUnk_00;

    Vec3p *ptr   = ptr2->mUnk_08;
    this->mPos.x = ptr->x;
    this->mPos.y = ptr->y;
    this->mPos.z = ptr->z;

    this->mUnk_14 = *ptr2->mUnk_0C;
    _MI_CpuCopy(ptr2->mUnk_04, &this->mUnk_20, sizeof(MapObject_20));

    for (int i = 0; i < ARRAY_LEN(this->mUnk_18); i++) {
        this->mUnk_18[i] = 0;
    }

    SET_FLAGS(this->mFlags, MapObjFlag_Alive, MapObjFlag_1, MapObjFlag_2);
}

ARM MapObject::~MapObject() {}

ARM bool MapObject::vfunc_00() {
    return true;
}

ARM bool MapObject::vfunc_04() {}

ARM void MapObject::func_ov000_0209d0bc(Vec2b *param1, MapObject *thisx) {
    Vec3p pos;
    Vec2p out;

    UnkStruct_027e0cd8_10 *t = data_027e0cd8->mUnk_10;
    pos.coords               = thisx->mPos.coords;
    t->func_01fff6d0(&pos, (q20 *) &out.y, (q20 *) &out.x);

    Vec2p temp;
    temp.y    = out.x;
    temp.x    = out.y;
    param1->x = temp.x;
    param1->y = temp.y;
}

ARM bool MapObject::func_ov000_0209d114() {
    bool result[2];
    MapObject::func_ov000_0209d0bc((Vec2b *) &result, this);
    return result[0];
}

ARM bool MapObject::func_ov000_0209d12c() {
    bool result[2];
    MapObject::func_ov000_0209d0bc((Vec2b *) &result, this);
    return result[1];
}

ARM bool MapObject::func_ov000_0209d144(Vec2s *param1, unk32 param2, unk32 param3) {
    if (this->mUnk_10 != NULL) {
        u32 stack[5];

        stack[3] = 0;
        stack[0] = 0;
        stack[1] = 0;
        stack[2] = 0;

        this->vfunc_2C((Vec3p *) &stack);
        unk8 value = this->mpProfile->mUnk_04[param2];
        Vec2s stack2;

        stack2.x = param1->x;
        stack2.y = param1->y;

        return func_01ffd768(param3, &stack, &stack2, value);
    }

    return false;
}

ARM bool MapObject::vfunc_1C() {
    return true;
}

ARM void MapObject::vfunc_20() {}

ARM void MapObject::vfunc_24() {
    *(u32 *) this = 0; // ????
}

ARM bool MapObject::vfunc_28() {
    return false;
}

ARM bool MapObject::vfunc_2C(Vec3p *param1) {
    if (this->mUnk_10 != NULL) {
        this->mUnk_10->vfunc_18(param1);
        Vec3p_Add(param1, &this->mPos, param1);
        return true;
    }

    return false;
}

ARM void MapObject::func_ov000_0209d22c(unk16 *param1, MapObject *thisx, unk32 param2) {
    Vec3p local_18;
    func_01ffb714(data_027e0ce0->func_01fff148(param2), &thisx->mPos, &local_18);
    *param1 = func_01ffbbe0(local_18.x, local_18.z);
}

ARM void MapObject::func_ov000_0209d274(unk32 param1) {
    func_01ffb9cc(&this->mPos, data_027e0ce0->func_01fff148(param1));
}

ARM unk32 MapObject::func_ov000_0209d29c(unk32 param1) {
    data_027e0cd8->func_ov000_02081e30(this->mUnk_20.mUnk_0A[param1], this->mUnk_20.mUnk_08[param1]);
}

ARM void MapObject::func_ov000_0209d2c4(unk32 param1, unk32 param2) {
    data_027e0cd8->func_ov000_02081d7c(this->mUnk_20.mUnk_0A[param1], this->mUnk_20.mUnk_08[param1], param2);
}

ARM void MapObject::func_ov000_0209d2f0(unk32 param1, unk32 param2, Vec2b *param3) {
    UnkStruct_027e0cd8_0c *temp_r5 = data_027e0cd8->mUnk_0c;
    Vec2b sp0(0, 0);

    sp0.x = this->mUnk_3A.x;

    s32 tempX = param3->x;
    tempX += this->mUnk_3A.x;

    if (this->mUnk_3A.x < tempX) {
        do {
            sp0.y = this->mUnk_3A.y;

            s32 tempY = param3->y;
            tempY += this->mUnk_3A.y;

            if (this->mUnk_3A.y < tempY) {
                do {
                    temp_r5->func_ov000_020801b0(&sp0, param1, param2);
                } while (++sp0.y < param3->y + this->mUnk_3A.y);
            }
        } while (++sp0.x < param3->x + this->mUnk_3A.x);
    }
}

ARM void MapObject::func_ov000_0209d3b4(unk32 param1, q20 size) {
    Cylinder spC;

    if (this->mUnk_10 != NULL) {
        this->mUnk_10->vfunc_10(&spC);
    } else {
        spC.Init(FLOAT_TO_Q20(0.5f));
    }

    Vec3p_Add(&spC.pos, &this->mPos, &spC.pos);
    spC.size += size;

    func_01ffecdc(param1, &spC);
}

struct stack_struct {
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};

ARM void MapObject::func_ov000_0209d434(s8 *param1, UnkStruct_ov019_020d24c8_28_258_00 *param2, unk32 param3) {
    unk32 sp10;
    stack_struct spC;
    s32 var_r2;

    if (!GET_FLAG(this->mFlags, MapObjFlag_5)) {
        return;
    }

    if (param2->mUnk_04 & 1) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }

    if (param1[0] != var_r2 && param1[1] != var_r2) {
        return;
    }

    if (data_027e0998->vfunc_00(&this->mPos, &sp10, &this->mUnk_38)) {
        spC.mUnk_06 = 0x00;
        MI_CpuFill32(0, &spC, sizeof(spC));
        spC.mUnk_05             = -1;
        *(unk32 *) &spC.mUnk_00 = data_027e0998->func_ov000_02061a70();
        spC.mUnk_06 |= 0x01;
        data_0204af1c.func_0201aa44(param2, &sp10, param3, &spC);
    }
}

ARM void MapObject::func_ov000_0209d518(unk32 param1, unk32 param2, unk32 param3, u8 param4) {
    data_027e09b4->func_01fff60c(param1, param2, param3, param4, 0, 0);
}

struct TempStruct {
    Vec3p pos;
    u16 param_r2;
    s16 extra_s16;
    u16 extra_u16;
    STRUCT_PAD(0x16, 0x28);
    unk32 mUnk_28;
    void func_ov000_020975f8();
};

// non-matching
ARM void MapObject::func_ov000_0209d54c(unk32 param1, u16 param2, Vec3p *param3, s16 param4, u16 param5) {
    TempStruct local_4c;
    local_4c.mUnk_28 = 0;
    local_4c.func_ov000_020975f8();
    local_4c.pos.x     = param3->x;
    local_4c.pos.y     = param3->y;
    local_4c.pos.z     = param3->z;
    local_4c.param_r2  = param2;
    local_4c.extra_s16 = param4;
    local_4c.extra_u16 = param5;
    func_ov000_020973f4(this, &data_ov000_020b539c_eur, ActorId_EventIcon, &local_4c, 0);
}

ARM void MapObject::func_ov000_0209d5c8(ActorRef ref) {
    if (ref.index != 0) {
        Actor *pActor = gpActorManager->func_01fff3b4(ref.Get32());

        if (pActor != NULL) {
            UNSET_FLAG(pActor->mFlags, ActorFlag_Alive);
        }
    }
}

ARM void MapObject::func_ov000_0209d614(unk32 param1) {
    if (this->mUnk_20.mUnk_14 < 0) {
        return;
    }

    if (this->mpProfile->mUnk_0E == -1) {
        return;
    }

    UnkStruct_027e0cd8 *pUVar1 = data_027e0cd8;
    unk32 uVar2                = this->mpProfile->func_ov000_0209c8e4(&this->mUnk_20);
    pUVar1->func_ov000_02081eec(this->mUnk_20.mUnk_14, uVar2, param1);
}

ARM bool MapObject::func_ov000_0209d668() {
    if (this->mpProfile->mUnk_0E == -1) {
        return false;
    }

    UnkStruct_027e0cd8 *pUVar1 = data_027e0cd8;
    unk32 uVar2                = this->mpProfile->func_ov000_0209c8e4(&this->mUnk_20);
    return pUVar1->func_ov000_02081f3c(this->mUnk_20.mUnk_14, uVar2);
}

ARM void MapObject::func_ov000_0209d6ac(Vec3p *param1) {
    if (this->mUnk_10 == NULL) {
        volatile Vec3p *tempPos = &this->mPos;
        Vec3p pos;

        pos.x = tempPos->x;
        pos.y = tempPos->y;
        pos.z = tempPos->z;

        param1->x = pos.x;
        param1->y = pos.y;
        param1->z = pos.z;
        return;
    }

    this->mUnk_10->vfunc_1C(param1);
    Vec3p_Add(param1, &this->mPos, param1);
}
