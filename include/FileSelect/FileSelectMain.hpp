#pragma once

#include "FileSelect/UnkSubStruct9.hpp"
#include "Game/GameModeManager.hpp"
#include "Save/SaveManager.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "global.h"
#include "iterator.hpp"
#include "nitro/math.h"
#include "types.h"

typedef Iterator<UnkSubStruct9, MAX_SAVE_SLOTS> FileSlotIterator;

/*
    - "Slot Select" refers to the screen where you choose which file to use
    - "File Manager" refers to the screen with the "start", "copy" and "erase" buttons
    - "Choose Mode" refers to the screen with the "adventure" and "battle" buttons (it also hosts "contact mode" and "options")
    - "Enter Game Mode" refers to the transition from the file select to battle mode or adventure mode
    - "From" means "load the elements from that screen when coming from the previous one"
    - "To" means "unload the elements from that screen and load the next one"
*/
typedef u32 FileSelectState;
enum FileSelectState_ {
    /* 0x00 */ FileSelectState_Unk_00                    = 0, // none or pre-init?
    /* 0x01 */ FileSelectState_Init                      = 1,
    /* 0x02 */ FileSelectState_SlotSelectIdle            = 2,
    /* 0x03 */ FileSelectState_SlotSelectToFileManager   = 3,
    /* 0x04 */ FileSelectState_FileManagerFromSlotSelect = 4,
    /* 0x05 */ FileSelectState_FileManagerToSlotSelect   = 5,
    /* 0x06 */ FileSelectState_SlotSelectFromFileManager = 6,
    /* 0x07 */ FileSelectState_FileManagerIdle           = 7,
    /* 0x08 */ FileSelectState_FileManagerToChooseMode   = 8,
    /* 0x09 */ FileSelectState_ChooseModeFromFileManager = 9,
    /* 0x0A */ FileSelectState_ChooseModeToFileManager   = 10,
    /* 0x0B */ FileSelectState_FileManagerFromChooseMode = 11,
    /* 0x0C */ FileSelectState_ChooseModeIdle            = 12,
    /* 0x0D */ FileSelectState_ChooseModeToEnterGameMode = 13,
    /* 0x0E */ FileSelectState_EnterGameMode             = 14,
    /* 0x0F */ FileSelectState_SlotSelectToNewFile       = 15,
    /* 0x10 */ FileSelectState_NewFileToSlotSelect       = 16,
    /* 0x11 */ FileSelectState_FileManagerToCopyErase    = 17,
    /* 0x12 */ FileSelectState_CopyEraseFromFileManager  = 18,
    /* 0x13 */ FileSelectState_ChooseModeToContactMode   = 19, // contact mode is another overlay to there's no "from" variant
    /* 0x14 */ FileSelectState_OptionsToChooseMode       = 20,
    /* 0x15 */ FileSelectState_NewFileFromSlotSelect     = 21,
    /* 0x16 */ FileSelectState_OptionsFromChooseMode     = 22,
    /* 0x17 */ FileSelectState_Max                       = 23
};

typedef u32 FileSelectExitMode;
enum FileSelectExitMode_ {
    /* 0x00 */ FileSelectExitMode_AdventureMode = 0,
    /* 0x01 */ FileSelectExitMode_BattleMode    = 1,
    /* 0x02 */ FileSelectExitMode_Unk_2         = 2,
    /* 0x03 */ FileSelectExitMode_Unk_3         = 3,
};

class FileSelectMain : public GameModeManagerBase_104 { // 022E5F70
public:
    /* 0000 (base) */
    /* 001C */ FileSelectState mState;
    /* 0020 */ FileSelectExitMode mExitMode;
    /* 0024 */ s8 mSaveSlotIndex;
    /* 0025 */ unk8 mUnk_0025;
    /* 0026 */ unk8 mUnk_0026;
    /* 0027 */ unk8 mUnk_0027;
    /* 0028 */ unk32 mUnk_0028;
    /* 002C */ UnkSubStruct1 mUnk_002C;
    /* 005C */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_005C;
    /* 00BC */ UnkSystem2_UnkSubSystem9 mUnk_00BC;

