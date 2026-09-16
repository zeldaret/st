#include "MapObject/MapObjectUnkSAND.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e09a8.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

extern "C" void func_01ff91b8(unk16 *, fx32, fx32);
extern unk32 data_ov031_02115fe0;
extern MapObject_10 data_ov031_02118ac8[];
extern MapObject_10 data_ov031_02118aec;
extern MapObject_10 data_ov031_02118aa4;

struct UnkStruct_ov031_021189d0 {
    /* 00 */ STRUCT_PAD(0x00, 0x70);
    /* 70 */ BMDSectionModel *unk_70;
};
extern UnkStruct_ov031_021189d0 data_ov031_021189d0;

struct UnkStruct_ov102_021848b0 {
    /* 00 */ u16 unk_00; // index for data_ov102_021848f0
    /* 02 */ s16 unk_02;
    /* 04 */
};

static const UnkStruct_ov102_021848b0 data_ov102_021848b0[] = {
    {5, 0x0000}, {4, 0x0000}, {4, 0x4000}, {3, 0x0000}, {4, 0x8000}, {2, 0x4000}, {3, 0x4000}, {1, 0x4000},
    {4, 0xC000}, {3, 0xC000}, {2, 0x0000}, {1, 0x0000}, {3, 0x8000}, {1, 0xC000}, {1, 0x8000}, {0, 0x0000},
};

static const char data_ov102_021848f0[][16] = {
    "s0", "s1", "s2", "s3", "s4", "s5",
};

void MapObjectUnkSAND_40::func_ov102_021835c4(VecFx32 *param1) {
    switch (this->mUnk_00) {
        case 1:
        case 2:
        case 3:
        case 4:
            if (this->mUnk_04 <= 0) {
                MapObjectUnkSAND::func_ov031_0210b17c(this, 5);
                return;
            }

            func_01ff91b8(&this->mUnk_02, 0x1333, 0x2000 / (this->mUnk_04 + 1));
            this->mUnk_04--;
            break;
        case 5:
            if (this->mUnk_04 <= 0) {
                MapObjectUnkSAND::func_ov031_0210b17c(this, 6);
                return;
            }

            this->mUnk_04--;
            break;
        case 6:
            if (this->mUnk_04 <= 0) {
                MapObjectUnkSAND::func_ov031_0210b17c(this, 0);
                return;
            }

            func_01ff91b8(&this->mUnk_02, 0, 0x2000 / (this->mUnk_04 + 1));
            this->mUnk_04--;
            break;
        default:
            break;
    }

    if (this->mUnk_01 != this->mUnk_00) {
        switch (this->mUnk_00) {
            case 1:
            case 2:
            case 3:
            case 4:
                if (this->mUnk_01 != 5) {
                    data_027e0cec->func_ov000_0209feac(0x8B5, param1, 4, 0, 0);
                    data_027e09a8->func_ov000_02071b30(0x183, param1, 0);
                }
                break;
            case 6:
                data_027e0cec->func_ov000_0209feac(0x8B6, param1, 4, 0, 0);
                data_027e0cec->func_ov000_0209feac(0x8B7, param1, 4, 0, 0);
                data_027e09a8->func_ov000_02071b30(0x184, param1, 0);
            default:
                break;
        }

        this->mUnk_01 = this->mUnk_00;
    }
}

void MapObjectUnkSAND_40::func_ov102_021837a8(Vec2bCpp param1, VecFx32 *param2) {
    Vec2bCpp spC[4];
    s32 sp8;
    UnkAngleStruct sp6;
    s32 var_r3;
    u16 var_r6;
    fx32 temp_r7;
    s32 var_r8;
    UnkStruct_027e0cd8_0C_Base *temp_r9;

    var_r6 = 0;

    spC[0].x = 0;
    spC[0].y = 0;

    spC[1].x = 0;
    spC[1].y = 0;

    spC[2].x = 0;
    spC[2].y = 0;

    spC[3].x = 0;
    spC[3].y = 0;

    for (var_r3 = 0; var_r3 < ARRAY_LEN(spC); var_r3++) {
#if __MWERKS__
        spC[var_r3].data = param1.data;
#else
        spC[var_r3].x = param1.x;
        spC[var_r3].y = param1.y;
#endif
    }

    spC[0].y++;
    spC[1].x++;
    spC[2].y--;
    spC[3].x--;

    temp_r9 = data_027e0cd8->mUnk_0C;
    temp_r7 = temp_r9->func_01ffedf4(&param1);

    for (var_r8 = 0; var_r8 < ARRAY_LEN(spC); var_r8++) {
        if (temp_r7 == temp_r9->func_01ffedf4(&spC[var_r8])) {
            if (MapObjectUnkSAND::func_ov031_0210ae00(spC[var_r8], &sp8) != 0 && sp8 == this->mUnk_02) {
                var_r6 |= 1 << var_r8;
            }
        }
    }

    const UnkStruct_ov102_021848b0 *ptr = &data_ov102_021848b0[var_r6];
    UnkSystem6_Derived2 sp14(
        G3d_GetUnkPtr(data_ov031_021189d0.unk_70, data_ov102_021848f0[data_ov102_021848b0[var_r6].unk_00]), true);
    sp6.angle_signed = ptr->unk_02;
    sp14.func_01ffc6d4(sp6, param2);
}

