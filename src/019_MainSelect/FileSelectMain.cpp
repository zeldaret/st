#include "FileSelect/FileSelect.hpp"
#include "Game/GameModeFileSelect.hpp"
#include "Save/SaveManager.hpp"
#include "Unknown/UnkStruct_02049a2c.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"
#include "regs.h"

extern "C" {
void func_020249d4(void *pReg, unk32 param1, unk32 param2, unk32 param3, unk32 param4);
void func_ov000_02062e44(void *param1, void *param2);
};

class UnkStruct_ov019_020d24c0 {
public:
    Vec2s mUnk_00;
    Vec2s mUnk_04;

    UnkStruct_ov019_020d24c0(s16 x1, s16 y1, s16 x2, s16 y2) {
        this->mUnk_04.x = x2;
        this->mUnk_04.y = y2;

        this->mUnk_00.x = x1;
        this->mUnk_00.y = y1;
    }
};

UnkStruct_ov019_020d24c0 data_ov019_020d24c0(-0x100, 0, 0x100, 0);

UnkStruct_ov019_020d1e4c UnkStruct_ov019_020d1e70::data_ov019_020d1e4c = {
    0x14, 0x14, 0x14, 0x04, 0x03, -0x47, 0x00, 0x0281, -0x47, Vec2s(0x00, 0x00), 0x0281,
};

UnkStruct_ov019_020d1e94 UnkStruct_ov019_020d1e70::data_ov019_020d1e94 = {
    0x00, 0x00, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14,
};

static const UnkStruct_ov019_020d1e70 data_ov019_020d1e70;

static PTMF<FileSelectMain> data_ov019_020d1f94[FileSelectState_Max] = {
    FileSelectMain::func_ov019_020c8290, // FileSelectState_Unk_00
    FileSelectMain::func_ov019_020c82c4, // FileSelectState_Init
    FileSelectMain::func_ov019_020c8454, // FileSelectState_SlotSelectIdle
    FileSelectMain::func_ov019_020c8aac, // FileSelectState_SlotSelectToFileManager
    FileSelectMain::func_ov019_020c8ad8, // FileSelectState_FileManagerFromSlotSelect
    FileSelectMain::func_ov019_020c8b10, // FileSelectState_FileManagerToSlotSelect
    FileSelectMain::func_ov019_020c8b48, // FileSelectState_SlotSelectFromFileManager
    FileSelectMain::func_ov019_020c8b74, // FileSelectState_FileManagerIdle
    FileSelectMain::func_ov019_020c9b28, // FileSelectState_FileManagerToChooseMode
    FileSelectMain::func_ov019_020c9b70, // FileSelectState_ChooseModeFromFileManager
    FileSelectMain::func_ov019_020c9bcc, // FileSelectState_ChooseModeToFileManager
    FileSelectMain::func_ov019_020c9c18, // FileSelectState_FileManagerFromChooseMode
    FileSelectMain::func_ov019_020c9c70, // FileSelectState_ChooseModeIdle
    FileSelectMain::func_ov019_020c9d88, // FileSelectState_ChooseModeToEnterGameMode
    FileSelectMain::func_ov019_020c9e08, // FileSelectState_EnterGameMode
    FileSelectMain::func_ov019_020ca80c, // FileSelectState_SlotSelectToNewFile
    FileSelectMain::func_ov019_020ca844, // FileSelectState_NewFileToSlotSelect
    FileSelectMain::func_ov019_020ca87c, // FileSelectState_FileManagerToCopyErase
    FileSelectMain::func_ov019_020ca8b4, // FileSelectState_CopyEraseFromFileManager
    FileSelectMain::func_ov019_020cb180, // FileSelectState_ChooseModeToContactMode
    FileSelectMain::func_ov019_020cb1dc, // FileSelectState_OptionsToChooseMode
    FileSelectMain::func_ov019_020c80f4, // FileSelectState_NewFileFromSlotSelect
    FileSelectMain::func_ov019_020c80f4, // FileSelectState_OptionsFromChooseMode
};

static PTMF<FileSelectMain> data_ov019_020d1edc[FileSelectState_Max] = {
    FileSelectMain::func_ov019_020c6d0c, // FileSelectState_Unk_00
    FileSelectMain::func_ov019_020c6d48, // FileSelectState_Init
    FileSelectMain::func_ov019_020c6e14, // FileSelectState_SlotSelectIdle
    FileSelectMain::func_ov019_020c717c, // FileSelectState_SlotSelectToFileManager
    FileSelectMain::func_ov019_020c71f0, // FileSelectState_FileManagerFromSlotSelect
    FileSelectMain::func_ov019_020c7210, // FileSelectState_FileManagerToSlotSelect
    FileSelectMain::func_ov019_020c71d0, // FileSelectState_SlotSelectFromFileManager
    FileSelectMain::func_ov019_020c7274, // FileSelectState_FileManagerIdle
    FileSelectMain::func_ov019_020c7768, // FileSelectState_FileManagerToChooseMode
    FileSelectMain::func_ov019_020c77b8, // FileSelectState_ChooseModeFromFileManager
    FileSelectMain::func_ov019_020c7804, // FileSelectState_ChooseModeToFileManager
    FileSelectMain::func_ov019_020c7858, // FileSelectState_FileManagerFromChooseMode
    FileSelectMain::func_ov019_020c7878, // FileSelectState_ChooseModeIdle
    FileSelectMain::func_ov019_020c78ac, // FileSelectState_ChooseModeToEnterGameMode
    FileSelectMain::func_ov019_020c7910, // FileSelectState_EnterGameMode
    FileSelectMain::func_ov019_020c7c3c, // FileSelectState_SlotSelectToNewFile
    FileSelectMain::func_ov019_020c7c48, // FileSelectState_NewFileToSlotSelect
    FileSelectMain::func_ov019_020c7c70, // FileSelectState_FileManagerToCopyErase
    FileSelectMain::func_ov019_020c7d3c, // FileSelectState_CopyEraseFromFileManager
    FileSelectMain::func_ov019_020c80dc, // FileSelectState_ChooseModeToContactMode
    FileSelectMain::func_ov019_020c80e8, // FileSelectState_OptionsToChooseMode
    FileSelectMain::func_ov019_020c6d08, // FileSelectState_NewFileFromSlotSelect
    FileSelectMain::func_ov019_020c6d08, // FileSelectState_OptionsFromChooseMode
};

static PTMF<FileSelectMain> data_ov019_020d204c[FileSelectState_Max] = {
    FileSelectMain::func_ov019_020cb26c, // FileSelectState_Unk_00
    FileSelectMain::func_ov019_020cb4bc, // FileSelectState_Init
    FileSelectMain::func_ov019_020cb4c8, // FileSelectState_SlotSelectIdle
    FileSelectMain::func_ov019_020cb4d4, // FileSelectState_SlotSelectToFileManager
    FileSelectMain::func_ov019_020cb4e0, // FileSelectState_FileManagerFromSlotSelect
    FileSelectMain::func_ov019_020cb4ec, // FileSelectState_FileManagerToSlotSelect
    FileSelectMain::func_ov019_020cb4f8, // FileSelectState_SlotSelectFromFileManager
    FileSelectMain::func_ov019_020cb504, // FileSelectState_FileManagerIdle
    FileSelectMain::func_ov019_020cb510, // FileSelectState_FileManagerToChooseMode
    FileSelectMain::func_ov019_020cb51c, // FileSelectState_ChooseModeFromFileManager
    FileSelectMain::func_ov019_020cb528, // FileSelectState_ChooseModeToFileManager
    FileSelectMain::func_ov019_020cb534, // FileSelectState_FileManagerFromChooseMode
    FileSelectMain::func_ov019_020cb540, // FileSelectState_ChooseModeIdle
    FileSelectMain::func_ov019_020cb54c, // FileSelectState_ChooseModeToEnterGameMode
    FileSelectMain::func_ov019_020cb558, // FileSelectState_EnterGameMode
    FileSelectMain::func_ov019_020cb564, // FileSelectState_SlotSelectToNewFile
    FileSelectMain::func_ov019_020cb570, // FileSelectState_NewFileToSlotSelect
    FileSelectMain::func_ov019_020cb57c, // FileSelectState_FileManagerToCopyErase
    FileSelectMain::func_ov019_020cb588, // FileSelectState_CopyEraseFromFileManager
    FileSelectMain::func_ov019_020cb5b0, // FileSelectState_ChooseModeToContactMode
    FileSelectMain::func_ov019_020cb5bc, // FileSelectState_OptionsToChooseMode
    FileSelectMain::func_ov019_020cb268, // FileSelectState_NewFileFromSlotSelect
    FileSelectMain::func_ov019_020cb268, // FileSelectState_OptionsFromChooseMode
};

const unk32 data_ov019_020d1bbc[] = {0x00000000, 0x00000000, 0x00000000, 0x00000001};

