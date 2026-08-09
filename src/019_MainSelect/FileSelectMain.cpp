#include "FileSelect/FileSelect.hpp"
#include "Game/Game.hpp"
#include "Game/GameModeFileSelect.hpp"
#include "Save/SaveManager.hpp"
#include "Unknown/UnkStruct_0204a088.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_0204af1c.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

#include <nitro/g2.h>

extern "C" {
void func_ov000_02062e44(void *param1, void *param2);
void func_0200a7b0(unk32 param1, void *param2, void *param3, void *param4, unk32 param5, unk32 param6, unk32 param7,
                   unk32 param8);
void func_0201e754(UnkSystem2_UnkSubSystem9 *anim, u32 id, Vec2s *to, Vec2s *from, u32 value1, u32 value2);
void _ZN14CellAnimObject19func_ov000_02060950Ev(CellAnimObject *object, s16 param2, unk32 param3, unk32 param4);
};
extern UnkStruct_ov019_020d1e70 data_ov019_020d1e70;


class UnkStruct_ov019_020d24c0 {
public:
    Vec2s mUnk_00;
    Vec2s mUnk_04;

    UnkStruct_ov019_020d24c0(s16 x1, s16 y1, s16 x2, s16 y2) {
        this->mUnk_04.x = x2;
        this->mUnk_04.y = y2;

        this->mUnk_00.x = x1;
        this->mUnk_00.y = y1;

        data_ov019_020d1e70.mUnk_00.x = 0x80;
        data_ov019_020d1e70.mUnk_00.y = 0x60;

        UnkStruct_ov019_020d1e70::data_ov019_020d1e94.mUnk_00 = 0x80;
        UnkStruct_ov019_020d1e70::data_ov019_020d1e94.mUnk_02 = 0x60;

        data_ov019_020d1e70.mUnk_20.x = 0x00;
        data_ov019_020d1e70.mUnk_20.y = 0x100;

        data_ov019_020d1e70.mUnk_1C.x = 0x00;
        data_ov019_020d1e70.mUnk_1C.y = -0x1E;

        data_ov019_020d1e70.mUnk_18.x = 0x00;
        data_ov019_020d1e70.mUnk_18.y = 0x64;

        data_ov019_020d1e70.mUnk_14.x = 0x00;
        data_ov019_020d1e70.mUnk_14.y = 0x64;

        data_ov019_020d1e70.mUnk_10.x = 0x00;
        data_ov019_020d1e70.mUnk_10.y = 0x32;

        UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_1C.x = 0x00;
        UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_1C.y = 0x100;

        data_ov019_020d1e70.mUnk_08.x = 0x00;
        data_ov019_020d1e70.mUnk_08.y = 0x100;

        data_ov019_020d1e70.mUnk_04.x = 0x00;
        data_ov019_020d1e70.mUnk_04.y = 0x32;

        data_ov019_020d1e70.mUnk_00.x = 0x00;
        data_ov019_020d1e70.mUnk_00.y = 0x32;

        UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_10 = 0x20003;
        data_ov019_020d1e70.mUnk_0C                              = 0x20004;
    }
};

UnkStruct_ov019_020d24c0 data_ov019_020d24c0(-0x100, 0, 0x100, 0);


#pragma explicit_zero_data on
UnkStruct_ov019_020d1e70 data_ov019_020d1e70 = {};
#pragma explicit_zero_data reset

UnkStruct_ov019_020d1e4c UnkStruct_ov019_020d1e70::data_ov019_020d1e4c = {
    0x14, 0x14, 0x14, 0x04, 0x03, -0x47, 0x00, 0x0281, -0x47, {0x00, 0x00}, 0x0281,
};

