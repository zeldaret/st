#include "Game/GameModeManager.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_02049be0.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"
#include "Unknown/UnkStruct_ov024_020d8694.hpp"

extern "C" unk32 func_02014fe0();
extern "C" q20 func_01ffb428(unk32, unk32);

UnkTitleCardSystem1::UnkTitleCardSystem1(GameModeManagerBase_004 *param1) :
    mUnk_004(4),
    mUnk_008(NULL),
    mUnk_00C(NULL),
    mUnk_010(0),
    mUnk_014(param1),
    mUnk_134(false) {}

void UnkTitleCardSystem1::func_ov024_020cb274(UnkSystem2_UnkSubSystem11_Derived2 *param1,
                                              UnkSystem2_UnkSubSystem5_Base_10 *param2) {
    this->mUnk_008 = param1;
    this->mUnk_00C = param2;
}

void UnkTitleCardSystem1::func_ov024_020cb280() {}

void UnkTitleCardSystem1::func_ov024_020cb284(unk32 param1, unk32 param2) {
    if (!data_ov000_020b504c.func_ov000_02067f88(0, param2)) {
        return;
    }

    if (param2 == 1) {
        data_ov000_020b504c.func_ov000_02067f5c(0);
    }

    this->mUnk_134 = true;
    this->mUnk_010 = param2;

    EntryINF1 *pINF1 = data_ov000_020b504c.mUnk_000->func_ov000_02067a2c(param1);
    u8 fontIndex     = pINF1->fontIndex;
    if (fontIndex == FontIndex_04) {
        fontIndex = FontIndex_DSZ2_msg;
    }

    this->mUnk_008->mUnk_1C.mUnk_04 = &data_ov000_020b4f84.mUnk_00[fontIndex].mUnk_14;
    this->vfunc_10();
    this->vfunc_0C();

    UnkStruct_func_02019590 *puVar5 = data_0204a110.func_02019590(this->mUnk_004, this->vfunc_08());

    s16 bitFieldVal2 = puVar5->c_b2;
    s16 bitFieldVal1 = puVar5->c_b1;

    if (bitFieldVal1 == 0) {
        bitFieldVal1 = 0x100;
    }

    UnkDataStruct2 sp10(((bitFieldVal1 * bitFieldVal2) / 64) * 32);
    UnkMsgDataStruct1 spC;
    UnkMsgDataStruct1 sp8;

    Vec2s sp4;
    sp4.x = bitFieldVal1;
    sp4.y = bitFieldVal2;
    this->func_ov024_020cb490(&sp10, (unk32 *) &sp4);
    this->mUnk_008->mUnk_1C.mUnk_08 = pINF1->mUnk_07;

    spC.func_ov000_02067a60(data_ov000_020b504c.mUnk_000, param1);
    unk32 temp_r7                               = this->mUnk_00C->func_ov000_020691e0(&spC);
    UnkSystem2_UnkSubSystem11_Derived2 *temp_r8 = this->mUnk_008;
    this->mUnk_130                              = temp_r7 + this->vfunc_18();

    unk32 temp_r0_3 = (this->mUnk_008->mUnk_04.unk_08 * 8);
    int temp_r5_3   = (this->mUnk_008->func_ov000_02061db8() / 2) + ((temp_r0_3 - this->mUnk_008->func_ov000_02061da8()) / 2);
    int temp_r6_2   = (((this->mUnk_008->mUnk_04.unk_04 * 8) - temp_r7) / 2);

    UnkMsgDataStruct1 *ptr = (UnkMsgDataStruct1 *) &sp8; // cast is required
    ptr->func_ov000_02067a60(data_ov000_020b504c.mUnk_000, param1);
    this->mUnk_00C->vfunc_14(ptr->mUnk_00);
    Vec2s sp0;
    sp0.x = temp_r6_2;
    sp0.y = temp_r5_3;
    this->mUnk_00C->func_ov000_02068798(&sp0);
    this->mUnk_008->func_ov000_02062838(sp10.unk_00);
}

