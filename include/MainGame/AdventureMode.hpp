#pragma once

#include "FileSelect/FileSelectUnkDraw.hpp"
#include "Game/GameModeManager.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09ac.hpp"
#include "Unknown/UnkSystem1.hpp"

class AdventureModeManager_1B8;

class AdventureModeManager_15C_20_00 : public GameModeManagerBase_104 {
public:
    /* 000 (vtable) */
    /* 01C */ unk32 mUnk_01C;
    /* 020 */ UnkSystem2_UnkSubSystem1_Base *mUnk_020;
    /* 024 */ UnkSystem2_UnkSubSystem1_Base *mUnk_024;
    /* 028 */ UnkSystem2_UnkSubSystem8 mUnk_028;
    /* 078 */ UnkSystem2_UnkSubSystem8 mUnk_078;
    /* 0C8 */ UnkSubStruct1_Derived1 mUnk_0C8;
    /* 0F8 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_0F8;
    /* 158 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_158;
    /* 1B8 */ UnkSystem2_UnkSubSystem1_Derived4 mUnk_1B8;
    /* 1EC */ UnkSystem2_UnkSubSystem7_Derived2 mUnk_1EC;
    /* 250 */ UnkSystem2_UnkSubSystem1_Derived4 mUnk_250;
    /* 284 */ UnkSystem2_UnkSubSystem7_Derived2 mUnk_284;
    /* 2E8 */ UnkStruct_ov019_020d24c8_28_258 mUnk_2E8;
    /* 300 */ UnkSystem2_UnkSubSystem3 mUnk_300;
    /* 53C */ UnkSystem2_UnkSubSystem3 mUnk_53C;
    /* 778 */ bool mUnk_778;
    /* 779 */ bool mUnk_779;
    /* 77A */ unk16 mUnk_77A;
    /* 77C */

    AdventureModeManager_15C_20_00(bool param1);

    /* 00 */ virtual ~AdventureModeManager_15C_20_00() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;

    // overlay 17
    bool func_ov017_020c19a0();
    void func_ov017_020c1c80(unk32 param1);

    // overlay 24
    void func_ov024_020ca48c();
    void func_ov024_020ca5c8();
    void func_ov024_020ca658();
};

class AdventureModeManager_15C_28 : public UnkSystem1_ov000_Derived1 {
public:
    /* 00 (base) */
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19; // pad?
    /* 1A */ unk8 mUnk_1A; // pad?
    /* 1B */ unk8 mUnk_1B; // pad?
    /* 1C */

    AdventureModeManager_15C_28();

    // data_ov000_020b48d0
    /* 00 */ virtual void vfunc_00(unk32 param1) override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual unk32 vfunc_1C(u32 param1, unk32 param2, unk32 param3) override;
    /* 24 */ virtual ~AdventureModeManager_15C_28() override;
};

class AdventureModeManager_15C_20 {
public:
    AdventureModeManager_15C_20_00 *mUnk_00;
    GameModeManagerBase_104 *mUnk_04;

    AdventureModeManager_15C_20(GameModeManagerBase_104 *param1) {
        this->mUnk_04 = param1;
        this->mUnk_00 = NULL;
    }
};

class AdventureModeManager_15C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ GameModeManagerBase_104 mUnk_04;
    /* 20 */ AdventureModeManager_15C_20 mUnk_20;
    /* 28 */ AdventureModeManager_15C_28 mUnk_28;
    /* 44 */ unk8 mUnk_44;
    /* 45 */ unk8 mUnk_45;
    /* 46 */ unk8 mUnk_46;
    /* 47 */ bool mUnk_47;
    /* 48 */ unk32 mUnk_48;
    /* 4C */

    AdventureModeManager_15C();
    ~AdventureModeManager_15C();

    void func_ov001_020c0920();

    unk32 func_ov017_020c3a00(Input *pButtons, TouchControl *pTouchControl);
    void func_ov017_020c3bc0();
    void func_ov017_020c3c64();
};

class AdventureModeManager_160_28 : public UnkStruct_0204a060_Base {
public:
    AdventureModeManager_160_28() {}

    // data_ov000_020b1ff4
    /* 08 */ virtual bool vfunc_08(unk32 param1) override;
    /* 10 */ virtual bool vfunc_10(void) override;

    void func_ov000_02066218(unk32 param1);
};

class AdventureModeManager_160_18 {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();

