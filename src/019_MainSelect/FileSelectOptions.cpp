// clang-format off
#include "FileSelect/FileSelectOptionsManager.hpp"
#include "FileSelect/FileSelectOptions.hpp"
// clang-format on

#include "FileSelect/FileSelect.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern "C" {
void func_ov000_02062e44(void *param1, void *param2);

//! TODO: conflict between UnkStructSub4, UnkStructSub4_2 and UnkStructSub19
void func_ov000_020623d8(void *param1, unk32 param2);
};

class UnkStruct_ov019_020d215c {
public:
    /* 00 */ Vec2s mUnk_00;
    /* 04 */ Vec2s mUnk_04;
    /* 08 */ Vec2s mUnk_08;
    /* 0C */ Vec2s mUnk_0C;
    /* 10 */ Vec2s mUnk_10;
    /* 14 */
};

class UnkStruct_ov019_020d2170 {
public:
    /* 14 */ Vec2s_cpp mUnk_00;
    /* 18 */ Vec2s_cpp mUnk_04;
    /* 1C */ Vec2s_cpp mUnk_08;
    /* 20 */ Vec2s_cpp mUnk_0C;
    /* 24 */ Vec2s_cpp mUnk_10;
    /* 28 */ Vec2s_cpp mUnk_14;
    /* 2C */

    static UnkStruct_ov019_020d215c data_ov019_020d215c;

    UnkStruct_ov019_020d2170() {
        data_ov019_020d215c.mUnk_04.x = 0;
        data_ov019_020d215c.mUnk_04.y = -0x1E;

        data_ov019_020d215c.mUnk_08.x = 0;
        data_ov019_020d215c.mUnk_08.y = 0x100;

        data_ov019_020d215c.mUnk_00.x = -0x100;
        data_ov019_020d215c.mUnk_00.y = 0;

        this->mUnk_14.x = 0;
        this->mUnk_14.y = 0x100;

        this->mUnk_10.x = -0x100;
        this->mUnk_10.y = 0;

        this->mUnk_0C.x = 0;
        this->mUnk_0C.y = 100;

        this->mUnk_08.x = -0x100;
        this->mUnk_08.y = 0;

        this->mUnk_04.x = 0;
        this->mUnk_04.y = 100;

        this->mUnk_00.x = -0x100;
        this->mUnk_00.y = 0;
    }
};

UnkStruct_ov019_020d215c UnkStruct_ov019_020d2170::data_ov019_020d215c = {
    {0, 0}, {0, 0}, {0, 0}, {-0x47, -0x01}, {0x0281, 0x00}};

static const UnkStruct_ov019_020d2170 data_ov019_020d2170;

static PTMF<FileSelectOptions> data_ov019_020d21c0[FSOptionsState_Max] = {
    FileSelectOptions::func_ov019_020cce04, // FSOptionsState_Idle
    FileSelectOptions::func_ov019_020cce30, // FSOptionsState_OptionsFromChooseMode
    FileSelectOptions::func_ov019_020cd16c, // FSOptionsState_OptionsToChooseMode
    FileSelectOptions::func_ov019_020cd41c, // FSOptionsState_OptionsToMicTest
    FileSelectOptions::func_ov019_020cd5f8, // FSOptionsState_MicTestIdle
    FileSelectOptions::func_ov019_020cd614, // FSOptionsState_OptionsFromMicTest
    FileSelectOptions::func_ov019_020cd788, // FSOptionsState_SaveSettings
};

static PTMF<FileSelectOptions> data_ov019_020d2188[FSOptionsState_Max] = {
    FileSelectOptions::func_ov019_020cd7f8, // FSOptionsState_Idle
    FileSelectOptions::func_ov019_020cdc0c, // FSOptionsState_OptionsFromChooseMode
    FileSelectOptions::func_ov019_020cdc38, // FSOptionsState_OptionsToChooseMode
    FileSelectOptions::func_ov019_020cdc60, // FSOptionsState_OptionsToMicTest
    FileSelectOptions::func_ov019_020cdc5c, // FSOptionsState_MicTestIdle
    FileSelectOptions::func_ov019_020cdc8c, // FSOptionsState_OptionsFromMicTest
    FileSelectOptions::func_ov019_020cdcb8, // FSOptionsState_SaveSettings
};

ARM GameModeManagerBase_104 *FileSelectOptionsManager::Create(void *param1, s32 saveSlotIndex) {
    return new(HeapIndex_1) FileSelectOptionsManager(param1, saveSlotIndex);
}

