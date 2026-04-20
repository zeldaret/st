#include "MapObject/MapObjectDoorBase.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"

extern "C" void func_ov000_020a0334(void *); //! TODO: solve oddity
extern "C" unk32 func_01ffb464(unk32 param1);
extern "C" void func_01ff9218(void *, unk32, unk32);
extern "C" unk32 func_01ffb428(unk32, unk32);
extern "C" void *func_ov000_02077590(unk32);

struct UnkStruct_ov031_021150b0 {
    /* 00 */ u32 mUnk_00;

    UnkStruct_ov031_021150b0(u32 val) :
        mUnk_00(val) {}
};

class UnkStruct_ov031_02117210 {
public:
    /* 00 */ MapObject_10 mUnk_00[3];
    /* 6C */

    UnkStruct_ov031_02117210();
};

const UnkStruct_ov031_021150b0 data_ov031_02114ffc(0x1E66);
UnkStruct_ov031_02117210 data_ov031_02117210;
UnkStruct_ov019_020d24c8_28_258_00 data_ov031_02117204(NULL, 0);

ARM UnkStruct_ov031_02117210::UnkStruct_ov031_02117210() {
    this->mUnk_00[0].mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
    this->mUnk_00[0].mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_00[0].mUnk_0C.z = -FLOAT_TO_Q20(0.35f);
    this->mUnk_00[0].mUnk_18.x = FLOAT_TO_Q20(1.0f);
    this->mUnk_00[0].mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_00[0].mUnk_18.z = FLOAT_TO_Q20(0.35f);
    this->mUnk_00[0].mUnk_04 &= 0xFE;
    this->mUnk_00[0].mUnk_08 = 0x7009;

    this->mUnk_00[1].mUnk_0C.x = -FLOAT_TO_Q20(1.0f);
    this->mUnk_00[1].mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_00[1].mUnk_0C.z = -FLOAT_TO_Q20(1.35f);
    this->mUnk_00[1].mUnk_18.x = FLOAT_TO_Q20(1.0f);
    this->mUnk_00[1].mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_00[1].mUnk_18.z = FLOAT_TO_Q20(0.35f);
    this->mUnk_00[1].mUnk_04 &= 0xFE;
    this->mUnk_00[1].mUnk_08 = 0x7009;

    this->mUnk_00[2].mUnk_0C.x = -FLOAT_TO_Q20(0.35f);
    this->mUnk_00[2].mUnk_0C.y = FLOAT_TO_Q20(0.0f);
    this->mUnk_00[2].mUnk_0C.z = -FLOAT_TO_Q20(1.0f);
    this->mUnk_00[2].mUnk_18.x = FLOAT_TO_Q20(0.35f);
    this->mUnk_00[2].mUnk_18.y = FLOAT_TO_Q20(2.4f);
    this->mUnk_00[2].mUnk_18.z = FLOAT_TO_Q20(1.0f);
    this->mUnk_00[2].mUnk_04 &= 0xFE;
    this->mUnk_00[2].mUnk_08 = 0x7009;
}

ARM MapObjectDoorBase::MapObjectDoorBase() :
    mUnk_68(NULL) {
    this->mUnk_6C = 0;
    this->mUnk_70 = 0x148;
    this->mUnk_74 = -1;
    this->mUnk_78 = 0x32;
    this->mUnk_7A = 0x19;
    this->mUnk_7C = 10;
    this->mUnk_7E = 0;
    this->mUnk_80 = 0;
    this->mUnk_82 = 0;
    this->mUnk_84 = 0;
    this->mUnk_86 = true;
    this->mUnk_87 = 1;
    this->mUnk_88 = true;
    this->mUnk_89 = false;
    this->mUnk_8A = true;
    this->mUnk_8B = 1;
    this->mUnk_8C = 0;
    this->mUnk_8D = 0;
    this->mUnk_8E = 0;
    this->mUnk_8F = 0;
    this->mUnk_90 = true;
    this->mUnk_91 = true;
    data_ov031_02117204.func_ov000_0205fc20(0x5D, 0x1F, NULL, NULL);
}