    void func_ov006_020b6bcc();
    void func_ov006_020b6c74();
    void func_ov006_020b6c80();
};

class AdventureModeManager_160_14 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x1C);
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ STRUCT_PAD(0x20, 0x40);
    /* 40 */ AdventureModeManager_160_18 *mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk8 mUnk_50;
    /* 51 */ bool mUnk_51;

    void func_ov006_020b6938();
};

class AdventureModeManager_160_4C : public UnkStruct_0204a060_Base {
public:
    AdventureModeManager_160_4C() {}

    // data_ov024_020d7ca4
    /* 0C */ virtual bool vfunc_0C(void) override;
};

class AdventureModeManager_160_70 {
public:
    /* 00 */ UnkStruct_0204a060_Base mUnk_00;
    /* 24 */ u8 mUnk_24;
    /* 25 */ bool mUnk_25;
    /* 26 */ bool mUnk_26;
    /* 27 */ bool mUnk_27;
    /* 28 */

    AdventureModeManager_160_70() {
        this->mUnk_25 = false;
        this->mUnk_26 = false;
        this->mUnk_27 = false;
    }
};

class AdventureModeManager_160 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ GameModeManagerBase_104 *mUnk_10;
    /* 14 */ AdventureModeManager_160_14 *mUnk_14;
    /* 18 */ AdventureModeManager_160_18 *mUnk_18;
    /* 1C */ AdventureModeManager_1B8 *mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ Vec2s mUnk_24;
    /* 28 */ AdventureModeManager_160_28 mUnk_28;
    /* 4C */ AdventureModeManager_160_4C mUnk_4C;
    /* 70 */ AdventureModeManager_160_70 mUnk_70;
    /* 98 */

    AdventureModeManager_160(GameModeManagerBase_104 *param1, AdventureModeManager_1B8 *param2);

    // data_ov024_020d7cc0
    /* 00 */ virtual ~AdventureModeManager_160() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
    /* 24 */ virtual void vfunc_24() override;

    void func_ov024_020c7cfc();
    void func_ov024_020c7d4c(unk32 param1);
    void func_ov024_020c83bc();
    void func_ov024_020c8428();
    void func_ov024_020c8454();
    void func_ov024_020c8484();
    void func_ov024_020c84c4();
    void func_ov024_020c851c(unk32 param1);
};

class AdventureModeManager_164 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x1C);
    /* 1C */

    AdventureModeManager_164(GameModeManagerBase_104 *param1, GameModeManagerBase_004 *param2); // overlay 26

    // data_ov026_0213528c
    /* 00 */ virtual ~AdventureModeManager_164() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
};

class AdventureModeManager_168 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x20);
    /* 20 */ bool mUnk_20;
    /* 21 */ bool mUnk_21;
    /* 24 */

    AdventureModeManager_168(GameModeManagerBase_104 *param1); // overlay 31

    // data_ov031_02116254
    /* 00 */ virtual ~AdventureModeManager_168() override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;

    void func_ov031_0210df60(unk32 param1);
    void func_ov031_0210df70(unk32 param1);
    unk32 func_ov031_0210dfcc();
    unk32 func_ov031_0210dfd8();
};

class AdventureModeManager_16C : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x1C);
    /* 1C */ bool mUnk_1C;
    /* 20 */

    AdventureModeManager_16C(GameModeManagerBase_104 *param1); // overlay 26

    // data_ov026_021352bc
    /* 00 */ virtual ~AdventureModeManager_16C() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;

    void func_ov026_020d8dd4(unk32 param1);
    unk32 func_ov026_020d8e30();
    unk32 func_ov026_020d8e44();
    void func_ov026_020d8e58();
};

class AdventureModeManager_170_14 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */

    /* 0C */ virtual bool vfunc_0C(void) override;
};

class AdventureModeManager_170 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ GameModeManagerBase_104 *mUnk_0C; // related to game over, set to data_ov008_020b6b5c
    /* 10 */ GameModeManagerBase_104 *mUnk_10;
    /* 14 */ AdventureModeManager_170_14 mUnk_14;
    /* 38 */ unk32 mUnk_38;
    /* 3C */

    AdventureModeManager_170(GameModeManagerBase_104 *param1); // overlay 24

    // data_ov024_020d7d0c
    /* 00 */ virtual ~AdventureModeManager_170() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