// non-matching
//! TODO: move to class
ARM FileSelectOptionsManager::FileSelectOptionsManager(void *param1, s32 saveSlotIndex) {
    this->mUnk_24   = (GameModeManagerBase_104 *) param1;
    this->mUnk_1C   = 0;
    this->mUnk_20   = 0;
    this->mpMicTest = new(HeapIndex_1) FileSelectMicTest();

    FileSelectOptions *var_r5 = new(HeapIndex_1) FileSelectOptions(saveSlotIndex);
    this->mpOptions           = var_r5 == NULL ? var_r5 : (FileSelectOptions *) &var_r5->mUnk_04;
    this->mUnk_24->mUnk_04.func_020166cc(&var_r5->mUnk_04);
    this->vfunc_18();
}

ARM FileSelectOptionsManager::~FileSelectOptionsManager() {
    delete this->mpMicTest;
    this->mpMicTest = NULL;

    delete this->mpOptions;
    this->mpOptions = NULL;
}

ARM void FileSelectOptionsManager::vfunc_08() {
    if (this->mUnk_20 == 0) {
        return;
    }

    this->mUnk_20 = 0;

    switch (this->mUnk_1C) {
        case 0:
            FileSelectOptions *pFVar4 = this->mpOptions;
            FileSelectOptions *pFVar2 = pFVar4;
            if (pFVar4 != NULL) {
                pFVar2 = (FileSelectOptions *) &pFVar4->mUnk_04;
            }
            this->mUnk_24->mUnk_04.func_020166cc(&pFVar2->mUnk_04);
            pFVar4->vfunc_18();
            this->mpOptions->func_ov019_020cde9c();
            this->mpMicTest->mUnk_04.func_020166ac();
            break;
        case 1:
            FileSelectMicTest *pFVar5 = this->mpMicTest;
            FileSelectMicTest *pFVar3 = pFVar5;
            if (pFVar5 != NULL) {
                pFVar3 = (FileSelectMicTest *) &pFVar5->mUnk_04;
            }
            this->mUnk_24->mUnk_04.func_020166cc(&pFVar3->mUnk_04);
            pFVar5->vfunc_18();
            this->mpMicTest->func_ov019_020cefe4();
            this->mpOptions->mUnk_04.func_020166ac();
            break;
        case 2:
            this->mpOptions->func_ov019_020ccdf4();
            break;
        default:
            break;
    }
}

ARM void FileSelectOptionsManager::func_ov019_020cc85c(unk32 param1) {
    if (this->mUnk_1C != param1) {
        this->mUnk_1C = param1;
        this->mUnk_20 = 1;
    }
}

ARM unk32 FileSelectOptionsManager::func_ov019_020cc874() {
    return this->mpOptions->mUnk_0020;
}

ARM FileSelectOptions::FileSelectOptions(s32 saveSlotIndex) :
    mState(FSOptionsState_OptionsFromChooseMode),
    mUnk_0020(false),
    mUnk_0024(&this->mUnk_0C, saveSlotIndex),

    mUnk_10A8(0xFFFFFFFF, 0x8C, 0x01, 0x01, 0x8C, 0x01),
    mUnk_1108(&mUnk_10A8, 0x8C, 0x00, 0x00020010),

    mUnk_1388(0x4B, 0x8C, 0x08, 0x14, 0x8C, 0x01),
    mUnk_1420(&mUnk_1388),
    mUnk_1470(&mUnk_1388, 0x8C, 0x07, 0x0002000B),

    mUnk_16AC(0x4A, 0x8C, 0x0B, 0x12, 0x8C, 0x00),
    mUnk_1744(&mUnk_16AC),
    mUnk_1794(&mUnk_16AC, 0x8C, 0x08, 0x00020008),

    mUnk_19D0(0x05, 0x8C, 0x0C, 0x13, 0x8C, 0x08),
    mUnk_1A68(&mUnk_19D0),
    mUnk_1AB8(&mUnk_19D0, 0x8C, 0x09, 0x00020007) {
    this->mUnk_1CF5 = false;
    this->mUnk_0C.mUnk_04.mUnk_00.func_020166cc(&this->mUnk_10A8.mUnk_04);
    this->mUnk_0C.mUnk_04.mUnk_00.func_020166cc(&this->mUnk_19D0.mUnk_04);
    this->mUnk_0C.mUnk_04.mUnk_00.func_020166cc(&this->mUnk_1388.mUnk_04);
    this->mUnk_0C.mUnk_04.mUnk_00.func_020166cc(&this->mUnk_16AC.mUnk_04);
    this->mUnk_10A8.mUnk_2A = false;
    this->mUnk_1388.mUnk_2C = true;
    this->mUnk_16AC.mUnk_2C = true;
    this->mUnk_19D0.mUnk_2C = true;
    func_ov000_020623d8(this->mUnk_1474.mUnk_00C, 2);
    func_ov000_020623d8(this->mUnk_1798.mUnk_00C, 2);
    func_ov000_020623d8(this->mUnk_1ABC.mUnk_00C, 2);
    this->func_ov019_020ccd40();
}