ARM void MapObjectDoorBase::func_ov031_020fbf10(bool param1, bool param2) {
    u16 value   = (u16) (this->mUnk_14 + DEG_TO_ANG(45)) / DEG_TO_ANG(90);
    bool var_r1 = true;

    if (value != 3 && value != 1) {
        var_r1 = false;
    }

    if (var_r1) {
        this->mPos.z += FLOAT_TO_Q20(0.5f);
        Vec2b local_16(1, 2);
        this->func_ov000_0209d2f0(5, 1, &local_16);

    } else {
        this->mPos.x += FLOAT_TO_Q20(0.5f);
        Vec2b local_18(2, 1);
        this->func_ov000_0209d2f0(5, 1, &local_18);
    }

    value  = (u16) (this->mUnk_14 + DEG_TO_ANG(45)) / DEG_TO_ANG(90);
    var_r1 = true;

    if (value != 3 && value != 1) {
        var_r1 = false;
    }

    MapObject_10 *pMapObject_10;
    if (!var_r1) {
        if (param1) {
            pMapObject_10 = &data_ov031_02117210.mUnk_00[1];
        } else {
            pMapObject_10 = &data_ov031_02117210.mUnk_00[0];
        }
    } else {
        pMapObject_10 = &data_ov031_02117210.mUnk_00[2];
    }

    this->mUnk_10 = pMapObject_10;
    SET_FLAG(this->mFlags, MapObjFlag_5);

    if (this->vfunc_64()) {
        this->vfunc_5C(8, 1);

        if (param2) {
            this->func_ov031_020fcd40();
        }
    } else {
        this->vfunc_5C(2, 1);
    }
}