PTMF<FileSelectMain> data_ov019_020d1edc[FileSelectState_Max] = {
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
PTMF<FileSelectMain> data_ov019_020d1f94[FileSelectState_Max] = {
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

PTMF<FileSelectMain> data_ov019_020d204c[FileSelectState_Max] = {
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
FileSelectMain::FileSelectMain() :
    mState(FileSelectState_Unk_00),
    mExitMode(FileSelectExitMode_Unk_3),
    mSaveSlotIndex(-1),
    mUnk_005C(5, 0x8E, 0, 1, 0x8E, 0),

    mUnk_0100(BTN_ID_NONE, 0x89, 0, 0, 0x89, 0),
    mUnk_0160(&mUnk_0100, 0x89, 0, BMG_ID(BMGGroup_select, 0x12)),

    mUnk_0488(BTN_ID_FILE_SELECT_START, 0x8A, 0, 0x0D, 0x8A, 0),
    mUnk_0520(&mUnk_0488, 0x8A, 0, BMG_ID(BMGGroup_select, 0x16)),

    mUnk_07E4(BTN_ID_FILE_SELECT_COPY, 0x8A, 1, 3, 0x8A, 2),
    mUnk_0844(&mUnk_07E4, 0x8A, 2, BMG_ID(BMGGroup_select, 0x14)),

    mUnk_0AC4(BTN_ID_FILE_SELECT_ERASE, 0x8A, 2, 4, 0x8A, 1),
    mUnk_0B24(&mUnk_0AC4, 0x8A, 1, BMG_ID(BMGGroup_select, 0x15)),

    mUnk_0DA4(BTN_ID_FILE_SELECT_ADVENTURE, 0x8B, 1, 0x0E, 0x8B, 1),
    mUnk_0E3C(&mUnk_0DA4, 0x8B, 2, BMG_ID(BMGGroup_select, 0x17)),

    mUnk_11BC(BTN_ID_FILE_SELECT_BATTLE, 0x8B, 0, 0x0F, 0x8B, 0),
    mUnk_1254(&mUnk_11BC, 0x8B, 0, BMG_ID(BMGGroup_select, 0x18)),

    mUnk_15D4(BTN_ID_FILE_SELECT_CONTACT_MODE, 0x8B, 2, 0x10, 0x8B, 3),
    mUnk_166C(&mUnk_15D4, 0x8B, 3, BMG_ID(BMGGroup_select, 0x19)),

    mUnk_18EC(BTN_ID_FILE_SELECT_OPTIONS, 0x8B, 3, 0x11, 0x8B, 2),
    mUnk_1984(&mUnk_18EC, 0x8B, 1, BMG_ID(BMGGroup_select, 0x1A)) {

    struct {
        stack_struct1 entries[MAX_SAVE_SLOTS];
    } params                 = *(const typeof(params) *) data_ov019_020d1bbc;
    params.entries[0].param1 = &this->mUnk_0C;
    params.entries[1].param1 = &this->mUnk_0C;
    stack_struct1 *entries = params.entries;
    this->mUnk_03E0.Init(sizeof(FileSlot) * MAX_SAVE_SLOTS, entries);

    this->mUnk_0C.Append(&this->mUnk_0100);
    this->mUnk_0100.mUnk_2A = 0;
    this->mUnk_0488.mUnk_2C = 1;
    this->mUnk_07E4.mUnk_2C = 1;
    this->mUnk_0AC4.mUnk_2C = 1;
    this->mUnk_005C.mUnk_2C = 1;
    this->mUnk_0DA4.mUnk_2C = 1;
    this->mUnk_11BC.mUnk_2C = 1;
    this->mUnk_15D4.mUnk_2C = 1;
    this->mUnk_18EC.mUnk_2C = 1;

    Vec2s pos0100, fetch0100;
    Vec2s *pFetch0100 = (Vec2s *) &fetch0100;
    func_ov000_02062e44(pFetch0100, &this->mUnk_0100);
    s16 x0100 = pFetch0100->x;
    x0100 += data_ov019_020d1e70.mUnk_1C.x;

    s16 y0100 = pFetch0100->y;
    y0100 += data_ov019_020d1e70.mUnk_1C.y;

    pos0100.x = x0100;
    pos0100.y = y0100;
    this->mUnk_0100.mPos.coords = pos0100.coords;

    Vec2s posSlot0, fetchSlot0;
    func_ov000_02062e44(&fetchSlot0, &this->GetUnk03E0(0).mUnk_004);
    posSlot0.x = fetchSlot0.x + data_ov019_020d24c0.mUnk_04.x;
    posSlot0.y = fetchSlot0.y + data_ov019_020d24c0.mUnk_04.y;
    this->GetUnk03E0(0).func_ov019_020cc5ac((Vec2us *) &posSlot0);

    Vec2s posSlot1, fetchSlot1;
    func_ov000_02062e44(&fetchSlot1, &this->GetUnk03E0(1).mUnk_004);
    posSlot1.x = fetchSlot1.x + data_ov019_020d24c0.mUnk_04.x;
    posSlot1.y = fetchSlot1.y + data_ov019_020d24c0.mUnk_04.y;
    this->GetUnk03E0(1).func_ov019_020cc5ac((Vec2us *) &posSlot1);

    Vec2s pos0488, fetch0488;
    Vec2s *pFetch0488 = (Vec2s *) &fetch0488;
    func_ov000_02062e44(pFetch0488, &this->mUnk_0488);
    Vec2s_Add(pFetch0488, &data_ov019_020d24c0.mUnk_04, &pos0488);
    this->mUnk_0488.mPos.coords = pos0488.coords;

    Vec2s pos07E4, fetch07E4;
    Vec2s *pFetch07E4 = (Vec2s *) &fetch07E4;
    func_ov000_02062e44(pFetch07E4, &this->mUnk_07E4);
    Vec2s_Add(pFetch07E4, &data_ov019_020d1e70.mUnk_18, &pos07E4);
    this->mUnk_07E4.mPos.coords = pos07E4.coords;

    Vec2s pos0AC4, fetch0AC4;
    Vec2s *pFetch0AC4 = (Vec2s *) &fetch0AC4;
    func_ov000_02062e44(pFetch0AC4, &this->mUnk_0AC4);
    Vec2s_Add(pFetch0AC4, &data_ov019_020d1e70.mUnk_14, &pos0AC4);
    this->mUnk_0AC4.mPos.coords = pos0AC4.coords;

    Vec2s pos005C, fetch005C;
    Vec2s *pFetch005C = (Vec2s *) &fetch005C;
    func_ov000_02062e44(pFetch005C, &this->mUnk_005C);
    Vec2s_Add(pFetch005C, &data_ov019_020d1e70.mUnk_10, &pos005C);
    this->mUnk_005C.mPos.coords = pos005C.coords;

    Vec2s pos0DA4, fetch0DA4;
    Vec2s *pFetch0DA4 = (Vec2s *) &fetch0DA4;
    func_ov000_02062e44(pFetch0DA4, &this->mUnk_0DA4);
    Vec2s_Add(pFetch0DA4, &data_ov019_020d24c0.mUnk_04, &pos0DA4);
    this->mUnk_0DA4.mPos.coords = pos0DA4.coords;

    Vec2s pos11BC, fetch11BC;
    Vec2s pos15D4, fetch15D4;
    Vec2s *pFetch11BC = (Vec2s *) &fetch11BC;
    // The (Vec2s *) cast is load-bearing despite looking redundant: dropping it,
    // or using a reference, takes this constructor from 8 differing rows to 62.
    Vec2s *pFetch15D4 = (Vec2s *) &fetch15D4;

    func_ov000_02062e44(pFetch11BC, &this->mUnk_11BC);
    s16 x11BC = pFetch11BC->x;
    x11BC += data_ov019_020d24c0.mUnk_04.x;

    s16 y11BC = pFetch11BC->y;
    y11BC += data_ov019_020d24c0.mUnk_04.y;
    pos11BC.x = x11BC;
    pos11BC.y = y11BC;
    this->mUnk_11BC.mPos.coords = pos11BC.coords;

    func_ov000_02062e44(pFetch15D4, &this->mUnk_15D4);
    Vec2s_Add(pFetch15D4, &data_ov019_020d1e70.mUnk_04, &pos15D4);
    Vec2s pos18EC, fetch18EC;
    Vec2s *pFetch18EC = (Vec2s *) &fetch18EC;

    this->mUnk_15D4.mPos.coords = pos15D4.coords;

    func_ov000_02062e44(pFetch18EC, &this->mUnk_18EC);
    Vec2s_Add(pFetch18EC, &data_ov019_020d1e70.mUnk_00, &pos18EC);
    this->mUnk_18EC.mPos.coords = pos18EC.coords;

    _ZN14CellAnimObject19func_ov000_02060950Ev(&this->mUnk_1144, 0x8B, 0, 6);
    Vec2s new1144;
    Vec2s_CopyAdd(&this->mUnk_1144.mUnk_5C, &data_ov019_020d24c0.mUnk_04, &new1144);
    this->mUnk_1144.mUnk_5C.coords = new1144.coords;

    _ZN14CellAnimObject19func_ov000_02060950Ev(&this->mUnk_155C, 0x8B, 2, 5);
    Vec2s new155C;
    Vec2s_CopyAdd(&this->mUnk_155C.mUnk_5C, &data_ov019_020d24c0.mUnk_04, &new155C);
    this->mUnk_155C.mUnk_5C.coords = new155C.coords;

    this->mUnk_11BC.mUnk_2A = 0;
    this->mUnk_15D4.mUnk_2A = 0;
    this->mUnk_18EC.mUnk_2A = 0;

    this->mUnk_0488.mUnk_2A = 0;
    this->mUnk_07E4.mUnk_2A = 0;
    this->mUnk_0AC4.mUnk_2A = 0;
    this->mUnk_005C.mUnk_2A = 0;
    this->mUnk_0DA4.mUnk_2A = 0;

    {
        UnkStruct2 stack_narc("Screen/Bg/Select.bin", 1);
        stack_narc.func_020154ec("MSB");
        UnkResult stack_select2("MSB:Select2", "MSB:SelectBG", NULL);
        func_0200a7b0(2, stack_select2.mUnk_00, stack_select2.mUnk_04, stack_select2.mUnk_08, 0, 0, 0, 1);
        UnkResult stack_select3("MSB:Select3", NULL, NULL);
        func_0200a7b0(3, stack_select3.mUnk_00, stack_select3.mUnk_04, stack_select3.mUnk_08, 0, 0, 2, 1);
        data_0204a110.func_020195a0("MSB:SelectBG.nclr", 0, 6, 0);
    }

    GX_SetVisiblePlane(28);
    G2_SetBlendAlpha(4, 8, 0, 16);
    this->mUnk_0C.Append(&this->mUnk_005C);
    this->func_ov019_020c63dc();
    this->func_ov019_020c6d10();
}
UnkStruct_ov019_020d1e94 UnkStruct_ov019_020d1e70::data_ov019_020d1e94 = {
    0x00, 0x00, 0x05, 0x06, 0x07, 0x08, 0x09, 0x0A, 0x0B, 0x0C, 0x0D, 0x0E, 0x0F, 0x10, 0x11, 0x12, 0x13, 0x14,
};

FileSelectMain::~FileSelectMain() {
    this->mUnk_03E0.Reset();
}

void FileSelectMain::func_ov019_020c63dc() {
    struct {
        Vec2s battleVerticalCopyA;
        Vec2s adventureVerticalCopyA;
        Vec2s optionsCopyBase;
        Vec2s optionsTarget;
        Vec2s optionsFetchTarget;
        Vec2s contactCopyBase;
        Vec2s contactTarget;
        Vec2s contactFetchTarget;
        Vec2s battleVerticalFinalTarget;
        Vec2s battleVerticalFinalPos;
        Vec2s battleVerticalFetchBase;
        Vec2s battleVerticalTarget;
        Vec2us battleVerticalFetchPos;
        Vec2s battleLeftFinalTarget;
        Vec2s battleLeftFinalPos;
        Vec2s battleLeftFetchBase;
        Vec2s battleLeftTarget;
        Vec2s battleLeftFetchPos;
        Vec2s battleCopyBase;
        Vec2s battleFinalTarget;
        Vec2s battleFetchTarget;
        Vec2s adventureVerticalFinalTarget;
        Vec2s adventureVerticalFinalPos;
        Vec2s adventureVerticalFetchBase;
        Vec2s adventureVerticalTarget;
        Vec2s adventureVerticalFetchPos;
        Vec2s adventureLeftFinalTarget;
        Vec2s adventureLeftFinalPos;
        Vec2s adventureLeftFetchBase;
        Vec2s adventureLeftTarget;
        Vec2us adventureLeftFetchPos;
        Vec2s adventureCopyBase;
        Vec2s adventureFinalTarget;
        Vec2s adventureFetchTarget;
        Vec2s eraseCopyBase;
        Vec2s eraseTarget;
        Vec2s eraseFetchTarget;
        Vec2s copyCopyBase;
        Vec2s copyTarget;
        Vec2s copyFetchTarget;
        Vec2s startSecondaryFinalTarget;
        Vec2s startSecondaryFinalPos;
        Vec2s startSecondaryFetchBase;
        Vec2s startSecondaryTarget;
        Vec2us startSecondaryFetchPos;
        Vec2s startCopyBase;
        Vec2s startFinalTarget;
        Vec2s startFetchTarget;
        Vec2us backgroundResult;
        Vec2s backgroundCopyBase;
        Vec2s backgroundTarget;
        Vec2s backgroundFetchTarget;
        Vec2s selectCopyBase;
        Vec2s selectTarget;
        Vec2s selectFetchTarget;
        Vec2s optionsFetchBase;
        Vec2s contactFetchBase;
        Vec2s battleSharedBase;
        Vec2s battleSharedPos;
        Vec2s adventureSharedTarget;
        Vec2s adventureSharedPos;
        Vec2s eraseFetchBase;
        Vec2s copyFetchBase;
        Vec2s startSharedTarget;
        Vec2s startSharedPos;
        Vec2s backgroundFetchBase;
        Vec2s selectFetchBase;
    } frame;
    s32 targetX;
    s32 targetY;

    Vec2s *selectFetch = &frame.selectFetchTarget;
    func_ov000_02062e44(selectFetch, &this->mUnk_0100);
    targetY = selectFetch->y + data_ov019_020d1e70.mUnk_1C.y;
    targetX = selectFetch->x + data_ov019_020d1e70.mUnk_1C.x;
    func_ov000_02062e44(&frame.selectFetchBase, &this->mUnk_0100);
    frame.selectTarget.x   = targetX;
    frame.selectCopyBase.x = frame.selectFetchBase.x;
    frame.selectTarget.y   = targetY;
    frame.selectCopyBase.y = frame.selectFetchBase.y;
    func_0201e754(&this->mUnk_039C, 0x0F, &frame.selectTarget, &frame.selectCopyBase,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);

    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->mUnk_03E8[i].mUnk_04 = &this->GetUnk03E0(i).mUnk_004;
    }

    Vec2s *backgroundFetch = &frame.backgroundFetchTarget;
    func_ov000_02062e44(backgroundFetch, &this->mUnk_005C);
    targetY = backgroundFetch->y + data_ov019_020d1e70.mUnk_10.y;
    targetX = backgroundFetch->x + data_ov019_020d1e70.mUnk_10.x;
    func_ov000_02062e44(&frame.backgroundFetchBase, &this->mUnk_005C);
    frame.backgroundCopyBase.x = frame.backgroundFetchBase.x;
    frame.backgroundCopyBase.y = frame.backgroundFetchBase.y;
    frame.backgroundTarget.x   = targetX;
    frame.backgroundTarget.y   = targetY;
    func_0201e754(&this->mUnk_00BC, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_04[0], &frame.backgroundTarget,
                  &frame.backgroundCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);
    func_0201e8d4(&frame.backgroundResult, &this->mUnk_00BC);
    Vec2s_Copy((Vec2s *) &frame.backgroundResult, &this->mUnk_005C.mPos);

    Vec2s *startFetch = &frame.startFetchTarget;
    func_ov000_02062e44(startFetch, &this->mUnk_0488);
    targetX = startFetch->x + data_ov019_020d24c0.mUnk_04.x;
    targetY = startFetch->y + data_ov019_020d24c0.mUnk_04.y;
    frame.startSharedPos.x = targetX;
    frame.startSharedPos.y = targetY;
    func_ov000_02062e44(&frame.startSharedTarget, &this->mUnk_0488);
    frame.startCopyBase.x = frame.startSharedTarget.x;
    frame.startCopyBase.y = frame.startSharedTarget.y;
    frame.startFinalTarget.x = frame.startSharedPos.x;
    frame.startFinalTarget.y = frame.startSharedPos.y;
    func_0201e754(&this->mUnk_075C, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, &frame.startFinalTarget,
                  &frame.startCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);

    func_ov000_02062e44(&frame.startSecondaryFetchPos, &this->mUnk_0488);
    frame.startSharedPos.x = frame.startSecondaryFetchPos.x;
    frame.startSharedPos.y = frame.startSecondaryFetchPos.y;
    Vec2s *startSecondaryBase = &frame.startSecondaryFetchBase;
    func_ov000_02062e44(startSecondaryBase, &this->mUnk_0488);
    frame.startSecondaryTarget.x = startSecondaryBase->x + data_ov019_020d24c0.mUnk_00.x;
    frame.startSecondaryTarget.y = data_ov019_020d24c0.mUnk_00.y + startSecondaryBase->y;
    frame.startSharedTarget.coords = frame.startSecondaryTarget.coords;
    frame.startSecondaryFinalPos.x = frame.startSharedPos.x;
    frame.startSecondaryFinalPos.y = frame.startSharedPos.y;
    frame.startSecondaryFinalTarget.x = frame.startSharedTarget.x;
    frame.startSecondaryFinalTarget.y = frame.startSharedTarget.y;
    func_0201e754(&this->mUnk_07A0, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, &frame.startSecondaryFinalPos,
                  &frame.startSecondaryFinalTarget, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14);

    Vec2s *copyFetch = &frame.copyFetchTarget;
    func_ov000_02062e44(copyFetch, &this->mUnk_07E4);
    targetY = copyFetch->y + data_ov019_020d1e70.mUnk_18.y;
    targetX = copyFetch->x + data_ov019_020d1e70.mUnk_18.x;
    func_ov000_02062e44(&frame.copyFetchBase, &this->mUnk_07E4);
    frame.copyTarget.x   = targetX;
    frame.copyCopyBase.x = frame.copyFetchBase.x;
    frame.copyTarget.y   = targetY;
    frame.copyCopyBase.y = frame.copyFetchBase.y;
    func_0201e754(&this->mUnk_0A80, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_04[0], &frame.copyTarget,
                  &frame.copyCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);

    Vec2s *eraseFetch = &frame.eraseFetchTarget;
    func_ov000_02062e44(eraseFetch, &this->mUnk_0AC4);
    s16 eraseY = eraseFetch->y;
    eraseY += data_ov019_020d1e70.mUnk_14.y;

    s16 eraseX = eraseFetch->x;
    eraseX += data_ov019_020d1e70.mUnk_14.x;

    targetY = eraseY;
    targetX = eraseX;
    func_ov000_02062e44(&frame.eraseFetchBase, &this->mUnk_0AC4);
    frame.eraseTarget.x   = targetX;
    frame.eraseCopyBase.x = frame.eraseFetchBase.x;
    frame.eraseTarget.y   = targetY;
    frame.eraseCopyBase.y = frame.eraseFetchBase.y;
    func_0201e754(&this->mUnk_0D60, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_04[0], &frame.eraseTarget,
                  &frame.eraseCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);

    Vec2s *adventureFetch = &frame.adventureFetchTarget;
    func_ov000_02062e44(adventureFetch, &this->mUnk_0DA4);
    targetX = adventureFetch->x + data_ov019_020d24c0.mUnk_04.x;
    targetY = adventureFetch->y + data_ov019_020d24c0.mUnk_04.y;
    frame.adventureSharedPos.x = targetX;
    frame.adventureSharedPos.y = targetY;
    func_ov000_02062e44(&frame.adventureSharedTarget, &this->mUnk_0DA4);
    frame.adventureCopyBase.x = frame.adventureSharedTarget.x;
    frame.adventureCopyBase.y = frame.adventureSharedTarget.y;
    frame.adventureFinalTarget.x = frame.adventureSharedPos.x;
    frame.adventureFinalTarget.y = frame.adventureSharedPos.y;
    func_0201e754(&this->mUnk_1078, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, &frame.adventureFinalTarget,
                  &frame.adventureCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);

    func_ov000_02062e44(&frame.adventureLeftFetchPos, &this->mUnk_0DA4);
    frame.adventureSharedPos.x = frame.adventureLeftFetchPos.x;
    frame.adventureSharedPos.y = frame.adventureLeftFetchPos.y;
    Vec2s *adventureLeftBase = &frame.adventureLeftFetchBase;
    func_ov000_02062e44(adventureLeftBase, &this->mUnk_0DA4);
    s16 adventureLeftX = data_ov019_020d24c0.mUnk_00.x;
    adventureLeftX += adventureLeftBase->x;

    s16 adventureLeftY = data_ov019_020d24c0.mUnk_00.y;
    adventureLeftY += adventureLeftBase->y;

    frame.adventureLeftTarget.x = adventureLeftX;
    frame.adventureLeftTarget.y = adventureLeftY;
    frame.adventureSharedTarget.coords = frame.adventureLeftTarget.coords;
    frame.adventureLeftFinalPos.coords = frame.adventureSharedPos.coords;
    frame.adventureLeftFinalTarget.x = frame.adventureSharedTarget.x;
    frame.adventureLeftFinalTarget.y = frame.adventureSharedTarget.y;
    func_0201e754(&this->mUnk_10BC, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, &frame.adventureLeftFinalPos,
                  &frame.adventureLeftFinalTarget, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14);

    func_ov000_02062e44(&frame.adventureVerticalFetchPos, &this->mUnk_0DA4);
    frame.adventureVerticalCopyA.coords = frame.adventureVerticalFetchPos.coords;
    Vec2s *adventureVerticalBase = &frame.adventureVerticalFetchBase;
    func_ov000_02062e44(adventureVerticalBase, &this->mUnk_0DA4);
    s16 adventureVerticalX = adventureVerticalBase->x;
    adventureVerticalX += UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_1C.x;

    s16 adventureVerticalY = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_1C.y;
    adventureVerticalY += adventureVerticalBase->y;

    frame.adventureVerticalTarget.x = adventureVerticalX;
    frame.adventureVerticalTarget.y = adventureVerticalY;
    frame.adventureSharedTarget.coords = frame.adventureVerticalTarget.coords;
    frame.adventureVerticalFinalPos.x = frame.adventureVerticalCopyA.x;
    frame.adventureVerticalFinalPos.y = frame.adventureVerticalCopyA.y;
    frame.adventureVerticalFinalTarget.x = frame.adventureSharedTarget.x;
    frame.adventureVerticalFinalTarget.y = frame.adventureSharedTarget.y;
    func_0201e754(&this->mUnk_1100, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_00, &frame.adventureVerticalFinalPos,
                  &frame.adventureVerticalFinalTarget, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14);

    Vec2s *battleFetch = &frame.battleFetchTarget;
    func_ov000_02062e44(battleFetch, &this->mUnk_11BC);
    s16 battleX = battleFetch->x;
    battleX += data_ov019_020d24c0.mUnk_04.x;

    s16 battleY = battleFetch->y;
    battleY += data_ov019_020d24c0.mUnk_04.y;

    frame.battleSharedPos.x = battleX;
    frame.battleSharedPos.y = battleY;
    func_ov000_02062e44(&frame.battleSharedBase, &this->mUnk_11BC);
    frame.battleCopyBase.x = frame.battleSharedBase.x;
    frame.battleCopyBase.y = frame.battleSharedBase.y;
    frame.battleFinalTarget.x = frame.battleSharedPos.x;
    frame.battleFinalTarget.y = frame.battleSharedPos.y;
    func_0201e754(&this->mUnk_1490, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, &frame.battleFinalTarget,
                  &frame.battleCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);

    func_ov000_02062e44(&frame.battleLeftFetchPos, &this->mUnk_11BC);
    frame.battleSharedPos.coords = frame.battleLeftFetchPos.coords;
    Vec2s *battleLeftBase = &frame.battleLeftFetchBase;
    func_ov000_02062e44(battleLeftBase, &this->mUnk_11BC);
    s16 battleLeftTargetX = battleLeftBase->x;
    battleLeftTargetX += data_ov019_020d24c0.mUnk_00.x;

    s16 battleLeftTargetY = data_ov019_020d24c0.mUnk_00.y;
    battleLeftTargetY += battleLeftBase->y;

    frame.battleLeftTarget.x = battleLeftTargetX;
    frame.battleLeftTarget.y = battleLeftTargetY;
    frame.battleLeftFinalPos.coords = frame.battleSharedPos.coords;
    frame.battleSharedBase.x = frame.battleLeftTarget.x;
    frame.battleSharedBase.y = frame.battleLeftTarget.y;
    frame.battleLeftFinalTarget.coords = frame.battleSharedBase.coords;
    func_0201e754(&this->mUnk_14D4, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, &frame.battleLeftFinalPos,
                  &frame.battleLeftFinalTarget, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14);

    func_ov000_02062e44(&frame.battleVerticalFetchPos, &this->mUnk_11BC);
    frame.battleVerticalCopyA.x = frame.battleVerticalFetchPos.x;
    frame.battleVerticalCopyA.y = frame.battleVerticalFetchPos.y;
    Vec2s *battleVerticalBase = &frame.battleVerticalFetchBase;
    func_ov000_02062e44(battleVerticalBase, &this->mUnk_11BC);
    frame.battleVerticalTarget.x = data_ov019_020d1e70.mUnk_08.x + battleVerticalBase->x;
    frame.battleVerticalTarget.y = data_ov019_020d1e70.mUnk_08.y + battleVerticalBase->y;
    frame.battleSharedBase.coords = frame.battleVerticalTarget.coords;
    frame.battleVerticalFinalPos.coords = frame.battleVerticalCopyA.coords;
    frame.battleVerticalFinalTarget.x = frame.battleSharedBase.x;
    frame.battleVerticalFinalTarget.y = frame.battleSharedBase.y;
    func_0201e754(&this->mUnk_1518, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_00, &frame.battleVerticalFinalPos,
                  &frame.battleVerticalFinalTarget, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14);

    Vec2s *contactFetch = &frame.contactFetchTarget;
    func_ov000_02062e44(contactFetch, &this->mUnk_15D4);
    s16 contactY = contactFetch->y;
    contactY += data_ov019_020d1e70.mUnk_04.y;

    s16 contactX = contactFetch->x;
    contactX += data_ov019_020d1e70.mUnk_04.x;

    targetY = contactY;
    targetX = contactX;
    func_ov000_02062e44(&frame.contactFetchBase, &this->mUnk_15D4);
    frame.contactTarget.x   = targetX;
    frame.contactCopyBase.x = frame.contactFetchBase.x;
    frame.contactTarget.y   = targetY;
    frame.contactCopyBase.y = frame.contactFetchBase.y;
    func_0201e754(&this->mUnk_18A8, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_04[0], &frame.contactTarget,
                  &frame.contactCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);

    Vec2s *optionsFetch = &frame.optionsFetchTarget;
    func_ov000_02062e44(optionsFetch, &this->mUnk_18EC);
    targetX = optionsFetch->x + data_ov019_020d1e70.mUnk_00.x;
    targetY = optionsFetch->y + data_ov019_020d1e70.mUnk_00.y;
    func_ov000_02062e44(&frame.optionsFetchBase, &this->mUnk_18EC);
    frame.optionsCopyBase.x = frame.optionsFetchBase.x;
    frame.optionsTarget.y   = targetY;
    frame.optionsTarget.x   = targetX;
    frame.optionsCopyBase.y = frame.optionsFetchBase.y;
    func_0201e754(&this->mUnk_1BC0, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_04[0], &frame.optionsTarget,
                  &frame.optionsCopyBase, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20,
                  UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C);
}

void FileSelectMain::func_ov019_020c6c14() {}

void FileSelectMain::func_ov019_020c6c18() {
    this->mUnk_0C.Append(&this->mUnk_0488);
    this->mUnk_0C.Append(&this->mUnk_07E4);
    this->mUnk_0C.Append(&this->mUnk_0AC4);
}

void FileSelectMain::func_ov019_020c6c54() {
    this->mUnk_0C.Append(&this->mUnk_0DA4);
    this->mUnk_0C.Append(&this->mUnk_11BC);
    this->mUnk_0C.Append(&this->mUnk_15D4);
    this->mUnk_0C.Append(&this->mUnk_18EC);
}

void FileSelectMain::func_ov019_020c6c9c() {}

void FileSelectMain::func_ov019_020c6ca0() {
    this->mUnk_0488.Detach();
    this->mUnk_07E4.Detach();
    this->mUnk_0AC4.Detach();
}

void FileSelectMain::func_ov019_020c6cd0() {
    this->mUnk_0DA4.Detach();
    this->mUnk_11BC.Detach();
    this->mUnk_15D4.Detach();
    this->mUnk_18EC.Detach();
}

void FileSelectMain::func_ov019_020c6d08() {}

void FileSelectMain::func_ov019_020c6d0c() {}

void FileSelectMain::func_ov019_020c6d10() {
    CALL_PTMF(PTMF<FileSelectMain>, data_ov019_020d1edc[this->mState]);
}

void FileSelectMain::func_ov019_020c6d48() {
    Vec2us auStack_2c;
    volatile Vec2pCpp local_34;
    int value;

    this->func_ov019_020c6c14();

    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).func_ov019_020cbaec();
        func_ov000_02062e44(&auStack_2c, &this->GetUnk03E0(i).mUnk_004);

        local_34.x = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        local_34.y = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;

        if (i == 1) {
            value = 10;
        } else {
            value = 0;
        }

        this->mUnk_03E8[i].func_ov000_02064080(&auStack_2c, (Vec2p *) &local_34,
                                               UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, value);
    }

    this->mUnk_039C.mUnk_0A = 1;
    this->mUnk_039C.mUnk_0C = 0;
    this->mUnk_039C.mUnk_0B = 0;

    if (this->mUnk_039C.mUnk_04 == this->mUnk_039C.mUnk_06) {
        this->mUnk_039C.mUnk_0A = 0;
        this->mUnk_039C.mUnk_0C = 1;
    }
}

