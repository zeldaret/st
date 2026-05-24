#include "MainGame/CargoManager.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_0204e5f8.hpp"
#include "Unknown/UnkStruct_020d8698.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "Unknown/UnkStruct_ov024_020d8660.hpp"
#include "versions.h"

extern "C" s16 func_020196b0(unk32 param1);
extern "C" unk32 func_02015788(u16 param1);

UnkStruct_020d8698 *data_ov024_020d8698 = NULL;

static const u16 data_ov024_020d73d8[] = {
    0x09,
    0x0A,
    0x08,
};

static const u16 data_ov024_020d73de[] = {
    0x01, 0x02, 0x03, 0x00, 0x05, 0x06, 0x04,
};

static const u16 data_ov024_020d73ec[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06,
};

static const u16 data_ov024_020d73fa[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07,
};

static const u16 data_ov024_020d741e[] = {
    0x1A, 0x19, 0x18, 0x1D, 0x1C, 0x1B, 0x20, 0x1F, 0x1E, 0x23,
};

static const u16 data_ov024_020d740a[] = {
    0x02, 0x01, 0x00, 0x05, 0x04, 0x03, 0x08, 0x07, 0x06, 0x0B,
};

static const u16 data_ov024_020d7432[] = {
    0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x00,
};

UnkStruct_020d8698 *UnkStruct_020d8698::Create() {
    return new(HeapIndex_1) UnkStruct_020d8698();
}

UnkStruct_020d8698::UnkStruct_020d8698() :
    mUnk_01C(NULL),
    mUnk_020(true),
    mUnk_024(NULL),
    mUnk_028(true),
    mUnk_02C(NULL),
    mUnk_030(true),
    mUnk_034(NULL),
    mUnk_038(true),
    mUnk_03C(NULL),
    mUnk_040(true),
    mUnk_044(NULL),
    mUnk_048(true) {
    this->mUnk_18  = true;
    this->mUnk_19  = true;
    this->mUnk_01C = new(HeapIndex_1) UnkStruct_020d8698_1C();
    this->mUnk_024 = new(HeapIndex_1) UnkStruct_020d8698_24();
    this->mUnk_02C = new(HeapIndex_1) UnkStruct_020d8698_2C();

    if (!data_027e09a4->IsOnTrain()) {
        this->mUnk_034 = new(HeapIndex_1) UnkStruct_020d8698_34();
        this->mUnk_044 = new(HeapIndex_1) UnkStruct_020d8698_44();

        if (this->mUnk_048) {
            this->mUnk_0C.Append(this->mUnk_044);
        }
    }

    if (data_027e09a4->IsDungeonTower() && !GET_FLAG(data_027e0ce0->mUnk_2C->mFlags, ItemFlag_LokomoSword)) {
        this->mUnk_03C = new(HeapIndex_1) UnkStruct_020d8698_3C();
    }

    this->mUnk_01C->func_ov024_020cdec8();
}

UnkStruct_020d8698::~UnkStruct_020d8698() {
    delete this->mUnk_01C;
    this->mUnk_01C = NULL;

    delete this->mUnk_024;
    this->mUnk_024 = NULL;

    delete this->mUnk_02C;
    this->mUnk_02C = NULL;

    if (!data_027e09a4->IsOnTrain()) {
        delete this->mUnk_034;
        this->mUnk_034 = NULL;

        delete this->mUnk_044;
        this->mUnk_044 = NULL;
    }

    if (this->mUnk_03C != NULL) {
        delete this->mUnk_03C;
        this->mUnk_03C = NULL;
    }
}

void UnkStruct_020d8698::func_ov024_020cd094() {
    this->mUnk_01C->func_ov024_020cd768();
    this->mUnk_024->func_ov024_020ce518();
    this->mUnk_02C->func_ov024_020ced54();

    if (data_ov000_020b504c.func_ov000_02067f88(0, 0) || data_027e09b8->func_ov000_020732dc(0)) {
        return;
    }

    UnkStruct_ov000_02067bc4::UnkStruct1 local;

#if __MWERKS__
    local.data = data_ov000_020b504c.func_ov000_02067bc4(0)->mUnk_028.data;
#else
    UnkStruct_ov000_02067bc4::UnkStruct1 *pData = &data_ov000_020b504c.func_ov000_02067bc4(0)->mUnk_028;

    local.mUnk_00 = pData->mUnk_00;
    local.mUnk_02 = pData->mUnk_02;
    local.mUnk_04 = pData->mUnk_04;
    local.mUnk_08 = pData->mUnk_08;
    local.mUnk_0C = pData->mUnk_0C;
    local.mUnk_0D = pData->mUnk_0D;
    local.mUnk_0E = pData->mUnk_0E;
    local.mUnk_0F = pData->mUnk_0F;
#endif

    if (!local.mUnk_0C) {
        this->func_ov024_020cd368(false, false);
        this->func_ov024_020cd3f0(false);
    }
}

void UnkStruct_020d8698::func_ov024_020cd150() {
    if (data_027e09a4->IsCutscene()) {
        return;
    }

    this->mUnk_01C->func_ov024_020cd774();
    this->mUnk_024->func_ov024_020ce570();
    this->mUnk_02C->func_ov024_020ceda8();

    if (!data_027e09a4->IsOnTrain()) {
        this->mUnk_034->func_ov024_020cf698();
        this->mUnk_044->func_ov031_0210eeb4();
        data_ov024_020d8698->func_ov024_020cd458(data_027e0ce0->mUnk_2C->mEquippedItem, true);
    }

    if (this->mUnk_03C != NULL) {
        this->mUnk_03C->func_ov024_020cf82c();
    }
}

void UnkStruct_020d8698::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    if (this->mUnk_020 && !this->func_ov024_020cd604()) {
        this->mUnk_01C->func_ov024_020cd9f0();
    }

    if (this->mUnk_028) {
        this->mUnk_024->func_ov024_020ce5cc();
    }

    if (this->mUnk_030) {
        this->mUnk_02C->func_ov024_020cef58();
    }

    if (!data_027e09a4->IsOnTrain() && this->mUnk_038) {
        this->mUnk_034->func_ov024_020cf6e4();
    }

    if (this->mUnk_03C != NULL && this->mUnk_040) {
        this->mUnk_03C->func_ov024_020cf888();
    }
}

