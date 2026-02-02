#pragma once

#include "FileSelect/FileSelectMicTest.hpp"
#include "Game/GameModeManager.hpp"
#include "System/SysNew.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "types.h"

typedef u32 FSOptionsState;
enum FSOptionsState_ {
    /* 0x00 */ FSOptionsState_Idle                  = 0,
    /* 0x01 */ FSOptionsState_OptionsFromChooseMode = 1,
    /* 0x02 */ FSOptionsState_OptionsToChooseMode   = 2,
    /* 0x03 */ FSOptionsState_OptionsToMicTest      = 3,
    /* 0x04 */ FSOptionsState_MicTestIdle           = 4,
    /* 0x05 */ FSOptionsState_OptionsFromMicTest    = 5,
    /* 0x06 */ FSOptionsState_SaveSettings          = 6,
    /* 0x07 */ FSOptionsState_Max                   = 7
};

class UnkStruct_ov019_020d24c8_2C_24_FC3 {
public:
    /* 00 */ unk8 mUnk_00;
    /* 01 */ unk8 mUnk_01;
    /* 02 */

    UnkStruct_ov019_020d24c8_2C_24_FC3() {}
};

class UnkStruct_ov019_020d24c8_2C_24_FB0 : public SysObject {
public:
    /* 00 */ UnkSystem2_UnkSubSystem5 *mUnk_00[6];
    /* 18 */

    UnkStruct_ov019_020d24c8_2C_24_FB0() {}
};

class UnkStruct_ov019_020d24c8_2C_24_FB8 : public SysObject {
public:
    /* 00 */ UnkSystem2_UnkSubSystem1_Derived1 *mUnk_00[6];
    /* 18 */

    UnkStruct_ov019_020d24c8_2C_24_FB8() {}
};

class UnkStruct_ov019_020d24c8_2C_24 {
public:
    /* 0000 */ s32 mSaveSlotIndex;
    /* 0004 */ Vec2s mUnk_004;
    /* 0008 */ UnkStruct_ov019_020d24c8_28_258 mUnk_008;

    // message speed
    /* 0020 */ UnkSystem2_UnkSubSystem5 mUnk_020; // label
    /* 0258 */ UnkSystem2_UnkSubSystem5 mUnk_258; // current string
    /* 0490 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_490; // left arrow
    /* 04F0 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_4F0; // right arrow

    // sound settings
    /* 0550 */ UnkSystem2_UnkSubSystem5 mUnk_550; // label
    /* 0788 */ UnkSystem2_UnkSubSystem5 mUnk_788; // current string
    /* 09C0 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_9C0; // left arrow
    /* 0A20 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_A20; // right arrow

    // handedness
    /* 0A80 */ UnkSystem2_UnkSubSystem5 mUnk_A80; // label
    /* 0CB8 */ UnkSystem2_UnkSubSystem5 mUnk_CB8; // current type string
    /* 0EF0 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_EF0; // left arrow
    /* 0F50 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_F50; // right arrow

    /* 0FB0 */ UnkStruct_ov019_020d24c8_2C_24_FB0 *mUnk_FB0;
    /* 0FB4 */ UnkStruct_ov019_020d24c8_2C_24_FB0 *mUnk_FB4;
    /* 0FB8 */ UnkStruct_ov019_020d24c8_2C_24_FB8 *mUnk_FB8;
    /* 0FBC */ UnkStruct_ov019_020d24c8_2C_24_FB8 *mUnk_FBC;
    /* 0FC0 */ u8 mUnk_FC0;
    /* 0FC1 */ u8 mUnk_FC1;
    /* 0FC2 */ u8 mUnk_FC2;
    /* 0FC3 */ STRUCT_PAD(0xFC3, 0x103E);
    /* 103E */ unk16 mUnk_103E;
    /* 1040 */

    UnkStruct_ov019_020d24c8_2C_24(GameModeManagerBase_104_0C *param1, s32 saveSlotIndex);
    ~UnkStruct_ov019_020d24c8_2C_24();