void FileSelectMain::func_ov019_020c6e14() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = 1;
    }
}

void FileSelectMain::func_ov019_020c6e3c() {
    s32 var_r7;
    s32 var_r8;
    s32 var_r9;
    u16 var_r4;
    int var_r5;

    var_r5 = 1;
    if (this->mSaveSlotIndex != 0) {
        var_r5 = 0;
    }

    Vec2s sp28;
    Vec2s sp24;
    unk32 sp1C[2];
    Vec2s sp18;
    Vec2s temp; // sp14
    Vec2s sp10;
    Vec2s spC;
    Vec2s sp8;
    Vec2s sp4;

    if (this->mState == FileSelectState_SlotSelectToFileManager) {
        UnkStruct_ov019_020d24c8_28_258 sp2C(0x8A, 0x05);

        sp28.coords = sp2C.mPos.coords;
        var_r9      = 0x0A;

        func_ov000_02062e44(&sp18, &this->GetUnk03E0(var_r5).mUnk_004);
        func_ov000_02062e44(&sp10, &this->GetUnk03E0(var_r5).mUnk_004);

        //! TODO: use Vec2s_CopyAdd
        temp.x                             = (&sp10)->x + (&data_ov019_020d24c0.mUnk_00)->x;
        temp.y                             = (&sp10)->y + (&data_ov019_020d24c0.mUnk_00)->y;
        var_r7                             = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18;
        ((volatile Vec2s *) &sp24)->coords = ((volatile Vec2s *) &temp)->coords;
        var_r8                             = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14;
        var_r4                             = 0;
    } else if (this->mState == FileSelectState_SlotSelectFromFileManager) {
        func_ov000_02062e44(&spC, &this->GetUnk03E0(this->mSaveSlotIndex).mUnk_004);

        sp28.coords = spC.coords;
        var_r9      = 0x00;

        func_ov000_02062e44(&sp8, &this->GetUnk03E0(var_r5).mUnk_004);
        func_ov000_02062e44(&sp4, &this->GetUnk03E0(var_r5).mUnk_004);
        sp24.coords = sp4.coords;

        var_r7 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        var_r8 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;
        var_r4 = 0x0A;
    }

    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_0206415c(&sp28, 0, 0x0F, var_r9);
    sp1C[0] = var_r7;
    sp1C[1] = var_r8;
    this->mUnk_03E8[var_r5].func_ov000_02064080(&sp24, &sp1C, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02, var_r4);
}

