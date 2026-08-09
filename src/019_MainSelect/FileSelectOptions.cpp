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
void func_ov000_020623d8(void *param1, unk32 param2);
};

class UnkStruct_ov019_020d215c {
public:
    /* 00 */ Vec2sC mUnk_00;
    /* 04 */ Vec2sC mUnk_04;
    /* 08 */ Vec2sC mUnk_08;
    /* 0C */ Vec2sC mUnk_0C;
    /* 10 */ Vec2sC mUnk_10;
    /* 14 */
};

class UnkStruct_ov019_020d2170 {
public:
    /* 14 */ Vec2s mUnk_00;
    /* 18 */ Vec2s mUnk_04;
    /* 1C */ Vec2s mUnk_08;
    /* 20 */ Vec2s mUnk_0C;
    /* 24 */ Vec2s mUnk_10;
    /* 28 */ Vec2s mUnk_14;
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
    {0, 0}, {0, 0}, {0, 0}, {-0x47, -0x01}, {0x0281, 0x00},
};

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

GameModeManagerBase_104 *FileSelectOptionsManager::Create(void *param1, s32 saveSlotIndex) {
    return new(HeapIndex_1) FileSelectOptionsManager(param1, saveSlotIndex);
}

//! TODO: move to class
FileSelectOptionsManager::FileSelectOptionsManager(void *param1, s32 saveSlotIndex) {
    this->mUnk_24   = (GameModeManagerBase_104 *) param1;
    this->mUnk_1C   = 0;
    this->mUnk_20   = 0;
    this->mpMicTest = new(HeapIndex_1) FileSelectMicTest();

    FileSelectOptions *var_r5 = new(HeapIndex_1) FileSelectOptions(saveSlotIndex);
    this->mpOptions           = var_r5;
    this->mUnk_24->Append(var_r5);
    var_r5->vfunc_18();
}

FileSelectOptionsManager::~FileSelectOptionsManager() {
    DELETE(this->mpMicTest);
    DELETE(this->mpOptions);
}

void FileSelectOptionsManager::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    if (this->mUnk_20 == 0) {
        return;
    }

    this->mUnk_20 = 0;

    switch (this->mUnk_1C) {
        case 0:
            FileSelectOptions *pFVar4 = this->mpOptions;
            this->mUnk_24->Append(pFVar4);
            pFVar4->vfunc_18();
            this->mpOptions->func_ov019_020cde9c();
            this->mpMicTest->Detach();
            break;
        case 1:
            FileSelectMicTest *pFVar5 = this->mpMicTest;
            this->mUnk_24->Append(pFVar5);
            pFVar5->vfunc_18();
            this->mpMicTest->func_ov019_020cefe4();
            this->mpOptions->Detach();
            break;
        case 2:
            this->mpOptions->func_ov019_020ccdf4();
            break;
        default:
            break;
    }
}

void FileSelectOptionsManager::func_ov019_020cc85c(unk32 param1) {
    if (this->mUnk_1C != param1) {
        this->mUnk_1C = param1;
        this->mUnk_20 = 1;
    }
}

unk32 FileSelectOptionsManager::func_ov019_020cc874() {
    return this->mpOptions->mUnk_0020;
}