void UnkStruct_020d8698::vfunc_10(unk8 *param1) {
    if (data_0204a110.mUnk_DF4 == 0 && !this->func_ov024_020cd604()) {
        if (this->mUnk_020) {
            this->mUnk_01C->func_ov024_020cdaac();
        }

        if (this->mUnk_028) {
            this->mUnk_024->func_ov024_020ce88c(param1);
        }

        if (this->mUnk_030 && data_ov024_020d8660->mUnk_1C != 5) {
            this->mUnk_02C->func_ov024_020cf2b8(param1);
        }

        if (!data_027e09a4->IsOnTrain() && this->mUnk_038) {
            this->mUnk_034->func_ov024_020cf724();
        }
    }

    if (this->mUnk_03C != NULL && this->mUnk_040) {
        this->mUnk_03C->func_ov024_020cf88c();
    }
}

void UnkStruct_020d8698::func_ov024_020cd348(u8 param1, u8 param2) {
    this->mUnk_01C->func_ov024_020cdd3c(param1, param2);
}

void UnkStruct_020d8698::func_ov024_020cd358(u8 param1) {
    this->mUnk_01C->func_ov024_020cde54(param1);
}

void UnkStruct_020d8698::func_ov024_020cd368(bool param1, bool param2) {
    if (!data_027e09a4->func_ov000_0207056c()) {
        this->mUnk_024->func_ov024_020ce990(param1, param2);
    }
}

void UnkStruct_020d8698::func_ov024_020cd3a4() {
    if (!data_027e09a4->func_ov000_0207056c()) {
        this->mUnk_024->func_ov024_020ce9ac();
    }
}

void UnkStruct_020d8698::func_ov024_020cd3d0() {
    this->mUnk_02C->func_ov024_020cf514();
}

void UnkStruct_020d8698::func_ov024_020cd3e0(bool param1) {
    this->mUnk_02C->func_ov024_020cf53c(param1);
}

void UnkStruct_020d8698::func_ov024_020cd3f0(bool param1) {
    this->mUnk_02C->func_ov024_020cf494(param1);
}

void UnkStruct_020d8698::func_ov024_020cd400() {
    this->mUnk_02C->func_ov024_020cf4c4();
}

void UnkStruct_020d8698::func_ov024_020cd410() {
    this->mUnk_02C->func_ov024_020cee58();
}

void UnkStruct_020d8698::func_ov024_020cd420() {
    if (data_027e09a4->IsNotCutscene() && !data_027e09a4->func_ov000_0207056c()) {
        this->mUnk_02C->func_ov024_020cee64();
    }
}

void UnkStruct_020d8698::func_ov024_020cd458(ItemFlag itemFlag, bool param2) {
    if (!data_027e09a4->IsOnTrain() && data_027e09a4->IsNotCutscene()) {
        this->mUnk_044->func_ov031_0210f7e4(itemFlag, param2);
    }
}

void UnkStruct_020d8698::func_ov024_020cd4a4(bool param1) {
    if (data_027e09a4->IsOnTrain()) {
        return;
    }

    if (param1) {
        this->mUnk_044->mUnk_18B = true;
    } else {
        this->mUnk_044->mUnk_18B = false;
    }
}

void UnkStruct_020d8698::func_ov024_020cd4e4(u16 param1, bool param2) {
    switch (param1) {
        case 0:
            this->mUnk_020 = param2;
            break;
        case 1:
            this->mUnk_028 = param2;
            break;
        case 3:
            this->mUnk_030 = param2;
            break;
        case 2:
            if (!data_027e09a4->IsOnTrain() && param2 != this->mUnk_048) {
                this->mUnk_048 = param2;

                if (this->mUnk_044 != NULL) {
                    if (param2) {
                        this->mUnk_0C.Append(this->mUnk_044);
                    } else {
                        this->mUnk_044->Detach();
                    }
                }
            }
            break;
        case 5:
            this->func_ov024_020cd4e4(0, param2);
            this->func_ov024_020cd4e4(1, param2);
            this->func_ov024_020cd4e4(2, param2);
            this->func_ov024_020cd4e4(3, param2);
            break;
        default:
            break;
    }
}

bool UnkStruct_020d8698::func_ov024_020cd5c0(u16 param1) {
    switch (param1) {
        case 0:
            return this->mUnk_020;
        case 1:
            return this->mUnk_028;
        case 2:
            return this->mUnk_048;
        case 3:
            return this->mUnk_030;
        default:
            break;
    }

    return false;
}

bool UnkStruct_020d8698::func_ov024_020cd604() {
    if (data_027e09b8 != NULL) {
        if (data_027e09b8->func_ov000_020732dc(0) || data_027e09b8->func_ov000_020732dc(4) || data_0204e5f8.mUnk_18 ||
            data_0204e5f8.mUnk_3A != 0 || data_0204e5f8.mUnk_3E != 0) {
            return true;
        }
    }

    return false;
}

UnkStruct_020d8698_1C::UnkStruct_020d8698_1C() {
    this->mUnk_000.Init(this->func_ov024_020ce2a8());
    this->func_ov024_020cd774();
}

void UnkStruct_020d8698_1C::func_ov024_020cd768() {
    this->func_ov024_020cdec8();
}