//! TODO: fake match? see UnkStruct_func_02019590
void UnkTitleCardSystem1::func_ov024_020cb490(UnkDataStruct2 *param1, unk32 *param2) {
    UnkStruct_func_02019590 *ptr = data_0204a110.func_02019590(this->mUnk_004, this->vfunc_08());

    u16 arg7_val = ptr->e;
    bool var_r2  = this->mUnk_010 == 1;

    if (this->mUnk_004 == 0x63) {
        this->mUnk_008->func_ov000_020626e4(param1->unk_00, var_r2, param2, 0, 0, 0, arg7_val);
    } else {
        this->mUnk_008->func_ov000_020626e4(param1->unk_00, var_r2, param2, 0, 1, 0, arg7_val);
    }

    ptr = data_0204a110.func_02019590(this->mUnk_004, this->vfunc_08());

    int x_div        = (this->mUnk_008->mUnk_04.unk_04 * 8) / 2;
    int x            = (ptr->a - this->mUnk_018.mPos.x - x_div);
    this->mUnk_060.x = x;

    int y_div        = (this->mUnk_008->mUnk_04.unk_08 * 8) / 2;
    int y            = (ptr->b - this->mUnk_018.mPos.y - y_div);
    this->mUnk_060.y = y;

    this->mUnk_00C->mUnk_016 = ptr->d;
}

unk32 UnkTitleCardSystem1::vfunc_08() {
    return 0;
}

void UnkTitleCardSystem1::vfunc_0C() {}

void UnkTitleCardSystem1::vfunc_10() {}

void UnkTitleCardSystem1::func_ov024_020cb5bc() {
    if (this->mUnk_134) {
        this->mUnk_008->func_ov000_02062144();
        this->mUnk_134 = false;
        data_ov024_020d8694->func_ov024_020cb194(this->mUnk_004);
    }
}

void UnkTitleCardSystem1::vfunc_00() {}

void UnkTitleCardSystem1::vfunc_04(unk8 *param1) {
    UnkDataStruct1 auStack_20(0x40);
    this->func_ov024_020cb654(param1, &auStack_20);
}

void UnkTitleCardSystem1::func_ov024_020cb654(unk8 *param1, UnkDataStruct1 *param2) {
    Vec2s sp34;
    Vec2s sp30;
    Vec2s sp2C;
    Vec2s sp28;

    bool r3 = false;
    bool r4 = false;

    if (!(!this->mUnk_134 || this->mUnk_008->mUnk_2C == -1)) {
        r4 = true;
    }

    if (r4) {
        unk8 param = ((volatile unk8 *) param1)[this->mUnk_010];

        if (this->mUnk_008->mUnk_2C == param) {
            r3 = true;
        }
    }

    if (!r3) {
        return;
    }

    Vec2s sp24;
    Vec2s sp20;

    func_0201e8d4(&sp20, &this->mUnk_0A8);

    Vec2s *pSp14 = (Vec2s *) &sp24;
    func_0201e8d4(pSp14, &this->mUnk_064);
    Vec2s_Add(pSp14, &sp20, &sp34);

    data_0204af1c.func_0201aa44(&this->mUnk_030, &sp34, 1, (void *) param2);
    s16 unk_056 = this->mUnk_048.mUnk_0E.x;

    Vec2s sp18;
    Vec2s sp1C;
    func_0201e8d4(&sp18, &this->mUnk_0EC);
    func_0201e8d4(&sp1C, &this->mUnk_0A8);

    int var_r7 = (sp18.x - sp1C.x) - unk_056;

    Vec2s sp14;
    Vec2s sp10;
    Vec2s offset;
    offset.x = (this->mUnk_030.mUnk_0E.x / 2) + (this->mUnk_018.mUnk_0E.x / 2);
    offset.y = 0;
    func_0201e8d4(&sp10, &this->mUnk_0A8);
    func_0201e8d4(&sp14, &this->mUnk_064);
    Vec2s_OffsetAdd(&sp14, &sp10, &offset, &sp30);

    while (true) {
        data_0204af1c.func_0201aa44(&this->mUnk_018, &sp30, 1, (void *) param2);
        s16 step_x = this->mUnk_018.mUnk_0E.x;

        var_r7 -= step_x;
        if (var_r7 <= 0) {
            break;
        }

        if (var_r7 < step_x) {
            sp30.x += var_r7;
        } else {
            sp30.x += step_x;
        }
    }

    Vec2s spC;
    Vec2s sp8;
    func_0201e8d4(&sp8, &this->mUnk_0EC);
    Vec2s *pSpC = (Vec2s *) &spC;
    func_0201e8d4(pSpC, &this->mUnk_064);
    Vec2s_Add(pSpC, &sp8, &sp2C);

    data_0204af1c.func_0201aa44(&this->mUnk_048, &sp2C, 1, (void *) param2);

    if (this->vfunc_14()) {
        Vec2s sp4;
        Vec2s *pSp4 = (Vec2s *) &sp4;
        func_0201e8d4(pSp4, &this->mUnk_064);
        Vec2s_Add(pSp4, &this->mUnk_060, &sp28);
        this->mUnk_008->func_ov000_0206216c(&sp28, 0, 0);
    }
}