void FileSelectMain::func_ov019_020c7000() {
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

void FileSelectMain::func_ov019_020c717c() {
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

void FileSelectMain::func_ov019_020c71d0() {
    this->func_ov019_020c6c14();
    this->func_ov019_020c6ca0();
    this->func_ov019_020c6e3c();
}

void FileSelectMain::func_ov019_020c71f0() {
    this->func_ov019_020c6c18();
    this->func_ov019_020c6c9c();
    this->func_ov019_020c7000();
}

void FileSelectMain::func_ov019_020c7210() {
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

void FileSelectMain::func_ov019_020c7274() {
    this->GetUnk03E0().mUnk_004.mUnk_2A = true;
    this->mUnk_0488.mUnk_2A             = true;
    this->mUnk_07E4.mUnk_2A             = true;
    this->mUnk_0AC4.mUnk_2A             = true;
    this->mUnk_005C.mUnk_2A             = true;
}

void FileSelectMain::func_ov019_020c72a0() {
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

        local_5c.x = local_40.mPos.x;
        local_5c.y = local_40.mPos.y;

        //! TODO: fake match?
        local_5c.x = local_40.mPos.x;
        local_5c.y = local_40.mPos.y;

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

        local_5c.x = local_40.mPos.x;
        local_5c.y = local_40.mPos.y;

        //! TODO: fake match?
        local_5c.x = local_40.mPos.x;
        local_5c.y = local_40.mPos.y;

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

    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_0206415c(&local_5c, 0, 0xF, 0);
    this->mUnk_07A0.mUnk_08 = var_r4;
    this->mUnk_0A80.mUnk_08 = var_r5;
    this->mUnk_0D60.mUnk_08 = var_r6;
    this->mUnk_00BC.mUnk_08 = var_r7;
    this->mUnk_0488.mUnk_2A = false;
    this->mUnk_07E4.mUnk_2A = false;
    this->mUnk_0AC4.mUnk_2A = false;
    this->mUnk_005C.mUnk_2A = false;
}

void FileSelectMain::func_ov019_020c757c() {
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

void FileSelectMain::func_ov019_020c7768() {
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

void FileSelectMain::func_ov019_020c77b8() {
    this->func_ov019_020c6c54();
    this->func_ov019_020c6ca0();
    this->func_ov019_020c757c();
    this->mUnk_1144.func_ov000_0206082c(0x8B, 0);
    this->mUnk_155C.func_ov000_0206082c(0x8B, 2);
}

void FileSelectMain::func_ov019_020c7804() {
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

void FileSelectMain::func_ov019_020c7858() {
    this->func_ov019_020c6c18();
    this->func_ov019_020c6cd0();
    this->func_ov019_020c72a0();
}

void FileSelectMain::func_ov019_020c7878() {
    this->mUnk_0DA4.mUnk_2A = true;
    this->mUnk_11BC.mUnk_2A = true;
    this->mUnk_15D4.mUnk_2A = true;
    this->mUnk_18EC.mUnk_2A = true;
    this->mUnk_005C.mUnk_2A = true;
    G2_ChangeBlendAlpha(16, 16);
}

void FileSelectMain::func_ov019_020c78ac() {
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

void FileSelectMain::func_ov019_020c7910() {
    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_0206415c((void *) &UnkStruct_ov019_020d1e70::data_ov019_020d1e94.mUnk_00,
                                                              0, 0x1E, 10);

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
void FileSelectMain::func_ov019_020c7a44() {
    Vec2s local_28;
    Vec2s local_2c;
    Vec2p local_34;
    Vec2p local_3c;
    fx32 unaff_r11;
    fx32 unaff_r4;
    fx32 unaff_r5;
    fx32 unaff_r6;
    int fileIndex = this->mSaveSlotIndex == 0;
    u16 value1;
    u16 value2;

    if (this->mState == FileSelectState_SlotSelectToNewFile) {
        Vec2s added1;
        Vec2s local_44;
        Vec2s added2;
        Vec2s local_4c;
        func_ov000_02062e44(&local_44, &this->GetUnk03E0().mUnk_004);
        added1.x = local_44.x + data_ov019_020d1e70.mUnk_20.x;
        added1.y = local_44.y + data_ov019_020d1e70.mUnk_20.y;
        local_28.coords = added1.coords;

        unaff_r11 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18;
        unaff_r4  = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14;
        value1      = 0x0F;

        func_ov000_02062e44(&local_4c, &this->GetUnk03E0(fileIndex).mUnk_004);
        added2.x = local_4c.x + data_ov019_020d24c0.mUnk_04.x;
        added2.y = local_4c.y + data_ov019_020d24c0.mUnk_04.y;
        local_2c.coords = added2.coords;
        unaff_r5 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18;
        unaff_r6 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14;
        value2     = 0;

        this->mUnk_039C.mUnk_0B = 1;
        this->mUnk_039C.mUnk_0C = 0;
        this->mUnk_039C.mUnk_0A = 0;

        if (this->mUnk_039C.mUnk_04 == 0) {
            this->mUnk_039C.mUnk_0B = 0;
            this->mUnk_039C.mUnk_0C = 1;
        }
    } else if (this->mState == FileSelectState_NewFileToSlotSelect) {
        Vec2s local_50;
        Vec2s local_54;
        func_ov000_02062e44(&local_50, &this->GetUnk03E0().mUnk_004);
        local_28.coords = local_50.coords;

        unaff_r11 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14;
        unaff_r4  = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18;
        value1      = 0;

        func_ov000_02062e44(&local_54, &this->GetUnk03E0(fileIndex).mUnk_004);
        local_2c.coords = local_54.coords;

        unaff_r5 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14;
        unaff_r6 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18;
        value2     = 0x0F;

        this->mUnk_039C.mUnk_0A = 1;
        this->mUnk_039C.mUnk_0C = 0;
        this->mUnk_039C.mUnk_0B = 0;

        if (this->mUnk_039C.mUnk_04 == this->mUnk_039C.mUnk_06) {
            this->mUnk_039C.mUnk_0A = 0;
            this->mUnk_039C.mUnk_0C = 1;
        }
    }

    local_34.x = unaff_r11;
    local_34.y = unaff_r4;
    this->mUnk_03E8[this->mSaveSlotIndex].func_ov000_02064080(&local_28, &local_34, 0x14, value1);

    local_3c.x = unaff_r5;
    local_3c.y = unaff_r6;
    this->mUnk_03E8[fileIndex].func_ov000_02064080(&local_2c, &local_3c, UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_02,
                                                   value2);
}

void FileSelectMain::func_ov019_020c7c3c() {
    this->func_ov019_020c7a44();
}

void FileSelectMain::func_ov019_020c7c48() {
    this->GetUnk03E0().func_ov019_020cbb40();
    this->func_ov019_020c7a44();
}

void FileSelectMain::func_ov019_020c7c70() {
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
void FileSelectMain::func_ov019_020c7d3c() {
    this->mUnk_1C04.mUnk_12 = this->mSaveSlotIndex;

    if (this->mUnk_1C04.mUnk_18 == 0) {
        int uVar5 = 2;
        if (this->mSaveSlotIndex != 0) {
            uVar5 = 1;
        }
        UnkStruct_ov000_020b504c_0C_Base *puVar3   = data_ov000_020b504c.func_ov000_02067bc4(0);
        unk32 uVar2                                = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_10;
        puVar3->mUnk_08->mUnk_020.mCellAnim.unk_34 = (void *) uVar5; //! TODO: real?
        data_ov000_020b504c.func_ov000_0206807c(uVar2, &this->mUnk_1C04);
    } else if (this->mUnk_1C04.mUnk_18 == 1) {
        data_ov000_020b504c.func_ov000_0206807c(data_ov019_020d1e70.mUnk_0C, &this->mUnk_1C04);
    }
}

// non-matching
void FileSelectMain::func_ov019_020c7dc8() {
    unk32 var_r6;
    unk32 var_r7;
    unk32 var_r5;
    u16 var_r8;
    unk32 var_r9;
    unk32 var_r10;
    unk32 var_r1;
    unk32 var_r2;
    Vec2s sp10_sp12; // sp10 sp12
    Vec2p local_48;  // sp8 spC
    volatile Vec2us sum;

    if (this->mState == FileSelectState_ChooseModeToContactMode) {
        UnkSystem2_UnkSubSystem1_Base *pUVar5 = this->mUnk_03E8[this->mSaveSlotIndex].mUnk_04;
        sum.x = pUVar5->mPos.x + data_ov019_020d1e70.mUnk_20.x;
        sum.y = pUVar5->mPos.y + data_ov019_020d1e70.mUnk_20.y;
        sp10_sp12.x = sum.x;
        sp10_sp12.y = sum.y;

        var_r1 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_18;
        var_r2 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_14;

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

        sp10_sp12.x = local_3c.mPosU.x;
        sp10_sp12.y = local_3c.mPosU.y;
        var_r1 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_20;
        var_r2 = UnkStruct_ov019_020d1e70::data_ov019_020d1e4c.mUnk_0C;

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

    local_48.y = var_r2;
    local_48.x = var_r1;
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

void FileSelectMain::func_ov019_020c80dc() {
    this->func_ov019_020c7dc8();
}

void FileSelectMain::func_ov019_020c80e8() {
    this->func_ov019_020c7dc8();
}

void FileSelectMain::func_ov019_020c80f4() {}

void FileSelectMain::vfunc_08(Input *pButtons, TouchControl *pTouchControl) {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->mUnk_03E8[i].func_ov000_02063f64();
        this->GetUnk03E0(i).func_ov019_020cbb94();
    }

    CALL_PTMF(PTMF<FileSelectMain>, data_ov019_020d1f94[this->mState]);
    if (this->mUnk_002C.mUnk_08 != 0) {
        s32 diff = this->mUnk_002C.mUnk_08 - this->mUnk_002C.mUnk_0D;

        if (diff > 0xFFFF) {
            diff = 0xFFFF;
        } else if (diff < 0) {
            diff = 0;
        }

        this->mUnk_002C.mUnk_08 = diff;
    } else if (this->mUnk_002C.mUnk_0A) {
        if (this->mUnk_002C.mUnk_04 < this->mUnk_002C.mUnk_06) {
            int nextValue = this->mUnk_002C.mUnk_04 + this->mUnk_002C.mUnk_0D;
            int targetLimit = this->mUnk_002C.mUnk_06;

            if (nextValue > targetLimit) {
                nextValue = targetLimit;
            } else if (nextValue < 0) {
                nextValue = 0;
            }

            this->mUnk_002C.mUnk_04 = nextValue;
            this->mUnk_002C.vfunc_00();

            if (this->mUnk_002C.mUnk_04 >= this->mUnk_002C.mUnk_06) {
                this->mUnk_002C.mUnk_10 = this->mUnk_002C.mUnk_18;
                this->mUnk_002C.mUnk_0A = false;
                this->mUnk_002C.mUnk_0C = true;
            }
        }
    } else if (this->mUnk_002C.mUnk_0B && this->mUnk_002C.mUnk_04 != 0) {
        int targetLimit = this->mUnk_002C.mUnk_06;
        int nextValue = this->mUnk_002C.mUnk_04 - this->mUnk_002C.mUnk_0D;

        if (nextValue > targetLimit) {
            nextValue = targetLimit;
        } else if (nextValue < 0) {
            nextValue = 0;
        }

        this->mUnk_002C.mUnk_04 = nextValue;
        this->mUnk_002C.vfunc_04();

        if (this->mUnk_002C.mUnk_04 == 0) {
            this->mUnk_002C.mUnk_10 = this->mUnk_002C.mUnk_14;
            this->mUnk_002C.mUnk_0B = false;
            this->mUnk_002C.mUnk_0C = true;
        }
    }
    G2_ChangeBlendAlpha(this->mUnk_002C.func_0201eaa0(), 16);
}

void FileSelectMain::func_ov019_020c8290() {
    if ((gGame.GetGameModeFileSelect()->mUnk_04.mUnk_08 & 0xFFFF) == 0xFFFF) {
        this->SetState(FileSelectState_Init);
    }
}

void FileSelectMain::func_ov019_020c82c4() {
    this->mUnk_039C.Update(&this->mUnk_0100.mPos);

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C) {
        this->SetState(FileSelectState_SlotSelectIdle);
    }
}

void FileSelectMain::func_ov019_020c8454() {
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

void FileSelectMain::func_ov019_020c8524() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }
}

void FileSelectMain::func_ov019_020c854c() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_075C.Update(&this->mUnk_0488.mPos);
    this->mUnk_0A80.Update(&this->mUnk_07E4.mPos);
    this->mUnk_0D60.Update(&this->mUnk_0AC4.mPos);
    this->mUnk_00BC.Update(&this->mUnk_005C.mPos);
}

void FileSelectMain::func_ov019_020c8aac() {
    this->func_ov019_020c8524();

    if (!this->func_ov019_020cb238()) {
        this->SetState(FileSelectState_FileManagerFromSlotSelect);
    }
}

void FileSelectMain::func_ov019_020c8ad8() {
    this->func_ov019_020c854c();

    if (this->mUnk_075C.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C) {
        this->SetState(FileSelectState_FileManagerIdle);
    }
}

void FileSelectMain::func_ov019_020c8b10() {
    this->func_ov019_020c854c();

    if (this->mUnk_075C.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C) {
        this->SetState(FileSelectState_SlotSelectFromFileManager);
    }
}

void FileSelectMain::func_ov019_020c8b48() {
    this->func_ov019_020c8524();

    if (!this->func_ov019_020cb238()) {
        this->SetState(FileSelectState_SlotSelectIdle);
    }
}

void FileSelectMain::func_ov019_020c8b74() {
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

void FileSelectMain::func_ov019_020c8c4c() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_039C.Update(&this->mUnk_0100.mPos);
    this->mUnk_07A0.Update(&this->mUnk_0488.mPos);
    this->mUnk_0A80.Update(&this->mUnk_07E4.mPos);
    this->mUnk_0D60.Update(&this->mUnk_0AC4.mPos);
    this->mUnk_00BC.Update(&this->mUnk_005C.mPos);
}

static inline void Vec2s_OffsetSub(const Vec2s *a, const Vec2s *b, const Vec2s *c, Vec2s *dst) {
    s16 y;
    s16 x;

    y = a->y + b->y;
    x = a->x + b->x;

    x -= c->x;
    y -= c->y;

    dst->x = x;
    dst->y = y;
}

static inline void UpdateCellAnimPos(CellAnimObject *cellAnim, UnkSystem2_UnkSubSystem1_Derived2 *button,
                                     UnkSystem2_UnkSubSystem9 *slider,
                                     const UnkStruct_ov019_020d24c8_28_258 &offset) {
    Vec2s buttonPos;
    Vec2s sliderPos;
    Vec2s pos;

    func_ov000_02062e44(&buttonPos, button);

    Vec2s *ptr = (Vec2s *) &sliderPos;
    func_0201e8d4(ptr, slider);

    Vec2s_OffsetSub(ptr, &offset.mPos, &buttonPos, &pos);
    Vec2s_Set(&pos, &cellAnim->mUnk_5C);
}

void FileSelectMain::func_ov019_020c92dc() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_00BC.Update(&this->mUnk_005C.mPos);

    this->mUnk_1078.Update(&this->mUnk_0DA4.mPos);
    UnkStruct_ov019_020d24c8_28_258 local_30(0x8B, 0x06);
    UpdateCellAnimPos(&this->mUnk_1144, &this->mUnk_0DA4, &this->mUnk_1078, local_30);

    this->mUnk_1490.Update(&this->mUnk_11BC.mPos);
    UnkStruct_ov019_020d24c8_28_258 local_48(0x8B, 0x05);
    UpdateCellAnimPos(&this->mUnk_155C, &this->mUnk_11BC, &this->mUnk_1490, local_48);

    this->mUnk_18A8.Update(&this->mUnk_15D4.mPos);
    this->mUnk_1BC0.Update(&this->mUnk_18EC.mPos);

    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();
}

void FileSelectMain::func_ov019_020c9b28() {
    this->func_ov019_020c8c4c();

    if (this->mUnk_039C.mUnk_0C && this->mUnk_07A0.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C &&
        this->mUnk_00BC.mUnk_0C) {
        this->SetState(FileSelectState_ChooseModeFromFileManager);
    }
}

void FileSelectMain::func_ov019_020c9b70() {
    this->func_ov019_020c92dc();

    if (!this->func_ov019_020cb238() && this->mUnk_00BC.mUnk_0C && this->mUnk_1078.mUnk_0C && this->mUnk_1490.mUnk_0C &&
        this->mUnk_18A8.mUnk_0C && this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_ChooseModeIdle);
    }
}

void FileSelectMain::func_ov019_020c9bcc() {
    this->func_ov019_020c92dc();

    if (this->mUnk_00BC.mUnk_0C && this->mUnk_1078.mUnk_0C && this->mUnk_1490.mUnk_0C && this->mUnk_18A8.mUnk_0C &&
        this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_FileManagerFromChooseMode);
    }
}

void FileSelectMain::func_ov019_020c9c18() {
    this->func_ov019_020c8c4c();

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C && this->mUnk_07A0.mUnk_0C && this->mUnk_0A80.mUnk_0C &&
        this->mUnk_0D60.mUnk_0C && this->mUnk_00BC.mUnk_0C) {
        this->SetState(FileSelectState_FileManagerIdle);
    }
}

void FileSelectMain::func_ov019_020c9c70() {
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
            gGame.GetGameModeFileSelect()->LoadContactMode(this->mSaveSlotIndex);
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

void FileSelectMain::func_ov019_020c9d88() {
    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();

    if (this->mExitMode == FileSelectExitMode_AdventureMode) {
        if (this->mUnk_1144.func_ov000_02060af8()) {
            this->SetState(FileSelectState_EnterGameMode);
            return;
        }
    }

    if (this->mExitMode == FileSelectExitMode_BattleMode) {
        if (this->mUnk_155C.func_ov000_02060af8()) {
            this->SetState(FileSelectState_EnterGameMode);
            return;
        }
    }
}

void FileSelectMain::func_ov019_020c9e08() {
    this->mUnk_00BC.Update(&this->mUnk_005C.mPos);

    this->mUnk_10BC.Update(&this->mUnk_0DA4.mPos);
    UnkStruct_ov019_020d24c8_28_258 local_30(0x8B, 0x06);
    UpdateCellAnimPos(&this->mUnk_1144, &this->mUnk_0DA4, &this->mUnk_10BC, local_30);

    this->mUnk_14D4.Update(&this->mUnk_11BC.mPos);
    UnkStruct_ov019_020d24c8_28_258 local_48(0x8B, 0x05);
    UpdateCellAnimPos(&this->mUnk_155C, &this->mUnk_11BC, &this->mUnk_14D4, local_48);

    this->mUnk_18A8.Update(&this->mUnk_15D4.mPos);
    this->mUnk_1BC0.Update(&this->mUnk_18EC.mPos);

    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();

    if (this->mExitMode == FileSelectExitMode_AdventureMode && this->mUnk_00BC.mUnk_0C) {
        gGame.GetGameModeFileSelect()->LoadAdventureMode(this->mSaveSlotIndex);
        this->mExitMode = FileSelectExitMode_Unk_3;
    } else if (this->mExitMode == FileSelectExitMode_BattleMode && this->mUnk_00BC.mUnk_0C) {
        gGame.GetGameModeFileSelect()->LoadBattleMode(this->mSaveSlotIndex);
        this->mExitMode = FileSelectExitMode_Unk_3;
    }
}

void FileSelectMain::func_ov019_020ca6a4() {
    this->mUnk_039C.Update(&this->mUnk_0100.mPos);
}

void FileSelectMain::func_ov019_020ca80c() {
    this->func_ov019_020ca6a4();

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C) {
        this->SetState(FileSelectState_NewFileFromSlotSelect);
    }
}

void FileSelectMain::func_ov019_020ca844() {
    this->func_ov019_020ca6a4();

    if (!this->func_ov019_020cb238() && this->mUnk_039C.mUnk_0C) {
        this->SetState(FileSelectState_SlotSelectIdle);
    }
}

void FileSelectMain::func_ov019_020ca87c() {
    this->func_ov019_020c854c();

    if (this->mUnk_075C.mUnk_0C && this->mUnk_0A80.mUnk_0C && this->mUnk_0D60.mUnk_0C) {
        this->SetState(FileSelectState_CopyEraseFromFileManager);
    }
}

void FileSelectMain::func_ov019_020ca8b4() {
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

void FileSelectMain::func_ov019_020ca940() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).mUnk_004.mUnk_2A = false;
    }

    this->mUnk_00BC.Update(&this->mUnk_005C.mPos);

    this->mUnk_1100.Update(&this->mUnk_0DA4.mPos);
    UnkStruct_ov019_020d24c8_28_258 local_30(0x8B, 0x06);
    UpdateCellAnimPos(&this->mUnk_1144, &this->mUnk_0DA4, &this->mUnk_1100, local_30);

    this->mUnk_1518.Update(&this->mUnk_11BC.mPos);
    UnkStruct_ov019_020d24c8_28_258 local_48(0x8B, 0x05);
    UpdateCellAnimPos(&this->mUnk_155C, &this->mUnk_11BC, &this->mUnk_1518, local_48);

    this->mUnk_18A8.Update(&this->mUnk_15D4.mPos);
    this->mUnk_1BC0.Update(&this->mUnk_18EC.mPos);

    this->mUnk_1144.func_ov000_020609c4();
    this->mUnk_155C.func_ov000_020609c4();
}

void FileSelectMain::func_ov019_020cb180() {
    this->func_ov019_020ca940();

    if (!this->func_ov019_020cb238() && this->mUnk_00BC.mUnk_0C && this->mUnk_1100.mUnk_0C && this->mUnk_1518.mUnk_0C &&
        this->mUnk_18A8.mUnk_0C && this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_OptionsFromChooseMode);
    }
}