//! TODO: move to class
ARM FileSelectMain::FileSelectMain() :
    mState(FileSelectState_Unk_00),
    mExitMode(FileSelectExitMode_Unk_3),
    mSaveSlotIndex(-1),
    mUnk_005C(5, 0x8E, 0, 1, 0x8E, 0),

    mUnk_0100(BTN_ID_NONE, 0x89, 0, 0, 0x89, 0),
    mUnk_0160(&mUnk_0100, 0x89, 0, 0x20012),

    mUnk_0488(BTN_ID_FILE_SELECT_START, 0x8A, 0, 0x0D, 0x8A, 0),
    mUnk_0520(&mUnk_0488, 0x8A, 0, 0x20016),

    mUnk_07E4(BTN_ID_FILE_SELECT_COPY, 0x8A, 1, 3, 0x8A, 2),
    mUnk_0844(&mUnk_07E4, 0x8A, 2, 0x20014),

    mUnk_0AC4(BTN_ID_FILE_SELECT_ERASE, 0x8A, 2, 4, 0x8A, 1),
    mUnk_0B24(&mUnk_0AC4, 0x8A, 1, 0x20015),

    mUnk_0DA4(BTN_ID_FILE_SELECT_ADVENTURE, 0x8B, 1, 0x0E, 0x8B, 1),
    mUnk_0E3C(&mUnk_0DA4, 0x8B, 2, 0x20017),

    mUnk_11BC(BTN_ID_FILE_SELECT_BATTLE, 0x8B, 0, 0x0F, 0x8B, 0),
    mUnk_1254(&mUnk_11BC, 0x8B, 0, 0x20018),

    mUnk_15D4(BTN_ID_FILE_SELECT_CONTACT_MODE, 0x8B, 0, 0x10, 0x8B, 3),
    mUnk_166C(&mUnk_15D4, 0x8B, 3, 0x20019),

    mUnk_18EC(BTN_ID_FILE_SELECT_OPTIONS, 0x8B, 3, 0x11, 0x8B, 2),
    mUnk_1984(&mUnk_18EC, 0x8B, 1, 0x2001A) {

    stack_struct1 params;
    params.param2 = NULL;
    params.param1 = &this->mUnk_0C;
    this->mUnk_03E0.Init(&params);

    this->mUnk_0C.mList.func_020166cc(&this->mUnk_0100.mUnk_04);
    this->mUnk_0100.mUnk_2A = 0;
    this->mUnk_0488.mUnk_2C = 1;
    this->mUnk_07E4.mUnk_2C = 1;
    this->mUnk_0AC4.mUnk_2C = 1;
    this->mUnk_005C.mUnk_2C = 1;
    this->mUnk_0DA4.mUnk_2C = 1;
    this->mUnk_11BC.mUnk_2C = 1;
    this->mUnk_15D4.mUnk_2C = 1;
    this->mUnk_18EC.mUnk_2C = 1;

    // ghidra lines 163-221

    this->mUnk_11BC.mUnk_2A = 0;
    this->mUnk_15D4.mUnk_2A = 0;
    this->mUnk_18EC.mUnk_2A = 0;
    // this->mUnk_15BA += data_ov019_020d24c0[3];
    // this->mUnk_15B8 += data_ov019_020d24c0[2];
    this->mUnk_0488.mUnk_2A = 0;
    this->mUnk_07E4.mUnk_2A = 0;
    this->mUnk_0AC4.mUnk_2A = 0;
    this->mUnk_005C.mUnk_2A = 0;
    this->mUnk_0DA4.mUnk_2A = 0;

    // ghidra lines 233-239

    data_0204a110.func_020195a0("MSB:SelectBG.nclr", 0, 6, 0);
    // Test1 aauStack_94[6];
    // Test2 aauStack_48;
    REG_DISPCNT &= 0xFFFFE0FF;
    REG_DISPCNT |= 0x00001C00;
    func_020249d4(&REG_BLDCNT, 4, 8, 0, 0x10);
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_005C.mUnk_04);
    this->func_ov019_020c63dc();
    this->func_ov019_020c6d10();
}

ARM FileSelectMain::~FileSelectMain() {
    this->mUnk_03E0.Reset();
}

ARM void FileSelectMain::func_ov019_020c6c14() {}

ARM void FileSelectMain::func_ov019_020c6c18() {
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_0488.mUnk_04);
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_07E4.mUnk_04);
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_0AC4.mUnk_04);
}

ARM void FileSelectMain::func_ov019_020c6c54() {
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_0DA4.mUnk_04);
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_11BC.mUnk_04);
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_15D4.mUnk_04);
    this->mUnk_0C.mList.func_020166cc(&this->mUnk_18EC.mUnk_04);
}

ARM void FileSelectMain::func_ov019_020c6c9c() {}

ARM void FileSelectMain::func_ov019_020c6ca0() {
    GameModeLinkListNode::func_020166ac(&this->mUnk_0488.mUnk_04);
    GameModeLinkListNode::func_020166ac(&this->mUnk_07E4.mUnk_04);
    GameModeLinkListNode::func_020166ac(&this->mUnk_0AC4.mUnk_04);
}

ARM void FileSelectMain::func_ov019_020c6cd0() {
    GameModeLinkListNode::func_020166ac(&this->mUnk_0DA4.mUnk_04);
    GameModeLinkListNode::func_020166ac(&this->mUnk_11BC.mUnk_04);
    GameModeLinkListNode::func_020166ac(&this->mUnk_15D4.mUnk_04);
    GameModeLinkListNode::func_020166ac(&this->mUnk_18EC.mUnk_04);
}

ARM void FileSelectMain::func_ov019_020c6d08() {}

ARM void FileSelectMain::func_ov019_020c6d0c() {}

ARM void FileSelectMain::func_ov019_020c6d10() {
    CALL_PTMF(PTMF<FileSelectMain>, data_ov019_020d1edc[this->mState]);
}

// https://decomp.me/scratch/EuA67
ARM void FileSelectMain::func_ov019_020c6d48() {
    Vec2us auStack_2c;
    Vec2p local_34;
    int value;

    this->func_ov019_020c6c14();

    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).func_ov019_020cbaec();
        func_ov000_02062e44(&auStack_2c, &this->GetUnk03E0(i).mUnk_004);

        local_34.x = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;
        local_34.y = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;

        if (i == 1) {
            value = 10;
        } else {
            value = 0;
        }

        this->mUnk_03E8[i].func_ov000_02064080(&auStack_2c, &local_34, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02,
                                               value);
    }

    this->mUnk_039C.mUnk_0A = 1;
    this->mUnk_039C.mUnk_0C = 0;
    this->mUnk_039C.mUnk_0B = 0;

    if (this->mUnk_039C.mUnk_04 == this->mUnk_039C.mUnk_06) {
        this->mUnk_039C.mUnk_0A = 0;
        this->mUnk_039C.mUnk_0C = 1;
    }
}

ARM void FileSelectMain::func_ov019_020c6e14() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = 1;
    }
}

// non-matching
ARM void FileSelectMain::func_ov019_020c6e3c() {
    Vec2s local_40;
    Vec2s local_58;
    Vec2p auStack_50[2];
    Vec2s local_44;
    Vec2us auStack_60[2]; // c e
    Vec2us local_64; // 4 6
    int fileIndex;

    fileIndex = this->mSaveSlotIndex == 0;

    int unaff_r9;
    u16 unaff_r4;
    int unaff_r7;

    if (this->mState == FileSelectState_SlotSelectToFileManager) {
        unaff_r4 = 0;
        UnkStruct_ov019_020d24c8_28_258 local_3c(0x8A, 0x05);

        local_40.x = local_3c.mPosU.x;
        local_40.y = local_3c.mPosU.y;

        unaff_r9 = 10;
        func_ov000_02062e44(auStack_50, &this->GetUnk03E0(fileIndex).mUnk_004);
        func_ov000_02062e44(&local_58, &this->GetUnk03E0(fileIndex).mUnk_004);
        local_44.x = local_58.x + data_ov019_020d24c0.mUnk_00.x;
        local_44.y = local_58.y + data_ov019_020d24c0.mUnk_00.y;
        unaff_r7   = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;
    } else if (this->mState == FileSelectState_SlotSelectFromFileManager) {
        func_ov000_02062e44(auStack_60 + 1, &this->GetUnk03E0(mSaveSlotIndex).mUnk_004);
        local_40.x = auStack_60[1].x;
        local_40.y = auStack_60[1].y;

        func_ov000_02062e44(auStack_60, &this->GetUnk03E0(fileIndex).mUnk_004);
        func_ov000_02062e44(&local_64, &this->GetUnk03E0(fileIndex).mUnk_004);
        local_44.x = local_64.x;
        local_44.y = local_64.y;

        unaff_r9 = 0;
        unaff_r4 = 10;
        unaff_r7 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
    }

    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_0206415c(&local_40, 0, 0xf, unaff_r9);
    auStack_50[1].x = unaff_r7;
    this->mUnk_03E8[fileIndex].func_ov000_02064080(&local_44, auStack_50 + 1,
                                                   UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, unaff_r4);
}