class AdventureModeManager_174_Base_10 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */

    /* 0C */ virtual bool vfunc_0C(void) override;
    /* 10 */ virtual bool vfunc_10(void) override;
};

class AdventureModeManager_174_Base : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ GameModeManagerBase_104 *mUnk_0C;
    /* 10 */ AdventureModeManager_174_Base_10 mUnk_10;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ u16 mUnk_38;
    /* 3A */ unk16 mUnk_3A;
    /* 3C */ UnkStruct_027e09ac_14 mUnk_3C;
    /* A4 */ u16 mUnk_A4;
    /* A6 */ u16 mUnk_A6;
    /* A8 */ unk16 mUnk_A8;
    /* AA */ unk16 mUnk_AA;
    /* AC */ unk32 mUnk_AC;
    /* B0 */ unk32 mUnk_B0;
    /* B4 */ Vec2s mUnk_B4;
    /* B8 */

    AdventureModeManager_174_Base(GameModeManagerBase_104 *param1);

    // data_ov024_020d7d58 (vtable)

    void func_ov024_020c88f0();
    void func_ov024_020c8b2c();
};

class AdventureModeManager_178_Base : public AdventureModeManager_174_Base {
public:
    /* 00 (base) */
    /* B8 */

    AdventureModeManager_178_Base(GameModeManagerBase_104 *param1);

    // data_ov024_020d7db8
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
};

class AdventureModeManager_174 : public AdventureModeManager_174_Base {
public:
    /* 00 (base) */
    /* B8 */ unk32 mUnk_B8;
    /* BC */ unk32 mUnk_BC;
    /* C0 */

    AdventureModeManager_174(GameModeManagerBase_104 *param1); // overlay 24

    // data_ov024_020d7d88
    /* 00 */ virtual ~AdventureModeManager_174() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
    /* 24 */ virtual void vfunc_24() override;
};

class AdventureModeManager_178 : public AdventureModeManager_178_Base {
public:
    /* 00 (base) */
    /* B8 */ unk32 mUnk_B8;
    /* BC */

    AdventureModeManager_178(GameModeManagerBase_104 *param1); // overlay 24

    // data_ov024_020d7de8
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
};

class AdventureModeManager_17C : public AdventureModeManager_178_Base {
public:
    /* 00 (base) */
    /* B8 */ unk32 mUnk_B8;
    /* BC */

    AdventureModeManager_17C(GameModeManagerBase_104 *param1); // overlay 62

    // data_ov062_02160790
    /* 00 */ virtual ~AdventureModeManager_17C() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
};

class AdventureModeManager_180_18 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */

    AdventureModeManager_180_18() {}

    // data_ov024_020d7e18 vtable
    /* 0C */ virtual bool vfunc_0C(void);
};

class AdventureModeManager_180 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ GameModeManagerBase_104 *mUnk_14;
    /* 18 */ AdventureModeManager_180_18 mUnk_18;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ unk32 mUnk_40;
    /* 44 */ bool mUnk_44;
    /* 44 */ bool mUnk_45;
    /* 48 */

    AdventureModeManager_180(GameModeManagerBase_104 *param1); // overlay 24

    // data_ov024_020d7e34
    /* 00 */ virtual ~AdventureModeManager_180() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
    /* 24 */ virtual void vfunc_24() override;

    void func_ov024_020c9430(unk32 param1, unk32 param2);
    void func_ov024_020c957c();
    void func_ov024_020c95c4();
};

class AdventureModeManager_184_10_Base : public GameModeManagerBase_104 {
public:
    /* 00 (vtable) */

    AdventureModeManager_184_10_Base(); // func_ov010_020b6690

    // data_ov010_020b8dd0 vtable
    /* 00 */ virtual ~AdventureModeManager_184_10_Base() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual bool vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual void vfunc_34();

    void func_ov010_020b7008();
    void func_ov010_020b7054();
};

class AdventureModeManager_184_10 : public AdventureModeManager_184_10_Base {
public:
    /* 00 (base) */
};

class AdventureModeManager_184_14 {
public:
    /* 00 */
};