void FileSelectMain::func_ov019_020cb1dc() {
    this->func_ov019_020ca940();

    if (!this->func_ov019_020cb238() && this->mUnk_00BC.mUnk_0C && this->mUnk_1100.mUnk_0C && this->mUnk_1518.mUnk_0C &&
        this->mUnk_18A8.mUnk_0C && this->mUnk_1BC0.mUnk_0C) {
        this->SetState(FileSelectState_ChooseModeIdle);
    }
}

bool FileSelectMain::func_ov019_020cb238() {
    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        if (this->mUnk_03E8[i].mUnk_08) {
            return true;
        }
    }

    return false;
}

void FileSelectMain::func_ov019_020cb268() {}

void FileSelectMain::func_ov019_020cb26c() {}

void FileSelectMain::vfunc_10(unk8 *param1) {
    CALL_PTMF(PTMF<FileSelectMain>, data_ov019_020d204c[this->mState]);
}

void FileSelectMain::func_ov019_020cb2a8() {
    this->mUnk_0160.func_ov000_02062f30();

    for (int i = 0; i < MAX_SAVE_SLOTS; i++) {
        this->GetUnk03E0(i).func_ov019_020cbc0c();
    }
}

void FileSelectMain::func_ov019_020cb2dc() {
    this->mUnk_0160.func_ov000_02062f30();
    this->GetUnk03E0().func_ov019_020cbc0c();
    this->mUnk_0520.func_ov000_02062f30();
    this->mUnk_0844.func_ov000_02062f30();
    this->mUnk_0B24.func_ov000_02062f30();
}