ARM void FileSelectMain::func_ov019_020c7000() {
    unk32 var_r3;
    unk32 var_r4;
    unk32 var_r5;
    unk32 var_r6;

    if (this->mState == FileSelectState_FileManagerFromSlotSelect) {
        this->mUnk_075C.mUnk_0A = 1;
        this->mUnk_075C.mUnk_0B = 0;
        this->mUnk_075C.mUnk_0C = 0;
        if (this->mUnk_075C.mUnk_04 == this->mUnk_075C.mUnk_06) {
            this->mUnk_075C.mUnk_0A = 0;
            this->mUnk_075C.mUnk_0C = 1;
        }

        var_r3                  = 0;
        this->mUnk_0A80.mUnk_0A = 1;
        this->mUnk_0A80.mUnk_0B = 0;
        this->mUnk_0A80.mUnk_0C = 0;
        if (this->mUnk_0A80.mUnk_04 == this->mUnk_0A80.mUnk_06) {
            this->mUnk_0A80.mUnk_0A = 0;
            this->mUnk_0A80.mUnk_0C = 1;
        }

        var_r4                  = 3;
        this->mUnk_0D60.mUnk_0A = 1;
        this->mUnk_0D60.mUnk_0B = 0;
        this->mUnk_0D60.mUnk_0C = 0;
        if (this->mUnk_0D60.mUnk_04 == this->mUnk_0D60.mUnk_06) {
            this->mUnk_0D60.mUnk_0A = 0;
            this->mUnk_0D60.mUnk_0C = 1;
        }

        var_r5                  = 6;
        this->mUnk_00BC.mUnk_0A = 1;
        this->mUnk_00BC.mUnk_0B = 0;
        this->mUnk_00BC.mUnk_0C = 0;
        if (this->mUnk_00BC.mUnk_04 == this->mUnk_00BC.mUnk_06) {
            this->mUnk_00BC.mUnk_0A = 0;
            this->mUnk_00BC.mUnk_0C = 1;
        }

        var_r6 = 0;
    } else if (this->mState == FileSelectState_FileManagerToSlotSelect) {
        this->mUnk_075C.mUnk_0A = 0;
        this->mUnk_075C.mUnk_0B = 1;
        this->mUnk_075C.mUnk_0C = 0;
        if (this->mUnk_075C.mUnk_04 == 0) {
            this->mUnk_075C.mUnk_0B = 0;
            this->mUnk_075C.mUnk_0C = 1;
        }

        var_r3                  = 6;
        this->mUnk_0A80.mUnk_0A = 0;
        this->mUnk_0A80.mUnk_0B = 1;
        this->mUnk_0A80.mUnk_0C = 0;
        if (this->mUnk_0A80.mUnk_04 == 0) {
            this->mUnk_0A80.mUnk_0B = 0;
            this->mUnk_0A80.mUnk_0C = 1;
        }

        var_r4                  = 3;
        this->mUnk_0D60.mUnk_0A = 0;
        this->mUnk_0D60.mUnk_0B = 1;
        this->mUnk_0D60.mUnk_0C = 0;
        if (this->mUnk_0D60.mUnk_04 == 0) {
            this->mUnk_0D60.mUnk_0B = 0;
            this->mUnk_0D60.mUnk_0C = 1;
        }

        var_r5                  = 0;
        this->mUnk_00BC.mUnk_0A = 0;
        this->mUnk_00BC.mUnk_0B = 1;
        this->mUnk_00BC.mUnk_0C = 0;
        if (this->mUnk_00BC.mUnk_04 == 0) {
            this->mUnk_00BC.mUnk_0B = 0;
            this->mUnk_00BC.mUnk_0C = 1;
        }

        var_r6 = 6;
    }

    this->mUnk_075C.mUnk_08 = var_r3;
    this->mUnk_0A80.mUnk_08 = var_r4;
    this->mUnk_0D60.mUnk_08 = var_r5;
    this->mUnk_00BC.mUnk_08 = var_r6;
    this->mUnk_0488.mUnk_2A = false;
    this->mUnk_07E4.mUnk_2A = false;
    this->mUnk_0AC4.mUnk_2A = false;
    this->mUnk_005C.mUnk_2A = false;
}

ARM void FileSelectMain::func_ov019_020c717c() {
    this->mUnk_002C.func_0201ea68(0x28, 0, 8, 0);
    this->mUnk_002C.mUnk_0A = 1;
    this->mUnk_002C.mUnk_0B = 0;
    this->mUnk_002C.mUnk_0C = 0;

    if (this->mUnk_002C.mUnk_04 == this->mUnk_002C.mUnk_06) {
        this->mUnk_002C.mUnk_0A = 0;
        this->mUnk_002C.mUnk_0C = 1;
    }

    this->func_ov019_020c6e3c();
}

ARM void FileSelectMain::func_ov019_020c71d0() {
    this->func_ov019_020c6c14();
    this->func_ov019_020c6ca0();
    this->func_ov019_020c6e3c();
}

ARM void FileSelectMain::func_ov019_020c71f0() {
    this->func_ov019_020c6c18();
    this->func_ov019_020c6c9c();
    this->func_ov019_020c7000();
}

ARM void FileSelectMain::func_ov019_020c7210() {
    this->mUnk_002C.func_0201ea68(0x28, 8, 0, 0);
    this->mUnk_002C.mUnk_0A = 1;
    this->mUnk_002C.mUnk_0B = 0;
    this->mUnk_002C.mUnk_0C = 0;

    if (this->mUnk_002C.mUnk_04 == this->mUnk_002C.mUnk_06) {
        this->mUnk_002C.mUnk_0A = 0;
        this->mUnk_002C.mUnk_0C = 1;
    }

    data_ov000_020b50c0.func_ov000_0206a6a4(1);
    this->func_ov019_020c7000();
}

ARM void FileSelectMain::func_ov019_020c7274() {
    this->GetUnk03E0().mUnk_004.mUnk_2A = true;
    this->mUnk_0488.mUnk_2A             = true;
    this->mUnk_07E4.mUnk_2A             = true;
    this->mUnk_0AC4.mUnk_2A             = true;
    this->mUnk_005C.mUnk_2A             = true;
}

ARM void FileSelectMain::func_ov019_020c72a0() {
    unk32 var_r4;
    unk32 var_r5;
    unk32 var_r6;
    unk32 var_r7;
    Vec2us local_5c;

    if (this->mState == FileSelectState_FileManagerToChooseMode) {
        this->mUnk_039C.mUnk_0A = 0;
        this->mUnk_039C.mUnk_0B = 1;
        this->mUnk_039C.mUnk_0C = 0;
        if (this->mUnk_039C.mUnk_04 == 0) {
            this->mUnk_039C.mUnk_0B = 0;
            this->mUnk_039C.mUnk_0C = 1;
        }

        UnkStruct_ov019_020d24c8_28_258 local_40(0x8A, 0x05);
        local_40.UnknownAction(0x8B, 0x04);
        // local_5c = local_40.mPos;

        this->mUnk_07A0.mUnk_0A = 1;
        this->mUnk_07A0.mUnk_0B = 0;
        this->mUnk_07A0.mUnk_0C = 0;
        if (this->mUnk_07A0.mUnk_04 == this->mUnk_07A0.mUnk_06) {
            this->mUnk_07A0.mUnk_0A = 0;
            this->mUnk_07A0.mUnk_0C = 1;
        }

        var_r4                  = 0;
        this->mUnk_0A80.mUnk_0A = 0;
        this->mUnk_0A80.mUnk_0B = 1;
        this->mUnk_0A80.mUnk_0C = 0;
        if (this->mUnk_0A80.mUnk_04 == 0) {
            this->mUnk_0A80.mUnk_0B = 0;
            this->mUnk_0A80.mUnk_0C = 1;
        }

        var_r5                  = 3;
        this->mUnk_0D60.mUnk_0A = 0;
        this->mUnk_0D60.mUnk_0B = 1;
        this->mUnk_0D60.mUnk_0C = 0;
        if (this->mUnk_0D60.mUnk_04 == 0) {
            this->mUnk_0D60.mUnk_0B = 0;
            this->mUnk_0D60.mUnk_0C = 1;
        }

        var_r6                  = 6;
        this->mUnk_00BC.mUnk_0A = 0;
        this->mUnk_00BC.mUnk_0B = 1;
        this->mUnk_00BC.mUnk_0C = 0;
        if (this->mUnk_00BC.mUnk_04 == 0) {
            this->mUnk_00BC.mUnk_0B = 0;
            this->mUnk_00BC.mUnk_0C = 1;
        }

        var_r7 = 0;
    } else if (this->mState == FileSelectState_FileManagerFromChooseMode) {
        UnkStruct_ov019_020d24c8_28_258 local_40(0x8B, 0x04);
        local_40.UnknownAction(0x8A, 0x05);
        // local_5c = local_40.mPos;

        this->mUnk_039C.mUnk_0A = 1;
        this->mUnk_039C.mUnk_0B = 0;
        this->mUnk_039C.mUnk_0C = 0;
        if (this->mUnk_039C.mUnk_04 == this->mUnk_039C.mUnk_06) {
            this->mUnk_039C.mUnk_0A = 0;
            this->mUnk_039C.mUnk_0C = 1;
        }

        this->mUnk_07A0.mUnk_0A = 0;
        this->mUnk_07A0.mUnk_0B = 1;
        this->mUnk_07A0.mUnk_0C = 0;
        if (this->mUnk_07A0.mUnk_04 == 0) {
            this->mUnk_07A0.mUnk_0B = 0;
            this->mUnk_07A0.mUnk_0C = 1;
        }

        var_r4                  = 6;
        this->mUnk_0A80.mUnk_0A = 1;
        this->mUnk_0A80.mUnk_0B = 0;
        this->mUnk_0A80.mUnk_0C = 0;
        if (this->mUnk_0A80.mUnk_04 == this->mUnk_0A80.mUnk_06) {
            this->mUnk_0A80.mUnk_0A = 0;
            this->mUnk_0A80.mUnk_0C = 1;
        }

        var_r5                  = 3;
        this->mUnk_0D60.mUnk_0A = 1;
        this->mUnk_0D60.mUnk_0B = 0;
        this->mUnk_0D60.mUnk_0C = 0;
        if (this->mUnk_0D60.mUnk_04 == this->mUnk_0D60.mUnk_06) {
            this->mUnk_0D60.mUnk_0A = 0;
            this->mUnk_0D60.mUnk_0C = 1;
        }

        var_r6                  = 0;
        this->mUnk_00BC.mUnk_0A = 1;
        this->mUnk_00BC.mUnk_0B = 0;
        this->mUnk_00BC.mUnk_0C = 0;
        if (this->mUnk_00BC.mUnk_04 == this->mUnk_00BC.mUnk_06) {
            this->mUnk_00BC.mUnk_0A = 0;
            this->mUnk_00BC.mUnk_0C = 1;
        }

        var_r7 = 6;
    }

    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_0206415c(&local_5c, 0, 0xf, 0);
    this->mUnk_07A0.mUnk_08 = var_r4;
    this->mUnk_0A80.mUnk_08 = var_r5;
    this->mUnk_0D60.mUnk_08 = var_r6;
    this->mUnk_00BC.mUnk_08 = var_r7;
    this->mUnk_0488.mUnk_2A = false;
    this->mUnk_07E4.mUnk_2A = false;
    this->mUnk_0AC4.mUnk_2A = false;
    this->mUnk_005C.mUnk_2A = false;
}