FileSelectOptions::FileSelectOptions(s32 saveSlotIndex) :
    mState(FSOptionsState_OptionsFromChooseMode),
    mUnk_0020(false),
    mUnk_0024(&this->mUnk_0C, saveSlotIndex),

    mUnk_10A8(BTN_ID_NONE, 0x8C, 0x01, 0x01, 0x8C, 0x01),
    mUnk_1108(&mUnk_10A8, 0x8C, 0x00, BMG_ID(BMGGroup_select, 0x10)),

    mUnk_1388(BTN_ID_FILE_SELECT_MIC_TEST, 0x8C, 0x08, 0x14, 0x8C, 0x01),
    mUnk_1420(&mUnk_1388),
    mUnk_1470(&mUnk_1388, 0x8C, 0x07, BMG_ID(BMGGroup_select, 0x0B)),

    mUnk_16AC(BTN_ID_FILE_SELECT_CONFIRM, 0x8C, 0x0B, 0x12, 0x8C, 0x00),
    mUnk_1744(&mUnk_16AC),
    mUnk_1794(&mUnk_16AC, 0x8C, 0x08, BMG_ID(BMGGroup_select, 0x08)),

    mUnk_19D0(BTN_ID_RETURN, 0x8C, 0x0C, 0x13, 0x8C, 0x08),
    mUnk_1A68(&mUnk_19D0),
    mUnk_1AB8(&mUnk_19D0, 0x8C, 0x09, BMG_ID(BMGGroup_select, 0x07)) {
    this->mUnk_1CF5 = false;
    this->mUnk_0C.Append(&this->mUnk_10A8);
    this->mUnk_0C.Append(&this->mUnk_19D0);
    this->mUnk_0C.Append(&this->mUnk_1388);
    this->mUnk_0C.Append(&this->mUnk_16AC);
    this->mUnk_10A8.mUnk_2A = false;
    this->mUnk_1388.mUnk_2C = true;
    this->mUnk_16AC.mUnk_2C = true;
    this->mUnk_19D0.mUnk_2C = true;
    func_ov000_020623d8(this->mUnk_1470.mUnk_04.mUnk_00C, 2);
    func_ov000_020623d8(this->mUnk_1794.mUnk_04.mUnk_00C, 2);
    func_ov000_020623d8(this->mUnk_1AB8.mUnk_04.mUnk_00C, 2);
    this->func_ov019_020ccd40();
}

FileSelectOptions::~FileSelectOptions() {
    this->mUnk_1AB8.mUnk_04.func_0201f498();
    this->mUnk_1794.mUnk_04.func_0201f498();
    this->mUnk_1470.mUnk_04.func_0201f498();
    this->mUnk_1108.mUnk_04.func_0201f498();
}

void FileSelectOptions::func_ov019_020ccd40() {
    CALL_PTMF(PTMF<FileSelectOptions>, data_ov019_020d21c0[this->mState]);
}

void FileSelectOptions::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    CALL_PTMF(PTMF<FileSelectOptions>, data_ov019_020d2188[this->mState]);
}

void FileSelectOptions::vfunc_10(unk8 *param1) {
    this->mUnk_0024.func_ov019_020ce4dc();
    this->mUnk_1108.func_ov000_02062f30();
    this->mUnk_1794.func_ov000_02062f30();
    this->mUnk_1AB8.func_ov000_02062f30();
    this->mUnk_1470.func_ov000_02062f30();
}

void FileSelectOptions::func_ov019_020ccdf4() {
    this->func_ov019_020cde8c(FSOptionsState_OptionsToChooseMode);
}

void FileSelectOptions::func_ov019_020cce04() {
    this->mUnk_0024.func_ov019_020ce7d4(1);
    this->mUnk_1388.mUnk_2A = true;
    this->mUnk_16AC.mUnk_2A = true;
    this->mUnk_19D0.mUnk_2A = true;
}

extern s16 data_ov019_020d215c_2[];

