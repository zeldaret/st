#include "Actor/Actor_Derived1.hpp"
#include "Unknown/UnkStruct_027e0960.hpp"

struct UnkFuncStruct1 {
    s16 unk_00;
};

extern "C" void func_01ffb714(VecFx32 *, VecFx32 *, void *);
extern "C" u16 func_01ffbbe0(fx32 x, fx32 z);
extern "C" unk32 func_01ff930c(s16 *, unk16, unk32);
extern "C" unk32 func_01ff9258(int, int);
extern "C" fx32 func_02017f54(s16 *pAngle, UnkFuncStruct1);

//! TODO: probably not there?
bool data_ov024_020d86b4 = false;

THUMB_BEGIN

Actor_Derived1_EC::Actor_Derived1_EC() {
    this->mUnk_00   = 0;
    this->mUnk_04   = 0;
    this->mUnk_05   = 0;
    this->mUnk_06   = false;
    this->mUnk_07   = 0;
    this->mUnk_08   = 0;
    this->mUnk_0C.x = 0;
    this->mUnk_0C.y = 0;
    this->mUnk_0C.z = 0;
}

THUMB_END

void Actor_Derived1_EC::func_ov024_020d6680(const VecFx32 *param1, u8 *param2) {
    this->mUnk_00 = data_027e0960->func_ov000_0205a390(*param2);
    VecFx32_Copy(param1, &this->mUnk_0C);
}

void Actor_Derived1_EC::func_ov024_020d66c0(const VecFx32 *param1, unk32 param2) {
    this->mUnk_00 = data_027e0960->func_ov000_0205a3fc(*param1, param2);
    VecFx32_Copy(param1, &this->mUnk_0C);
}

bool Actor_Derived1_EC::func_ov024_020d6704() {
    if (this->mUnk_08 & 0x10 || this->mUnk_08 & 0x08 || this->mUnk_08 & 0x04) {
        return true;
    }

    return false;
}

void Actor_Derived1_EC::func_ov024_020d6730() {
    BOOL var_r0;

    this->mUnk_08 |= 0x02;
    this->mUnk_05 = *(volatile u8 *) &this->mUnk_04;

    switch (this->mUnk_00->pRALB->unk_02) {
        case 1:
            if (this->mUnk_06) {
                if (this->mUnk_04 == 0) {
                    var_r0 = true;
                } else {
                    var_r0 = false;
                }

                if (var_r0) {
                    this->mUnk_08 |= 0x04;
                } else {
                    this->mUnk_08 |= 0x02;
                    this->mUnk_04--;
                }
            } else {
                if (this->mUnk_04 == this->mUnk_00->mTable.GetLastIndex()) {
                    var_r0 = true;
                } else {
                    var_r0 = false;
                }

                if (var_r0) {
                    this->mUnk_08 |= 0x04;
                } else {
                    this->mUnk_08 |= 0x02;
                    this->mUnk_04++;
                }
            }

            break;
        case 2:
            if (this->mUnk_06) {
                if (*(volatile u8 *) &this->mUnk_04 == 0) {
                    var_r0 = true;
                } else {
                    var_r0 = false;
                }

                // required
                u16 unk_08 = this->mUnk_08;
                u16 unk_04 = this->mUnk_04;

                if (var_r0) {
                    this->mUnk_08 = unk_08 | 0x08;
                    this->mUnk_04 = unk_04 + 1;
                } else {
                    this->mUnk_08 = unk_08 | 0x02;
                    this->mUnk_04 = unk_04 - 1;
                }
            } else {
                if (this->mUnk_04 == this->mUnk_00->mTable.GetLastIndex()) {
                    var_r0 = true;
                } else {
                    var_r0 = false;
                }

                if (var_r0) {
                    this->mUnk_04--;
                    this->mUnk_08 |= 0x10;
                } else {
                    this->mUnk_08 |= 0x02;
                    this->mUnk_04++;
                }
            }

            if (this->func_ov024_020d6704()) {
                if (this->mUnk_06) {
                    this->mUnk_06 = false;
                } else {
                    this->mUnk_06 = true;
                }
            }

            break;
        case 0:
            if (this->mUnk_06) {
                if (this->mUnk_04 == 0) {
                    var_r0 = true;
                } else {
                    var_r0 = false;
                }

                if (var_r0) {
                    this->mUnk_08 |= 0x08;
                    this->mUnk_04 = this->mUnk_00->mTable.GetLastIndex();
                } else {
                    this->mUnk_08 |= 0x02;
                    this->mUnk_04--;
                }
            } else {
                if (this->mUnk_04 == this->mUnk_00->mTable.GetLastIndex()) {
                    var_r0 = true;
                } else {
                    var_r0 = false;
                }

                if (var_r0) {
                    this->mUnk_04 = 0;
                    this->mUnk_08 |= 0x10;
                } else {
                    this->mUnk_08 |= 0x02;
                    this->mUnk_04++;
                }
            }

            break;
        default:
            break;
    }
}