ARM void FileSelectMain::func_ov019_020c757c() {
    unk32 var_r3;
    unk32 var_lr;
    unk32 var_r4;
    unk32 var_r5;
    unk32 var_r6;

    if (this->mState == FileSelectState_ChooseModeFromFileManager) {
        this->mUnk_00BC.mUnk_0A = 1;
        this->mUnk_00BC.mUnk_0B = 0;
        this->mUnk_00BC.mUnk_0C = 0;
        if (this->mUnk_00BC.mUnk_04 == this->mUnk_00BC.mUnk_06) {
            this->mUnk_00BC.mUnk_0A = 0;
            this->mUnk_00BC.mUnk_0C = 1;
        }

        var_r3                  = 0;
        this->mUnk_1078.mUnk_0A = 1;
        this->mUnk_1078.mUnk_0B = 0;
        this->mUnk_1078.mUnk_0C = 0;
        if (this->mUnk_1078.mUnk_04 == this->mUnk_1078.mUnk_06) {
            this->mUnk_1078.mUnk_0A = 0;
            this->mUnk_1078.mUnk_0C = 1;
        }

        var_lr                  = 0;
        this->mUnk_1490.mUnk_0A = 1;
        this->mUnk_1490.mUnk_0B = 0;
        this->mUnk_1490.mUnk_0C = 0;
        if (this->mUnk_1490.mUnk_04 == this->mUnk_1490.mUnk_06) {
            this->mUnk_1490.mUnk_0A = 0;
            this->mUnk_1490.mUnk_0C = 1;
        }

        var_r4                  = 10;
        this->mUnk_18A8.mUnk_0A = 1;
        this->mUnk_18A8.mUnk_0B = 0;
        this->mUnk_18A8.mUnk_0C = 0;
        if (this->mUnk_18A8.mUnk_04 == this->mUnk_18A8.mUnk_06) {
            this->mUnk_18A8.mUnk_0A = 0;
            this->mUnk_18A8.mUnk_0C = 1;
        }

        var_r5                  = 3;
        this->mUnk_1BC0.mUnk_0A = 1;
        this->mUnk_1BC0.mUnk_0B = 0;
        this->mUnk_1BC0.mUnk_0C = 0;
        if (this->mUnk_1BC0.mUnk_04 == this->mUnk_1BC0.mUnk_06) {
            this->mUnk_1BC0.mUnk_0A = 0;
            this->mUnk_1BC0.mUnk_0C = 1;
        }

        var_r6 = 6;
    } else if (this->mState == FileSelectState_ChooseModeToFileManager) {
        this->mUnk_00BC.mUnk_0A = 0;
        this->mUnk_00BC.mUnk_0B = 1;
        this->mUnk_00BC.mUnk_0C = 0;
        if (this->mUnk_00BC.mUnk_04 == 0) {
            this->mUnk_00BC.mUnk_0B = 0;
            this->mUnk_00BC.mUnk_0C = 1;
        }

        var_r3                  = 10;
        this->mUnk_1078.mUnk_0A = 0;
        this->mUnk_1078.mUnk_0B = 1;
        this->mUnk_1078.mUnk_0C = 0;
        if (this->mUnk_1078.mUnk_04 == 0) {
            this->mUnk_1078.mUnk_0B = 0;
            this->mUnk_1078.mUnk_0C = 1;
        }

        var_lr                  = 10;
        this->mUnk_1490.mUnk_0A = 0;
        this->mUnk_1490.mUnk_0B = 1;
        this->mUnk_1490.mUnk_0C = 0;
        if (this->mUnk_1490.mUnk_04 == 0) {
            this->mUnk_1490.mUnk_0B = 0;
            this->mUnk_1490.mUnk_0C = 1;
        }

        var_r4                  = 0;
        this->mUnk_18A8.mUnk_0A = 0;
        this->mUnk_18A8.mUnk_0B = 1;
        this->mUnk_18A8.mUnk_0C = 0;
        if (this->mUnk_18A8.mUnk_04 == 0) {
            this->mUnk_18A8.mUnk_0B = 0;
            this->mUnk_18A8.mUnk_0C = 1;
        }

        var_r5                  = 7;
        this->mUnk_1BC0.mUnk_0A = 0;
        this->mUnk_1BC0.mUnk_0B = 1;
        this->mUnk_1BC0.mUnk_0C = 0;
        if (this->mUnk_1BC0.mUnk_04 == 0) {
            this->mUnk_1BC0.mUnk_0B = 0;
            this->mUnk_1BC0.mUnk_0C = 1;
        }

        var_r6 = 4;
    }

    this->mUnk_00BC.mUnk_08 = var_r3;
    this->mUnk_1078.mUnk_08 = var_lr;
    this->mUnk_1490.mUnk_08 = var_r4;
    this->mUnk_18A8.mUnk_08 = var_r5;
    this->mUnk_1BC0.mUnk_08 = var_r6;
    this->mUnk_005C.mUnk_2A = false;
    this->mUnk_0DA4.mUnk_2A = false;
    this->mUnk_11BC.mUnk_2A = false;
    this->mUnk_15D4.mUnk_2A = false;
    this->mUnk_18EC.mUnk_2A = false;
}

ARM void FileSelectMain::func_ov019_020c7768() {
    this->func_ov019_020c72a0();
    this->mUnk_002C.func_0201ea68(0x28, 8, 0x10, 0);
    this->mUnk_002C.mUnk_0A = 1;
    this->mUnk_002C.mUnk_0B = 0;
    this->mUnk_002C.mUnk_0C = 0;

    if (this->mUnk_002C.mUnk_04 == this->mUnk_002C.mUnk_06) {
        this->mUnk_002C.mUnk_0A = 0;
        this->mUnk_002C.mUnk_0C = 1;
    }
}

ARM void FileSelectMain::func_ov019_020c77b8() {
    this->func_ov019_020c6c54();
    this->func_ov019_020c6ca0();
    this->func_ov019_020c757c();
    this->mUnk_1144.func_ov000_0206082c(0x8B, 0);
    this->mUnk_155C.func_ov000_0206082c(0x8B, 2);
}

ARM void FileSelectMain::func_ov019_020c7804() {
    this->mUnk_002C.func_0201ea68(0x28, 0x10, 8, 0);
    this->mUnk_002C.mUnk_0A = 1;
    this->mUnk_002C.mUnk_0B = 0;
    this->mUnk_002C.mUnk_0C = 0;

    if (this->mUnk_002C.mUnk_04 == this->mUnk_002C.mUnk_06) {
        this->mUnk_002C.mUnk_0A = 0;
        this->mUnk_002C.mUnk_0C = 1;
    }

    this->func_ov019_020c757c();
}

ARM void FileSelectMain::func_ov019_020c7858() {
    this->func_ov019_020c6c18();
    this->func_ov019_020c6cd0();
    this->func_ov019_020c72a0();
}

ARM void FileSelectMain::func_ov019_020c7878() {
    this->mUnk_0DA4.mUnk_2A = true;
    this->mUnk_11BC.mUnk_2A = true;
    this->mUnk_15D4.mUnk_2A = true;
    this->mUnk_18EC.mUnk_2A = true;
    this->mUnk_005C.mUnk_2A = true;
    REG_BLDALPHA            = 0x1010;
}

ARM void FileSelectMain::func_ov019_020c78ac() {
    if (this->mExitMode == FileSelectExitMode_AdventureMode) {
        this->mUnk_1144.func_ov000_0206082c(0x8B, 1);
    } else if (this->mExitMode == FileSelectExitMode_BattleMode) {
        this->mUnk_155C.func_ov000_0206082c(0x8B, 3);
    }

    this->mUnk_0DA4.mUnk_2A = false;
    this->mUnk_11BC.mUnk_2A = false;
    this->mUnk_15D4.mUnk_2A = false;
    this->mUnk_18EC.mUnk_2A = false;
    this->mUnk_005C.mUnk_2A = false;
}

ARM void FileSelectMain::func_ov019_020c7910() {
    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_0206415c((void *) &UnkStruct_ov019_020d1e70::data_ov019_020d1e94.mUnk_00,
                                                              0, 0x1e, 10);

    this->mUnk_10BC.mUnk_0A = 1;
    this->mUnk_10BC.mUnk_0B = 0;
    this->mUnk_10BC.mUnk_0C = 0;
    if (this->mUnk_10BC.mUnk_04 == this->mUnk_10BC.mUnk_06) {
        this->mUnk_10BC.mUnk_0A = 0;
        this->mUnk_10BC.mUnk_0C = 1;
    }
    this->mUnk_10BC.mUnk_08 = 0;
    this->mUnk_0DA4.mUnk_2A = false;

    this->mUnk_14D4.mUnk_0A = 1;
    this->mUnk_14D4.mUnk_0B = 0;
    this->mUnk_14D4.mUnk_0C = 0;
    if (this->mUnk_14D4.mUnk_04 == this->mUnk_14D4.mUnk_06) {
        this->mUnk_14D4.mUnk_0A = 0;
        this->mUnk_14D4.mUnk_0C = 1;
    }
    this->mUnk_14D4.mUnk_08 = 10;
    this->mUnk_11BC.mUnk_2A = false;

    this->mUnk_18A8.mUnk_0A = 0;
    this->mUnk_18A8.mUnk_0B = 1;
    this->mUnk_18A8.mUnk_0C = 0;
    if (this->mUnk_18A8.mUnk_04 == 0) {
        this->mUnk_18A8.mUnk_0B = 0;
        this->mUnk_18A8.mUnk_0C = 1;
    }
    this->mUnk_18A8.mUnk_08 = 3;
    this->mUnk_15D4.mUnk_2A = false;

    this->mUnk_1BC0.mUnk_0A = 0;
    this->mUnk_1BC0.mUnk_0B = 1;
    this->mUnk_1BC0.mUnk_0C = 0;
    if (this->mUnk_1BC0.mUnk_04 == 0) {
        this->mUnk_1BC0.mUnk_0B = 0;
        this->mUnk_1BC0.mUnk_0C = 1;
    }
    this->mUnk_1BC0.mUnk_08 = 6;
    this->mUnk_18EC.mUnk_2A = false;

    this->mUnk_00BC.mUnk_0A = 0;
    this->mUnk_00BC.mUnk_0B = 1;
    this->mUnk_00BC.mUnk_0C = 0;
    if (this->mUnk_00BC.mUnk_04 == 0) {
        this->mUnk_00BC.mUnk_0B = 0;
        this->mUnk_00BC.mUnk_0C = 1;
    }
    this->mUnk_00BC.mUnk_08 = 0;
    this->mUnk_005C.mUnk_2A = false;
}