void FileSelectOptions::func_ov019_020cce30() {
    u32 local_44[2];
    Vec2s local_48;
    Vec2s local_4c;
    Vec2s local_3c;
    Vec2us local_54;
    Vec2s local_5c;
    Vec2s local_50;
    Vec2us local_7c_d86;
    Vec2us local_60;
    Vec2s local_58;
    Vec2s local_68;
    Vec2s auStack_6c;
    Vec2s local_70;
    Vec2s local_74;
    Vec2us auStack_78;
    Vec2us local_64;
    Vec2s local_80;
    Vec2s auStack_84;


    Vec2s *p48 = (Vec2s *) &local_48;
    func_ov000_02062e44(p48, &this->mUnk_10A8);
    Vec2us sVar2_1;
    sVar2_1.y = p48->y + data_ov019_020d215c_2[3];
    sVar2_1.x = p48->x + data_ov019_020d215c_2[2];

    func_ov000_02062e44(&local_3c, &this->mUnk_10A8);

    local_50 = local_3c;

    local_4c.x = sVar2_1.x;
    local_4c.y = sVar2_1.y;

    this->mUnk_1344.func_0201e874(BTN_ID_FILE_SELECT_UNK_0F, &local_4c, &local_50, 6);
    this->mUnk_1344.mUnk_0A = true;
    this->mUnk_1344.mUnk_0B = false;
    this->mUnk_1344.mUnk_0C = false;
    if (this->mUnk_1344.mUnk_04 == this->mUnk_1344.mUnk_06) {
        this->mUnk_1344.mUnk_0A = false;
        this->mUnk_1344.mUnk_0C = true;
    }

    func_0201e8d4(&local_54, &this->mUnk_1344);
    this->mUnk_10A8.mPos.y = local_54.y;
    this->mUnk_10A8.mPos.x = local_54.x;

    UnkStruct_ov019_020d24c8_28_258 local_38(0x8C, 0x00);
    local_5c.x = local_38.mPos.x;
    local_58.y = local_38.mPos.y + data_ov019_020d215c_2[5];
    local_58.x = local_38.mPos.x + data_ov019_020d215c_2[4];
    local_5c.y = local_38.mPos.y;

    this->mUnk_1064.func_0201e874(BTN_ID_FILE_SELECT_UNK_14, &local_58, &local_5c, 6);
    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0B = false;
    this->mUnk_1064.mUnk_0C = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }

    func_0201e8d4(&local_60, &this->mUnk_1064);
    local_44[0] = *(u32 *) &data_ov019_020d215c_2[8];
    this->mUnk_0024.mUnk_004.y = local_60.y;
    this->mUnk_0024.mUnk_004.x = local_60.x;

    local_44[1] = *(u32 *) &data_ov019_020d215c_2[6];
    Vec2s *p_local_68 = (Vec2s *) &local_68;
    func_ov000_02062e44(p_local_68, &this->mUnk_1388);

    local_64.x             = data_ov019_020d215c_2[20] + p_local_68->x;
    local_64.y             = data_ov019_020d215c_2[21] + p_local_68->y;
    this->mUnk_1388.mPos.x = local_64.x;
    this->mUnk_1388.mPos.y = local_64.y;
    func_ov000_02062e44(&auStack_6c, &this->mUnk_1388);
    this->mUnk_1420.func_ov000_02064080(&auStack_6c, local_44, 0x14, 2);

    Vec2s *p_local_74 = (Vec2s *) &local_74;
    func_ov000_02062e44(p_local_74, &this->mUnk_16AC);
    local_70.x                 = p_local_74->x + data_ov019_020d215c_2[16];
    local_70.y                 = p_local_74->y + data_ov019_020d215c_2[17];
    this->mUnk_16AC.mPos.coords = local_70.coords;
    func_ov000_02062e44(&auStack_78, &this->mUnk_16AC);
    this->mUnk_1744.func_ov000_02064080(&auStack_78, local_44, 0x14, 6);

    Vec2s *p_local_80 = (Vec2s *) &local_80;
    func_ov000_02062e44(p_local_80, &this->mUnk_19D0);
    local_64.x             = p_local_80->x + data_ov019_020d215c_2[12];
    local_64.y             = p_local_80->y + data_ov019_020d215c_2[13];
    // Read back through the cast: a whole-object .coords copy emits two extra
    // stores, while plain field reads let MWCC forward and drop the reload.
    local_7c_d86.x         = ((Vec2us *) &local_64)->x;
    local_7c_d86.y         = ((Vec2us *) &local_64)->y;
    this->mUnk_19D0.mPos.y = local_7c_d86.y;
    this->mUnk_19D0.mPos.x = local_64.x;
    func_ov000_02062e44(&auStack_84, &this->mUnk_19D0);
    this->mUnk_1A68.func_ov000_02064080(&auStack_84, local_44, 0x14, 4);
}