void UnkStruct_020d8698_1C::func_ov024_020cd774() {
    if (data_027e09a4->IsOnTrain()) {
        s32 sVar1 = func_020196b0(0x34);
        s32 sVar2 = func_020196b0(0x27);

        this->mUnk_00C.UnknownAction(sVar1, 0);
        this->mUnk_024.func_ov000_0206082c(sVar1, 0);
        this->mUnk_204.func_ov000_0206082c(sVar2, 1);
        this->mUnk_18C.func_ov000_0206082c(sVar2, 2);
        this->mUnk_114.func_ov000_0206082c(sVar2, 3);
        this->mUnk_09C.func_ov000_0206082c(sVar1, 2);
        this->mUnk_3E4[0].func_ov000_0206082c(sVar1, 1);
        this->mUnk_3E4[0].func_ov000_02060bac();
        this->mUnk_3E4[1].func_ov000_0206082c(sVar1, 1);
        this->mUnk_3E4[1].func_ov000_02060bac();
        this->mUnk_36C.func_ov000_0206082c(sVar2, 6);
        this->mUnk_2F4.func_ov000_0206082c(sVar2, 7);
        this->mUnk_27C.func_ov000_0206082c(sVar2, 8);
    } else {
        s32 sVar2 = func_020196b0(0x27);

        this->mUnk_00C.UnknownAction(sVar2, 0);
        this->mUnk_024.func_ov000_0206082c(sVar2, 0);
        this->mUnk_204.func_ov000_0206082c(sVar2, 1);
        this->mUnk_18C.func_ov000_0206082c(sVar2, 2);
        this->mUnk_114.func_ov000_0206082c(sVar2, 3);
        this->mUnk_09C.func_ov000_0206082c(sVar2, 4);
        this->mUnk_3E4[0].func_ov000_0206082c(sVar2, 5);
        this->mUnk_3E4[0].func_ov000_02060bac();
        this->mUnk_3E4[1].func_ov000_0206082c(sVar2, 5);
        this->mUnk_3E4[1].func_ov000_02060bac();
        this->mUnk_36C.func_ov000_0206082c(sVar2, 6);
        this->mUnk_2F4.func_ov000_0206082c(sVar2, 7);
        this->mUnk_27C.func_ov000_0206082c(sVar2, 8);
    }
}

void UnkStruct_020d8698_1C::func_ov024_020cd9f0() {
    this->mUnk_024.func_ov000_020609c4();
    this->mUnk_114.func_ov000_020609c4();
    this->mUnk_18C.func_ov000_020609c4();
    this->mUnk_204.func_ov000_020609c4();
    this->mUnk_3E4[0].func_ov000_020609c4();
    this->mUnk_3E4[1].func_ov000_020609c4();
    this->mUnk_36C.func_ov000_020609c4();
    this->mUnk_2F4.func_ov000_020609c4();
    this->mUnk_27C.func_ov000_020609c4();
    this->func_ov024_020cdfd8();

    if (data_027e09b8->func_ov000_020732dc(2)) {
        return;
    }

    s32 iVar1 = this->func_ov024_020ce218();

    if (iVar1 != 0) {
        if (iVar1 <= 2) {
            data_ov000_020b5214.func_ov000_0206e7e8(0x6B);
        } else if (iVar1 <= 6) {
            data_ov000_020b5214.func_ov000_0206e7e8(0x6A);
        }
    }
}

void UnkStruct_020d8698_1C::func_ov024_020cdaac() {
    unk32 temp_r0 = this->func_ov024_020ce2a8();

    for (int var_r8 = 0; var_r8 < temp_r0; var_r8++) {
        unk32 temp_r1 = (this->func_ov024_020ce260() / 4) - 1;
        unk32 var_r7;

        if (var_r8 <= temp_r1) {
            if (data_0204a110.mUnk_000 == 0) {
                var_r7 = var_r8;
            } else if (var_r8 < 8) {
                if (temp_r1 < 8) {
                    var_r7 = temp_r1 - var_r8;
                } else {
                    var_r7 = 0x07 - var_r8;
                }
            } else {
                var_r7 = 0x17 - var_r8;
            }

            Vec2s sp4;
            if (data_027e09a4->IsOnTrain()) {
                UnkStruct_ov019_020d24c8_28_258 sp20(func_020196b0(0x34), data_ov024_020d73fa[var_r7]);
                sp4.x = sp20.mPosU.x;
                sp4.y = sp20.mPosU.y;
            } else {
                UnkStruct_ov019_020d24c8_28_258 sp20(func_020196b0(0x27), data_ov024_020d7432[var_r7]);
                sp4.x = sp20.mPosU.x;
                sp4.y = sp20.mPosU.y;
            }

            //! TODO: regalloc fix
            Vec2s *ptr2          = &sp4;
            UnkSubStruct19 *ptr3 = &this->mUnk_3E4[1];

            switch (this->GetIterValue(var_r8)) {
                case 0:
                    data_0204af1c.func_0201aad0(&this->mUnk_09C, &sp4, 0, NULL);
                    break;
                case 1:
                    data_0204af1c.func_0201aa44(&this->mUnk_00C, &sp4, 0, NULL);
                    break;
                case 2:
                    data_0204af1c.func_0201aad0(&this->mUnk_024, &sp4, 0, NULL);
                    break;
                case 5:
                    data_0204af1c.func_0201aad0(&this->mUnk_114, &sp4, 0, NULL);
                    break;
                case 7:
                    data_0204af1c.func_0201aad0(&this->mUnk_18C, &sp4, 0, NULL);
                    break;
                case 9:
                    data_0204af1c.func_0201aad0(&this->mUnk_204, &sp4, 0, NULL);
                    break;
                case 3:
                    data_0204af1c.func_0201aad0(&this->mUnk_3E4[0], &sp4, 0, NULL);
                    break;
                case 4:
                    data_0204af1c.func_0201aad0(ptr3, &sp4, 0, NULL);
                    break;
                case 6:
                    data_0204af1c.func_0201aad0(&this->mUnk_27C, &sp4, 0, NULL);
                    break;
                case 8:
                    data_0204af1c.func_0201aad0(&this->mUnk_2F4, &sp4, 0, NULL);
                    break;
                case 10:
                    data_0204af1c.func_0201aad0(&this->mUnk_36C, ptr2, 0, NULL);
                    break;
                case 11:
                default:
                    break;
            }
        }
    }
}