// non-matching
ARM void FileSelectMain::func_ov019_020c7a44() {
    Vec2s local_54;
    Vec2s local_50;
    Vec2s local_44;
    Vec2s local_4c;
    Vec2us local_28;
    Vec2us local_2c;
    Vec2p local_3c;
    Vec2p local_34;
    Vec2p unaff_r5;
    Vec2p unaff_r11;
    // Vec2p local_34;
    int fileIndex = this->mSaveSlotIndex == 0;
    int value1;
    int value2;

    if (this->mState == FileSelectState_SlotSelectToNewFile) {
        func_ov000_02062e44(&local_44, &this->GetUnk03E0().mUnk_004);
        unaff_r11.x = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;
        unaff_r11.y = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        local_28.x  = local_44.x + data_ov019_020d1e70.mUnk_20.x;
        local_28.y  = local_44.y + data_ov019_020d1e70.mUnk_20.y;
        value1      = 0x0F;

        func_ov000_02062e44(&local_4c, &this->GetUnk03E0(fileIndex).mUnk_004);
        unaff_r5.x = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;
        unaff_r5.y = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        local_2c.x = local_4c.x + data_ov019_020d24c0.mUnk_04.x;
        local_2c.y = local_4c.y + data_ov019_020d24c0.mUnk_04.y;
        value2     = 0;

        this->mUnk_039C.mUnk_0A = 1;
        this->mUnk_039C.mUnk_0C = 0;
        this->mUnk_039C.mUnk_0B = 0;

        if (this->mUnk_039C.mUnk_04 == this->mUnk_039C.mUnk_06) {
            this->mUnk_039C.mUnk_0A = 0;
            this->mUnk_039C.mUnk_0C = 1;
        }
    } else if (this->mState == FileSelectState_NewFileToSlotSelect) {
        func_ov000_02062e44(&local_50, &this->GetUnk03E0().mUnk_004);
        unaff_r11.x = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;
        unaff_r11.y = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        local_28.x  = local_50.x;
        local_28.y  = local_50.y;
        value1      = 0;

        func_ov000_02062e44(&local_54, &this->GetUnk03E0(fileIndex).mUnk_004);
        unaff_r5.x = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;
        unaff_r5.y = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        local_2c.x = local_54.x;
        local_2c.y = local_54.y;
        value2     = 0x0F;

        this->mUnk_039C.mUnk_0A = 1;
        this->mUnk_039C.mUnk_0C = 0;
        this->mUnk_039C.mUnk_0B = 0;

        if (this->mUnk_039C.mUnk_04 == this->mUnk_039C.mUnk_06) {
            this->mUnk_039C.mUnk_0A = 0;
            this->mUnk_039C.mUnk_0C = 1;
        }
    }

    local_34 = unaff_r11;
    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_02064080(&local_28, &local_34, 0x14, value2);

    local_3c = unaff_r5;
    this->mUnk_03E8[fileIndex].func_ov000_02064080(&local_2c, &local_3c, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02,
                                                   value1);
}

ARM void FileSelectMain::func_ov019_020c7c3c() {
    this->func_ov019_020c7a44();
}

ARM void FileSelectMain::func_ov019_020c7c48() {
    this->GetUnk03E0().func_ov019_020cbb40();
    this->func_ov019_020c7a44();
}

ARM void FileSelectMain::func_ov019_020c7c70() {
    this->mUnk_075C.mUnk_0A = 0;
    this->mUnk_075C.mUnk_0B = 1;
    this->mUnk_075C.mUnk_0C = 0;
    if (this->mUnk_075C.mUnk_04 == 0) {
        this->mUnk_075C.mUnk_0B = 0;
        this->mUnk_075C.mUnk_0C = 1;
    }
    this->mUnk_075C.mUnk_08 = 0;
    this->mUnk_0488.mUnk_2A = false;

    this->mUnk_0A80.mUnk_0A = 0;
    this->mUnk_0A80.mUnk_0B = 1;
    this->mUnk_0A80.mUnk_0C = 0;
    if (this->mUnk_0A80.mUnk_04 == 0) {
        this->mUnk_0A80.mUnk_0C = 1;
        this->mUnk_0A80.mUnk_0B = 0;
    }
    this->mUnk_0A80.mUnk_08 = 3;
    this->mUnk_07E4.mUnk_2A = false;

    this->mUnk_0D60.mUnk_0A = 0;
    this->mUnk_0D60.mUnk_0B = 1;
    this->mUnk_0D60.mUnk_0C = 0;
    if (this->mUnk_0D60.mUnk_04 == 0) {
        this->mUnk_0D60.mUnk_0B = 0;
        this->mUnk_0D60.mUnk_0C = 1;
    }
    this->mUnk_0D60.mUnk_08 = 6;
    this->mUnk_0AC4.mUnk_2A = false;

    this->mUnk_00BC.mUnk_0A = 0;
    this->mUnk_00BC.mUnk_0B = 1;
    this->mUnk_00BC.mUnk_0C = 0;
    if (this->mUnk_00BC.mUnk_04 == 0) {
        this->mUnk_00BC.mUnk_0B = 0;
        this->mUnk_00BC.mUnk_0C = 1;
    }
    this->mUnk_00BC.mUnk_08 = 0;
    this->mUnk_005C.mUnk_2A = false;
}

// non-matching
ARM void FileSelectMain::func_ov019_020c7d3c() {
    this->mUnk_1C04.mUnk_12 = this->mSaveSlotIndex;

    if (this->mUnk_1C04.mUnk_18 == 0) {
        int value                      = this->mSaveSlotIndex == 0 ? 2 : 1;
        UnkStruct_ov000_02067bc4 *test = data_ov000_020b504c.func_ov000_02067bc4(0);

        UnkStruct_ov000_02067bc4_Sub2 *test3 = test->mUnk_008;
        UnkStruct_ov019_020d1e4c *test5      = (UnkStruct_ov019_020d1e4c *) &UnkStruct_ov019_020d1e70::data_ov019_020d1e4c;

        unk32 test2    = test5->mUnk_10;
        test3->mUnk_54 = value;
        data_ov000_020b504c.func_ov000_0206807c(test2, &this->mUnk_1C04);
    } else if (this->mUnk_1C04.mUnk_18 == 1) {
        data_ov000_020b504c.func_ov000_0206807c(data_ov019_020d1e70.mUnk_0C, &this->mUnk_1C04);
    }
}