void FileSelectOptions::func_ov019_020cd16c() {
    Vec2s local_38;
    u32 local_40[2];

    int uVar1;
    int uVar2;

    Vec2s local_44;
    Vec2s local_48;
    Vec2s local_4c;
    Vec2s local_50;
    Vec2s local_54;
    Vec2s local_58;
    Vec2s local_5c;
    Vec2s cs0;
    Vec2s local_64;

    func_ov000_02062e44(&local_38, &this->mUnk_10A8);
    Vec2s *p48 = (Vec2s *) &local_48;
    func_ov000_02062e44(p48, &this->mUnk_10A8);
    local_50.y = p48->y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_04.y;
    local_50.x = p48->x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_04.x;
    local_4c.x = local_38.x;
    local_4c.y = local_38.y;
    this->mUnk_1344.func_0201e874(BTN_ID_FILE_SELECT_UNK_0F, &local_4c, &local_50, 7);
    this->mUnk_1344.mUnk_0A = true;
    this->mUnk_1344.mUnk_0C = false;
    uVar1                   = this->mUnk_1344.mUnk_04;
    uVar2                   = this->mUnk_1344.mUnk_06;
    this->mUnk_1344.mUnk_0B = false;
    if (uVar1 == uVar2) {
        this->mUnk_1344.mUnk_0C = true;
        this->mUnk_1344.mUnk_0A = false;
    }

    UnkStruct_ov019_020d24c8_28_258 local_34(0x8C, 0x00);
    local_58.x = local_34.mPos.x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_08.x;
    local_58.y = local_34.mPos.y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_08.y;
    local_54.y = local_34.mPos.y;
    local_54.x = local_34.mPos.x;
    this->mUnk_1064.func_0201e874(BTN_ID_FILE_SELECT_UNK_14, &local_54, &local_58, 7);
    Vec2s *p_local_5c = (Vec2s *) &local_5c;

    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0B = false;
    this->mUnk_1064.mUnk_0C = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }

    this->mUnk_1064.mUnk_08 = 6;
    local_40[0] = *(u32 *) &UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_0C;
    local_40[1] = *(u32 *) &UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_10;

    func_ov000_02062e44(p_local_5c, &this->mUnk_1388);
    local_44.y = p_local_5c->y + data_ov019_020d2170.mUnk_14.y;
    local_44.x = p_local_5c->x + data_ov019_020d2170.mUnk_14.x;
    this->mUnk_1420.func_ov000_02064080(&local_44, local_40, 0x14, 4);

    Vec2s *p_local_64 = (Vec2s *) &local_64;
    func_ov000_02062e44(p_local_64, &this->mUnk_16AC);
    Vec2s cs1;
    Vec2s t2;
    Vec2s local_6c;
    cs0.x = p_local_64->x + data_ov019_020d2170.mUnk_0C.x;
    cs0.y = p_local_64->y + data_ov019_020d2170.mUnk_0C.y;
    t2.coords = cs0.coords;
    local_44.coords = t2.coords;
    this->mUnk_1744.func_ov000_02064080(&local_44, local_40, 0x14, 0);

    Vec2s *p_local_6c = (Vec2s *) &local_6c;
    func_ov000_02062e44(p_local_6c, &this->mUnk_19D0);
    Vec2s t3;
    cs1.x = p_local_6c->x + data_ov019_020d2170.mUnk_04.x;
    cs1.y = p_local_6c->y + data_ov019_020d2170.mUnk_04.y;
    t3.coords = cs1.coords;
    local_44.coords = t3.coords;
    this->mUnk_1A68.func_ov000_02064080(&local_44, local_40, 0x14, 2);
}

void FileSelectOptions::func_ov019_020cd41c() {
    Vec2s out;

    Vec2us local_3c;
    Vec2s local_40;

    UnkStruct_ov019_020d24c8_28_258 local_34(0x8C, 0x00);

    local_40.x = local_34.mPos.x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.x;
    local_40.y = local_34.mPos.y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.y;
    local_3c.y = local_34.mPos.y;
    local_3c.x = local_34.mPos.x;
    this->mUnk_1064.func_0201e874(BTN_ID_UNK_0C, &local_3c, &local_40, 0);
    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0C = false;
    this->mUnk_1064.mUnk_0B = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }


    Vec2s local_44;
    Vec2s *p44 = (Vec2s *) &local_44;
    func_ov000_02062e44(p44, &this->mUnk_1388);
    out.x = p44->x + data_ov019_020d2170.mUnk_10.x;
    out.y = p44->y + data_ov019_020d2170.mUnk_10.y;
    this->mUnk_1420.func_ov000_0206415c(&out, 0, 0x0C, 0);

    Vec2s t2;
    Vec2s local_44b;
    Vec2s *p44b = (Vec2s *) &local_44b;
    func_ov000_02062e44(p44b, &this->mUnk_16AC);
    t2.x = p44b->x + data_ov019_020d2170.mUnk_08.x;
    t2.y = p44b->y + data_ov019_020d2170.mUnk_08.y;
    out.coords = t2.coords;
    this->mUnk_1744.func_ov000_0206415c(&out, 0, 0x0C, 0);

    Vec2s cs1;
    Vec2s local_44c;
    Vec2s *p44c = (Vec2s *) &local_44c;
    func_ov000_02062e44(p44c, &this->mUnk_19D0);
    cs1.x = p44c->x + data_ov019_020d2170.mUnk_00.x;
    cs1.y = p44c->y + data_ov019_020d2170.mUnk_00.y;
    out.coords = cs1.coords;
    this->mUnk_1A68.func_ov000_0206415c(&out, 0, 0x0C, 0);
}