    // upper "select file"
    /* 0100 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_0100;
    /* 0160 */ UnkSystem2_UnkSubSystem3 mUnk_0160;
    /* 0164 */ UnkSystem2_UnkSubSystem5 mUnk_0164;
    /* 039C */ UnkSystem2_UnkSubSystem9 mUnk_039C;

    /* 03E0 */ FileSlotIterator mUnk_03E0;
    /* 03E8 */ UnkSystem2_UnkSubSystem8 mUnk_03E8[2]; // "1" and "2" icons

    // "start" button
    /* 0488 */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_0488;
    /* 04E8 */ unk8 mUnk_04E8[0x38];
    /* 0520 */ UnkSystem2_UnkSubSystem3 mUnk_0520;
    /* 0524 */ UnkSystem2_UnkSubSystem5 mUnk_0524;
    /* 075C */ UnkSystem2_UnkSubSystem9 mUnk_075C;

    /* 07A0 */ UnkSystem2_UnkSubSystem9 mUnk_07A0;

    // "copy" button
    /* 07E4 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_07E4;
    /* 0844 */ UnkSystem2_UnkSubSystem3 mUnk_0844;
    /* 0848 */ UnkSystem2_UnkSubSystem5 mUnk_0848;
    /* 0A80 */ UnkSystem2_UnkSubSystem9 mUnk_0A80;

    // "erase" button
    /* 0AC4 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_0AC4;
    /* 0B24 */ UnkSystem2_UnkSubSystem3 mUnk_0B24;
    /* 0B28 */ UnkSystem2_UnkSubSystem5 mUnk_0B28;
    /* 0D60 */ UnkSystem2_UnkSubSystem9 mUnk_0D60;

    // "adventure" button
    /* 0DA4 */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_0DA4;
    /* 0E04 */ unk8 mUnk_0E04[0x38];
    /* 0E3C */ UnkSystem2_UnkSubSystem3 mUnk_0E3C;
    /* 0E40 */ UnkSystem2_UnkSubSystem5 mUnk_0E40;
    /* 1078 */ UnkSystem2_UnkSubSystem9 mUnk_1078;

    // adventure mode animated sword icon
    /* 10BC */ UnkSystem2_UnkSubSystem9 mUnk_10BC;
    /* 1100 */ UnkSystem2_UnkSubSystem9 mUnk_1100;
    /* 1144 */ UnkSubStruct19 mUnk_1144;

    // "battle" button
    /* 11BC */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_11BC;
    /* 121C */ unk8 mUnk_121C[0x38];
    /* 1254 */ UnkSystem2_UnkSubSystem3 mUnk_1254;
    /* 1258 */ UnkSystem2_UnkSubSystem5 mUnk_1258;
    /* 1490 */ UnkSystem2_UnkSubSystem9 mUnk_1490;

    // battle mode animated sword icon
    /* 14D4 */ UnkSystem2_UnkSubSystem9 mUnk_14D4;
    /* 1518 */ UnkSystem2_UnkSubSystem9 mUnk_1518;
    /* 155C */ UnkSubStruct19 mUnk_155C;

    // "contact mode" button
    /* 15D4 */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_15D4;
    /* 1634 */ unk8 mUnk_1634[0x38];
    /* 166C */ UnkSystem2_UnkSubSystem3 mUnk_166C;
    /* 1670 */ UnkSystem2_UnkSubSystem5 mUnk_1670;
    /* 18A8 */ UnkSystem2_UnkSubSystem9 mUnk_18A8;

    // "options" button
    /* 18EC */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_18EC;
    /* 194C */ unk8 mUnk_194C[0x38];
    /* 1984 */ UnkSystem2_UnkSubSystem3 mUnk_1984;
    /* 1988 */ UnkSystem2_UnkSubSystem5 mUnk_1988;
    /* 1BC0 */ UnkSystem2_UnkSubSystem9 mUnk_1BC0;

    /* 1C04 */ UnkSystem1_ov019_Derived3 mUnk_1C04;
    /* 1C28 */

    UnkSubStruct9 &GetUnk03E0(int saveSlotIndex) {
        return this->mUnk_03E0.GetRef(saveSlotIndex);
    }

    UnkSubStruct9 &GetUnk03E0() {
        return this->GetUnk03E0(this->mSaveSlotIndex);
    }