// non-matching
ARM void FileSelectMain::func_ov019_020c7dc8() {
    unk32 var_r8;
    unk32 var_r6;
    unk32 var_r7;
    unk32 var_r5;
    unk32 var_r9;
    unk32 var_r10;
    unk32 var_r1;
    unk32 var_r2;
    Vec2us sp10_sp12[2]; // sp4 sp6 sp10 sp12
    Vec2p local_48; // sp8 spC

    if (this->mState == FileSelectState_ChooseModeToContactMode) {
        UnkSystem2_UnkSubSystem1_Derived2 *pUVar5 = this->mUnk_03E8[this->mSaveSlotIndex].mUnk_04;
        sp10_sp12[0].x                            = pUVar5->mPos.x + data_ov019_020d1e70.mUnk_20.x;
        sp10_sp12[0].y                            = pUVar5->mPos.y + data_ov019_020d1e70.mUnk_20.y;
        sp10_sp12[1]                              = sp10_sp12[0];

        var_r1 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14;
        var_r2 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18;

        var_r8                  = 0xC;
        this->mUnk_1100.mUnk_0A = 1;
        this->mUnk_1100.mUnk_0B = 0;
        this->mUnk_1100.mUnk_0C = false;
        if (this->mUnk_1100.mUnk_04 == this->mUnk_1100.mUnk_06) {
            this->mUnk_1100.mUnk_0A = 0;
            this->mUnk_1100.mUnk_0C = true;
        }

        var_r6                  = 8;
        this->mUnk_1518.mUnk_0A = 1;
        this->mUnk_1518.mUnk_0B = 0;
        this->mUnk_1518.mUnk_0C = false;
        if (this->mUnk_1518.mUnk_04 == this->mUnk_1518.mUnk_06) {
            this->mUnk_1518.mUnk_0A = 0;
            this->mUnk_1518.mUnk_0C = true;
        }

        var_r7                  = 4;
        this->mUnk_18A8.mUnk_0A = 0;
        this->mUnk_18A8.mUnk_0B = 1;
        this->mUnk_18A8.mUnk_0C = false;
        if (this->mUnk_18A8.mUnk_04 == 0) {
            this->mUnk_18A8.mUnk_0B = 0;
            this->mUnk_18A8.mUnk_0C = true;
        }

        var_r5                  = 3;
        this->mUnk_1BC0.mUnk_0A = 0;
        this->mUnk_1BC0.mUnk_0B = 1;
        this->mUnk_1BC0.mUnk_0C = false;
        if (this->mUnk_1BC0.mUnk_04 == 0) {
            this->mUnk_1BC0.mUnk_0B = 0;
            this->mUnk_1BC0.mUnk_0C = true;
        }

        var_r9                  = 6;
        this->mUnk_00BC.mUnk_0A = 0;
        this->mUnk_00BC.mUnk_0B = 1;
        this->mUnk_00BC.mUnk_0C = false;
        if (this->mUnk_00BC.mUnk_04 == 0) {
            this->mUnk_00BC.mUnk_0B = 0;
            this->mUnk_00BC.mUnk_0C = true;
        }

        var_r10 = 0;
    } else if (this->mState == FileSelectState_OptionsToChooseMode) {
        UnkStruct_ov019_020d24c8_28_258 local_3c(0x8B, 4); // sp14 sp1E sp22 sp26 sp24
        var_r8 = 0;

        var_r1 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        var_r2 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;

        sp10_sp12[0].x = local_3c.mPos.x;
        sp10_sp12[0].y = local_3c.mPos.y;

        this->mUnk_1100.mUnk_0A = 0;
        this->mUnk_1100.mUnk_0B = 1;
        this->mUnk_1100.mUnk_0C = false;
        if (this->mUnk_1100.mUnk_04 == 0) {
            this->mUnk_1100.mUnk_0B = 0;
            this->mUnk_1100.mUnk_0C = true;
        }

        var_r6                  = 4;
        this->mUnk_1518.mUnk_0A = 0;
        this->mUnk_1518.mUnk_0B = 1;
        this->mUnk_1518.mUnk_0C = false;
        if (this->mUnk_1518.mUnk_04 == 0) {
            this->mUnk_1518.mUnk_0B = 0;
            this->mUnk_1518.mUnk_0C = true;
        }

        var_r7                  = 8;
        this->mUnk_18A8.mUnk_0A = 1;
        this->mUnk_18A8.mUnk_0B = 0;
        this->mUnk_18A8.mUnk_0C = false;
        if (this->mUnk_18A8.mUnk_04 == this->mUnk_18A8.mUnk_06) {
            this->mUnk_18A8.mUnk_0A = 0;
            this->mUnk_18A8.mUnk_0C = true;
        }

        var_r5                  = 9;
        this->mUnk_1BC0.mUnk_0A = 1;
        this->mUnk_1BC0.mUnk_0B = 0;
        this->mUnk_1BC0.mUnk_0C = false;
        if (this->mUnk_1BC0.mUnk_04 == this->mUnk_1BC0.mUnk_06) {
            this->mUnk_1BC0.mUnk_0A = 0;
            this->mUnk_1BC0.mUnk_0C = true;
        }

        var_r9                  = 6;
        this->mUnk_00BC.mUnk_0A = 1;
        this->mUnk_00BC.mUnk_0B = 0;
        this->mUnk_00BC.mUnk_0C = false;
        if (this->mUnk_00BC.mUnk_04 == this->mUnk_00BC.mUnk_06) {
            this->mUnk_00BC.mUnk_0A = 0;
            this->mUnk_00BC.mUnk_0C = true;
        }

        var_r10 = 0xC;
    }

    local_48.x = var_r1;
    local_48.y = var_r2;
    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_02064080(&sp10_sp12, &local_48, 0x14, var_r8);

    this->mUnk_1100.mUnk_08 = var_r6;
    this->mUnk_1518.mUnk_08 = var_r7;
    this->mUnk_18A8.mUnk_08 = var_r5;
    this->mUnk_1BC0.mUnk_08 = var_r9;
    this->mUnk_00BC.mUnk_08 = var_r10;
    this->mUnk_005C.mUnk_2A = false;
    this->mUnk_0DA4.mUnk_2A = false;
    this->mUnk_11BC.mUnk_2A = false;
    this->mUnk_15D4.mUnk_2A = false;
    this->mUnk_18EC.mUnk_2A = false;
}

ARM void FileSelectMain::func_ov019_020c80dc() {
    this->func_ov019_020c7dc8();
}

ARM void FileSelectMain::func_ov019_020c80e8() {
    this->func_ov019_020c7dc8();
}

ARM void FileSelectMain::func_ov019_020c80f4() {}

// non-matching
ARM void FileSelectMain::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->mUnk_03E8[i].func_ov000_02063f64();
        this->GetUnk03E0(i).func_ov019_020cbb94();
    }

    CALL_PTMF(PTMF<FileSelectMain>, data_ov019_020d1f94[this->mState]);
    this->mUnk_002C.UnkOperations(NULL, false);
    REG_BLDALPHA = this->mUnk_002C.func_0201eaa0() | 0x1000;
}

ARM void FileSelectMain::func_ov019_020c8290() {
    if ((data_02049a2c.GetUnk00_FileSelect()->mUnk_04.mUnk_08 & 0xFFFF) == 0xFFFF) {
        this->SetState(FileSelectState_Init);
    }
}

// non-matching
ARM void FileSelectMain::func_ov019_020c82c4() {
    this->mUnk_039C.UnkOperations(&this->mUnk_0100.mPos, true);

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C) {
        this->SetState(FileSelectState_SlotSelectIdle);
    }
}

ARM void FileSelectMain::func_ov019_020c8454() {
    int iVar2;

    iVar2 = data_0204a110.func_01ff9b50();

    if (iVar2 != BTN_ID_FILE_SELECT_FILE_1 && iVar2 != BTN_ID_FILE_SELECT_FILE_2) {
        return;
    }

    this->mSaveSlotIndex = data_0204a110.func_01ff9b50() - BTN_ID_FILE_SELECT_FILE_1;

    if (this->GetUnk03E0().IsPlayerNameSet()) {
        SaveSlot *pSlot              = gSaveManager.GetSaveSlot(this->mSaveSlotIndex);
        data_ov000_020b504c.mUnk_030 = pSlot->Get2600_00();
        data_0204a110.mUnk_000       = pSlot->Get2600_02();
        data_ov000_020b50c0.func_ov000_0206a6a4(pSlot->Get2600_01());
        this->SetState(FileSelectState_SlotSelectToFileManager);
    } else {
        data_0204a088->func_ov000_020611fc(0x0F);
    }

    data_ov000_020b5214.func_ov000_0206db44(0x14);
}

ARM void FileSelectMain::func_ov019_020c8524() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }
}

ARM void FileSelectMain::func_ov019_020c854c() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_075C.UnkOperations(&this->mUnk_0488.mPos, true);
    this->mUnk_0A80.UnkOperations(&this->mUnk_07E4.mPos, true);
    this->mUnk_0D60.UnkOperations(&this->mUnk_0AC4.mPos, true);
    this->mUnk_00BC.UnkOperations(&this->mUnk_005C.mPos, true);
}

ARM void FileSelectMain::func_ov019_020c8aac() {
    this->func_ov019_020c8524();

    if (!this->func_ov019_020cb238()) {
        this->SetState(FileSelectState_FileManagerFromSlotSelect);
    }
}

ARM void FileSelectMain::func_ov019_020c8ad8() {
    this->func_ov019_020c854c();

    if (this->mUnk_075C.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C) {
        this->SetState(FileSelectState_FileManagerIdle);
    }
}

ARM void FileSelectMain::func_ov019_020c8b10() {
    this->func_ov019_020c854c();

    if (this->mUnk_075C.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C) {
        this->SetState(FileSelectState_SlotSelectFromFileManager);
    }
}

ARM void FileSelectMain::func_ov019_020c8b48() {
    this->func_ov019_020c8524();

    if (!this->func_ov019_020cb238()) {
        this->SetState(FileSelectState_SlotSelectIdle);
    }
}

ARM void FileSelectMain::func_ov019_020c8b74() {
    switch (data_0204a110.func_01ff9b50()) {
        case BTN_ID_FILE_SELECT_FILE_1:
        case BTN_ID_FILE_SELECT_FILE_2:
        case BTN_ID_FILE_SELECT_START:
            this->SetState(FileSelectState_FileManagerToChooseMode);
            data_ov000_020b5214.func_ov000_0206db44(0x16);
            break;
        case BTN_ID_FILE_SELECT_COPY:
            this->SetState(FileSelectState_FileManagerToCopyErase);
            this->mUnk_1C04.mUnk_18 = 0;
            data_ov000_020b5214.func_ov000_0206db44(0x17);
            break;
        case BTN_ID_FILE_SELECT_ERASE:
            this->SetState(FileSelectState_FileManagerToCopyErase);
            this->mUnk_1C04.mUnk_18 = 1;
            data_ov000_020b5214.func_ov000_0206db44(0x18);
            break;
        case BTN_ID_RETURN:
            this->SetState(FileSelectState_FileManagerToSlotSelect);
            data_ov000_020b5214.func_ov000_0206db44(0x15);
            break;
        default:
            break;
    }
}

ARM void FileSelectMain::func_ov019_020c8c4c() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_039C.UnkOperations(&this->mUnk_0100.mPos, true);
    this->mUnk_07A0.UnkOperations(&this->mUnk_0488.mPos, true);
    this->mUnk_0A80.UnkOperations(&this->mUnk_07E4.mPos, true);
    this->mUnk_0D60.UnkOperations(&this->mUnk_0AC4.mPos, true);
    this->mUnk_00BC.UnkOperations(&this->mUnk_005C.mPos, true);
}