class AdventureModeManager_184 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ GameModeManagerBase_104 *mUnk_0C;
    /* 10 */ AdventureModeManager_184_10 *mUnk_10;
    /* 14 */ AdventureModeManager_184_14 *mUnk_14;
    /* 18 */ bool mUnk_18;
    /* 19 */ unk8 mUnk_19; // pad?
    /* 1A */ unk8 mUnk_1A; // pad?
    /* 1B */ unk8 mUnk_1B; // pad?

    AdventureModeManager_184(GameModeManagerBase_104 *param1); // overlay 24

    // data_ov024_020d7e64
    /* 00 */ virtual ~AdventureModeManager_184();
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
    /* 24 */ virtual void vfunc_24() override;

    void func_ov024_020c979c(unk32 param1);
};

class AdventureModeManager_188 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x38);

    AdventureModeManager_188(GameModeManagerBase_104 *param1); // overlay 31

    // data_ov031_021162a0
    /* 00 */ virtual ~AdventureModeManager_188() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
};

class AdventureModeManager_18C_14 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */

    AdventureModeManager_18C_14();

    /* 0C */ virtual bool vfunc_0C(void) override;
    /* 10 */ virtual bool vfunc_10(void) override;
};

class AdventureModeManager_18C_10 {
public:
    /* 0000 */ STRUCT_PAD(0x0000, 0x10E9);
    /* 10E9 */ u8 mUnk_10E9;
    /* 10EA */ unk8 mUnk_10EA; // pad?
    /* 10EB */ unk8 mUnk_10EB; // pad?
    /* 10EC */ u32 mUnk_10EC;

    void func_ov011_020b88ac();
    void func_ov011_020b89f0(unk32 param1);
};

class AdventureModeManager_18C : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ GameModeManagerBase_104 *mUnk_0C;
    /* 0C */ AdventureModeManager_18C_10 *mUnk_10;
    /* 14 */ AdventureModeManager_18C_14 mUnk_14;
    /* 38 */ bool mUnk_38;
    /* 39 */ bool mUnk_39;
    /* 3A */ bool mUnk_3A;
    /* 3B */ unk8 mUnk_3B;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ Vec2s mUnk_40;
    /* 44 */ unk32 mUnk_44;
    /* 48 */ Vec2s mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk16 mUnk_50;
    /* 52 */ unk16 mUnk_52;
    /* 50 */ unk32 mUnk_54;

    AdventureModeManager_18C(GameModeManagerBase_104 *param1);

    // data_ov024_020d7eb0
    /* 00 */ virtual ~AdventureModeManager_18C() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
    /* 24 */ virtual void vfunc_24() override;

    void func_ov024_020c9c6c();
    void func_ov024_020ca034();
    void func_ov024_020ca068(unk32 param1);
    bool func_ov024_020ca074();
};

class AdventureModeManager_190_10 {
public:
    bool func_ov011_020b8f20(unk32 param1);
};

class AdventureModeManager_190_14 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */

    // data_ov024_020d7efc
    /* 0C */ virtual bool vfunc_0C(void) override;
};

class AdventureModeManager_190;
class AdventureModeManager_190_38 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ AdventureModeManager_190 *mpParent;
    /* 28 */

    AdventureModeManager_190_38(AdventureModeManager_190 *pParent) {
        this->mpParent = pParent;
    }

    // data_ov024_020d7ee0
    /* 0C */ virtual bool vfunc_0C(void) override;
};

class AdventureModeManager_190 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ GameModeManagerBase_104 *mUnk_0C;
    /* 10 */ AdventureModeManager_190_10 *mUnk_10;
    /* 14 */ AdventureModeManager_190_14 mUnk_14;
    /* 38 */ AdventureModeManager_190_38 mUnk_38;
    /* 60 */ unk32 mUnk_60;
    /* 64 */

    AdventureModeManager_190(GameModeManagerBase_104 *param1); // overlay 24

    // data_ov024_020d7f18
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;

    void func_ov024_020ca21c();
    bool func_ov024_020ca24c(unk32 param1);
    bool func_ov024_020ca280();
};

class AdventureModeManager_194 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ STRUCT_PAD(0x10, 0x48);
    /* 48 */

    AdventureModeManager_194(GameModeManagerBase_104 *param1);

    // data_ov031_021162ec
    /* 00 */ virtual ~AdventureModeManager_194() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
    /* 24 */ virtual void vfunc_24() override;
};

class AdventureModeManager_198 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x3C);

    AdventureModeManager_198(GameModeManagerBase_104 *param1); // overlay 58

    // data_ov058_02155e08
    /* 00 */ virtual ~AdventureModeManager_198() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
};

