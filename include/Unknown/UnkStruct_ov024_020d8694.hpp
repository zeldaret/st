#pragma once

#include "Player/TouchControl.hpp"
#include "TitleScreen/TitleScreen.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "global.h"
#include "types.h"

#include <nitro/button.h>

class UnkTitleCardSystem1 {
public:
    /* 000 (vtable) */
    /* 004 */ unk16 mUnk_004;
    /* 006 */ unk16 mUnk_006; // pad?
    /* 008 */ unk32 mUnk_008;
    /* 00C */ unk32 mUnk_00C;
    /* 010 */ unk32 mUnk_010;
    /* 014 */ GameModeManagerBase_004 *mUnk_014;
    /* 018 */ unk32 mUnk_018;
    /* 01C */ unk32 mUnk_01C;
    /* 020 */ unk16 mUnk_020;
    /* 022 */ unk16 mUnk_022;
    /* 024 */ unk16 mUnk_024;
    /* 026 */ unk16 mUnk_026;
    /* 028 */ unk32 mUnk_028;
    /* 02C */ unk32 mUnk_02C;
    /* 030 */ unk16 mUnk_030;
    /* 034 */ unk16 mUnk_034;
    /* 036 */ unk16 mUnk_036;
    /* 038 */ unk16 mUnk_038;
    /* 03A */ unk16 mUnk_03A;
    /* 03C */ unk16 mUnk_03C;
    /* 03E */ unk16 mUnk_03E;
    /* 040 */ unk32 mUnk_040;
    /* 044 */ unk32 mUnk_044;
    /* 048 */ unk16 mUnk_048;
    /* 04A */ unk16 mUnk_04A;
    /* 04C */ unk16 mUnk_04C;
    /* 04E */ unk16 mUnk_04E;
    /* 050 */ unk16 mUnk_050;
    /* 052 */ unk16 mUnk_052;
    /* 054 */ unk16 mUnk_054;
    /* 056 */ unk16 mUnk_056;
    /* 058 */ unk32 mUnk_058;
    /* 05C */ unk32 mUnk_05C;
    /* 060 */ unk32 mUnk_060;
    /* 064 */ UnkSystem2_UnkSubSystem9 mUnk_064;
    /* 0A8 */ UnkSystem2_UnkSubSystem9 mUnk_0A8;
    /* 0EC */ UnkSystem2_UnkSubSystem9 mUnk_0EC;
    /* 130 */ unk32 mUnk_130;
    /* 134 */ bool mUnk_134;
    /* 135 */ unk8 mUnk_135; // pad?
    /* 136 */ unk8 mUnk_136; // pad?
    /* 137 */ unk8 mUnk_137; // pad?
    /* 138 */

    UnkTitleCardSystem1(GameModeManagerBase_004 *param1);

    // data_ov024_020d7fd0
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */
};

class UnkTitleCardSystem1_Derived1 : public UnkTitleCardSystem1 {
public:
    /* 000 (base) */
    /* 138 */ unk32 mUnk_138;
    /* 13C */ unk16 mUnk_13C;
    /* 13E */ unk16 mUnk_13E;
    /* 140 */ bool mUnk_140;
    /* 141 */ unk8 mUnk_141; // pad?
    /* 142 */ unk8 mUnk_142; // pad?
    /* 143 */ unk8 mUnk_143; // pad?
    /* 144 */

    UnkTitleCardSystem1_Derived1(GameModeManagerBase_004 *param1);

    // data_ov024_020d8044
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C();
    /* 20 */
};

class UnkStruct_ov024_020d8694_01C : public UnkTitleCardSystem1_Derived1 {
public:
    /* 000 (base) */
    /* 144 */ TitleScreen_Sub3 mUnk_144;
    /* 168 */ bool mUnk_168;
    /* 169 */ unk8 mUnk_169; // pad?
    /* 16A */ unk8 mUnk_16A; // pad?
    /* 16B */ unk8 mUnk_16B; // pad?
    /* 16C */

    UnkStruct_ov024_020d8694_01C(GameModeManagerBase_004 *param1);

    // data_ov024_020d7ff4
    /* 00 */ virtual void vfunc_00() override;
    /* 1C */ virtual void vfunc_1C() override;
};

class UnkStruct_ov024_020d8694_188 : public UnkTitleCardSystem1_Derived1 {
public:
    /* 000 (base) */
    /* 144 */ UnkStruct_0204a110_Sub7_08 mUnk_144;
    /* 174 */

    UnkStruct_ov024_020d8694_188(GameModeManagerBase_004 *param1);

    // data_ov024_020d801c
    /* 00 */ virtual void vfunc_00() override;
    /* 04 */ virtual void vfunc_04() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual void vfunc_1C() override;
};

class UnkStruct_ov024_020d8694_2FC : public UnkTitleCardSystem1 {
public:
    /* 000 (base) */
    /* 138 */

    UnkStruct_ov024_020d8694_2FC(GameModeManagerBase_004 *param1);

    // data_ov024_020d7fac
    /* 00 */ virtual void vfunc_00() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
};

class UnkStruct_ov024_020d8694 : public AutoInstance<UnkStruct_ov024_020d8694>, public GameModeManagerBase_104 {
public:
    /* 000 (vtable) */
    /* 01C */ UnkStruct_ov024_020d8694_01C mUnk_01C;
    /* 188 */ UnkStruct_ov024_020d8694_188 mUnk_188;
    /* 2FC */ UnkStruct_ov024_020d8694_2FC mUnk_2FC;
    /* 440 */

    UnkStruct_ov024_020d8694(GameModeManagerBase_004 *param1);

    // data_ov024_020d7f88
    /* 00 */ virtual ~UnkStruct_ov024_020d8694();
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl);
    /* 10 */ virtual void vfunc_10(unk8 *param1);

    void func_ov024_020cafb8();
    void func_ov024_020cafd8();
    void func_ov024_020cb000();
    void func_ov024_020cb020();
    void func_ov024_020cb040();
    void func_ov024_020cb054();
    void func_ov024_020cb0ac();
    void func_ov024_020cb0c4();
    void func_ov024_020cb178();
    void func_ov024_020cb194();

    static UnkStruct_ov024_020d8694 *Create(GameModeManagerBase_004 *param1);
};

// related to title cards
extern UnkStruct_ov024_020d8694 *data_ov024_020d8694;