void UnkStruct_020d8698_1C::func_ov024_020cdd3c(u8 param1, u8 param2) {
    u8 var_r4 = param2;
    u8 var_r5 = param1;

    if (data_027e09a4->IsOnTrain()) {
        var_r5 *= 4;
        var_r4 *= 4;
    }

#if IS_JP
    if (var_r5 < var_r4 && (var_r4 - var_r5) >= 4) {
        this->mUnk_008 = var_r5 / 4;
        this->mUnk_009 = var_r4 / 4;
        this->mUnk_4D4 = 0x12;
        this->mUnk_00A = var_r4 % 4;

        for (int var_r2 = 0; var_r2 < this->mUnk_008; var_r2++) {
            this->SetIterValue(var_r2, 1);
        }

        this->SetIterValue(this->mUnk_008, 3);
        this->mUnk_3E4[0].func_ov000_02060b64();

        if ((var_r4 - var_r5) != 4) {
            return;
        }

        this->mUnk_00A = 0;

        int value = var_r4 % 4;
        if (value != 0) {
            switch (value) {
                case 1:
                    this->SetIterValue(this->mUnk_009, 0x06);
                    this->mUnk_27C.func_ov000_02060b64();
                    break;
                case 2:
                    this->SetIterValue(this->mUnk_009, 0x08);
                    this->mUnk_2F4.func_ov000_02060b64();
                    break;
                case 3:
                    this->SetIterValue(this->mUnk_009, 0x0A);
                    this->mUnk_36C.func_ov000_02060b64();
                    break;
                default:
                    break;
            }
        }

        return;
    }
#else
    if (var_r5 < var_r4) {
        this->mUnk_008 = var_r5 / 4;
        this->mUnk_009 = var_r4 / 4;
        this->mUnk_4D4 = 0x12;

        if (this->mUnk_008 != 0) {
            this->SetIterValue(this->mUnk_008 - 1, 1);
        }

        this->SetIterValue(this->mUnk_008, 3);
        this->mUnk_3E4[0].func_ov000_02060b64();

        if ((var_r4 - var_r5) != 4) {
            return;
        }

        int value = var_r4 % 4;
        if (value != 0) {
            switch (value) {
                case 1:
                    this->SetIterValue(this->mUnk_009, 0x06);
                    this->mUnk_27C.func_ov000_02060b64();
                    break;
                case 2:
                    this->SetIterValue(this->mUnk_009, 0x08);
                    this->mUnk_2F4.func_ov000_02060b64();
                    break;
                case 3:
                    this->SetIterValue(this->mUnk_009, 0x0A);
                    this->mUnk_36C.func_ov000_02060b64();
                    break;
                default:
                    break;
            }
        }

        return;
    }
#endif

    this->func_ov024_020cdec8();
}

void UnkStruct_020d8698_1C::func_ov024_020cde54(u8 param1) {
    u8 var_r5 = param1;

    if (data_027e09a4->IsOnTrain() != 0) {
        var_r5 *= 4;
    }

    int temp_r3 = var_r5 / 4;

    for (int var_ip = 0; var_ip < temp_r3; var_ip++) {
        if (this->GetIterValue(var_ip) == 0x0B) {
            this->SetIterValue(var_ip, 0x00);
        }
    }

    this->func_ov024_020cdd3c(this->func_ov024_020ce218(), var_r5);
}

void UnkStruct_020d8698_1C::func_ov024_020cdec8() {
    s32 temp_r5 = this->func_ov024_020ce218();
    s32 temp_r0 = this->func_ov024_020ce260();

    s32 temp_r4   = temp_r5 / 4;
    s32 temp_r5_2 = temp_r5 % 4;
    s32 temp_r7   = temp_r0 / 4;

    s32 temp_r0_2 = this->func_ov024_020ce2a8();

    for (int var_r8 = 0; var_r8 < temp_r0_2; var_r8++) {
        if (var_r8 < temp_r7) {
            if (var_r8 < temp_r4) {
                if ((var_r8 == (temp_r4 - 1)) && (temp_r5_2 == 0)) {
                    this->SetIterValue(var_r8, 0x02);
                } else {
                    this->SetIterValue(var_r8, 0x01);
                }
            } else if (var_r8 == temp_r4) {
                switch (temp_r5_2) {
                    case 0:
                        this->SetIterValue(var_r8, 0x00);
                        break;
                    case 1:
                        this->SetIterValue(var_r8, 0x05);
                        break;
                    case 2:
                        this->SetIterValue(var_r8, 0x07);
                        break;
                    case 3:
                        this->SetIterValue(var_r8, 0x09);
                        break;
                    default:
                        break;
                }
            } else if (var_r8 < temp_r7) {
                this->SetIterValue(var_r8, 0x00);
            }
        } else {
            this->SetIterValue(var_r8, 0x0B);
        }
    }
}