class AdventureModeManager_19C : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x14);
    /* 14 */

    AdventureModeManager_19C(GameModeManagerBase_104 *param1); // overlay 26

    // data_ov026_021352ec
    /* 00 */ virtual ~AdventureModeManager_19C() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

class AdventureModeManager_1A0 : public AdventureModeManager_174_Base {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0xBC);

    AdventureModeManager_1A0(GameModeManagerBase_104 *param1); // overlay 62

    // data_ov062_021607c0
    /* 00 */ virtual ~AdventureModeManager_1A0() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
};

class AdventureModeManager_1A4 : public AdventureModeManager_174_Base {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0xBC);

    AdventureModeManager_1A4(GameModeManagerBase_104 *param1); // overlay 62

    // data_ov062_021607f0
    /* 00 */ virtual ~AdventureModeManager_1A4() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(unk32 param1) override;
    /* 20 */ virtual void vfunc_20(unk32 param1, unk32 param2) override;
};

class AdventureModeManager_1A8 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x38);

    AdventureModeManager_1A8(GameModeManagerBase_104 *param1); // overlay 88

    // data_ov088_02176068
    /* 00 */ virtual ~AdventureModeManager_1A8() override;
    /* 08 */ virtual void vfunc_08(unk32 param1) override;
    /* 14 */ virtual void vfunc_14(unk32 param1) override;
    /* 18 */ virtual void vfunc_18(unk32 param1) override;
    /* 24 */ virtual void vfunc_24() override;
};

// AdventureMode?
class AdventureModeManager_1AC : public GameModeManagerBase_104 {
public:
    /* 00 (base) */
    /* 1C */

    AdventureModeManager_1AC(); // overlay 24

    // data_ov024_020d7bf4
    /* 00 */ virtual ~AdventureModeManager_1AC() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;
    /* 14 */ virtual void vfunc_14(unk8 *param1) override;
};

class AdventureModeManager_1B0 : public GameModeManagerBase_104 {
public:
    /* 1C */ UnkStruct_ov019_020d24c8_28_258 mUnk_1C;
    /* 34 */ STRUCT_PAD(0x34, 0x50);
    /* 50 */

    GameModeLinkListNode *GetNode() {
        GameModeLinkListNode *node = (GameModeLinkListNode *) this;
        if (node != NULL) {
            node = (GameModeLinkListNode *) ((u32 *) node + 1);
        }
        return node;
    }

    AdventureModeManager_1B0(); // overlay 31
    void func_ov031_0210fad0();

    // data_ov031_02116358
    /* 00 */ virtual ~AdventureModeManager_1B0() override;
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;
};

struct AdventureModeManager_1B8_Base_1C {
    /* 00 */ unk16 mUnk_00;
    /* 02 */ s16 mUnk_02;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ s16 mUnk_06;

    AdventureModeManager_1B8_Base_1C() {}
    AdventureModeManager_1B8_Base_1C(unk16 param1, unk16 param2, unk16 param3, unk16 param4) {
        this->mUnk_00 = param1;
        this->mUnk_02 = param2;
        this->mUnk_04 = param3;
        this->mUnk_06 = param4;
    }
};

class AdventureModeManager_1B8_Base {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ bool mUnk_08;
    /* 09 */ bool mUnk_09;
    /* 0A */ bool mUnk_0A;
    /* 0B */ u8 mUnk_0B;
    /* 0C */ u8 mUnk_0C;
    /* 0C */ bool mUnk_0D;
    /* 0E */ u8 mBGType;
    /* 0F */ bool mIsTopScreen;
    /* 10 */ bool mUnk_10;
    /* 11 */ unk8 mUnk_11; // pad?
    /* 12 */ unk8 mUnk_12; // pad?
    /* 13 */ unk8 mUnk_13; // pad?
    /* 14 */ s32 mUnk_14;
    /* 18 */ u8 *mUnk_18;
    /* 1C */ AdventureModeManager_1B8_Base_1C mUnk_1C;
    /* 24 */

    int GetUnkValue_Impl(int val, bool cond) {
        if (cond) {
            return (val * 256) / 2;
        }

        return val * 256;
    }

    int GetUnkValue(int val) {
        return GetUnkValue_Impl(val, this->mUnk_10);
    }

    AdventureModeManager_1B8_Base(u8 bgType, bool param2, const AdventureModeManager_1B8_Base_1C *param3, bool param4,
                                  bool param5);
    ~AdventureModeManager_1B8_Base();

