#pragma once

#include "Game/GameModeManager.hpp"
#include "Unknown/Common.hpp"
#include "global.h"
#include "nitro/math.h"
#include "types.h"

#define MAX_MIC_LEVELS 4
#define MIC_LEVEL_1 0 // green bar
#define MIC_LEVEL_2 1 // yellow bar
#define MIC_LEVEL_3 2 // orange bar
#define MIC_LEVEL_4 3 // red bar

typedef u32 FSMicTestState;
enum FSMicTestState_ {
    /* 0x00 */ FSMicTestState_MicTestIdle      = 0,
    /* 0x01 */ FSMicTestState_OptionsToMicTest = 1,
    /* 0x02 */ FSMicTestState_MicTestToOptions = 2,
    /* 0x03 */ FSMicTestState_OptionsIdle      = 3,
    /* 0x04 */ FSMicTestState_Max              = 4
};

class UnkStruct_ov019_020d24c8_28_270_18 {
public:
    /* 00 */ UnkStruct_ov019_020d24c8_28_258 mUnk_00[MAX_MIC_LEVELS];
    /* 60 */
};

class UnkStruct_ov019_020d24c8_28_270 {
public:
    /* 00 */ UnkStruct_ov019_020d24c8_28_258 mUnk_00;
    /* 18 */ UnkStruct_ov019_020d24c8_28_270_18 mUnk_18;
    /* 78 */ bool mUnk_78[MAX_MIC_LEVELS];
    /* 7C */ u8 mUnk_7C[15];
    /* 8B */ unk8 mUnk_8B;
    /* 8C */ u16 mUnk_8C;
    /* 8E */ Vec2s mUnk_8E; // mic test's background rectangles position
    /* 90 */ unk16 mUnk_92;
    /* 94 */

    UnkStruct_ov019_020d24c8_28_270();
    void func_ov019_020cf130();
    void func_ov019_020cf168();
    void func_ov019_020cf21c();
};

class UnkStruct_ov019_020d24c8_28_304 {
public:
    /* 00 */ UnkSystem2_UnkSubSystem9 mUnk_000;
    /* 44 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_044;
    /* A4 */ UnkSystem2_UnkSubSystem8 mUnk_0A4;
    /* F4 */

    UnkStruct_ov019_020d24c8_28_304(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5, unk32 param6) :
        mUnk_044(param1, param2, param3, param4, param5, param6),
        mUnk_0A4(&mUnk_044) {}
    void func_0201e874(unk32 param1, void *param2, void *param3, unk32 param4);
};

// defines the mic test screen (0x022e9b84)
class FileSelectMicTest : public GameModeManagerBase_104 {
public:
    /* 000 (base) */
    /* 01C */ FSMicTestState mState;
    /* 020 */ UnkSystem2_UnkSubSystem5 mUnk_020; // "mic test" string
    /* 258 */ UnkStruct_ov019_020d24c8_28_258 mUnk_258; // "mic test" background
    /* 270 */ UnkStruct_ov019_020d24c8_28_270 mUnk_270; // microphone level display (green to red bars + background)
    /* 304 */ UnkStruct_ov019_020d24c8_28_304 mUnk_304; // "go back" arrow
    /* 3F8 */ UnkSystem2_UnkSubSystem5 mUnk_3F8; // "please face the mic" string
    /* 630 */ bool mUnk_630;
    /* 631 */ unk8 mUnk_631;
    /* 632 */ unk8 mUnk_632;
    /* 633 */ unk8 mUnk_633;
    /* 634 */

    FileSelectMicTest();
    void func_ov019_020cea74();
    void func_ov019_020cefe4();
    void func_ov019_020ceff8();

    // data_ov019_020d225c
    void func_ov019_020cea6c();
    void func_ov019_020cea70();
    void func_ov019_020ceaac();
    void func_ov019_020cebcc();

    // data_ov019_020d2284 vtable
    /* 00 */ virtual ~FileSelectMicTest() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;
    /* 14 */ virtual void vfunc_14(unk8 *param1) override;
};