void UnkStruct_020d8698_1C::func_ov024_020cdfd8() {
    s32 temp_r0 = this->func_ov024_020ce2a8();

    for (int var_r7 = 0; var_r7 < temp_r0; var_r7++) {
        switch (this->GetIterValue(var_r7)) {
            case 3:
            case 4: {
                bool var_r0 = false;
                bool var_r8 = false;

                switch (this->GetIterValue(var_r7)) {
                    case 3:
                        if (this->mUnk_4D4 != 0) {
                            this->mUnk_4D4--;

                            if (this->mUnk_4D4 == 8) {
                                var_r8 = true;
                            } else if (this->mUnk_4D4 == 0) {
                                var_r0 = true;
                            }
                        }
                        break;
                    case 4:
                        if (this->mUnk_4D5 != 0) {
                            this->mUnk_4D5--;

                            if (this->mUnk_4D5 == 8) {
                                var_r8 = true;
                            } else if (this->mUnk_4D5 == 0) {
                                var_r0 = true;
                            }
                        }
                        break;
                    default:
                        break;
                }

                if (var_r0) {
                    this->SetIterValue(var_r7, 0x01);

                    if (this->mUnk_008 == this->mUnk_009) {
                        if (this->mUnk_008 == (data_027e09a4->IsOnTrain() ? 0x08 : 0x10) ||
                            this->GetIterValue(this->mUnk_008) == 0x0B || this->GetIterValue(this->mUnk_008) == 0x00) {

                            this->mUnk_024.func_ov000_02060b64();
                            this->SetIterValue(this->mUnk_008 - 1, 0x02);
                        }
                    }
                }

                if (var_r8) {
                    this->mUnk_008++;

                    if (this->mUnk_008 != this->mUnk_009) {
                        // the cast is required to fix the regalloc
                        if (this->GetIterValue((u32) var_r7) == 3) {
                            this->mUnk_3E4[1].func_ov000_02060b64();
                            this->SetIterValue(this->mUnk_008, 0x04);
                            this->mUnk_4D5 = 0x12;
                        } else {
                            this->mUnk_3E4[0].func_ov000_02060b64();
                            this->SetIterValue(this->mUnk_008, 0x03);
                            this->mUnk_4D4 = 0x12;
                        }
                    } else if (this->mUnk_00A != 0) {
#if IS_JP
                        switch (this->mUnk_00A) {
                            case 1:
                                this->SetIterValue(this->mUnk_008, 0x06);
                                this->mUnk_27C.func_ov000_02060b64();
                                break;
                            case 2:
                                this->SetIterValue(this->mUnk_008, 0x08);
                                this->mUnk_2F4.func_ov000_02060b64();
                                break;
                            case 3:
                                this->SetIterValue(this->mUnk_008, 0x0A);
                                this->mUnk_36C.func_ov000_02060b64();
                                break;
                            default:
                                break;
                        }

                        this->mUnk_00A = 0;
                        data_ov000_020b5214.func_ov000_0206db44(0x6C);
#endif
                    }
                }

                break;
            }
            case 6:
                if (this->mUnk_27C.func_ov000_02060af8()) {
                    this->mUnk_114.func_ov000_02060b64();
                    this->SetIterValue(var_r7, 0x05);
                }
                break;
            case 8:
                if (this->mUnk_2F4.func_ov000_02060af8()) {
                    this->mUnk_18C.func_ov000_02060b64();
                    this->SetIterValue(var_r7, 0x07);
                    break;
                }
                break;
            case 10:
                if (this->mUnk_36C.func_ov000_02060af8()) {
                    this->mUnk_204.func_ov000_02060b64();
                    this->SetIterValue(var_r7, 0x09);
                    break;
                }
                break;
            default:
                break;
        }
    }
}

u8 UnkStruct_020d8698_1C::func_ov024_020ce218() {
    if (data_027e09a4->IsOnTrain()) {
        return data_027e0ce0->mUnk_34->mUnk_28 * 4;
    }

    return data_027e0ce0->mHealth;
}

u8 UnkStruct_020d8698_1C::func_ov024_020ce260() {
    if (data_027e09a4->IsOnTrain()) {
        return data_027e0ce0->mUnk_34->mUnk_24 * 4;
    }

    return data_027e0ce0->mHealthMax;
}

u32 UnkStruct_020d8698_1C::func_ov024_020ce2a8() {
    if (data_027e09a4->IsOnTrain()) {
        return 0x08;
    }

    return 0x10;
}

//! TODO: remove the volatile casts?
UnkStruct_020d8698_24::UnkStruct_020d8698_24() :
    mUnk_000(func_020196b0(0x1B), 0),
    mUnk_05C(0x18, data_ov024_020d740a, 0, 1),
    mUnk_100(0),
    mUnk_104(false),
    mUnk_105(false) {
    this->mUnk_106.x = 0;
    this->mUnk_106.y = 0;

    s16 sVar2 = func_020196b0(0x1B);

    UnkStruct_ov019_020d24c8_28_258 local_30((volatile s32) sVar2, 1);
    UnkStruct_ov019_020d24c8_28_258 local_48((volatile s32) sVar2, 2);
    this->mUnk_05C.mUnk_04 = local_48.mPos.x - local_30.mPos.x;

    UnkStruct_ov019_020d24c8_28_258 local_60((volatile s32) sVar2, 0);

    Vec2s_CopySub(&local_30.mPos, &local_60.mPos, &this->mUnk_0FC);

    this->mUnk_05C.func_ov000_02065b48(data_027e0ce0->mUnk_2C->mNumRupees, 0);

    UnkStruct_ov019_020d24c8_28_258 local_78((volatile s32) sVar2, 4);
    s16 temp_r0 = local_78.mPos.x + local_78.mUnk_0E.x;

    if (data_0204a110.mUnk_000 == 0) {
        Vec2s sp10;
        Vec2s spC;

        spC.x = this->mUnk_000.mPos.x;
        spC.y = this->mUnk_000.mPos.y;

        sp10.x = this->mUnk_000.mPos.x - temp_r0;
        sp10.y = this->mUnk_000.mPos.y;

        this->mUnk_018.func_0201e874(BTN_ID_UNK_08, &sp10, &spC, 1);
    } else {
        Vec2s sp8;
        Vec2s sp4;

        sp4.x = this->mUnk_000.mPos.x;
        sp4.y = this->mUnk_000.mPos.y;

        sp8.x = this->mUnk_000.mPos.x + temp_r0;
        sp8.y = this->mUnk_000.mPos.y;

        this->mUnk_018.func_0201e874(BTN_ID_UNK_08, &sp8, &sp4, 1);
    }
}

void UnkStruct_020d8698_24::func_ov024_020ce518() {
    this->mUnk_018.Subprocess2_UnkValueSets();
    this->mUnk_018.UnkOperations3();
    this->mUnk_05C.func_ov000_02065b48(data_027e0ce0->mUnk_2C->mNumRupees, 0);
    this->mUnk_104 = false;
}

void UnkStruct_020d8698_24::func_ov024_020ce570() {
    this->mUnk_000.UnknownAction(func_020196b0(0x1B), 0);
    this->mUnk_05C.func_ov000_02065988(0x18, data_ov024_020d740a);
}