    GameModeLinkListNode *GetNode() {
        GameModeLinkListNode *node = (GameModeLinkListNode *) this;
        if (this != NULL) {
            node = (GameModeLinkListNode *) ((u32 *) node + 1);
        }
        return node;
    }

    FileSelectMain();
    void func_ov019_020c61dc();
    void func_ov019_020c63dc();
    void func_ov019_020c6c14();
    void func_ov019_020c6c18();
    void func_ov019_020c6c54();
    void func_ov019_020c6c9c();
    void func_ov019_020c6ca0();
    void func_ov019_020c6cd0();
    void func_ov019_020c6d10();
    void func_ov019_020c6e3c();
    void func_ov019_020c7000();
    void func_ov019_020c72a0();
    void func_ov019_020c757c();
    void func_ov019_020c7a44();
    void func_ov019_020c7dc8();
    void func_ov019_020c8524();
    void func_ov019_020c854c();
    void func_ov019_020c8c4c();
    void func_ov019_020c92dc();
    void func_ov019_020ca6a4();
    void func_ov019_020ca940();
    bool func_ov019_020cb238();
    void func_ov019_020cb2a8();
    void func_ov019_020cb2dc();
    void func_ov019_020cb324();
    void SetState(FileSelectState state);
    void func_ov019_020cb6e8();
    void func_ov019_020cb5dc();
    void func_ov019_020cb664();
    void func_ov019_020cb718();
    bool func_ov019_020cb748();

    // data_ov019_020d1edc
    void func_ov019_020c6d08();
    void func_ov019_020c6d0c();
    void func_ov019_020c6d48();
    void func_ov019_020c6e14();
    void func_ov019_020c717c();
    void func_ov019_020c71d0();
    void func_ov019_020c71f0();
    void func_ov019_020c7210();
    void func_ov019_020c7274();
    void func_ov019_020c7768();
    void func_ov019_020c77b8();
    void func_ov019_020c7804();
    void func_ov019_020c7858();
    void func_ov019_020c7878();
    void func_ov019_020c78ac();
    void func_ov019_020c7910();
    void func_ov019_020c7c3c();
    void func_ov019_020c7c48();
    void func_ov019_020c7c70();
    void func_ov019_020c7d3c();
    void func_ov019_020c80dc();
    void func_ov019_020c80e8();

    // data_ov019_020d1f94
    void func_ov019_020c8290();
    void func_ov019_020c82c4();
    void func_ov019_020c8454();
    void func_ov019_020c8aac();
    void func_ov019_020c8ad8();
    void func_ov019_020c8b10();
    void func_ov019_020c8b48();
    void func_ov019_020c8b74();
    void func_ov019_020c9b28();
    void func_ov019_020c9b70();
    void func_ov019_020c9bcc();
    void func_ov019_020c9c18();
    void func_ov019_020c9c70();
    void func_ov019_020c9d88();
    void func_ov019_020c9e08();
    void func_ov019_020ca80c();
    void func_ov019_020ca844();
    void func_ov019_020ca87c();
    void func_ov019_020ca8b4();
    void func_ov019_020cb180();
    void func_ov019_020cb1dc();
    void func_ov019_020c80f4();

    // data_ov019_020d204c
    void func_ov019_020cb26c();
    void func_ov019_020cb4bc();
    void func_ov019_020cb4c8();
    void func_ov019_020cb4d4();
    void func_ov019_020cb4e0();
    void func_ov019_020cb4ec();
    void func_ov019_020cb4f8();
    void func_ov019_020cb504();
    void func_ov019_020cb510();
    void func_ov019_020cb51c();
    void func_ov019_020cb528();
    void func_ov019_020cb534();
    void func_ov019_020cb540();
    void func_ov019_020cb54c();
    void func_ov019_020cb558();
    void func_ov019_020cb564();
    void func_ov019_020cb570();
    void func_ov019_020cb57c();
    void func_ov019_020cb588();
    void func_ov019_020cb5b0();
    void func_ov019_020cb5bc();
    void func_ov019_020cb268();

    // data_ov019_020d1ec0 vtable
    /* 00 */ virtual ~FileSelectMain() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;
    /* 18 */ virtual void vfunc_18(void) override;
};