    void func_ov019_020ce414();
    void func_ov019_020ce4dc();
    void func_ov019_020ce61c(bool decrement);
    void func_ov019_020ce668(bool decrement);
    void func_ov019_020ce6c8();
    unk32 func_ov019_020ce704(u8 param1);
    unk32 func_ov019_020ce74c(u8 param1);
    unk32 func_ov019_020ce7a0(u8 param1);
    void func_ov019_020ce7d4(unk32 param1);
};

// defines the options screen (022ea1c8)
class FileSelectOptions : public GameModeManagerBase_104 {
public:
    /* 0000 (base) */
    /* 001C */ FSOptionsState mState;
    /* 0020 */ u8 mUnk_0020; // bool?
    /* 0020 */ unk8 mUnk_0021;
    /* 0020 */ unk8 mUnk_0022;
    /* 0020 */ unk8 mUnk_0023;
    /* 0024 */ UnkStruct_ov019_020d24c8_2C_24 mUnk_0024;
    /* 1064 */ UnkSystem2_UnkSubSystem9 mUnk_1064;

    // "options" string
    /* 10A8 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_10A8;
    /* 1108 */ UnkSystem2_UnkSubSystem3 mUnk_1108;
    /* 1344 */ UnkSystem2_UnkSubSystem9 mUnk_1344;

    // "mic test" button
    /* 1388 */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_1388;
    /* 13E8 */ unk8 mUnk_13E8[0x38];
    /* 1420 */ UnkSystem2_UnkSubSystem8 mUnk_1420;
    /* 1470 */ UnkSystem2_UnkSubSystem3 mUnk_1470;

    // "ok" button
    /* 16AC */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_16AC;
    /* 170C */ unk8 mUnk_170C[0x38];
    /* 1744 */ UnkSystem2_UnkSubSystem8 mUnk_1744;
    /* 1794 */ UnkSystem2_UnkSubSystem3 mUnk_1794;

    // "cancel" button
    /* 19D0 */ UnkSystem2_UnkSubSystem1_Derived2 mUnk_19D0;
    /* 1A30 */ unk8 mUnk_1A30[0x38];
    /* 1A68 */ UnkSystem2_UnkSubSystem8 mUnk_1A68;
    /* 1AB8 */ UnkSystem2_UnkSubSystem3 mUnk_1AB8;

    /* 1CF4 */ unk8 mUnk_1CF4;
    /* 1CF5 */ bool mUnk_1CF5;
    /* 1CF6 */ unk8 mUnk_1CF6;
    /* 1CF7 */ unk8 mUnk_1CF7;
    /* 1CF8 */

    GameModeLinkListNode *GetNode() {
        GameModeLinkListNode *node = (GameModeLinkListNode *) this;
        if (this != NULL) {
            node = (GameModeLinkListNode *) ((u32 *) node + 1);
        }
        return node;
    }

    FileSelectOptions(s32 saveSlotIndex);
    void func_ov019_020ccd40();
    void func_ov019_020ccdf4();
    void func_ov019_020cd8d4();
    bool func_ov019_020cdbdc();
    void func_ov019_020cde8c(FSOptionsState state);
    void func_ov019_020cde9c();

    // data_ov019_020d2188
    void func_ov019_020cd7f8(void);
    void func_ov019_020cdc0c(void);
    void func_ov019_020cdc38(void);
    void func_ov019_020cdc60(void);
    void func_ov019_020cdc5c(void);
    void func_ov019_020cdc8c(void);
    void func_ov019_020cdcb8(void);

    // data_ov019_020d21c0
    void func_ov019_020cce04(void);
    void func_ov019_020cce30(void);
    void func_ov019_020cd16c(void);
    void func_ov019_020cd41c(void);
    void func_ov019_020cd5f8(void);
    void func_ov019_020cd614(void);
    void func_ov019_020cd788(void);

    // data_ov019_020d2200 vtable
    /* 00 */ virtual ~FileSelectOptions() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;

    static GameModeManagerBase_104 *Create(void *param1, s32 saveSlotIndex);
};