void UnkStruct_020d8698_24::func_ov024_020ce5cc() {
    bool var_r2 = false;
    bool var_r3 = false;

    if (this->mUnk_100 > 0 && this->mUnk_05C.mUnk_9C == 0) {
        this->mUnk_100--;
    }

    if (this->mUnk_104 || this->mUnk_100 > 0 || this->mUnk_05C.mUnk_9C != 0) {
        var_r2 = true;
    } else {
        var_r3 = true;
    }

    if (var_r2) {
        if (!this->mUnk_018.mUnk_0A) {
            this->mUnk_018.mUnk_0A = true;
            this->mUnk_018.UnkOperations1();
            this->mUnk_018.mUnk_08 = 1;
        }
    } else if (var_r3) {
        if (!this->mUnk_018.mUnk_0B) {
            this->mUnk_018.mUnk_0B = true;
            this->mUnk_018.UnkOperations2();
            this->mUnk_018.mUnk_08 = 1;
        }
    }

    this->mUnk_018.UpdateLogic();
    this->mUnk_05C.func_ov000_02065b48(data_027e0ce0->mUnk_2C->mNumRupees, 1);

    if (data_0204a110.mUnk_000 == 1) {
        switch (func_02015788(this->mUnk_05C.mUnk_94)) {
            case 1:
                this->mUnk_106.x = this->mUnk_05C.mUnk_04 * 3;
                this->mUnk_106.y = 0;
                break;
            case 2:
                this->mUnk_106.x = this->mUnk_05C.mUnk_04 * 2;
                this->mUnk_106.y = 0;
                break;
            case 3:
                this->mUnk_106.x = this->mUnk_05C.mUnk_04;
                this->mUnk_106.y = 0;
                break;
            case 4:
                this->mUnk_106.x = 0;
                this->mUnk_106.y = 0;
                break;
            default:
                break;
        }
    }

    this->mUnk_05C.func_ov000_02065b8c();

    if (this->mUnk_05C.mUnk_9C != 0) {
        if (this->mUnk_05C.mUnk_9C == 1) {
            data_ov000_020b5214.func_ov000_0206e7e8(0x6E);
        } else {
            data_ov000_020b5214.func_ov000_0206e7e8(0x6F);
        }
    }
}

void UnkStruct_020d8698_24::func_ov024_020ce88c(unk8 *param1) {
    UnkDataStruct1 sp14;
    Vec2s sp10;
    Vec2s spC;
    Vec2s sp8;
    Vec2s sp4;

    Vec2s *pSpC = (Vec2s *) &spC;
    func_0201e8d4(pSpC, &this->mUnk_018);
    Vec2s_Add(pSpC, &this->mUnk_106, &sp10);
    data_0204af1c.func_0201aa44(&this->mUnk_000, &sp10, 2, NULL);

    sp14.Init();
    sp14.SetUnk04(2);

    Vec2s *pSp4 = (Vec2s *) &sp4;
    func_0201e8d4(pSp4, &this->mUnk_018);
    Vec2s_OffsetAdd(pSp4, &this->mUnk_0FC, &this->mUnk_106, &sp8);
    Vec2s_Copy(&sp8, &this->mUnk_05C.mUnk_00);

    this->mUnk_05C.func_ov000_020659d0(param1, &sp14);
}

void UnkStruct_020d8698_24::func_ov024_020ce990(bool param1, bool param2) {
    this->mUnk_105 = param1;

    if (param2) {
        this->mUnk_100 = 0x4B;
    } else {
        this->mUnk_104 = true;
    }
}

void UnkStruct_020d8698_24::func_ov024_020ce9ac() {
    this->mUnk_104 = false;

    if (data_ov024_020d8698->func_ov024_020cd604()) {
        this->mUnk_018.Subprocess2_UnkValueSets();
        this->mUnk_018.UnkOperations3();
    }
}

UnkStruct_020d8698_2C::UnkStruct_020d8698_2C() :
    mUnk_000(0),
    mUnk_004(func_020196b0(0x1B), 6),
    mUnk_01C(func_020196b0(0x1B), 5),
    mUnk_034(func_020196b0(0x1B), 9),
    mUnk_090(0x18, data_ov024_020d740a, 0, 1),
    mUnk_13C(0),
    mUnk_140(false),
    mUnk_141(false),
    mUnk_142(false),
    mUnk_143(false),
    mUnk_144(0),
    mUnk_146(false) {
    this->mUnk_218.x = 0;
    this->mUnk_218.y = 0;

    s16 sVar2 = func_020196b0(0x1B);

    UnkStruct_ov019_020d24c8_28_258 local_30((volatile s32) sVar2, 7);
    UnkStruct_ov019_020d24c8_28_258 local_48((volatile s32) sVar2, 8);
    this->mUnk_090.mUnk_04 = local_48.mPos.x - local_30.mPos.x;

    this->mUnk_090.func_ov000_02065b48(gpCargoManager->GetCargo()->GetAmount(), 0);

    Vec2s_CopySub(&local_30.mPos, &this->mUnk_004.mPos, &this->mUnk_130);
    Vec2s_CopySub(&this->mUnk_034.mPos, &this->mUnk_004.mPos, &this->mUnk_134);
    Vec2s_CopySub(&this->mUnk_01C.mPos, &this->mUnk_004.mPos, &this->mUnk_138);

    UnkStruct_ov019_020d24c8_28_258 local_78((volatile s32) sVar2, 8);
    s16 temp_r0 = local_78.mPos.x + local_78.mUnk_0E.x;

    if (data_0204a110.mUnk_000 == 0) {
        Vec2s sp10;
        Vec2s spC;

        spC.x = this->mUnk_004.mPos.x;
        spC.y = this->mUnk_004.mPos.y;

        sp10.x = this->mUnk_004.mPos.x - temp_r0;
        sp10.y = this->mUnk_004.mPos.y;

        this->mUnk_04C.func_0201e874(BTN_ID_UNK_08, &sp10, &spC, 1);
    } else {
        Vec2s sp8;
        Vec2s sp4;

        sp4.x = this->mUnk_004.mPos.x;
        sp4.y = this->mUnk_004.mPos.y;

        sp8.x = this->mUnk_004.mPos.x + temp_r0;
        sp8.y = this->mUnk_004.mPos.y;

        this->mUnk_04C.func_0201e874(BTN_ID_UNK_08, &sp8, &sp4, 1);
    }

    if (gpCargoManager->GetCargo()->IsTypeSet()) {
        this->func_ov024_020cee84();
    }

    if (data_027e09a4->IsOnTrain() && gpCargoManager->GetCargo()->IsTypeSet()) {
        this->mUnk_141 = true;
    } else {
        this->mUnk_141 = false;
    }
}