ARM FileSelectOptions::~FileSelectOptions() {
    this->mUnk_1ABC.func_0201f498();
    this->mUnk_1798.func_0201f498();
    this->mUnk_1474.func_0201f498();
    this->mUnk_110C.func_0201f498();
}

ARM void FileSelectOptions::func_ov019_020ccd40() {
    CALL_PTMF(FileSelectOptions, data_ov019_020d21c0[this->mState]);
}

ARM void FileSelectOptions::vfunc_08() {
    CALL_PTMF(FileSelectOptions, data_ov019_020d2188[this->mState]);
}

ARM void FileSelectOptions::vfunc_10() {
    this->mUnk_0024.func_ov019_020ce4dc();
    this->mUnk_1108.func_ov000_02062f30();
    this->mUnk_1794.func_ov000_02062f30();
    this->mUnk_1AB8.func_ov000_02062f30();
    this->mUnk_1470.func_ov000_02062f30();
}

ARM void FileSelectOptions::func_ov019_020ccdf4() {
    this->func_ov019_020cde8c(FSOptionsState_OptionsToChooseMode);
}

ARM void FileSelectOptions::func_ov019_020cce04() {
    this->mUnk_0024.func_ov019_020ce7d4(1);
    this->mUnk_1388.mUnk_2A = true;
    this->mUnk_16AC.mUnk_2A = true;
    this->mUnk_19D0.mUnk_2A = true;
}

extern s16 data_ov019_020d215c_2[];

ARM void FileSelectOptions::func_ov019_020cce30() {
    Vec2s local_48;
    func_ov000_02062e44(&local_48, &this->mUnk_10A8);
    Vec2us sVar2_1;
    sVar2_1.x = local_48.x + data_ov019_020d215c_2[2];
    sVar2_1.y = local_48.y + data_ov019_020d215c_2[3];

    Vec2s local_3c;
    func_ov000_02062e44(&local_3c, &this->mUnk_10A8);

    Vec2s local_50;
    local_50 = local_3c;

    Vec2s local_4c;
    local_4c.x = sVar2_1.x;
    local_4c.y = sVar2_1.y;

    this->mUnk_1344.func_0201e874(0x0F, &local_4c, &local_50, 6);
    this->mUnk_1344.mUnk_0A = true;
    this->mUnk_1344.mUnk_0B = false;
    this->mUnk_1344.mUnk_0C = false;
    if (this->mUnk_1344.mUnk_04 == this->mUnk_1344.mUnk_06) {
        this->mUnk_1344.mUnk_0A = false;
        this->mUnk_1344.mUnk_0C = true;
    }

    Vec2us local_54;
    func_0201e8d4(&local_54, &this->mUnk_1344);
    this->mUnk_10A8.mPos.x = local_54.x;
    this->mUnk_10A8.mPos.y = local_54.y;

    UnkStruct_ov019_020d24c8_28_258 local_38(0x8C, 0x00);
    Vec2s local_58;
    Vec2s local_5c;
    local_58.x = local_38.mPos.x + data_ov019_020d215c_2[4];
    local_58.y = local_38.mPos.y + data_ov019_020d215c_2[5];
    local_5c.x = local_38.mPos.x;
    local_5c.y = local_38.mPos.y;

    this->mUnk_1064.func_0201e874(0x14, &local_58, &local_5c, 6);
    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0B = false;
    this->mUnk_1064.mUnk_0C = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }

    Vec2s local_60;
    func_0201e8d4(&local_60, &this->mUnk_1064);
    this->mUnk_0024.mUnk_004.x = local_60.x;
    this->mUnk_0024.mUnk_004.y = local_60.y;

    Vec2s local_44;
    local_44.x = data_ov019_020d215c_2[6];
    local_44.y = data_ov019_020d215c_2[7];
    Vec2s local_68;
    func_ov000_02062e44(&local_68, &this->mUnk_1388);

    Vec2s local_64;
    local_64.x             = local_68.x + data_ov019_020d215c_2[8];
    local_64.y             = local_68.y + data_ov019_020d215c_2[9];
    this->mUnk_1388.mPos.x = local_64.x;
    this->mUnk_1388.mPos.y = local_64.y;
    Vec2s auStack_6c;
    func_ov000_02062e44(&auStack_6c, &this->mUnk_1388);
    this->mUnk_1420.func_ov000_02064080(&auStack_6c, &local_44, 0x14, 2);

    Vec2s local_74;
    func_ov000_02062e44(&local_74, &this->mUnk_16AC);
    Vec2s local_70;
    local_70.x             = local_74.x + data_ov019_020d215c_2[10];
    local_70.y             = local_74.y + data_ov019_020d215c_2[11];
    this->mUnk_16AC.mPos.x = local_70.x;
    this->mUnk_16AC.mPos.y = local_70.y;
    Vec2s auStack_78;
    func_ov000_02062e44(&auStack_78, &this->mUnk_16AC);
    this->mUnk_1744.func_ov000_02064080(&auStack_78, &local_44, 0x14, 6);

    Vec2s local_80;
    func_ov000_02062e44(&local_80, &this->mUnk_19D0);
    Vec2s local_7c;
    local_7c.x             = local_80.x + data_ov019_020d215c_2[12];
    local_7c.y             = local_80.y + data_ov019_020d215c_2[13];
    this->mUnk_19D0.mPos.x = local_7c.x;
    this->mUnk_19D0.mPos.y = local_7c.y;
    Vec2s auStack_84;
    func_ov000_02062e44(&auStack_84, &this->mUnk_19D0);
    this->mUnk_1A68.func_ov000_02064080(&auStack_84, &local_44, 0x14, 4);
}