void FileSelectOptions::func_ov019_020cd5f8() {
    gpFSOptionsManager->func_ov019_020cc85c(1);
}

void FileSelectOptions::func_ov019_020cd614() {
    Vec2us local_34;
    Vec2s local_38;
    Vec2us local_3c;
    Vec2us local_40;
    Vec2us local_44;

    UnkStruct_ov019_020d24c8_28_258 local_30(0x8C, 0);

    local_38.x = local_30.mPos.x + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.x;
    local_38.y = local_30.mPos.y + UnkStruct_ov019_020d2170::data_ov019_020d215c.mUnk_00.y;
    local_3c.y = local_30.mPos.y;
    local_3c.x = local_30.mPos.x;

    this->mUnk_1064.func_0201e874(BTN_ID_UNK_0C, &local_38, &local_3c, 0);
    this->mUnk_1064.mUnk_0A = true;
    this->mUnk_1064.mUnk_0B = false;
    this->mUnk_1064.mUnk_0C = false;
    if (this->mUnk_1064.mUnk_04 == this->mUnk_1064.mUnk_06) {
        this->mUnk_1064.mUnk_0A = false;
        this->mUnk_1064.mUnk_0C = true;
    }
    this->mUnk_1064.mUnk_08 = 0;

    func_ov000_02062e44(&local_34, &this->mUnk_1388);
    this->mUnk_1420.func_ov000_0206415c(&local_34, 0, 0xC, 0);

    func_ov000_02062e44(&local_40, &this->mUnk_16AC);
    local_34 = local_40;
    this->mUnk_1744.func_ov000_0206415c(&local_34, 0, 0xC, 0);

    func_ov000_02062e44(&local_44, &this->mUnk_19D0);
    local_34 = local_44;
    this->mUnk_1A68.func_ov000_0206415c(&local_34, 0, 0xC, 0);
}

void FileSelectOptions::func_ov019_020cd788() {
    data_ov000_020b504c.mUnk_030 = this->mUnk_0024.mUnk_FC0;

    UnkTextStruct1 stack1(-1, 0);
    data_ov000_020b504c.func_ov000_02067cf8(0x00020025, 0, &stack1);

    this->mUnk_0024.func_ov019_020ce7d4(0);
    this->mUnk_1388.mUnk_2A = false;
    this->mUnk_16AC.mUnk_2A = false;
    this->mUnk_19D0.mUnk_2A = false;
}

void FileSelectOptions::func_ov019_020cd7f8() {
    switch (data_0204a110.func_01ff9b50()) {
        case BTN_ID_RETURN:
            SaveFile_00000_2600_Data *pSaveSub17 = gSaveManager.GetSaveSlot(this->mUnk_0024.mSaveSlotIndex)->Get2600Ptr();
            data_0204a110.mUnk_000               = pSaveSub17->unk_02;
            data_ov000_020b504c.mUnk_030         = pSaveSub17->unk_00;
            data_ov000_020b50c0.func_ov000_0206a6a4(pSaveSub17->unk_01);
            data_0204a088->func_ov000_020611fc(0);
            data_ov000_020b5214.func_ov000_0206db44(0x2E);
            break;
        case BTN_ID_FILE_SELECT_MIC_TEST:
            this->func_ov019_020cde8c(FSOptionsState_OptionsToMicTest);
            data_ov000_020b5214.func_ov000_0206db44(0x2C);
            break;
        case BTN_ID_FILE_SELECT_CONFIRM:
            this->func_ov019_020cde8c(FSOptionsState_SaveSettings);
            data_ov000_020b5214.func_ov000_0206db44(0x2D);
            break;
        default:
            break;
    }

    this->mUnk_0024.func_ov019_020ce414();
}