void UnkStruct_020d8698_2C::func_ov024_020ced54() {
    this->mUnk_04C.Subprocess2_UnkValueSets();
    this->mUnk_04C.UnkOperations3();
    this->mUnk_090.func_ov000_02065b48(gpCargoManager->GetCargo()->GetAmount(), 0);
    this->mUnk_140 = false;
}

void UnkStruct_020d8698_2C::func_ov024_020ceda8() {
    s16 sVar1 = func_020196b0(0x1B);
    this->mUnk_004.UnknownAction((volatile s32) sVar1, 0x06);
    this->mUnk_01C.UnknownAction((volatile s32) sVar1, 0x05);
    this->mUnk_034.UnknownAction((volatile s32) sVar1, 0x09);
    this->mUnk_090.func_ov000_02065988(0x18, data_ov024_020d740a);
}

void UnkStruct_020d8698_2C::func_ov024_020cee58() {
    this->func_ov024_020cee84();
}

void UnkStruct_020d8698_2C::func_ov024_020cee64() {
    if (gpCargoManager->GetCargo()->IsTypeSet()) {
        this->mUnk_143 = true;
    } else {
#if IS_JP
        this->mUnk_141 = false;
        this->mUnk_04C.Subprocess2_UnkValueSets();
        this->mUnk_04C.UnkOperations3();
#endif
    }
}

void UnkStruct_020d8698_2C::func_ov024_020cee84() {
    if (!data_027e0994->mUnk_004.func_0201c2b0(func_020196b0(0x1B))) {
        return;
    }

    wchar_t path[32];
    path[0]  = L'\0';
    path[31] = L'\0';

    this->mUnk_14C.func_ov000_02060e3c(0, "Cargo.ncgr", path);

#if IS_JP
    if (!gpCargoManager->GetCargo()->IsTypeSet()) {
        this->mUnk_141 = false;
        return;
    }
#endif

    CargoType eType = gpCargoManager->GetCargo()->GetType();
    this->mUnk_14C.func_ov000_02060c50(path, &this->mUnk_198, 0x80, &this->mUnk_004);
    this->mUnk_14C.func_ov000_02060db8(data_ov024_020d73ec[eType]);
    this->mUnk_14C.func_ov000_02060c7c(0);
    this->mUnk_14C.func_ov000_02060d7c(0x1D, data_ov024_020d73de[eType]);
}

void UnkStruct_020d8698_2C::func_ov024_020cef58() {
    this->mUnk_090.func_ov000_02065b8c();
    this->mUnk_090.func_ov000_02065b48(gpCargoManager->GetCargo()->GetAmount(), 1);

    if (data_0204a110.mUnk_000 == 1) {
        switch (func_02015788(this->mUnk_090.mUnk_94)) {
            case 1:
                this->mUnk_218.x = this->mUnk_090.mUnk_04;
                this->mUnk_218.y = 0;
                break;
            case 2:
                this->mUnk_218.x = 0;
                this->mUnk_218.y = 0;
                break;
            default:
                break;
        }
    }

    bool var_r2 = false;
    bool var_r3 = false;

    if (this->mUnk_13C > 0 && this->mUnk_090.mUnk_9C == 0) {
        this->mUnk_13C--;
    }

    if (this->mUnk_141 || this->mUnk_140 || this->mUnk_13C > 0 || this->mUnk_090.mUnk_9C != 0) {
        var_r2 = true;
    } else {
        var_r3 = true;
    }

    if (var_r2) {
        if (!this->mUnk_04C.mUnk_0A) {
            this->mUnk_04C.mUnk_0A = true;
            this->mUnk_04C.UnkOperations1();
            this->mUnk_04C.mUnk_08 = 1;
        }
    } else if (var_r3) {
        if (!this->mUnk_04C.mUnk_0B) {
            this->mUnk_04C.mUnk_0B = true;
            this->mUnk_04C.UnkOperations2();
            this->mUnk_04C.mUnk_08 = 1;
        }
    }

    this->mUnk_04C.UpdateLogic();

    if (this->mUnk_000 != 0) {
        switch (this->mUnk_000) {
            case 1:
                this->mUnk_148++;

                if (this->mUnk_148 == 0x1E) {
                    this->mUnk_148 = 0;
                    this->func_ov024_020cf5a8(true);
                } else if (this->mUnk_148 == 0x0F) {
                    this->func_ov024_020cf5a8(false);
                }
                break;
            case 2:
                this->mUnk_144--;

                if (this->mUnk_144 == 0) {
                    if (this->mUnk_146) {
                        this->func_ov024_020cf584();
                    } else {
                        this->func_ov024_020cf570();
                    }
                }
                break;
            default:
                break;
        }
    }

    if (this->mUnk_143 && data_027e0994->func_02018ad4()) {
        this->func_ov024_020cee84();
        this->mUnk_143 = false;
    }

    if (this->mUnk_090.mUnk_9C != 0) {
        if (this->mUnk_090.mUnk_9C == 1) {
            data_ov000_020b5214.func_ov000_0206e7e8(0x78);
        } else {
            data_ov000_020b5214.func_ov000_0206e7e8(0x79);
        }
    }
}

