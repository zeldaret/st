#pragma once

#include "FileSelect/FileSelectUnkDraw.hpp"
#include "Game/GameModeManager.hpp"
#include "Unknown/UnkSystem1.hpp"

class AdventureModeManager_1B8;

class AdventureModeManager_15C_20_00 {
public:
    /* 000 (vtable) */
    /* 004 */ STRUCT_PAD(0x04, 0x77C);
    /* 77C */

    AdventureModeManager_15C_20_00(unk32 param1);

    /* 00 */ virtual ~AdventureModeManager_15C_20_00();
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
    /* 47 */ unk8 mUnk_47;
    /* 48 */ unk32 mUnk_48;
    /* 4C */

    AdventureModeManager_15C();
    ~AdventureModeManager_15C();

    void func_ov001_020c0920();
};

class AdventureModeManager_160 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x98);

    AdventureModeManager_160(GameModeManagerBase_104 *param1, AdventureModeManager_1B8 *param2);
    /* 00 */ virtual ~AdventureModeManager_160();
};

class AdventureModeManager_164 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x1C);
    /* 1C */

    AdventureModeManager_164(GameModeManagerBase_104 *param1, GameModeManagerBase_004 *param2); // overlay 26
    /* 00 */ virtual ~AdventureModeManager_164();
};

class AdventureModeManager_168 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x24);

    AdventureModeManager_168(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_168();
};

class AdventureModeManager_16C {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x20);
    /* 20 */

    AdventureModeManager_16C(GameModeManagerBase_104 *param1); // overlay 26
    /* 00 */ virtual ~AdventureModeManager_16C();
};

class AdventureModeManager_170 : public FileSelectManager_UnkDrawBase {
public:
    /* 00 (base) */
    /* 0C */ STRUCT_PAD(0x0C, 0x3C);
    /* 3C */

    AdventureModeManager_170(GameModeManagerBase_104 *param1);
};

class AdventureModeManager_174 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0xC0);

    AdventureModeManager_174(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_174();
};

class AdventureModeManager_178 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0xBC);

    AdventureModeManager_178(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_178();
};

class AdventureModeManager_17C {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0xBC);

    AdventureModeManager_17C(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_17C();
};

class AdventureModeManager_180 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x48);

    AdventureModeManager_180(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_180();
};

class AdventureModeManager_184 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x1C);

    AdventureModeManager_184(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_184();
};

class AdventureModeManager_188 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x38);

    AdventureModeManager_188(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_188();
};

class AdventureModeManager_18C {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x58);

    AdventureModeManager_18C(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_18C();
};

class AdventureModeManager_190 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x64);

    AdventureModeManager_190(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_190();
};

class AdventureModeManager_194 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x48);

    AdventureModeManager_194(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_194();
};

class AdventureModeManager_198 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x3C);

    AdventureModeManager_198(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_198();
};

class AdventureModeManager_19C {
public:
    /* 00 (vtable) */
    /* 0C */ STRUCT_PAD(0x04, 0x14);
    /* 14 */

    AdventureModeManager_19C(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_19C();
};

class AdventureModeManager_1A0 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0xBC);

    AdventureModeManager_1A0(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_1A0();
};

class AdventureModeManager_1A4 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0xBC);

    AdventureModeManager_1A4(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_1A4();
};

class AdventureModeManager_1A8 {
public:
    /* 00 (vtable) */
    /* 04 */ STRUCT_PAD(0x04, 0x38);

    AdventureModeManager_1A8(GameModeManagerBase_104 *param1);
    /* 00 */ virtual ~AdventureModeManager_1A8();
};

class AdventureModeManager_1AC {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x1C);
    /* 1C */

    AdventureModeManager_1AC(); // overlay 20
};

class AdventureModeManager_1B0 {
public:
    GameModeLinkList<AdventureModeManager_1B0> mList;
    /* 04 */ STRUCT_PAD(0x0C, 0x50);

    GameModeLinkListNode *GetNode() {
        GameModeLinkListNode *node = (GameModeLinkListNode *) this;
        if (node != NULL) {
            node = (GameModeLinkListNode *) ((u32 *) node + 1);
        }
        return node;
    }

    AdventureModeManager_1B0();
    void func_ov031_0210fad0();

    /* 00 */ virtual ~AdventureModeManager_1B0();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
};

class AdventureModeManager_1B8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk8 mUnk_08;
    /* 0C */ STRUCT_PAD(0x0C, 0x2C);
    /* 2C */

    AdventureModeManager_1B8(unk32 param1, unk32 param2, unk32 param3); // overlay 24
    ~AdventureModeManager_1B8();
};

class AdventureModeManager_1BC {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x38);

    AdventureModeManager_1BC();
    ~AdventureModeManager_1BC();
    void func_ov093_02175514();
};

class AdventureModeManager : public TitleScreenManager_Base {
public:
    /* 000 (base) */
    /* 158 */ GameModeManagerBase_104 *mUnk_158;
    /* 15C */ AdventureModeManager_15C *mUnk_15C;
    /* 160 */ AdventureModeManager_160 *mUnk_160;
    /* 164 */ AdventureModeManager_164 *mUnk_164;
    /* 168 */ AdventureModeManager_168 *mUnk_168;
    /* 16C */ AdventureModeManager_16C *mUnk_16C;
    /* 170 */ AdventureModeManager_170 *mUnk_170;
    /* 174 */ AdventureModeManager_174 *mUnk_174;
    /* 178 */ AdventureModeManager_178 *mUnk_178;
    /* 17C */ AdventureModeManager_17C *mUnk_17C;
    /* 180 */ AdventureModeManager_180 *mUnk_180;
    /* 184 */ AdventureModeManager_184 *mUnk_184;
    /* 188 */ AdventureModeManager_188 *mUnk_188;
    /* 18C */ AdventureModeManager_18C *mUnk_18C;
    /* 190 */ AdventureModeManager_190 *mUnk_190;
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
    /* 1C0 */ unk8 mUnk_1C0;
    /* 1C0 */ unk8 mUnk_1C1;
    /* 1C0 */ unk8 mUnk_1C2;  // pad?
    /* 1C0 */ unk8 mUnk_1C3;  // pad?
    /* 1C4 */ unk32 mUnk_1C4; // scene index?
    /* 1C8 */ unk8 mUnk_1C8;
    /* 1C8 */ unk8 mUnk_1C9; // pad?
    /* 1C8 */ unk16 mUnk_1CA;
    /* 1CC */ unk32 mUnk_1CC; // scene index?
    /* 1D0 */ unk32 mUnk_1D0;
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
    /* 30 */ virtual void vfunc_30(unk32 param1) override;
    /* 34 */ virtual void vfunc_34(unk32 param1, unk32 param2) override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2, unk32 param3, unk32 param4) override;

    void func_ov001_020c08b8();
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