bool UnkTitleCardSystem1::vfunc_14() {
    return this->mUnk_064.mUnk_0A ? false : true;
}

unk32 UnkTitleCardSystem1::vfunc_18() {
    return 0x1E;
}

UnkTitleCardSystem1_Derived1::UnkTitleCardSystem1_Derived1(GameModeManagerBase_004 *param1) :
    UnkTitleCardSystem1(param1),
    mUnk_138(0),
    mUnk_13C(0),
    mUnk_13E(0),
    mUnk_140(false) {}

void UnkTitleCardSystem1_Derived1::vfunc_1C(u32 msgId, unk32 param2, bool param3) {
    s16 x;

    if (data_027e09a4->IsCutscene()) {
        return;
    }

    if (param3) {
        this->mUnk_13C = 90;
    } else {
        this->mUnk_13C = 0;
    }

    this->func_ov024_020cb284(msgId, param2);

    this->mUnk_064.func_0201e874(BTN_ID_UNK_00, Vec2s_GetCopy(&this->mUnk_018.mPos), Vec2s_GetCopy(&this->mUnk_018.mPos), 0);

    x = -((this->mUnk_130 / 2) + (this->mUnk_048.mUnk_0E.x / 2));
    this->mUnk_0A8.func_0201e874(BTN_ID_UNK_00, Vec2s_New(x, 0), Vec2s_New(x, 0), 0);

    x = (this->mUnk_130 / 2) + (this->mUnk_030.mUnk_0E.x / 2);
    this->mUnk_0EC.func_0201e874(BTN_ID_UNK_00, Vec2s_New(x, 0), Vec2s_New(x, 0), 0);
}

unk32 UnkTitleCardSystem1_Derived1::vfunc_08() {
    switch (this->mUnk_004) {
        case 0x04:
            return 0;
        case 0x06:
            return 0;
        case 0x05:
            return 0;
        case 0x14:
            return 0;
        case 0x15:
            return 0;
        case 0x07:
            return 0;
        case 0x63:
            return 0;
        default:
            break;
    }

    //! @bug: missing return
}