ARM void FileSelectOptions::func_ov019_020cd16c() {
    u16 uVar1;
    u16 uVar2;
    Vec2s local_6c;
    Vec2s local_64;
    Vec2s local_5c;
    Vec2s local_58;
    Vec2s local_54;
    Vec2s local_50;
    Vec2s local_4c;
    Vec2s local_48;
    Vec2s local_44;
    Vec2s local_40;
    Vec2s local_38;

    func_ov000_02062e44(&local_38, &this->mUnk_10A8);
    func_ov000_02062e44(&local_48, &this->mUnk_10A8);
    local_50.x = local_48.x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_04.x;
    local_50.y = local_48.y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_04.y;
    local_4c.x = local_38.x;
    local_4c.y = local_38.y;
    this->mUnk_1344.func_0201e874(0xf, &local_4c, &local_50, 7);
    uVar1                   = this->mUnk_1344.mUnk_04;
    uVar2                   = this->mUnk_1344.mUnk_06;
    this->mUnk_1344.mUnk_0A = true;
    this->mUnk_1344.mUnk_0C = false;
    this->mUnk_1344.mUnk_0B = false;
    if (uVar1 == uVar2) {
        this->mUnk_1344.mUnk_0A = false;
        this->mUnk_1344.mUnk_0C = true;
    }

    UnkStruct_ov019_020d24c8_28_258 local_34(0x8C, 0x00);
    local_58.x = local_34.mPos.x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_08.x;
    local_58.y = local_34.mPos.y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_08.y;
    local_54.y = local_34.mPos.y;
    local_54.x = local_34.mPos.x;
    this->mUnk_1064.func_0201e874(0x14, &local_54, &local_58, 7);

    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0B = false;
    this->mUnk_1064.mUnk_0C = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }

    this->mUnk_1064.mUnk_08 = 6;
    local_40.x              = UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_0C.x;
    local_40.y              = UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_0C.y;

    func_ov000_02062e44(&local_5c, &this->mUnk_1388);
    local_44.x = local_5c.x + data_ov019_020d2170.mUnk_14.x;
    local_44.y = local_5c.y + data_ov019_020d2170.mUnk_14.y;
    this->mUnk_1420.func_ov000_02064080(&local_44, &local_40, 0x14, 4);

    func_ov000_02062e44(&local_64, &this->mUnk_16AC);
    local_44.x = local_64.x + data_ov019_020d2170.mUnk_0C.x;
    local_44.y = local_64.y + data_ov019_020d2170.mUnk_0C.y;
    this->mUnk_1744.func_ov000_02064080(&local_44, &local_40, 0x14, 0);

    func_ov000_02062e44(&local_6c, &this->mUnk_19D0);
    local_44.x = local_6c.x + data_ov019_020d2170.mUnk_04.x;
    local_44.y = local_6c.y + data_ov019_020d2170.mUnk_04.y;
    this->mUnk_1A68.func_ov000_02064080(&local_44, &local_40, 0x14, 2);
}

ARM void FileSelectOptions::func_ov019_020cd41c() {
    Vec2s_cpp local_40;
    Vec2us_cpp local_3c;
    UnkStruct_ov019_020d24c8_28_258 local_34(0x8C, 0x00);

    local_40.x = local_34.mPos.x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.x;
    local_40.y = local_34.mPos.y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.y;
    local_3c   = local_34.mPos;
    this->mUnk_1064.func_0201e874(0x0C, &local_3c, &local_40, 0);
    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0C = false;
    this->mUnk_1064.mUnk_0B = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }

    Vec2s_cpp local_44;
    Vec2s_cpp local_30;
    func_ov000_02062e44(&local_44, &this->mUnk_1388);
    local_30.x = local_44.x + data_ov019_020d2170.mUnk_10.x;
    local_30.y = local_44.y + data_ov019_020d2170.mUnk_10.y;
    this->mUnk_1420.func_ov000_0206415c(&local_30, 0, 0x0C, 0);

    Vec2s_cpp local_4c;
    Vec2s_cpp local_2c;
    func_ov000_02062e44(&local_4c, &this->mUnk_16AC);
    local_2c.x = local_4c.x + data_ov019_020d2170.mUnk_08.x;
    local_2c.y = local_4c.y + data_ov019_020d2170.mUnk_08.y;
    this->mUnk_1744.func_ov000_0206415c(&local_2c, 0, 0x0C, 0);

    Vec2s_cpp local_54;
    Vec2s_cpp local_38;
    func_ov000_02062e44(&local_54, &this->mUnk_19D0);
    local_38.x = local_54.x + data_ov019_020d2170.mUnk_00.x;
    local_38.y = local_54.y + data_ov019_020d2170.mUnk_00.y;
    this->mUnk_1A68.func_ov000_0206415c(&local_38, 0, 0x0C, 0);
}