struct stack_struct {
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk8 mUnk_04;
    /* 05 */ unk8 mUnk_05;
    /* 06 */ u16 mUnk_06;
    /* 08 */
};

void FileSelectMain::func_ov019_020cb324() {
    Vec2s sStack_18;
    Vec2s sStack_1c;
    stack_struct auStack_24;
    volatile Vec2s selected_18;
    volatile Vec2s selected_1c;

    this->mUnk_0160.func_ov000_02062f30();
    this->GetUnk03E0().func_ov019_020cbc0c();
    this->mUnk_0E3C.func_ov000_02062f30();
    this->mUnk_1254.func_ov000_02062f30();
    this->mUnk_166C.func_ov000_02062f30();
    this->mUnk_1984.func_ov000_02062f30();

    sStack_18.x = 0;
    sStack_18.y = 0;
    if (this->mUnk_0DA4.mUnk_28) {
        selected_18.x    = this->mUnk_0DA4.mPosOffset.x;
        selected_18.y    = this->mUnk_0DA4.mPosOffset.y;
        sStack_18.coords = selected_18.coords;
    }

    sStack_1c.x = 0;
    sStack_1c.y = 0;
    if (this->mUnk_11BC.mUnk_28) {
        selected_1c.x    = this->mUnk_11BC.mPosOffset.x;
        selected_1c.y    = this->mUnk_11BC.mPosOffset.y;
        sStack_1c.coords = selected_1c.coords;
    }

    auStack_24.mUnk_06 = 0;
    MI_CpuFill32(0, &auStack_24, sizeof(auStack_24));
    auStack_24.mUnk_05 = -1;
    auStack_24.mUnk_06 |= 0x04;

    s16 pos1144Y = this->mUnk_1144.mUnk_5C.y;
    s16 pos1144X = this->mUnk_1144.mUnk_5C.x;
    pos1144X += sStack_18.x;
    pos1144Y += sStack_18.y;
    Vec2s local_30(pos1144X, pos1144Y);
    data_0204af1c.func_0201aad0(&this->mUnk_1144, (void *) &local_30, 0, &auStack_24);

    s16 pos155CY = this->mUnk_155C.mUnk_5C.y;
    s16 pos155CX = this->mUnk_155C.mUnk_5C.x;
    pos155CX += sStack_1c.x;
    pos155CY += sStack_1c.y;
    Vec2s local_34(pos155CX, pos155CY);
    data_0204af1c.func_0201aad0(&this->mUnk_155C, (void *) &local_34, 0, &auStack_24);
}