void UnkTitleCardSystem1_Derived1::vfunc_0C() {
    switch (this->mUnk_004) {
        case 0x04:
            this->mUnk_018.UnknownAction(0x04, 0x01);
            this->mUnk_030.UnknownAction(0x04, 0x00);
            this->mUnk_048.UnknownAction(0x04, 0x02);
            break;
        case 0x06:
            this->mUnk_018.UnknownAction(0x06, 0x01);
            this->mUnk_030.UnknownAction(0x06, 0x00);
            this->mUnk_048.UnknownAction(0x06, 0x02);
            break;
        case 0x05:
            this->mUnk_018.UnknownAction(0x05, 0x01);
            this->mUnk_030.UnknownAction(0x05, 0x00);
            this->mUnk_048.UnknownAction(0x05, 0x02);
            break;
        case 0x14:
            this->mUnk_018.UnknownAction(0x14, 0x01);
            this->mUnk_030.UnknownAction(0x14, 0x00);
            this->mUnk_048.UnknownAction(0x14, 0x02);
            break;
        case 0x15:
            this->mUnk_018.UnknownAction(0x15, 0x01);
            this->mUnk_030.UnknownAction(0x15, 0x00);
            this->mUnk_048.UnknownAction(0x15, 0x02);
            break;
        case 0x07:
            this->mUnk_018.UnknownAction(0x07, 0x01);
            this->mUnk_030.UnknownAction(0x07, 0x00);
            this->mUnk_048.UnknownAction(0x07, 0x02);
            break;
        default:
            break;
    }
}

void UnkTitleCardSystem1_Derived1::vfunc_10() {
    if (data_027e09a4->func_01ffd3d8()) {
        if (data_0204a110.mUnk_DF4 == 0) {
            this->mUnk_004 = 0x07;
        } else {
            this->mUnk_004 = 0x15;
        }
    } else if (this->mUnk_140) {
        this->mUnk_004 = 0x06;
    } else {
        if (data_027e09a4->UnkCheck2()) {
            this->mUnk_004 = 0x05;
        } else {
            if (this->mUnk_010 == 0) {
                this->mUnk_004 = 4;
            } else {
                this->mUnk_004 = 0x14;
            }
        }
    }

    data_ov024_020d8694->func_ov024_020cb178(this->mUnk_004);
}

void UnkTitleCardSystem1_Derived1::func_ov024_020cbe94(unk32 param1) {
    if (param1 != 0) {
        this->mUnk_13E = param1;
        this->mUnk_138 = 0;
    } else {
        this->func_ov024_020cbeb8();
    }
}

void UnkTitleCardSystem1_Derived1::func_ov024_020cbeb8() {
    if (!this->func_ov024_020cc0b4()) {
        return;
    }

    TC_SceneMsgIdx index = TC_SceneMsgIdx_None;

    if (data_027e09a4->IsSnowdriftStation()) {
        if (data_027e0cd8->func_ov000_02081d5c() < 6) {
            index = TC_SceneMsgIdx_SnowdriftStation;
        } else {
            index = TC_SceneMsgIdx_SlipperyStation;
        }
    } else if (data_027e09a4->IsWater3()) {
        if (data_027e0cd8->func_ov000_02081d5c() >= 10) {
            index = TC_SceneMsgIdx_LostAtSeaStation;
        }
    } else {
        index = data_027e09a4->func_01ffd400()->mUnk_16;
    }

    if (index >= 0) {
        this->vfunc_1C(data_ov024_020d8694->GetMessageID(index), data_0204a110.mUnk_DF4, 1);
    }
}

void UnkTitleCardSystem1_Derived1::func_ov024_020cbf74(unk32 param1) {
    if (param1 != 0) {
        this->mUnk_13E = param1;
        this->mUnk_138 = 1;
    } else {
        this->func_ov024_020cbf98();
    }
}

void UnkTitleCardSystem1_Derived1::func_ov024_020cbf98() {
    if (!this->func_ov024_020cc0b4()) {
        return;
    }

    UnkStruct_027e0cd8_04_0C *ptr = data_027e0cd8->mUnk_04->mUnk_0C;
    s32 unk_08                    = ptr->mUnk_08;
    u32 msgId                     = BMG_ID_NONE;

    if (unk_08 == 1) {
        msgId = BMG_ID(BMGGroup_maingame, MsgIndex_Floor2);
    } else if (unk_08 < 0) {
        this->mUnk_00C->mUnk_054 = -unk_08;
        msgId                    = BMG_ID(BMGGroup_maingame, MsgIndex_Floor3);
    } else if (unk_08 > 1) {
        unk32 value = func_02014fe0();
        if ((data_02049be0.mUnk_00 == 5 || data_02049be0.mUnk_00 == 4 || data_02049be0.mUnk_00 == 2) ||
            (data_02049be0.mUnk_00 == 3 && value == 2)) {
            unk_08--;
        }

        this->mUnk_00C->mUnk_054 = unk_08;
        msgId                    = BMG_ID(BMGGroup_maingame, MsgIndex_Floor1);
    } else {
        return;
    }

    this->vfunc_1C(msgId, data_0204a110.mUnk_DF4, 1);
}