ARM void FileSelectOptions::func_ov019_020cd5f8() {
    gpFSOptionsManager->func_ov019_020cc85c(1);
}

ARM void FileSelectOptions::func_ov019_020cd614() {
    Vec2us_cpp local_34;
    Vec2s_cpp local_38;
    Vec2us_cpp local_3c;
    Vec2us_cpp local_40;
    Vec2us_cpp local_44;

    UnkStruct_ov019_020d24c8_28_258 local_30(0x8C, 0);

    local_38.x = local_30.mPos.x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.x;
    local_38.y = local_30.mPos.y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.y;
    local_3c   = local_30.mPos;

    this->mUnk_1064.func_0201e874(0x0C, &local_38, &local_3c, 0);
    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0B = false;
    this->mUnk_1064.mUnk_0C = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }
    this->mUnk_1064.mUnk_08 = 0;

    func_ov000_02062e44(&local_34, &this->mUnk_1388);
    this->mUnk_1420.func_ov000_0206415c(&local_34, 0, 0xc, 0);

    func_ov000_02062e44(&local_40, &this->mUnk_16AC);
    local_34 = local_40;
    this->mUnk_1744.func_ov000_0206415c(&local_34, 0, 0xc, 0);

    func_ov000_02062e44(&local_44, &this->mUnk_19D0);
    local_34 = local_44;
    this->mUnk_1A68.func_ov000_0206415c(&local_34, 0, 0xc, 0);
}

ARM void FileSelectOptions::func_ov019_020cd788() {
    data_ov000_020b504c.mUnk_030 = this->mUnk_0024.mUnk_FC0;

    UnkStruct_ov000_02067bc4::UnkStruct1 stack1;
    data_ov000_020b504c.func_ov000_02067cf8(0x00020025, 0, &stack1);

    this->mUnk_0024.func_ov019_020ce7d4(0);
    this->mUnk_1388.mUnk_2A = false;
    this->mUnk_16AC.mUnk_2A = false;
    this->mUnk_19D0.mUnk_2A = false;
}

ARM void FileSelectOptions::func_ov019_020cd7f8() {
    switch (data_0204a110.func_01ff9b50()) {
        case 0x05:
            SaveSub17 *pSaveSub17        = gSaveManager.GetSaveSlot(this->mUnk_0024.mSaveSlotIndex)->Get2600Ptr();
            data_0204a110.mUnk_000       = pSaveSub17->mUnk_02;
            data_ov000_020b504c.mUnk_030 = pSaveSub17->mUnk_00;
            data_ov000_020b50c0.func_ov000_0206a6a4(pSaveSub17->mUnk_01);
            data_0204a088->func_ov000_020611fc(0);
            data_ov000_020b5214.func_ov000_0206db44(0x2E);
            break;
        case 0x4B:
            this->func_ov019_020cde8c(FSOptionsState_OptionsToMicTest);
            data_ov000_020b5214.func_ov000_0206db44(0x2C);
            break;
        case 0x4A:
            this->func_ov019_020cde8c(FSOptionsState_SaveSettings);
            data_ov000_020b5214.func_ov000_0206db44(0x2D);
            break;
        default:
            break;
    }

    this->mUnk_0024.func_ov019_020ce414();
}

ARM void FileSelectOptions::func_ov019_020cd8d4() {
    this->mUnk_1064.UnkOperations(&this->mUnk_0024.mUnk_004, true);
    this->mUnk_1420.func_ov000_02063f64();
    this->mUnk_1744.func_ov000_02063f64();
    this->mUnk_1A68.func_ov000_02063f64();
    this->mUnk_1344.UnkOperations(&this->mUnk_10A8.mPos, true);
}

ARM bool FileSelectOptions::func_ov019_020cdbdc() {
    if (!this->mUnk_1064.mUnk_0A && !this->mUnk_1420.mUnk_08 && !this->mUnk_1744.mUnk_08 && !this->mUnk_1A68.mUnk_08) {
        return true;
    }

    return false;
}

ARM void FileSelectOptions::func_ov019_020cdc0c() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->func_ov019_020cde8c(FSOptionsState_Idle);
    }
}

ARM void FileSelectOptions::func_ov019_020cdc38() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->mUnk_0020 = 1;
    }
}