void FileSelectMain::func_ov019_020cb4bc() {
    this->func_ov019_020cb2a8();
}

void FileSelectMain::func_ov019_020cb4c8() {
    this->func_ov019_020cb2a8();
}

void FileSelectMain::func_ov019_020cb4d4() {
    this->func_ov019_020cb2a8();
}

void FileSelectMain::func_ov019_020cb4e0() {
    this->func_ov019_020cb2dc();
}

void FileSelectMain::func_ov019_020cb4ec() {
    this->func_ov019_020cb2dc();
}

void FileSelectMain::func_ov019_020cb4f8() {
    this->func_ov019_020cb2a8();
}

void FileSelectMain::func_ov019_020cb504() {
    this->func_ov019_020cb2dc();
}

void FileSelectMain::func_ov019_020cb510() {
    this->func_ov019_020cb2dc();
}

void FileSelectMain::func_ov019_020cb51c() {
    this->func_ov019_020cb324();
}

void FileSelectMain::func_ov019_020cb528() {
    this->func_ov019_020cb324();
}

void FileSelectMain::func_ov019_020cb534() {
    this->func_ov019_020cb2dc();
}

void FileSelectMain::func_ov019_020cb540() {
    this->func_ov019_020cb324();
}

void FileSelectMain::func_ov019_020cb54c() {
    this->func_ov019_020cb324();
}