void MapObjectUnkSAND::vfunc_08() {
    VecFx32 sp0;
    MapObjState temp_r0_3;
    s32 var_r6;
    s32 var_r8;
    s32 var_r9;

    sp0   = this->mPos;
    sp0.y = this->mUnk_4C;

    var_r8 = 1;
    var_r9 = 1;

    for (var_r6 = 0; var_r6 < ARRAY_LEN(this->mUnk_40); var_r6++) {
        this->mUnk_40[var_r6].func_ov102_021835c4(&sp0);
        sp0.x += 0x1000;

        var_r8 = (var_r8 & (this->mUnk_40[var_r6].mUnk_00 != 0 ? 1 : 0)) ? 1 : 0;
        var_r9 = (var_r9 & (this->mUnk_40[var_r6].mUnk_00 == 0 ? 1 : 0)) ? 1 : 0;
    }

    if (var_r9 != 0) {
        this->Kill();
        return;
    }

    temp_r0_3     = this->mState;
    this->mUnk_10 = NULL;
    this->mState  = MapObjectUnkSANDState_0;

    if (var_r8 != 0) {
        this->mPos.y = this->mUnk_4C + this->mUnk_40[0].mUnk_02;

        if (this->mUnk_40[0].mUnk_02 == this->mUnk_40[1].mUnk_02) {
            this->mUnk_10 = &data_ov031_02118aa4;
        } else {
            this->mUnk_10 = &data_ov031_02118ac8[0];

            this->mUnk_60.x = this->mPos.x;
            this->mUnk_60.z = this->mPos.z;
            this->mUnk_60.y = this->mUnk_4C + this->mUnk_40[1].mUnk_02;

            this->mUnk_50.mUnk_0C = &data_ov031_02118aec;
            this->mState          = MapObjectUnkSANDState_1;
        }
    } else {
        for (s32 var_r1_2 = 0; var_r1_2 < ARRAY_LEN(this->mUnk_40); var_r1_2++) {
            if (this->mUnk_40[var_r1_2].mUnk_00 != 0) {
                this->mPos.y  = this->mUnk_4C + this->mUnk_40[var_r1_2].mUnk_02;
                this->mUnk_10 = &data_ov031_02118ac8[var_r1_2];
            }
        }
    }

    if (temp_r0_3 != this->mState) {
        if (this->mState == MapObjectUnkSANDState_1) {
            data_027e09c0->func_ov000_0207e240(&this->mUnk_50);
        } else {
            data_027e09c0->func_ov000_0207e254(&this->mUnk_50);
        }
    }
}

void MapObjectUnkSAND::vfunc_0C() {
    if (data_ov031_02115fe0 >= 0 && data_027e09b8->func_ov000_020732ec(data_ov031_02115fe0) != 0) {
        this->vfunc_08();
    }
}

void MapObjectUnkSAND::vfunc_14() {
    VecFx32 sp4  = this->mPos;
    Vec2bCpp sp0 = this->mUnk_3A;

    for (int var_r7 = 0; var_r7 < ARRAY_LEN(this->mUnk_40); var_r7++) {
        if (this->mUnk_40[var_r7].mUnk_00 != 0) {
            sp4.y = this->mUnk_4C + this->mUnk_40[var_r7].mUnk_02;
            this->mUnk_40[var_r7].func_ov102_021837a8(sp0, &sp4);
        }

        sp0.x++;
        sp4.x += 0x1000;
    }
}