ARM void FileSelectOptions::func_ov019_020cdc5c() {}

ARM void FileSelectOptions::func_ov019_020cdc60() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->func_ov019_020cde8c(FSOptionsState_MicTestIdle);
    }
}

ARM void FileSelectOptions::func_ov019_020cdc8c() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->func_ov019_020cde8c(FSOptionsState_Idle);
    }
}

ARM void FileSelectOptions::func_ov019_020cdcb8() {
    if (this->mUnk_1CF5) {
        if (gSaveManager.mUnk_210 == 0 ? 1 : 0) {
            data_ov000_020b504c.func_ov000_02067e60(this->mUnk_1CF4, 0);
            data_0204a088->func_ov000_020611fc(0);
            data_ov000_020b5214.func_ov000_0206db44(0x1F);
        }
    } else {
        UnkStruct_ov000_02067bc4 *ptr = data_ov000_020b504c.func_ov000_02067bc4(0);

        if (ptr->vfunc_08() == 0 ? true : false) {
            if (data_ov000_020b504c.func_ov000_020682c0(0) == 0) {
                SaveSub17 *pSaveSub17 = gSaveManager.GetSaveSlot(this->mUnk_0024.mSaveSlotIndex)->Get2600Ptr();
                pSaveSub17->mUnk_00   = this->mUnk_0024.mUnk_FC0;
                pSaveSub17->mUnk_01   = this->mUnk_0024.mUnk_FC1;
                pSaveSub17->mUnk_02   = this->mUnk_0024.mUnk_FC2;
                gSaveManager.mpSaveFile->mSaveSlotIndex = this->mUnk_0024.mSaveSlotIndex;
                gSaveManager.func_ov019_020d08fc(2, SaveFile::func_ov019_020d13b8);

                UnkStruct_ov000_02067bc4::UnkStruct1 stack1;
                this->mUnk_1CF4 = data_ov000_020b504c.func_ov000_02067cf8(0x00020032, 0, &stack1);

                data_ov000_020b504c.func_ov000_02067bc4(0)->func_02021bec(1);
                data_0204a110.mUnk_000 = this->mUnk_0024.mUnk_FC2;
                this->mUnk_1CF5        = true;
            } else {
                data_ov000_020b504c.mUnk_030 = gSaveManager.GetSaveSlot(this->mUnk_0024.mSaveSlotIndex)->Get2600Ptr()->mUnk_00;
                this->func_ov019_020cde8c(FSOptionsState_Idle);
            }
        }
    }
}

ARM void FileSelectOptions::func_ov019_020cde8c(FSOptionsState state) {
    this->mState = state;
    this->func_ov019_020ccd40();
}

ARM void FileSelectOptions::func_ov019_020cde9c() {
    this->func_ov019_020cde8c(FSOptionsState_OptionsFromMicTest);
}