void FileSelectMain::func_ov019_020cb558() {
    this->func_ov019_020cb324();
}

void FileSelectMain::func_ov019_020cb564() {
    this->func_ov019_020cb2a8();
}

void FileSelectMain::func_ov019_020cb570() {
    this->func_ov019_020cb2a8();
}

void FileSelectMain::func_ov019_020cb57c() {
    this->func_ov019_020cb2dc();
}

void FileSelectMain::func_ov019_020cb588() {
    this->mUnk_0160.func_ov000_02062f30();
    this->GetUnk03E0().func_ov019_020cbc0c();
}

void FileSelectMain::func_ov019_020cb5b0() {
    this->func_ov019_020cb324();
}

void FileSelectMain::func_ov019_020cb5bc() {
    this->func_ov019_020cb324();
}

void FileSelectMain::SetState(FileSelectState state) {
    this->mState = state;
    this->func_ov019_020c6d10();
}

void FileSelectMain::vfunc_18() {}

void FileSelectMain::func_ov019_020cb5dc() {
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

void FileSelectMain::func_ov019_020cb664() {
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

void FileSelectMain::func_ov019_020cb6e8() {
    if (this->mState == FileSelectState_SlotSelectIdle) {
        this->SetState(FileSelectState_SlotSelectToNewFile);
    } else if (this->mState == FileSelectState_ChooseModeIdle) {
        this->SetState(FileSelectState_ChooseModeToContactMode);
    }
}

void FileSelectMain::func_ov019_020cb718() {
    if (this->mState == FileSelectState_NewFileFromSlotSelect) {
        this->SetState(FileSelectState_NewFileToSlotSelect);
    } else if (this->mState == FileSelectState_OptionsFromChooseMode) {
        this->SetState(FileSelectState_OptionsToChooseMode);
    }
}

bool FileSelectMain::func_ov019_020cb748() {
    if (this->mState == FileSelectState_NewFileFromSlotSelect || this->mState == FileSelectState_SlotSelectIdle ||
        this->mState == FileSelectState_OptionsFromChooseMode || this->mState == FileSelectState_ChooseModeIdle) {
        return true;
    }

    return false;
}