void UnkTitleCardSystem1_Derived1::func_ov024_020cc05c(u32 msgId) {
    this->mUnk_140 = true;
    this->vfunc_1C(msgId, data_0204a110.mUnk_DF4, 0);
}

void UnkTitleCardSystem1_Derived1::func_ov024_020cc088(bool param1) {
    if (param1) {
        this->mUnk_13C = 5;
    } else {
        this->func_ov024_020cb5bc();
    }

    this->mUnk_140 = false;
}

bool UnkTitleCardSystem1_Derived1::func_ov024_020cc0b4() {
    unk32 unk_DF4 = data_0204a110.mUnk_DF4;

    if (data_ov000_020b504c.func_ov000_02067bc4(unk_DF4) != NULL) {
        if (data_ov000_020b504c.func_ov000_02067bc4(unk_DF4)->vfunc_08()) {
            return false;
        }
    }

    if (data_0204a088->mUnk_00 != OverlayIndex_SceneInit) {
        return false;
    }

    return !data_027e0994->IsUnk150();
}

unk32 UnkTitleCardSystem1_Derived1::vfunc_18() {
    if (this->mUnk_140) {
        return 0;
    }

    return 0x1E;
}

UnkStruct_ov024_020d8694_01C::UnkStruct_ov024_020d8694_01C(GameModeManagerBase_004 *param1) :
    UnkTitleCardSystem1_Derived1(param1),
    mUnk_168(false) {}

void UnkStruct_ov024_020d8694_01C::vfunc_1C(u32 msgId, unk32 param2, bool param3) {
    if (this->mUnk_168) {
        this->mUnk_168 = false;

        if (data_0204e5f8.mUnk_3A == 0 && data_0204e5f8.mUnk_3E == 0) {
            return;
        }
    }

    this->UnkTitleCardSystem1_Derived1::vfunc_1C(msgId, param2, param3);
    this->mUnk_144.func_0201effc(0x08, 0x03, 0x0D);
    this->mUnk_144.UnkOperations1();
    data_0204a110.GetUnkD9C()->func_0201c4d8(this->mUnk_010, this->mUnk_144.func_0201f04c(), 5);
}

void UnkStruct_ov024_020d8694_01C::vfunc_00() {
    if (this->mUnk_13C != 0) {
        this->mUnk_13C--;

        if (this->mUnk_13C == 0) {
            this->func_ov024_020cc088(false);
        }

        if (this->mUnk_13C == 4) {
            this->mUnk_144.func_0201effc(0x08, 0x0D, 0x03);
            this->mUnk_144.UnkOperations1();
        }
    }

    if (this->mUnk_134 != 0) {
        this->mUnk_144.UpdateLogic();
        data_0204a110.GetUnkD9C()->func_0201c4d8(this->mUnk_010, this->mUnk_144.func_0201f04c(), 5);
    }

    if (this->mUnk_13E != 0) {
        this->mUnk_13E--;

        if (this->mUnk_13E == 0) {
            switch (this->mUnk_138) {
                case 0:
                    this->func_ov024_020cbeb8();
                    break;
                case 1:
                    this->func_ov024_020cbf98();
                    break;
                default:
                    break;
            }
        }
    }
}

UnkStruct_ov024_020d8694_188::UnkStruct_ov024_020d8694_188(GameModeManagerBase_004 *param1) :
    UnkTitleCardSystem1_Derived1(param1) {}

void UnkStruct_ov024_020d8694_188::vfunc_1C(u32 msgId, unk32 param2, bool param3) {
    this->UnkTitleCardSystem1_Derived1::vfunc_1C(msgId, param2, param3);
    this->mUnk_144.func_0201ebf8(0x08, 0x47, 0x1000, 0);
    this->mUnk_144.UnkOperations1();
}