ARM UnkStruct_ov019_020d24c8_2C_24::UnkStruct_ov019_020d24c8_2C_24(GameModeManagerBase_104_0C *param1, s32 saveSlotIndex) :
    mSaveSlotIndex(saveSlotIndex),
    mUnk_004((Vec2s) {0, 0}),
    mUnk_008(0, 0),
    mUnk_020(0x8C, 1),
    mUnk_258(0x8C, 4),
    mUnk_490(0x4C, 0x8C, 0x03, 0x0A, 0x8C, 0x06),
    mUnk_4F0(0x4D, 0x8C, 0x06, 0x09, 0x8C, 0x03),
    mUnk_550(0x8C, 2),
    mUnk_788(0x8C, 5),
    mUnk_9C0(0x4E, 0x8C, 0x04, 0x0A, 0x8C, 0x07),
    mUnk_A20(0x4F, 0x8C, 0x07, 0x09, 0x8C, 0x04),
    mUnk_A80(0x8C, 6),
    mUnk_CB8(0x8C, 3),
    mUnk_EF0(0x50, 0x8C, 0x02, 0x0A, 0x8C, 0x05),
    mUnk_F50(0x51, 0x8C, 0x05, 0x09, 0x8C, 0x02),
    mUnk_FB0(NULL),
    mUnk_FB4(NULL),
    mUnk_FB8(NULL),
    mUnk_FBC(NULL) {

    SaveSub17 *pSaveSub17 = gSaveManager.GetSaveSlot(this->mSaveSlotIndex)->Get2600Ptr();
    this->mUnk_FC0        = pSaveSub17->mUnk_00;
    this->mUnk_FC1        = pSaveSub17->mUnk_01;
    this->mUnk_FC2        = pSaveSub17->mUnk_02;
    this->mUnk_103E       = pSaveSub17[1].mUnk_00;

    param1->mUnk_04.mUnk_00.func_020166cc(&this->mUnk_490.mUnk_04);
    param1->mUnk_04.mUnk_00.func_020166cc(&this->mUnk_4F0.mUnk_04);
    param1->mUnk_04.mUnk_00.func_020166cc(&this->mUnk_9C0.mUnk_04);
    param1->mUnk_04.mUnk_00.func_020166cc(&this->mUnk_A20.mUnk_04);
    param1->mUnk_04.mUnk_00.func_020166cc(&this->mUnk_EF0.mUnk_04);
    param1->mUnk_04.mUnk_00.func_020166cc(&this->mUnk_F50.mUnk_04);

    this->mUnk_490.mPosOffset.x = 0;
    this->mUnk_490.mPosOffset.y = 0;
    this->mUnk_490.mUnk_2C      = true;

    this->mUnk_4F0.mPosOffset.x = 0;
    this->mUnk_4F0.mPosOffset.y = 0;
    this->mUnk_4F0.mUnk_2C      = true;

    this->mUnk_9C0.mPosOffset.x = 0;
    this->mUnk_9C0.mPosOffset.y = 0;
    this->mUnk_9C0.mUnk_2C      = true;

    this->mUnk_A20.mPosOffset.x = 0;
    this->mUnk_A20.mPosOffset.y = 0;
    this->mUnk_A20.mUnk_2C      = true;

    this->mUnk_EF0.mPosOffset.x = 0;
    this->mUnk_EF0.mPosOffset.y = 0;
    this->mUnk_EF0.mUnk_2C      = true;

    this->mUnk_F50.mPosOffset.x = 0;
    this->mUnk_F50.mPosOffset.y = 0;
    this->mUnk_F50.mUnk_2C      = true;

    if (this->mUnk_FB0 != NULL) {
        delete this->mUnk_FB0;
    }

    this->mUnk_FB0             = new(HeapIndex_1) UnkStruct_ov019_020d24c8_2C_24_FB0();
    this->mUnk_FB4             = this->mUnk_FB0 + 1;
    this->mUnk_FB0->mUnk_00[0] = &this->mUnk_020;
    this->mUnk_FB0->mUnk_00[1] = &this->mUnk_258;
    this->mUnk_FB0->mUnk_00[2] = &this->mUnk_550;
    this->mUnk_FB0->mUnk_00[3] = &this->mUnk_788;
    this->mUnk_FB0->mUnk_00[4] = &this->mUnk_A80;
    this->mUnk_FB0->mUnk_00[5] = &this->mUnk_CB8;

    if (this->mUnk_FB8 != NULL) {
        delete this->mUnk_FB8;
    }

    this->mUnk_FB8             = new(HeapIndex_1) UnkStruct_ov019_020d24c8_2C_24_FB8();
    this->mUnk_FBC             = this->mUnk_FB8 + 1;
    this->mUnk_FB8->mUnk_00[0] = &this->mUnk_490;
    this->mUnk_FB8->mUnk_00[1] = &this->mUnk_4F0;
    this->mUnk_FB8->mUnk_00[2] = &this->mUnk_9C0;
    this->mUnk_FB8->mUnk_00[3] = &this->mUnk_A20;
    this->mUnk_FB8->mUnk_00[4] = &this->mUnk_EF0;
    this->mUnk_FB8->mUnk_00[5] = &this->mUnk_F50;

    this->mUnk_020.func_0201f730(0x0002000E);
    this->mUnk_550.func_0201f730(0x0002000C);
    this->mUnk_A80.func_0201f730(0x00020009);

    this->mUnk_258.func_0201f730(this->func_ov019_020ce704(this->mUnk_FC0));
    this->mUnk_788.func_0201f730(this->func_ov019_020ce74c(this->mUnk_FC1));
    this->mUnk_CB8.func_0201f730(this->func_ov019_020ce7a0(this->mUnk_FC2));

    for (int i = 0; i < ARRAY_LEN(this->mUnk_FB0->mUnk_00); i++) {
        func_ov000_020623d8(this->mUnk_FB0->mUnk_00[i]->mUnk_00C, 2);
    }
}

ARM UnkStruct_ov019_020d24c8_2C_24::~UnkStruct_ov019_020d24c8_2C_24() {
    this->mUnk_CB8.func_0201f498();
    this->mUnk_788.func_0201f498();
    this->mUnk_258.func_0201f498();
    this->mUnk_A80.func_0201f498();
    this->mUnk_550.func_0201f498();
    this->mUnk_020.func_0201f498();

    if (this->mUnk_FB8 != NULL) {
        delete this->mUnk_FB8;
    }

    if (this->mUnk_FB0 != NULL) {
        delete this->mUnk_FB0;
    }
}