u16 *Actor_Derived1_EC::func_ov024_020d69d8(VecFx32 *pPos, s16 *pAngle, VecFx32 *pVel, unk32 param4, s16 param5,
                                            unk32 param6) {
    VecFx32 sp1C;
    VecFx32 sp10;
    VecFx32 sp4;
    UnkFuncStruct1 sp0;
    s16 temp_r1;
    s32 var_r0;
    s32 temp_r4;

    if (param4 == 0 || this->mUnk_08 & 0x04) {
        pVel->x = pVel->z = 0;
        return &this->mUnk_08;
    }

    this->mUnk_08 = 0;
    this->mUnk_00->mTable.Get(this->mUnk_04).vfunc_0C(&sp1C);

    func_01ffb714(&sp1C, pPos, &sp10);

    temp_r1    = func_01ffbbe0(sp10.x, sp10.z);
    sp0.unk_00 = temp_r1;
    func_01ff930c((s16 *) pAngle, temp_r1, param5);

    temp_r4 = func_01ff9258(sp1C.x - pPos->x, sp1C.z - pPos->z);

    var_r0 = MUL_FX32(param4, func_02017f54((s16 *) pAngle, sp0));
    if (var_r0 < param6) {
        var_r0 = param6;
    }

    if (temp_r4 < param4) {
        func_01ffb714(&sp1C, pPos, &sp4);
        pVel->x = sp4.x;
        pVel->z = sp4.z;
        this->func_ov024_020d6730();
    } else {
        u16 angle = *pAngle;

        fx16 sin = SIN(angle);
        fx16 cos = COS(angle);

        pVel->x = MUL_FX32(sin, var_r0);
        pVel->z = MUL_FX32(cos, var_r0);
    }

    return &this->mUnk_08;
}

u16 *Actor_Derived1_EC::func_ov024_020d6b7c(VecFx32 *pPos, s16 *pAngle, VecFx32 *pVel, unk32 param4, s16 param5,
                                            unk32 param6) {
    VecFx32 sp28;
    VecFx32 sp1C;
    VecFx32 sp10;
    VecFx32 sp4;
    UnkFuncStruct1 sp0;
    s16 temp_r1;
    s32 var_r0;
    s32 temp_r4;

    if (param4 == 0 || this->mUnk_08 & 0x04) {
        pVel->x = pVel->z = 0;
        return &this->mUnk_08;
    }

    this->mUnk_08 = 0;
    this->mUnk_00->mTable.Get(this->mUnk_04).vfunc_0C(&sp28);

    func_01ffb714(&sp28, pPos, &sp1C);
    func_01ffb714(&sp28, &this->mUnk_0C, &sp10);

    temp_r1    = func_01ffbbe0(sp1C.x, sp1C.z);
    sp0.unk_00 = temp_r1;
    func_01ff930c((s16 *) pAngle, temp_r1, param5);

    temp_r4 = func_01ff9258(sp28.x - pPos->x, sp28.z - pPos->z);

    var_r0 = MUL_FX32(param4, func_02017f54((s16 *) pAngle, sp0));
    if (var_r0 < param6) {
        var_r0 = param6;
    }

    if (temp_r4 < param4 && this->mUnk_00->func_ov000_02059ccc(this->mUnk_04, this->mUnk_00->pRALB->unk_02)) {
        func_01ffb714(&sp28, pPos, &sp4);
        pVel->x = sp4.x;
        pVel->z = sp4.z;
        VecFx32_Copy(&sp28, &this->mUnk_0C);
        this->func_ov024_020d6730();
    } else if (VecFx32_Dot(&sp1C, &sp10) < 0 || temp_r4 < param4) {
        VecFx32_Copy(&sp28, &this->mUnk_0C);
        this->func_ov024_020d6730();
    } else {
        u16 angle = *pAngle;

        fx16 sin = SIN(angle);
        fx16 cos = COS(angle);

        pVel->x = MUL_FX32(sin, var_r0);
        pVel->z = MUL_FX32(cos, var_r0);
    }

    return &this->mUnk_08;
}

u16 *Actor_Derived1_EC::func_ov024_020d6d80(VecFx32 *pPos, VecFx32 *pVel) {
    VecFx32 sp18;
    VecFx32 spC;
    VecFx32 sp0;
    s32 temp_r4;

    if ((pVel->x == 0 && pVel->y == 0 && pVel->z == 0) || this->mUnk_08 & 0x04) {
        return &this->mUnk_08;
    }

    this->mUnk_08 = 0;
    this->mUnk_00->mTable.Get(this->mUnk_04).vfunc_0C(&sp18);

    func_01ffb714(&sp18, &this->mUnk_0C, &spC);
    func_01ffb714(&sp18, pPos, &sp0);

    temp_r4 = func_01ff9258(sp18.x - pPos->x, sp18.z - pPos->z);
    sp0.y = spC.y = 0;

    if (temp_r4 <= VecFx32_Length(pVel)) {
        VecFx32_Copy(&sp18, &this->mUnk_0C);
        this->func_ov024_020d6730();
    } else if (VecFx32_Dot(&sp0, &spC) < 0) {
        VecFx32_Copy(&sp18, &this->mUnk_0C);
        this->func_ov024_020d6730();
    }

    return &this->mUnk_08;
}