    void func_ov024_020d0698();
    void func_ov024_020d06d0();
    void func_ov024_020d072c(unk8 *param1);
    bool func_ov024_020d0744(s32 arg1, s32 arg2, s32 arg3, s32 arg4, u8 arg5, u8 arg6);
    bool func_ov024_020d0924(unk32 param1, unk32 param2, u8 param3, u8 param4);
    void func_ov024_020d0a64();
    void TryLoadBGChar(void *ptr, u32 offset, u32 size);
    unk32 func_ov024_020d0db4(unk32 param1, unk32 param2);
    bool func_ov024_020d0df8(unk32 param1, unk32 param2);
    void func_ov024_020d0e64(void *ptr, u32 size);
    bool func_ov024_020d0e98();
    static void func_ov024_020d0ec0(s32 *pFlags, s32 position, bool doSet);
    static bool func_ov024_020d0f0c(s32 *pFlags, s32 position);
    static unk32 func_ov024_020d0f2c(unk32 param1, unk32 param2);
};

class AdventureModeManager_1B8 : public AdventureModeManager_1B8_Base {
public:
    /* 00 (base) */
    /* 24 */ u16 mUnk_24;
    /* 24 */ unk16 mUnk_26; // pad?
    /* 24 */ void *mUnk_28;
    /* 2C */

    AdventureModeManager_1B8(u8 bgType, bool param2, bool param3); // overlay 24
    ~AdventureModeManager_1B8();

    void func_ov024_020d0fb4();
    void func_ov024_020d114c();
    bool func_ov024_020d1160();
    void func_ov024_020d1364();
    void func_ov024_020d13cc(s32 param1);
    bool func_ov024_020d14a8(AdventureModeManager_1B8_Base_1C *param1, unk32 param2, s32 *pFlags, const u8 param4);
    void func_ov024_020d1564(const AdventureModeManager_1B8_Base_1C *param1, unk32 param2, s32 *pFlags, const u8 param4);
    void func_ov024_020d1614(void *param1);
    void func_ov024_020d1638();
};

class AdventureModeManager_1BC : public AdventureModeManager_1B8_Base {
public:
    /* 00 (base) */
    /* 24 */ STRUCT_PAD(0x24, 0x34);
    /* 34 */ bool mUnk_34;
    /* 35 */ unk8 mUnk_35;
    /* 36 */ unk8 mUnk_36;
    /* 37 */ unk8 mUnk_37;
    /* 38 */

    AdventureModeManager_1BC(); // overlay 93
    ~AdventureModeManager_1BC();

    void func_ov093_02175514();
};

struct SceneInfos {
    /* 00 */ u32 sceneIndex; // scene index
    /* 04 */ u8 unk_04;
    /* 05 */ unk8 unk_05; // pad?
    /* 06 */ unk16 unk_06;
};

class AdventureModeManager : public TitleScreenManager_Base {
public:
    /* 000 (base) */
    /* 154 */ unk32 mUnk_154;
    /* 158 */ GameModeManagerBase_104 *mUnk_158;
    /* 15C */ AdventureModeManager_15C *mUnk_15C;
    /* 160 */ AdventureModeManager_160 *mUnk_160; // related to the minimap?
    /* 164 */ AdventureModeManager_164 *mUnk_164;
    /* 168 */ AdventureModeManager_168 *mUnk_168;
    /* 16C */ AdventureModeManager_16C *mUnk_16C;
    /* 170 */ AdventureModeManager_170 *mUnk_170; // related to game over?
    /* 174 */ AdventureModeManager_174 *mUnk_174; // related to the minimap?
    /* 178 */ AdventureModeManager_178 *mUnk_178; // related to factory ovl?
    /* 17C */ AdventureModeManager_17C *mUnk_17C;
    /* 180 */ AdventureModeManager_180 *mUnk_180; // related to stamps?
    /* 184 */ AdventureModeManager_184 *mUnk_184; // related to WDST actor?
    /* 188 */ AdventureModeManager_188 *mUnk_188;
    /* 18C */ AdventureModeManager_18C *mUnk_18C; // related to world map?
    /* 190 */ AdventureModeManager_190 *mUnk_190; // related to world map?
    /* 194 */ AdventureModeManager_194 *mUnk_194;
    /* 198 */ AdventureModeManager_198 *mUnk_198;
    /* 19C */ AdventureModeManager_19C *mUnk_19C;
    /* 1A0 */ AdventureModeManager_1A0 *mUnk_1A0;
    /* 1A4 */ AdventureModeManager_1A4 *mUnk_1A4;
    /* 1A8 */ AdventureModeManager_1A8 *mUnk_1A8;
    /* 1AC */ AdventureModeManager_1AC *mUnk_1AC;
    /* 1B0 */ AdventureModeManager_1B0 *mUnk_1B0;
    /* 1B4 */ bool mUnk_1B4;
    /* 1B4 */ bool mUnk_1B5;
    /* 1B4 */ unk8 mUnk_1B6; // pad?
    /* 1B4 */ unk8 mUnk_1B7; // pad?
    /* 1B8 */ AdventureModeManager_1B8 *mUnk_1B8;
    /* 1BC */ AdventureModeManager_1BC *mUnk_1BC;
    /* 1C0 */ bool mUnk_1C0;
    /* 1C1 */ bool mAllowMapPaint;
    /* 1C2 */ unk8 mUnk_1C2; // pad?
    /* 1C3 */ unk8 mUnk_1C3; // pad?
    /* 1C4 */ SceneInfos mUnk_1C4;
    /* 1C4 */ SceneInfos mUnk_1CC;
    /* 1D4 */