ARM void FileSelectMain::func_ov019_020c92dc() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_00BC.UnkOperations2(&this->mUnk_005C.mPos, true);

    this->mUnk_1078.UnkOperations2(&this->mUnk_0DA4.mPos, true);
    UnkStruct_ov019_020d24c8_28_258 local_30(0x8B, 0x06);
    Vec2s local_5c;
    Vec2s local_58;
    func_ov000_02062e44(&local_5c, &this->mUnk_0DA4);
    func_0201e8d4(&local_58, &this->mUnk_1100);
    this->mUnk_1144.mUnk_5C.x = local_58.x + local_30.mPos.x - local_5c.x;
    this->mUnk_1144.mUnk_5C.y = local_58.y + local_30.mPos.y - local_5c.y;

    this->mUnk_1490.UnkOperations2(&this->mUnk_11BC.mPos, true);
    UnkStruct_ov019_020d24c8_28_258 local_48(0x8B, 0x06);
    Vec2s local_60;
    Vec2s local_64;
    func_ov000_02062e44(&local_60, &this->mUnk_0DA4);
    func_0201e8d4(&local_64, &this->mUnk_1100);
    this->mUnk_1144.mUnk_5C.x = local_64.x + local_48.mPos.x - local_60.x;
    this->mUnk_1144.mUnk_5C.y = local_64.y + local_48.mPos.y - local_60.y;

    this->mUnk_18A8.UnkOperations2(&this->mUnk_15D4.mPos, true);
    this->mUnk_1BC0.UnkOperations2(&this->mUnk_18EC.mPos, true);

    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();
}

ARM void FileSelectMain::func_ov019_020c9b28() {
    this->func_ov019_020c8c4c();

    if (this->mUnk_039C.mUnk_0C && this->mUnk_07A0.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C &&
        this->mUnk_00BC.mUnk_0C) {
        this->SetState(FileSelectState_ChooseModeFromFileManager);
    }
}

ARM void FileSelectMain::func_ov019_020c9b70() {
    this->func_ov019_020c92dc();

    if (!this->func_ov019_020cb238() && this->mUnk_00BC.mUnk_0C && this->mUnk_1078.mUnk_0C && this->mUnk_1490.mUnk_0C &&
        this->mUnk_18A8.mUnk_0C && this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_ChooseModeIdle);
    }
}

ARM void FileSelectMain::func_ov019_020c9bcc() {
    this->func_ov019_020c92dc();

    if (this->mUnk_00BC.mUnk_0C && this->mUnk_1078.mUnk_0C && this->mUnk_1490.mUnk_0C && this->mUnk_18A8.mUnk_0C &&
        this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_FileManagerFromChooseMode);
    }
}

ARM void FileSelectMain::func_ov019_020c9c18() {
    this->func_ov019_020c8c4c();

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C && this->mUnk_07A0.mUnk_0C && this->mUnk_0A80.mUnk_0C &&
        this->mUnk_0D60.mUnk_0C && this->mUnk_00BC.mUnk_0C) {
        this->SetState(FileSelectState_FileManagerIdle);
    }
}

ARM void FileSelectMain::func_ov019_020c9c70() {
    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();

    switch (data_0204a110.func_01ff9b50()) {
        case BTN_ID_FILE_SELECT_ADVENTURE:
            this->mExitMode = FileSelectExitMode_AdventureMode;
            this->SetState(FileSelectState_ChooseModeToEnterGameMode);
            data_ov000_020b5214.func_ov000_0206db44(0x1A);
            break;
        case BTN_ID_FILE_SELECT_BATTLE:
            this->mExitMode = FileSelectExitMode_BattleMode;
            this->SetState(FileSelectState_ChooseModeToEnterGameMode);
            data_ov000_020b5214.func_ov000_0206db44(0x1B);
            break;
        case BTN_ID_FILE_SELECT_CONTACT_MODE:
            this->SetState(FileSelectState_ChooseModeToContactMode);
            data_02049a2c.GetUnk00_FileSelect()->LoadContactMode(this->mSaveSlotIndex);
            data_ov000_020b5214.func_ov000_0206db44(0x1C);
            break;
        case BTN_ID_FILE_SELECT_OPTIONS:
            data_0204a088->func_ov000_020611fc(0x12);
            data_ov000_020b5214.func_ov000_0206db44(0x1D);
            break;
        case BTN_ID_RETURN:
            this->SetState(FileSelectState_ChooseModeToFileManager);
            data_ov000_020b5214.func_ov000_0206db44(0x19);
            break;
        default:
            break;
    }
}

ARM void FileSelectMain::func_ov019_020c9d88() {
    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();

    if (this->mExitMode == FileSelectExitMode_AdventureMode) {
        if (this->mUnk_1144.func_ov000_02060af8() != 0) {
            this->SetState(FileSelectState_EnterGameMode);
            return;
        }
    }

    if (this->mExitMode == FileSelectExitMode_BattleMode) {
        if (this->mUnk_155C.func_ov000_02060af8() != 0) {
            this->SetState(FileSelectState_EnterGameMode);
            return;
        }
    }
}

ARM void FileSelectMain::func_ov019_020c9e08() {
    this->mUnk_00BC.UnkOperations2(&this->mUnk_005C.mPos, true);

    this->mUnk_1100.UnkOperations2(&this->mUnk_0DA4.mPos, true);
    UnkStruct_ov019_020d24c8_28_258 local_30(0x8B, 0x06);
    Vec2s local_5c;
    Vec2s local_58;
    func_ov000_02062e44(&local_5c, &this->mUnk_0DA4);
    func_0201e8d4(&local_58, &this->mUnk_1100);
    this->mUnk_1144.mUnk_5C.x = local_58.x + local_30.mPos.x - local_5c.x;
    this->mUnk_1144.mUnk_5C.y = local_58.y + local_30.mPos.y - local_5c.y;

    this->mUnk_1518.UnkOperations2(&this->mUnk_11BC.mPos, true);
    UnkStruct_ov019_020d24c8_28_258 local_48(0x8B, 0x05);
    Vec2s local_6c;
    Vec2s local_68;
    func_ov000_02062e44(&local_6c, &this->mUnk_11BC);
    func_0201e8d4(&local_68, &this->mUnk_1518);
    this->mUnk_155C.mUnk_5C.x = local_68.x + local_48.mPos.x - local_6c.x;
    this->mUnk_155C.mUnk_5C.y = local_68.y + local_48.mPos.y - local_6c.y;

    this->mUnk_18A8.UnkOperations2(&this->mUnk_15D4.mPos, true);
    this->mUnk_1BC0.UnkOperations2(&this->mUnk_18EC.mPos, true);

    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();

    if (this->mExitMode == FileSelectExitMode_AdventureMode && this->mUnk_00BC.mUnk_0C) {
        data_02049a2c.GetUnk00_FileSelect()->LoadAdventureMode(this->mSaveSlotIndex);
        this->mExitMode = FileSelectExitMode_Unk_3;
    } else if (this->mExitMode == FileSelectExitMode_BattleMode && this->mUnk_00BC.mUnk_0C) {
        data_02049a2c.GetUnk00_FileSelect()->LoadBattleMode(this->mSaveSlotIndex);
        this->mExitMode = FileSelectExitMode_Unk_3;
    }
}

ARM void FileSelectMain::func_ov019_020ca6a4() {
    this->mUnk_039C.UnkOperations(&this->mUnk_0100.mPos, true);
}

ARM void FileSelectMain::func_ov019_020ca80c() {
    this->func_ov019_020ca6a4();

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C) {
        this->SetState(FileSelectState_NewFileFromSlotSelect);
    }
}

ARM void FileSelectMain::func_ov019_020ca844() {
    this->func_ov019_020ca6a4();

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C) {
        this->SetState(FileSelectState_SlotSelectIdle);
    }
}

ARM void FileSelectMain::func_ov019_020ca87c() {
    this->func_ov019_020c854c();

    if (this->mUnk_075C.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C) {
        this->SetState(FileSelectState_CopyEraseFromFileManager);
    }
}

ARM void FileSelectMain::func_ov019_020ca8b4() {
    this->mUnk_1C04.vfunc_04();

    if ((this->mUnk_1C04.mUnk_08 & 0xFFFF) == 0xFFFF) {
        if (this->mUnk_1C04.mUnk_14) {
            this->SetState(FileSelectState_FileManagerFromSlotSelect);
        } else {
            this->SetState(FileSelectState_SlotSelectFromFileManager);
        }
    }

    if (this->mUnk_1C04.mUnk_21) {
        for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
            this->GetUnk03E0(i).func_ov019_020cbb40();
        }
    }
}

// non-matching
ARM void FileSelectMain::func_ov019_020ca940() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_00BC.UnkOperations2(&this->mUnk_005C.mPos, true);

    this->mUnk_1100.UnkOperations2(&this->mUnk_0DA4.mPos, true);
    UnkStruct_ov019_020d24c8_28_258 local_30(0x8B, 0x06);
    Vec2s local_5c;
    Vec2s local_58;
    func_ov000_02062e44(&local_5c, &this->mUnk_0DA4);
    func_0201e8d4(&local_58, &this->mUnk_1100);
    this->mUnk_1144.mUnk_5C.x = local_58.x + local_30.mPos.x - local_5c.x;
    this->mUnk_1144.mUnk_5C.y = local_58.y + local_30.mPos.y - local_5c.y;

    this->mUnk_1518.UnkOperations2(&this->mUnk_11BC.mPos, true);
    UnkStruct_ov019_020d24c8_28_258 local_48(0x8B, 0x05);
    Vec2s local_6c;
    Vec2s local_68;
    func_ov000_02062e44(&local_6c, &this->mUnk_11BC);
    func_0201e8d4(&local_68, &this->mUnk_1518);
    this->mUnk_155C.mUnk_5C.x = local_68.x + local_48.mPos.x - local_6c.x;
    this->mUnk_155C.mUnk_5C.y = local_68.y + local_48.mPos.y - local_6c.y;

    this->mUnk_18A8.UnkOperations2(&this->mUnk_15D4.mPos, true);
    this->mUnk_1BC0.UnkOperations2(&this->mUnk_18EC.mPos, true);

    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();
}