void FileSelectOptions::func_ov019_020cd8d4() {
    this->mUnk_1064.Update(&this->mUnk_0024.mUnk_004);
    this->mUnk_1420.func_ov000_02063f64();
    this->mUnk_1744.func_ov000_02063f64();
    this->mUnk_1A68.func_ov000_02063f64();
    this->mUnk_1344.Update(&this->mUnk_10A8.mPos);
}

bool FileSelectOptions::func_ov019_020cdbdc() {
    if (!this->mUnk_1064.mUnk_0A && !this->mUnk_1420.mUnk_08 && !this->mUnk_1744.mUnk_08 && !this->mUnk_1A68.mUnk_08) {
        return true;
    }

    return false;
}

void FileSelectOptions::func_ov019_020cdc0c() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->func_ov019_020cde8c(FSOptionsState_Idle);
    }
}

void FileSelectOptions::func_ov019_020cdc38() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->mUnk_0020 = 1;
    }
}

void FileSelectOptions::func_ov019_020cdc5c() {}

void FileSelectOptions::func_ov019_020cdc60() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->func_ov019_020cde8c(FSOptionsState_MicTestIdle);
    }
}

void FileSelectOptions::func_ov019_020cdc8c() {
    this->func_ov019_020cd8d4();

    if (this->func_ov019_020cdbdc()) {
        this->func_ov019_020cde8c(FSOptionsState_Idle);
    }
}

void FileSelectOptions::func_ov019_020cdcb8() {
    if (this->mUnk_1CF5) {
        if (gSaveManager.mUnk_210 == 0 ? 1 : 0) {
            data_ov000_020b504c.func_ov000_02067e60(this->mUnk_1CF4, 0);
            data_0204a088->func_ov000_020611fc(0);
            data_ov000_020b5214.func_ov000_0206db44(0x1F);
        }
    } else {
        UnkStruct_ov000_020b504c_0C_Base *ptr = data_ov000_020b504c.func_ov000_02067bc4(0);

        if (!ptr->vfunc_08() ? true : false) {
            if (data_ov000_020b504c.func_ov000_020682c0(0) == 0) {
                SaveFile_00000_2600_Data *pSaveSub17 = gSaveManager.GetSaveSlot(this->mUnk_0024.mSaveSlotIndex)->Get2600Ptr();
                pSaveSub17->unk_00                   = this->mUnk_0024.mUnk_FC0;
                pSaveSub17->unk_01                   = this->mUnk_0024.mUnk_FC1;
                pSaveSub17->unk_02                   = this->mUnk_0024.mUnk_FC2;
                gSaveManager.mpSaveFile->mSaveSlotIndex = this->mUnk_0024.mSaveSlotIndex;
                gSaveManager.func_ov019_020d08fc(2, SaveFile::func_ov019_020d13b8);

                UnkTextStruct1 stack1(-1, 0);
                this->mUnk_1CF4 = data_ov000_020b504c.func_ov000_02067cf8(0x00020032, 0, &stack1);

                data_ov000_020b504c.func_ov000_02067bc4(0)->func_02021bec(1);
                data_0204a110.mUnk_000 = this->mUnk_0024.mUnk_FC2;
                this->mUnk_1CF5        = true;
            } else {
                data_ov000_020b504c.mUnk_030 = gSaveManager.GetSaveSlot(this->mUnk_0024.mSaveSlotIndex)->Get2600Ptr()->unk_00;
                this->func_ov019_020cde8c(FSOptionsState_Idle);
            }
        }
    }
}

void FileSelectOptions::func_ov019_020cde8c(FSOptionsState state) {
    this->mState = state;
    this->func_ov019_020ccd40();
}

void FileSelectOptions::func_ov019_020cde9c() {
    this->func_ov019_020cde8c(FSOptionsState_OptionsFromMicTest);
}