ARM void MapObjectDoorBase::vfunc_08() {
    this->vfunc_70();

    switch (this->mUnk_16) {
        case 0:
            if (this->mUnk_80 > 0) {
                this->mUnk_80--;
            }

            if (this->mUnk_80 > 0) {
                func_01ff9218(&this->mUnk_6C, 0, func_01ffb464(INT_TO_Q20(this->mUnk_80)));
            }

            if (this->mUnk_80 == 0) {
                this->vfunc_5C(1, 0);
                break;
            }

            this->mUnk_82++;

            if (this->mUnk_88) {
                this->vfunc_78();
            }

            if (!this->mUnk_86 && this->vfunc_68()) {
                this->vfunc_5C(3, 0);
            }

            break;
        case 1:
            this->mUnk_82++;

            if (this->mUnk_82 >= this->mUnk_7A + this->mUnk_7C && this->vfunc_88()) {
                this->vfunc_58();
                this->vfunc_5C(2, 0);
                break;
            }

            if (!this->mUnk_86 && this->vfunc_68()) {
                this->vfunc_5C(3, 0);
            }

            break;
        case 2:
            if (this->vfunc_68()) {
                this->vfunc_5C(3, 0);
            }

            break;
        case 3:
            this->mUnk_84++;

            if (!this->mUnk_86 && this->vfunc_6C()) {
                this->vfunc_5C(0, 0);
                break;
            }

            this->mUnk_82++;

            if (this->mUnk_82 >= 0x1D) {
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

            if (this->mUnk_82 >= 0x28) {
                this->vfunc_5C(5, 0);
            }

            break;
        case 5:
            this->mUnk_84++;

            if (!this->mUnk_86 && this->vfunc_6C()) {
                this->vfunc_5C(0, 0);
                break;
            }

            this->mUnk_80--;

            if (this->mUnk_80 > 0) {
                func_01ff9218(&this->mUnk_6C, 0x1000, func_01ffb464(INT_TO_Q20(this->mUnk_80)));
            }

            if (this->mUnk_88) {
                if (this->mUnk_80 > 7) {
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

                if (this->mUnk_82 >= 0x32) {
                    this->mUnk_82 = 0x32;
                    this->vfunc_5C(6, 0);
                }
            }

            break;
        case 6:
            this->mUnk_82++;
            this->mUnk_84++;

            if (this->mUnk_82 >= 0x32) {
                this->mUnk_82 = 0x32;
                this->vfunc_5C(7, 0);
            }

            break;
        case 7:
            this->mUnk_82++;
            this->mUnk_84++;

            if (this->mUnk_82 >= 0x50) {
                this->vfunc_5C(8, 0);
            }

            // fallthrough
        case 8:
            if (!this->vfunc_6C()) {
                break;
            }

            this->vfunc_5C(0, 0);
            break;
        default:
            break;
    }

    this->vfunc_60();
}

ARM void MapObjectDoorBase::vfunc_40() {}

ARM void MapObjectDoorBase::vfunc_0C() {
    if (this->mUnk_74 >= 0 && data_027e09b8->func_ov000_020732ec(this->mUnk_74)) {
        this->vfunc_08();
    } else if (this->mUnk_16 == 2 || this->mUnk_16 == 8) {
        this->vfunc_08();
    }
}

ARM void MapObjectDoorBase::vfunc_60() {
    switch (this->mUnk_16) {
        case 0:
            if (!this->mUnk_86 && !GET_FLAG(this->mFlags, MapObjFlag_1) && this->mUnk_6C <= FLOAT_TO_Q20(0.5f)) {
                this->func_ov031_020fcf0c(1);
            }
            this->vfunc_54();
            break;
        case 2:
            if (this->mUnk_86 && !GET_FLAG(this->mFlags, MapObjFlag_1) && this->mUnk_6C <= FLOAT_TO_Q20(0.5f)) {
                this->func_ov031_020fcf0c(1);
                this->vfunc_58();
            }
            break;
        case 5:
            if (GET_FLAG(this->mFlags, MapObjFlag_1) && this->mUnk_6C >= FLOAT_TO_Q20(0.5f)) {
                this->func_ov031_020fcf0c(0);
            }
            break;
        case 1:
            if (this->mUnk_86) {
                this->func_ov031_020fcf0c(1);
                this->vfunc_58();
            }
            break;
        default:
            break;
    }
}

struct UnkStackStruct {
    unk16 mUnk_00;
    unk16 mUnk_02;
    unk16 mUnk_04;
    unk16 mUnk_06;
    unk32 mUnk_08;
    Vec3p mUnk_0C;
    unk16 mUnk_18;
    unk16 mUnk_1A;
    unk16 mUnk_1C;
    unk16 mUnk_1E;
};

ARM void MapObjectDoorBase::vfunc_5C(unk32 param1, unk32 param2) {
    UnkStackStruct1 auStack_5c;
    UnkStackStruct1 auStack_9c;
    this->mUnk_16 = param1;

    switch (this->mUnk_16) {
        case 0:
            if (this->mUnk_88) {
                this->vfunc_74();
            }

            this->mUnk_82 = 0;
            this->mUnk_84 = 0x0D;
            this->mUnk_80 = MUL_Q20(INT_TO_Q20(this->mUnk_7A), func_01ffb428(this->mUnk_6C, 0x1000) + FLOAT_TO_Q20(0.5f));

            this->vfunc_50();

            if (!this->mUnk_86 && param2 == 0) {
                func_ov000_02072fd0(&auStack_5c);
                auStack_5c.mUnk_04 = this;

                if (auStack_5c.mUnk_04 != NULL) {
                    auStack_5c.mUnk_04 = (u8 *) this + 0x40;
                }

                auStack_5c.mUnk_00   = 0x7B;
                auStack_5c.mUnk_0C.x = this->mPos.x;
                auStack_5c.mUnk_0C.y = this->mPos.y;
                auStack_5c.mUnk_0C.z = this->mPos.z;
                auStack_5c.mUnk_38 |= 0x80;
                auStack_5c.mUnk_08 = this->mUnk_7A + this->mUnk_7C + 1 + this->vfunc_8C();

                if (!this->mUnk_8C) {
                    this->mUnk_48 = -1;
                } else {
                    this->mUnk_48 = 0;
                    this->vfunc_84(1, &this->mUnk_4C, &this->mUnk_4A);
                }

                if (!this->mUnk_90) {
                    auStack_5c.mUnk_3A = 0;
                    auStack_5c.mUnk_3B = 0;
                } else {
                    auStack_5c.mUnk_3A = 2;
                    auStack_5c.mUnk_3B = 2;
                    auStack_5c.mUnk_38 |= 0x41;
                }

                UnkStackStruct *puVar5    = (UnkStackStruct *) func_ov000_02077590(3);
                auStack_5c.mUnk_18        = puVar5->mUnk_00;
                auStack_5c.mUnk_1A        = puVar5->mUnk_02;
                auStack_5c.mUnk_1C        = puVar5->mUnk_04;
                auStack_5c.mUnk_20        = puVar5->mUnk_08;
                auStack_5c.mUnk_24.coords = puVar5->mUnk_0C.coords;
                auStack_5c.mUnk_30        = puVar5->mUnk_18;
                auStack_5c.mUnk_32        = puVar5->mUnk_1A;
                auStack_5c.mUnk_34        = puVar5->mUnk_1C;
                auStack_5c.mUnk_36        = puVar5->mUnk_1E;
                auStack_5c.mUnk_1E        = this->mUnk_14;
                this->mUnk_74             = data_027e09b8->func_ov000_02073388(&auStack_5c, 0);
            }

            if (param2 != 0) {
                this->func_ov000_0209d614(0);
            }
            break;
        case 1:
            if (this->mUnk_91) {
                this->vfunc_48();
            }

            this->mUnk_82 = 0;
            this->vfunc_7C();
            break;
        case 2:
            this->mUnk_84 = 0;
            this->func_ov031_020fcf0c(1);
            break;
        case 3:
            this->vfunc_7C();

            this->mUnk_80 =
                MUL_Q20(INT_TO_Q20(this->mUnk_78), func_01ffb428(0x1000 - this->mUnk_6C, 0x1000) + FLOAT_TO_Q20(0.5f));

            if (this->mUnk_8A) {
                this->mUnk_82 = 0;
                this->mUnk_84 = 0;
            }

            if (this->mUnk_8A && this->mUnk_86 && param2 == 0) {
                func_ov000_02072fd0(&auStack_9c);

                auStack_9c.mUnk_00 = 0x76;
                auStack_9c.mUnk_04 = this;

                if (this != NULL) {
                    auStack_9c.mUnk_04 = (u8 *) this + 0x40;
                }

                auStack_9c.mUnk_0C.x = this->mPos.x;
                auStack_9c.mUnk_0C.y = this->mPos.y;
                auStack_9c.mUnk_0C.z = this->mPos.z;
                auStack_9c.mUnk_08   = this->mUnk_7E + this->mUnk_78 + 0x51;
                auStack_9c.mUnk_3A   = 9;
                auStack_9c.mUnk_3B   = 2;

                if (this->mUnk_8D == 0) {
                    this->mUnk_48 = -1;
                } else {
                    this->mUnk_48 = 0x19;
                    this->vfunc_84(1, &this->mUnk_4C, &this->mUnk_4A);
                }

                if (this->mUnk_89 && this->mUnk_20.mUnk_16 != 0) {
                    auStack_9c.mUnk_38 |= 0x04;
                }

                if (this->mUnk_8E != 0) {
                    auStack_9c.mUnk_38 |= 0x10;
                }

                if (this->mUnk_8F != 0) {
                    auStack_9c.mUnk_38 |= 0x20;
                }

                auStack_9c.mUnk_38 |= 0x200;

                UnkStackStruct *puVar5    = (UnkStackStruct *) func_ov000_02077590(2);
                auStack_9c.mUnk_18        = puVar5->mUnk_00;
                auStack_9c.mUnk_1A        = puVar5->mUnk_02;
                auStack_9c.mUnk_1C        = puVar5->mUnk_04;
                auStack_9c.mUnk_20        = puVar5->mUnk_08;
                auStack_9c.mUnk_24.coords = puVar5->mUnk_0C.coords;
                auStack_9c.mUnk_30        = puVar5->mUnk_18;
                auStack_9c.mUnk_32        = puVar5->mUnk_1A;
                auStack_9c.mUnk_34        = puVar5->mUnk_1C;
                auStack_9c.mUnk_36        = puVar5->mUnk_1E;
                auStack_9c.mUnk_1E        = this->mUnk_14;
                this->mUnk_74             = data_027e09b8->func_ov000_02073388(&auStack_9c, 0);

                this->mUnk_84 = 0x0D;
            }

            break;
        case 4:
            this->vfunc_7C();

            if (this->mUnk_8A && !this->mUnk_86 && param2 == 0 && !this->mUnk_87) {
                unk32 stack;
                this->func_ov000_0209d54c((unk32) &stack, 1, &this->mPos, -1, 2);
            }
            break;
        case 5:
            if (this->mUnk_88) {
                this->vfunc_74();
            }
            break;
        case 6:
            this->vfunc_7C();
            break;
        case 7:
            break;
        case 8:
            this->vfunc_7C();

            if (param2 == 0) {
                this->vfunc_80();
            }

            this->func_ov031_020fcf0c(0);
            this->mUnk_82 = 0;
            this->mUnk_84 = 0;
            this->mUnk_6C = 0x1000;
            break;
        default:
            break;
    }
}

ARM void MapObjectDoorBase::vfunc_48() {}

ARM bool MapObjectDoorBase::vfunc_64() {
    return this->func_ov000_0209d668();
}

ARM bool MapObjectDoorBase::vfunc_68() {
    return this->func_ov000_0209d29c(0);
}

ARM bool MapObjectDoorBase::vfunc_6C() {
    return false;
}

ARM void MapObjectDoorBase::func_ov031_020fcb78() {}

ARM void MapObjectDoorBase::vfunc_74() {}

ARM void MapObjectDoorBase::vfunc_78() {}

ARM void MapObjectDoorBase::vfunc_7C() {
    func_ov000_020a0334(&this->mUnk_68.mUnk_00);
}

ARM void MapObjectDoorBase::vfunc_80() {
    this->mUnk_74 = -1;
    this->func_ov031_020fcd40();

    if (this->mUnk_8A && this->mUnk_86) {
        this->mUnk_8A = false;
    }
}

ARM void MapObjectDoorBase::func_ov031_020fcd40() {
    this->func_ov000_0209d2c4(1, 1);
    this->func_ov000_0209d614(1);
}

ARM void MapObjectDoorBase::vfunc_70() {
    switch (this->mUnk_16) {
        case 5:
            if (this->mUnk_80 > 0) {
                this->vfunc_44();
            }
            break;
        case 0:
            if (this->mUnk_80 > 0) {
                this->vfunc_4C();
            }
            break;
        case 1:
            break;
        case 2:
            break;
        case 3:
            break;
        case 4:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        default:
            this->vfunc_44();
            break;
    }
}

ARM void MapObjectDoorBase::vfunc_44() {}

ARM void MapObjectDoorBase::vfunc_4C() {}

// non-matching
ARM void MapObjectDoorBase::vfunc_84(unk32 param1, Vec3p *param2, unk16 *param3) {
    s16 iVar1;

    Vec3p local_20;
    *param3 = this->mUnk_14;
    iVar1   = (u16) this->mUnk_14 + DEG_TO_ANG(30);
    if (param1 != 0) {
        local_20.x = MUL_Q20(SIN((u16) iVar1), 0x1000);
        local_20.z = MUL_Q20(COS((u16) iVar1), 0x1000);
        local_20.y = 0;
    } else {
        local_20.x = MUL_Q20(SIN((u16) iVar1), 0xC00);
        local_20.z = MUL_Q20(COS((u16) iVar1), 0xC00);
        local_20.y = 0;

        *param3 += -DEG_TO_ANG(180);
    }
    Vec3p_Add(&this->mPos, &local_20, param2);
}

ARM void MapObjectDoorBase::func_ov031_020fcf0c(unk32 param1) {
    if (param1 != 0) {
        SET_FLAG(this->mFlags, MapObjFlag_1);
    } else {
        UNSET_FLAG(this->mFlags, MapObjFlag_1);
    }
}

// non-matching
ARM bool MapObjectDoorBase::func_ov031_020fcf30() {
    unk16 local_10;
    unk16 *plocal_10 = &local_10;

    MapObject::func_ov000_0209d22c(plocal_10, this, 0);

    if (local_10 >= 0x4000 || *plocal_10 <= -0x4000) {
        return false;
    }

    return true;
}

ARM void MapObjectDoorBase::vfunc2_04() {}
ARM void MapObjectDoorBase::vfunc2_08() {}

ARM bool MapObjectDoorBase::vfunc_88() {
    return true;
}

ARM unk32 MapObjectDoorBase::vfunc_8C() {
    return 0;
}

ARM void MapObjectDoorBase::vfunc_50() {}
ARM void MapObjectDoorBase::vfunc_54() {}
ARM void MapObjectDoorBase::vfunc_58() {}