ARM void FileSelectMain::func_ov019_020cb180() {
    this->func_ov019_020ca940();

    if (!this->func_ov019_020cb238() && this->mUnk_00BC.mUnk_0C && this->mUnk_1100.mUnk_0C && this->mUnk_1518.mUnk_0C &&
        this->mUnk_18A8.mUnk_0C && this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_OptionsFromChooseMode);
    }
}

ARM void FileSelectMain::func_ov019_020cb1dc() {
    this->func_ov019_020ca940();

    if (!this->func_ov019_020cb238() && this->mUnk_00BC.mUnk_0C && this->mUnk_1100.mUnk_0C && this->mUnk_1518.mUnk_0C &&
        this->mUnk_18A8.mUnk_0C && this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_ChooseModeIdle);
    }
}

ARM bool FileSelectMain::func_ov019_020cb238() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        if (this->mUnk_03E8[i].mUnk_08) {
            return true;
        }
    }

    return false;
}

ARM void FileSelectMain::func_ov019_020cb268() {}

ARM void FileSelectMain::func_ov019_020cb26c() {}

ARM void FileSelectMain::vfunc_10(unk8 *param1) {
    CALL_PTMF(PTMF<FileSelectMain>, data_ov019_020d204c[this->mState]);
}

ARM void FileSelectMain::func_ov019_020cb2a8() {
    this->mUnk_0160.func_ov000_02062f30();

    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).func_ov019_020cbc0c();
    }
}

ARM void FileSelectMain::func_ov019_020cb2dc() {
    this->mUnk_0160.func_ov000_02062f30();
    this->GetUnk03E0().func_ov019_020cbc0c();
    this->mUnk_0520.func_ov000_02062f30();
    this->mUnk_0844.func_ov000_02062f30();
    this->mUnk_0B24.func_ov000_02062f30();
}

struct struct_stack_020cb324 {
    unk32 mUnk_00;
    unk8 mUnk_04;
    unk8 mUnk_05;
    unk16 mUnk_06;
};

// non-matching
ARM void FileSelectMain::func_ov019_020cb324() {
    Vec2s local_34;
    Vec2s local_30;
    struct_stack_020cb324 auStack_24;
    Vec2s sStack_1c;
    Vec2s sStack_18;

    this->mUnk_0160.func_ov000_02062f30();
    this->GetUnk03E0().func_ov019_020cbc0c();
    this->mUnk_0E3C.func_ov000_02062f30();
    this->mUnk_1254.func_ov000_02062f30();
    this->mUnk_166C.func_ov000_02062f30();
    this->mUnk_1984.func_ov000_02062f30();

    sStack_18.x = 0;
    sStack_18.y = 0;
    if (this->mUnk_0DA4.mUnk_28) {
        sStack_18.x = this->mUnk_0DA4.mPosOffset.x;
        sStack_18.y = this->mUnk_0DA4.mPosOffset.y;
    }

    sStack_1c.x = 0;
    sStack_1c.y = 0;
    if (this->mUnk_11BC.mUnk_28) {
        sStack_1c.x = this->mUnk_11BC.mPosOffset.x;
        sStack_1c.y = this->mUnk_11BC.mPosOffset.y;
    }

    auStack_24.mUnk_06 = 0;
    Fill32(0, &auStack_24, sizeof(auStack_24));
    auStack_24.mUnk_05 = 0xFF;
    auStack_24.mUnk_06 |= 0x04;

    local_30.x = this->mUnk_1144.mUnk_5C.x + sStack_18.x;
    local_30.y = this->mUnk_1144.mUnk_5C.y + sStack_18.y;
    data_0204af1c.func_0201aad0(&this->mUnk_1144, &local_30, 0, &auStack_24);
    // data_0204af1c.func_0201aad0(&this->mUnk_1144,&local_30,0, 0);

    local_34.x = this->mUnk_155C.mUnk_5C.x + sStack_1c.x;
    local_34.y = this->mUnk_155C.mUnk_5C.y + sStack_1c.y;
    data_0204af1c.func_0201aad0(&this->mUnk_155C, &local_34, 0, &auStack_24);
    // data_0204af1c.func_0201aad0(&this->mUnk_155C,&local_34,0, 0);
}

ARM void FileSelectMain::func_ov019_020cb4bc() {
    this->func_ov019_020cb2a8();
}

ARM void FileSelectMain::func_ov019_020cb4c8() {
    this->func_ov019_020cb2a8();
}

ARM void FileSelectMain::func_ov019_020cb4d4() {
    this->func_ov019_020cb2a8();
}

ARM void FileSelectMain::func_ov019_020cb4e0() {
    this->func_ov019_020cb2dc();
}

ARM void FileSelectMain::func_ov019_020cb4ec() {
    this->func_ov019_020cb2dc();
}

ARM void FileSelectMain::func_ov019_020cb4f8() {
    this->func_ov019_020cb2a8();
}

ARM void FileSelectMain::func_ov019_020cb504() {
    this->func_ov019_020cb2dc();
}

ARM void FileSelectMain::func_ov019_020cb510() {
    this->func_ov019_020cb2dc();
}

ARM void FileSelectMain::func_ov019_020cb51c() {
    this->func_ov019_020cb324();
}

ARM void FileSelectMain::func_ov019_020cb528() {
    this->func_ov019_020cb324();
}

ARM void FileSelectMain::func_ov019_020cb534() {
    this->func_ov019_020cb2dc();
}

ARM void FileSelectMain::func_ov019_020cb540() {
    this->func_ov019_020cb324();
}

ARM void FileSelectMain::func_ov019_020cb54c() {
    this->func_ov019_020cb324();
}

ARM void FileSelectMain::func_ov019_020cb558() {
    this->func_ov019_020cb324();
}

ARM void FileSelectMain::func_ov019_020cb564() {
    this->func_ov019_020cb2a8();
}

ARM void FileSelectMain::func_ov019_020cb570() {
    this->func_ov019_020cb2a8();
}

ARM void FileSelectMain::func_ov019_020cb57c() {
    this->func_ov019_020cb2dc();
}

ARM void FileSelectMain::func_ov019_020cb588() {
    this->mUnk_0160.func_ov000_02062f30();
    this->GetUnk03E0().func_ov019_020cbc0c();
}

ARM void FileSelectMain::func_ov019_020cb5b0() {
    this->func_ov019_020cb324();
}

ARM void FileSelectMain::func_ov019_020cb5bc() {
    this->func_ov019_020cb324();
}

ARM void FileSelectMain::SetState(FileSelectState state) {
    this->mState = state;
    this->func_ov019_020c6d10();
}

ARM void FileSelectMain::vfunc_18() {}

ARM void FileSelectMain::func_ov019_020cb5dc() {
    this->mUnk_0160.mUnk_04.func_0201f9c4();
    this->mUnk_0520.mUnk_04.func_0201f9c4();
    this->mUnk_0844.mUnk_04.func_0201f9c4();
    this->mUnk_0B24.mUnk_04.func_0201f9c4();
    this->mUnk_0E3C.mUnk_04.func_0201f9c4();
    this->mUnk_1254.mUnk_04.func_0201f9c4();
    this->mUnk_166C.mUnk_04.func_0201f9c4();
    this->mUnk_1984.mUnk_04.func_0201f9c4();

    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_064.func_0201f9c4();
    }
}

ARM void FileSelectMain::func_ov019_020cb664() {
    for (int i = 1; i >= 0; i--) {
        this->GetUnk03E0(i).mUnk_064.func_0201f498();
    }

    this->mUnk_1984.mUnk_04.func_0201f498();
    this->mUnk_166C.mUnk_04.func_0201f498();
    this->mUnk_1254.mUnk_04.func_0201f498();
    this->mUnk_0E3C.mUnk_04.func_0201f498();
    this->mUnk_0B24.mUnk_04.func_0201f498();
    this->mUnk_0844.mUnk_04.func_0201f498();
    this->mUnk_0520.mUnk_04.func_0201f498();
    this->mUnk_0160.mUnk_04.func_0201f498();
}

ARM void FileSelectMain::func_ov019_020cb6e8() {
    if (this->mState == FileSelectState_SlotSelectIdle) {
        this->SetState(FileSelectState_SlotSelectToNewFile);
    } else if (this->mState == FileSelectState_ChooseModeIdle) {
        this->SetState(FileSelectState_ChooseModeToContactMode);
    }
}

ARM void FileSelectMain::func_ov019_020cb718() {
    if (this->mState == FileSelectState_NewFileFromSlotSelect) {
        this->SetState(FileSelectState_NewFileToSlotSelect);
    } else if (this->mState == FileSelectState_OptionsFromChooseMode) {
        this->SetState(FileSelectState_OptionsToChooseMode);
    }
}

ARM bool FileSelectMain::func_ov019_020cb748() {
    if (this->mState == FileSelectState_NewFileFromSlotSelect || this->mState == FileSelectState_SlotSelectIdle ||
        this->mState == FileSelectState_OptionsFromChooseMode || this->mState == FileSelectState_ChooseModeIdle) {
        return true;
    }

    return false;
}