void UnkStruct_020d8698_2C::func_ov024_020cf2b8(unk8 *param1) {
    UnkDataStruct1 sp24;
    Vec2s sp20;
    Vec2s sp1C;
    Vec2s sp18;
    Vec2s sp14;
    Vec2s sp10;
    Vec2s spC;
    Vec2s sp8;
    Vec2s sp4;

    Vec2s *pSp1C = (Vec2s *) &sp1C;
    func_0201e8d4(pSp1C, &this->mUnk_04C);
    Vec2s_Add(pSp1C, &this->mUnk_218, &sp20);
    data_0204af1c.func_0201aa44(&this->mUnk_004, &sp20, 2, NULL);

    Vec2s *pSp14 = (Vec2s *) &sp14;
    func_0201e8d4(&sp14, &this->mUnk_04C);
    Vec2s_OffsetAdd2(pSp14, &this->mUnk_138, &this->mUnk_218, &sp18);
    data_0204af1c.func_0201aa44(&this->mUnk_01C, &sp18, 2, NULL);

    Vec2s *pSpC = (Vec2s *) &spC;
    func_0201e8d4(&spC, &this->mUnk_04C);
    Vec2s_OffsetAdd2(pSpC, &this->mUnk_134, &this->mUnk_218, &sp10);
    data_0204af1c.func_0201aa44(&this->mUnk_034, &sp10, 2, NULL);

    sp24.Init();
    sp24.SetUnk04(2);

    Vec2s *pSp4 = (Vec2s *) &sp4;
    func_0201e8d4(&sp4, &this->mUnk_04C);
    Vec2s_OffsetAdd(pSp4, &this->mUnk_130, &this->mUnk_218, &sp8);
    Vec2s_Copy(&sp8, &this->mUnk_090.mUnk_00);

    this->mUnk_090.func_ov000_020659d0(param1, &sp24);
}

void UnkStruct_020d8698_2C::func_ov024_020cf494(bool param1) {
    if (gpCargoManager->GetCargo()->IsTypeSet()) {
        if (param1) {
            this->mUnk_13C = 0x4B;
        } else {
            this->mUnk_140 = true;
        }
    }
}

void UnkStruct_020d8698_2C::func_ov024_020cf4c4() {
    this->mUnk_140 = false;

    if (data_ov024_020d8698->func_ov024_020cd604()) {
        this->mUnk_04C.Subprocess2_UnkValueSets();
        this->mUnk_04C.UnkOperations3();
    }
}

void UnkStruct_020d8698_2C::func_ov024_020cf514() {
    this->mUnk_000 = 0x02;
    this->func_ov024_020cf5a8(true);
    this->mUnk_144 = 0x4B;
}

void UnkStruct_020d8698_2C::func_ov024_020cf53c(bool param1) {
    if (this->mUnk_146 != param1) {
        this->mUnk_146 = param1;

        if (this->mUnk_000 != 2) {
            if (param1 & 0xFF) {
                this->func_ov024_020cf584();
            } else {
                this->func_ov024_020cf570();
            }
        }
    }
}

void UnkStruct_020d8698_2C::func_ov024_020cf570() {
    this->mUnk_000 = 0x00;
    this->func_ov024_020cf5a8(false);
}

void UnkStruct_020d8698_2C::func_ov024_020cf584() {
    this->mUnk_000 = 0x01;
    this->func_ov024_020cf5a8(true);
    this->mUnk_148 = 0x00;
}

void UnkStruct_020d8698_2C::func_ov024_020cf5a8(bool param1) {
    if (param1) {
        this->mUnk_090.func_ov000_02065988(0x18, data_ov024_020d741e);
    } else {
        this->mUnk_090.func_ov000_02065988(0x18, data_ov024_020d740a);
    }
}

UnkStruct_020d8698_34::UnkStruct_020d8698_34() {
    this->mUnk_90 = 0;
    this->mUnk_92 = 0;
    this->func_ov024_020cf698();
    UnkStruct_ov019_020d24c8_28_258 local_2c(0x5E, 0x04);
    UnkStruct_ov019_020d24c8_28_258 local_44(0x5E, 0x05);
    this->mUnk_90 = local_44.mPos.x - local_2c.mPos.x;
}

void UnkStruct_020d8698_34::func_ov024_020cf698() {
    this->mUnk_00.UnknownAction(0x5E, 0x04);
    this->mUnk_18.func_ov000_0206082c(0x5E, 0x00);
}

void UnkStruct_020d8698_34::func_ov024_020cf6e4() {
    this->mUnk_18.func_ov000_020609c4();

    u8 amount = data_027e0ce0->mUnk_2C->GetKeyAmount();
    if (amount > this->mUnk_92) {
        this->mUnk_18.func_ov000_02060b64();
        this->mUnk_92 = amount;
    }
}

void UnkStruct_020d8698_34::func_ov024_020cf724() {
    const s32 amount = data_027e0ce0->mUnk_2C->GetKeyAmount();

    if (amount <= 0) {
        return;
    }

    s16 offsetX = 0;
    for (int i = 0; i < amount; i++) {
        if (i == amount - 1 && !this->mUnk_18.func_ov000_02060af8()) {
            Vec2s sStack_28;
            Vec2s offset(offsetX, 0);
            Vec2s_Add(&this->mUnk_00.mPos, &offset, &sStack_28);
            data_0204af1c.func_0201aad0(&this->mUnk_18, &sStack_28, 1, NULL);
        } else {
            data_0204af1c.func_0201aa8c(&this->mUnk_00, 1, 0, offsetX, 0);
        }

        offsetX += this->mUnk_90;
    }
}

UnkStruct_020d8698_3C::UnkStruct_020d8698_3C() {
    this->func_ov024_020cf82c();
}

void UnkStruct_020d8698_3C::func_ov024_020cf82c() {
    this->mUnk_00.UnknownAction(0x5E, 0x09);
    this->mUnk_18.UnknownAction(0x5E, 0x0B);
}

void UnkStruct_020d8698_3C::func_ov024_020cf888() {}

void UnkStruct_020d8698_3C::func_ov024_020cf88c() {
    const s32 amount = data_027e0ce0->mUnk_2C->GetTearsAmount();

    for (int i = 0; i < MAX_TEARS_OF_LIGHT; i++) {
        UnkStruct_ov019_020d24c8_28_258 local_3c(0x5E, data_ov024_020d73d8[i]);

        if (i < amount) {
            data_0204af1c.func_0201aa44(&this->mUnk_18, &local_3c.mPos, 0, NULL);
        } else {
            data_0204af1c.func_0201aa44(&this->mUnk_00, &local_3c.mPos, 0, NULL);
        }
    }
}

DECL_INSTANCE(UnkStruct_020d8698, data_ov024_020d8698);