void UnkStruct_ov024_020d8694_188::vfunc_00() {
    if (this->mUnk_13C != 0) {
        this->mUnk_13C--;

        if (this->mUnk_13C == 0) {
            this->func_ov024_020cc088(false);
        }

        if (this->mUnk_13C == 4) {
            this->mUnk_144.func_0201ebf8(0x08, 0x1000, 0x47, 0x00);
            this->mUnk_144.UnkOperations1();
        }
    }

    if (this->mUnk_13E != 0) {
        this->mUnk_13E--;

        if (this->mUnk_13E == 0) {
            this->func_ov024_020cbeb8();
        }
    }

    this->mUnk_144.UpdateLogic();
}

void UnkStruct_ov024_020d8694_188::vfunc_04(unk8 *param1) {
    Vec4p local;
    local.coords = data_027e0120.coords;
    local.w      = func_01ffb428(0x1000, this->mUnk_144.func_0201ec30());

    UnkDataStruct1 local_30(&local, 0x40);
    this->func_ov024_020cb654(param1, &local_30);
}

bool UnkStruct_ov024_020d8694_188::vfunc_14() {
    if (this->UnkTitleCardSystem1::vfunc_14() && this->mUnk_144.func_0201ec30() == 0x1000) {
        return true;
    }

    return false;
}

UnkStruct_ov024_020d8694_2FC::UnkStruct_ov024_020d8694_2FC(GameModeManagerBase_004 *param1) :
    UnkTitleCardSystem1(param1) {}

void UnkStruct_ov024_020d8694_2FC::vfunc_00() {
    //! TODO: volatile hack
    if ((*(volatile bool *) &this->mUnk_064.mUnk_0A)) {
        this->mUnk_064.UpdateLogic();
        this->mUnk_0A8.UpdateLogic();
        this->mUnk_0EC.UpdateLogic();
    }
}

void UnkStruct_ov024_020d8694_2FC::vfunc_10() {
    this->mUnk_004 = 0x63;
    data_ov024_020d8694->func_ov024_020cb178(this->mUnk_004);
}

void UnkStruct_ov024_020d8694_2FC::func_ov024_020ccb10(unk32 param1, Vec2s *param2, Vec2s *param3) {
    s16 x1;
    s16 x2;

    this->func_ov024_020cb284(param1, 1);

    this->mUnk_064.func_0201e874(BTN_ID_UNK_08, Vec2s_GetCopy(param2), Vec2s_GetCopy(param3), 0);
    this->mUnk_064.UnkOperations1();

    x1 = (-this->mUnk_018.mUnk_0E.x / 2) - (this->mUnk_030.mUnk_0E.x / 2);
    x2 = -((this->mUnk_130 / 2) + (this->mUnk_030.mUnk_0E.x / 2));
    this->mUnk_0A8.func_0201e874(BTN_ID_UNK_08, Vec2s_New(x1, 0), Vec2s_New(x2, 0), 0);
    this->mUnk_0A8.UnkOperations1();

    x1 = (this->mUnk_018.mUnk_0E.x / 2) + (this->mUnk_048.mUnk_0E.x / 2);
    x2 = (this->mUnk_130 / 2) + (this->mUnk_048.mUnk_0E.x / 2);
    this->mUnk_0EC.func_0201e874(BTN_ID_UNK_08, Vec2s_New(x1, 0), Vec2s_New(x2, 0), 0);
    this->mUnk_0EC.UnkOperations1();
}

unk32 UnkStruct_ov024_020d8694_2FC::vfunc_08() {
    return 0;
}

void UnkStruct_ov024_020d8694_2FC::vfunc_0C() {
    this->mUnk_018.UnknownAction(0x63, 0x01);
    this->mUnk_030.UnknownAction(0x63, 0x00);
    this->mUnk_048.UnknownAction(0x63, 0x02);
}