    AdventureModeManager(unk32 param1);

    // data_ov024_020d7c18 vtable
    /* 08 */ virtual ~AdventureModeManager() override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2, unk32 param3) override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 28 */ virtual void vfunc_28(unk8 *param1) override;
    /* 2C */ virtual void vfunc_2C(unk8 *param1) override;
    /* 34 */ virtual void vfunc_34(unk32 param1, unk32 param2) override;
    /* 38 */ virtual void vfunc_38(u32 param1, u8 param2, unk16 param3, unk16 param4) override;

    void func_ov001_020c08b8();

    void func_ov024_020c5288();
    void func_ov024_020c52a0();
    void func_ov024_020c52b8();
    void func_ov024_020c52f4();
    void func_ov024_020c530c();
    void func_ov024_020c5364();
    void func_ov024_020c537c();
    void func_ov024_020c53e8();
    void func_ov024_020c555c(unk32 param1);
    void func_ov024_020c5cec();
    bool func_ov024_020c5dac();
    bool func_ov024_020c5ecc();
    bool func_ov024_020c5f70();
    bool func_ov024_020c60f4();
    bool func_ov024_020c623c();
    void func_ov024_020c6514(SceneIndex sceneIndex, u8 param2, unk16 param3, unk16 param4);
    u8 GetMapPaintIndex(SceneIndex sceneIndex, u8 param2);
    void func_ov024_020c66c0();
    void func_ov024_020c671c();
    void func_ov024_020c6770(SceneIndex sceneIndex, u8 param2, unk16 param3, unk16 param4);
    bool func_ov024_020c681c();
    void func_ov024_020c6840(SceneIndex sceneIndex);
    void func_ov024_020c68d4();
    bool func_ov024_020c68ec(unk32 param1, unk32 param2);
    void func_ov024_020c6930();
    bool func_ov024_020c6940(unk32 param1, unk32 param2);
    unk32 func_ov024_020c69d0();
    unk32 func_ov024_020c6a20();
    void func_ov024_020c6a48(unk32 param1, unk32 param2);
    bool func_ov024_020c6af4(unk32 param1);
    void func_ov024_020c6b8c();
    void func_ov024_020c6c60();
    void func_ov024_020c6cd4();
    bool func_ov024_020c6ce4();
    unk32 func_ov024_020c6d04();
    void func_ov024_020c6d10();
    void func_ov024_020c6d20(unk32 param1);
    void func_ov024_020c6d2c(unk32 param1);
    bool func_ov024_020c6d64();
    void func_ov024_020c6db8(unk32 param1);
    bool func_ov024_020c6dec();
    void func_ov024_020c699c();

    static AdventureModeManager *Create(unk32 param1);
    static void func_ov001_020c00d4();
    static void func_ov001_020c0104();
    static void func_ov001_020c0194();
    static void func_ov001_020c0824();
    static void func_ov001_020c083c();
    static void func_ov001_020c0854();
    static void func_ov001_020c0874();
    static void func_ov001_020c0894();
};