UnkStruct_ov019_020d24c8_2C_24::UnkStruct_ov019_020d24c8_2C_24(GameModeManagerBase_104_0C *param1, s32 saveSlotIndex) :
    mSaveSlotIndex(saveSlotIndex),
    mUnk_004(0, 0),
    mUnk_008(0x8C, 0),
    mUnk_020(0x8C, 1),
    mUnk_258(0x8C, 4),
    mUnk_490(BTN_ID_FILE_SELECT_MESG_SPEED_LEFT_ARROW, 0x8C, 0x03, 0x0A, 0x8C, 0x06),
    mUnk_4F0(BTN_ID_FILE_SELECT_MESG_SPEED_RIGHT_ARROW, 0x8C, 0x06, 0x09, 0x8C, 0x03),
    mUnk_550(0x8C, 2),
    mUnk_788(0x8C, 5),
    mUnk_9C0(BTN_ID_FILE_SELECT_SOUND_SETTINGS_LEFT_ARROW, 0x8C, 0x04, 0x0A, 0x8C, 0x07),
    mUnk_A20(BTN_ID_FILE_SELECT_SOUND_SETTINGS_RIGHT_ARROW, 0x8C, 0x07, 0x09, 0x8C, 0x04),
    mUnk_A80(0x8C, 6),
    mUnk_CB8(0x8C, 3),
    mUnk_EF0(BTN_ID_FILE_SELECT_HANDEDNESS_LEFT_ARROW, 0x8C, 0x02, 0x0A, 0x8C, 0x05),
    mUnk_F50(BTN_ID_FILE_SELECT_HANDEDNESS_RIGHT_ARROW, 0x8C, 0x05, 0x09, 0x8C, 0x02),
    mUnk_FB0(NULL),
    mUnk_FB4(NULL),
    mUnk_FB8(NULL),
    mUnk_FBC(NULL) {

    SaveSlot *pSlot                      = gSaveManager.GetSaveSlot(saveSlotIndex);
    SaveFile_00000_2600_Data *pSaveSub17 = pSlot->Get2600Ptr();
    this->mUnk_FC1                       = pSaveSub17->unk_01;
    this->mUnk_FC0                       = pSaveSub17->unk_00;
    this->mUnk_FC2                       = pSaveSub17->unk_02;

    u32 i;
    u8 *src = (u8 *) pSaveSub17->unk_03;
    u8 *dst = (u8 *) &this->mUnk_FC3[0];
    for (i = ARRAY_LEN(this->mUnk_FC3); i != 0; i--) {
        u8 b1  = *src++;
        u8 b2  = *src++;
        dst[1] = b2;
        dst[0] = b1;
        dst += 2;
    }
    *dst = *src;
    this->mUnk_103E           = pSaveSub17->unk_7E;

    param1->Append(&this->mUnk_490);
    param1->Append(&this->mUnk_4F0);
    param1->Append(&this->mUnk_9C0);
    param1->Append(&this->mUnk_A20);
    param1->Append(&this->mUnk_EF0);
    param1->Append(&this->mUnk_F50);

    Vec2s zero;
    zero.x = 0;
    zero.y = 0;
    this->mUnk_490.mPosOffset.coords = zero.coords;
    this->mUnk_490.mUnk_2C      = true;

    this->mUnk_4F0.mPosOffset.coords = zero.coords;
    this->mUnk_4F0.mUnk_2C      = true;

    this->mUnk_9C0.mPosOffset.coords = zero.coords;
    this->mUnk_9C0.mUnk_2C      = true;

    this->mUnk_A20.mPosOffset.coords = zero.coords;
    this->mUnk_A20.mUnk_2C      = true;

    this->mUnk_EF0.mPosOffset.coords = zero.coords;
    this->mUnk_EF0.mUnk_2C      = true;

    this->mUnk_F50.mPosOffset.coords = zero.coords;
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

UnkStruct_ov019_020d24c8_2C_24::~UnkStruct_ov019_020d24c8_2C_24() {
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

void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce414() {
    switch (data_0204a110.func_01ff9b50()) {
        case BTN_ID_FILE_SELECT_MESG_SPEED_LEFT_ARROW:
            this->func_ov019_020ce61c(1);
            data_ov000_020b5214.func_ov000_0206db44(0x2A);
            break;
        case BTN_ID_FILE_SELECT_MESG_SPEED_RIGHT_ARROW:
            this->func_ov019_020ce61c(0);
            data_ov000_020b5214.func_ov000_0206db44(0x2A);
            break;
        case BTN_ID_FILE_SELECT_SOUND_SETTINGS_LEFT_ARROW:
            this->func_ov019_020ce668(1);
            data_ov000_020b5214.func_ov000_0206db44(0x2B);
            break;
        case BTN_ID_FILE_SELECT_SOUND_SETTINGS_RIGHT_ARROW:
            this->func_ov019_020ce668(0);
            data_ov000_020b5214.func_ov000_0206db44(0x2B);
            break;
        case BTN_ID_FILE_SELECT_HANDEDNESS_LEFT_ARROW:
        case BTN_ID_FILE_SELECT_HANDEDNESS_RIGHT_ARROW:
            this->func_ov019_020ce6c8();
            data_ov000_020b5214.func_ov000_0206db44(0x2A);
            break;
        default:
            break;
    }
}

struct stack_struct {
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};

// non-matching
void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce4dc() {
    stack_struct sp8;
    for (int i = 0; i < ARRAY_LEN(this->mUnk_FB0->mUnk_00); i++) {
        UnkSystem2_UnkSubSystem5 *ptr = this->mUnk_FB0->mUnk_00[i];
        Vec2s local_2c;

        Vec2s delta;
        Vec2s *p144 = (Vec2s *) &ptr->mUnk_144;
        delta.x     = p144->x - this->mUnk_008.mPos.x;
        delta.y     = p144->y - this->mUnk_008.mPos.y;

        local_2c.x = this->mUnk_004.x + delta.x;
        local_2c.y = this->mUnk_004.y + delta.y;

        ptr->mUnk_140 = ((Vec2us *) &local_2c)->x;
        ptr->mUnk_142 = ((Vec2us *) &local_2c)->y;

        ptr->func_0201f4b4(0);
    }

    for (int i = 0; i < ARRAY_LEN(this->mUnk_FB8->mUnk_00); i++) {
        UnkSystem2_UnkSubSystem1_Derived1 *ptr = this->mUnk_FB8->mUnk_00[i];

        Vec2s sVar1_2;
        sVar1_2.x = this->mUnk_008.mPos.x;
        sVar1_2.y = this->mUnk_008.mPos.y;

        Vec2s fetch;

        func_ov000_02062e44(&fetch, ptr);

        fetch.x = this->mUnk_004.x + (s16) (fetch.x - sVar1_2.x);
        fetch.y = this->mUnk_004.y + (s16) (fetch.y - sVar1_2.y);
        ptr->mPos.coords = fetch.coords;
    }

    sp8.mUnk_06 = 0x00;
    MI_CpuFill32(0, &sp8, sizeof(sp8));
    sp8.mUnk_05 = -1;
    sp8.mUnk_06 |= 0x04;

    data_0204af1c.func_0201aa44(&this->mUnk_008, &this->mUnk_004, 2, &sp8);
}

void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce61c(bool decrement) {
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

void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce668(bool decrement) {
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

void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce6c8() {
    this->mUnk_FC2 = this->mUnk_FC2 == 0 ? 1 : 0;
    this->mUnk_CB8.func_0201fa70(this->func_ov019_020ce7a0(this->mUnk_FC2));
}

unk32 UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce704(u8 param1) {
    switch (param1) {
        case 0:
            return BMG_ID(BMGGroup_select, 0x4C);
        case 1:
            return BMG_ID(BMGGroup_select, 0x4B);
        case 2:
            return BMG_ID(BMGGroup_select, 0x4A);
        default:
            break;
    }

    return 0;
}

unk32 UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce74c(u8 param1) {
    switch (param1) {
        case 0:
            return BMG_ID(BMGGroup_select, 0x50);
        case 1:
            return BMG_ID(BMGGroup_select, 0x4F);
        case 2:
            return BMG_ID(BMGGroup_select, 0x4D);
        case 3:
            return BMG_ID(BMGGroup_select, 0x4E);
        default:
            break;
    }

    return 0;
}

unk32 UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce7a0(u8 param1) {
    switch (param1) {
        case 0:
            return BMG_ID(BMGGroup_select, 0x49);
        case 1:
            return BMG_ID(BMGGroup_select, 0x48);
        default:
            break;
    }

    return 0;
}

void UnkStruct_ov019_020d24c8_2C_24::func_ov019_020ce7d4(unk32 param1) {
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