ARM void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce414() {
    switch (data_0204a110.func_01ff9b50()) {
        case 0x4C:
            this->func_ov019_020ce61c(1);
            data_ov000_020b5214.func_ov000_0206db44(0x2A);
            break;
        case 0x4D:
            this->func_ov019_020ce61c(0);
            data_ov000_020b5214.func_ov000_0206db44(0x2A);
            break;
        case 0x4E:
            this->func_ov019_020ce668(1);
            data_ov000_020b5214.func_ov000_0206db44(0x2B);
            break;
        case 0x4F:
            this->func_ov019_020ce668(0);
            data_ov000_020b5214.func_ov000_0206db44(0x2B);
            break;
        case 0x50:
        case 0x51:
            this->func_ov019_020ce6c8();
            data_ov000_020b5214.func_ov000_0206db44(0x2A);
            break;
        default:
            break;
    }
}

// non-matching
ARM void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce4dc() {
    for (int i = 0; i < ARRAY_LEN(this->mUnk_FB0->mUnk_00); i++) {
        UnkSystem2_UnkSubSystem5 *ptr = this->mUnk_FB0->mUnk_00[i];
        Vec2s local_2c;

        local_2c.x = this->mUnk_004.x;
        local_2c.y = this->mUnk_004.y;

        local_2c.x += ptr->mUnk_144;
        local_2c.y += ptr->mUnk_146;

        local_2c.x -= this->mUnk_008.mPos.x;
        local_2c.y -= this->mUnk_008.mPos.y;

        ptr->mUnk_140 = local_2c.x;
        ptr->mUnk_142 = local_2c.y;

        ptr->func_0201f4b4(0);
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_FB8->mUnk_00); i++) {
        UnkSystem2_UnkSubSystem1_Derived1 *ptr = this->mUnk_FB8->mUnk_00[i];
        Vec2s local_2c;
        Vec2s local_30;

        local_2c.x = this->mUnk_008.mPos.x;
        local_2c.y = this->mUnk_008.mPos.y;

        func_ov000_02062e44(&local_30, ptr);

        ptr->mPos.x = this->mUnk_004.x + local_30.x + local_2c.x;
        ptr->mPos.y = this->mUnk_004.y + local_30.y + local_2c.y;
    }

    u8 auStack_28[8];
    auStack_28[6] = 0;
    Fill32(0, auStack_28, 8);
    auStack_28[7] = 0xFF;
    auStack_28[6] |= 4;
    data_0204af1c.func_0201aa44(&this->mUnk_008, &this->mUnk_004, 2, auStack_28);
}

ARM void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce61c(bool decrement) {
    int uVar2;

    if (decrement) {
        uVar2 = this->mUnk_FC0 - 1;
    } else {
        uVar2 = this->mUnk_FC0 + 1;
    }

    if (uVar2 < 0) {
        uVar2 = 2;
    } else if (uVar2 > 2) {
        uVar2 = 0;
    }

    this->mUnk_258.func_0201fa70(this->func_ov019_020ce704(this->mUnk_FC0 = uVar2));
}

ARM void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce668(bool decrement) {
    int uVar2;

    if (decrement) {
        uVar2 = this->mUnk_FC1 - 1;
    } else {
        uVar2 = this->mUnk_FC1 + 1;
    }

    if (uVar2 < 0) {
        uVar2 = 3;
    } else if (uVar2 > 3) {
        uVar2 = 0;
    }

    this->mUnk_788.func_0201fa70(this->func_ov019_020ce74c(this->mUnk_FC1 = uVar2));
    data_ov000_020b50c0.func_ov000_0206a6a4(this->mUnk_FC1);
}

ARM void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce6c8() {
    this->mUnk_FC2 = this->mUnk_FC2 == 0 ? 1 : 0;
    this->mUnk_CB8.func_0201fa70(this->func_ov019_020ce7a0(this->mUnk_FC2));
}

ARM unk32 UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce704(u8 param1) {
    switch (param1) {
        case 0:
            return 0x0002004C;
        case 1:
            return 0x0002004B;
        case 2:
            return 0x0002004A;
        default:
            break;
    }

    return 0;
}

ARM unk32 UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce74c(u8 param1) {
    switch (param1) {
        case 0:
            return 0x00020050;
        case 1:
            return 0x0002004F;
        case 2:
            return 0x0002004D;
        case 3:
            return 0x0002004E;
        default:
            break;
    }

    return 0;
}

ARM unk32 UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce7a0(u8 param1) {
    switch (param1) {
        case 0:
            return 0x00020049;
        case 1:
            return 0x00020048;
        default:
            break;
    }

    return 0;
}

ARM void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce7d4(unk32 param1) {
    if (param1 != 0) {
        for (int i = 0; i < ARRAY_LEN(this->mUnk_FB8->mUnk_00); i++) {
            this->mUnk_FB8->mUnk_00[i]->mUnk_2A = 1;
        }
    } else {
        for (int i = 0; i < ARRAY_LEN(this->mUnk_FB8->mUnk_00); i++) {
            this->mUnk_FB8->mUnk_00[i]->mUnk_2A = 0;
        }
    }
}
