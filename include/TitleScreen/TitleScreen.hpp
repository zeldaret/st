#pragma once

#include "Game/GameModeManager.hpp"
#include "Unknown/Common.hpp"
#include "regs.h"
#include "types.h"

extern "C" {
void GX_SetGraphicsMode(unk32 param1, unk32 param2, unk32 param3);
void GXS_SetGraphicsMode(unk32 param1);
}

DECL_PTMF(TitleScreenPTMF, GameModePTMFParam2Struct *param1, TouchControl *pTouchControl);

typedef u32 TitleScreenState;
enum TitleScreenState_ {
    TitleScreenState_None                 = 0, // does nothing
    TitleScreenState_IdleBeforeUI         = 1,
    TitleScreenState_DrawUIOnInput        = 2,
    TitleScreenState_DrawUIOnCsCmd        = 3, //! TODO: definitely related to the cs, "cs cmd" is assumed
    TitleScreenState_IdleBeforeFileSelect = 4,
    TitleScreenState_ToFileSelect         = 5,
    TitleScreenState_Max                  = 6
};

class TitleScreenManager_Base : public GameModeManagerBase {
public:
    /* 000 (base) */
    /* 154 */

    TitleScreenManager_Base();

    // data_ov000_020b1d14 vtable
    /* 08 */ virtual ~TitleScreenManager_Base() override;
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2, unk32 param3) override;
    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C();
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */
};

class TitleScreen_Sub2_Base {
public:
    /* 00 */ GameModeManagerBase_104_04 mUnk_00;
    /* 08 */

    TitleScreen_Sub2_Base() {}
};

class TitleScreen_Sub2 : public TitleScreen_Sub2_Base {
public:
    /* 00 (vtable) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ bool mUnk_10;
    /* 11 */ unk8 mUnk_11;
    /* 12 */ unk8 mUnk_12;
    /* 13 */ unk8 mUnk_13;

    TitleScreen_Sub2() :
        mUnk_0C(0),
        mUnk_10(false) {}

    // data_ov025_020c5b24 vtable
    /* 00 */ virtual void vfunc_00();
};

// similar to UnkSubStruct1
class TitleScreen_Sub3 {
public:
    /* 00 (vtable) */
    /* 04 */ u16 mUnk_04;
    /* 04 */ u16 mUnk_06;
    /* 08 */ u16 mUnk_08; // 220
    /* 08 */ bool mUnk_0A; // 222
    /* 08 */ bool mUnk_0B; // 223
    /* 0C */ bool mUnk_0C; // 224
    /* 0C */ bool mUnk_0D;
    /* 0C */ bool mUnk_0E;
    /* 0C */ bool mUnk_0F;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;

    TitleScreen_Sub3();
    void func_0201effc(unk32 param1, unk32 param2, unk32 param3);
    bool func_0201f04c();

    // data_020442d4 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */

    void UnkOperations() {
        int iVar1;

        if (this->mUnk_08 != 0) {
            iVar1         = this->mUnk_08 - this->mUnk_0D;
            this->mUnk_08 = CLAMP(iVar1, 0, 0xFFFF);
        } else {
            if (this->mUnk_0A) {
                if (this->mUnk_04 < this->mUnk_06) {
                    iVar1 = this->mUnk_04 + this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_00();

                    if (this->mUnk_04 >= this->mUnk_06) {
                        this->mUnk_10 = this->mUnk_18;
                        this->mUnk_0A = false;
                        this->mUnk_0C = true;
                    }
                }
            } else {
                if (this->mUnk_0B && this->mUnk_04 != 0) {
                    iVar1 = this->mUnk_04 - this->mUnk_0D;

                    if (iVar1 > this->mUnk_06) {
                        iVar1 = this->mUnk_06;
                    } else if (iVar1 < 0) {
                        iVar1 = 0;
                    }

                    this->mUnk_04 = iVar1;
                    this->vfunc_04();

                    if (this->mUnk_04 == 0) {
                        this->mUnk_10 = this->mUnk_14;
                        this->mUnk_0B = false;
                        this->mUnk_0C = true;
                    }
                }
            }
        }
    }
};

class TitleScreen : public GameModeManagerBase_104 { // 0233c6d4
public:
    /* 000 (base) */
    /* 01C */ TitleScreenState mState;
    /* 020 */ bool mShowUI;
    /* 021 */ u8 mUnk_021;
    /* 022 */ unk8 mUnk_022;
    /* 023 */ unk8 mUnk_023;
    /* 024 */ UnkSubStruct19 mUnk_024; // feather
    /* 09C */ UnkSubStruct19 mUnk_09C; // green rectangle
    /* 114 */ UnkSubStruct19 mUnk_114; // "touch screen!" text
    /* 18C */ UnkSubStruct19 mUnk_18C; // copyright text
    /* 204 */ TitleScreen_Sub2 mUnk_204;
    /* 218 */ TitleScreen_Sub3 mUnk_218;
    /* 23C */ UnkStruct_ov019_020d24c8_28_258 mUnk_23C;
    /* 254 */ UnkSubStruct19 mUnk_254; // logo shine
    /* 2CC */ UnkSubStruct19 mUnk_2CC; // logo shine outline (it's barely visible)
    /* 344 */ unk32 mUnk_344;
    /* 348 */

    TitleScreen();

    void func_ov025_020c4e54();
    void func_ov025_020c4e6c();
    void func_ov025_020c4e90();
    void func_ov025_020c4ea0(TitleScreenState state);
    void func_ov025_020c592c();
    void func_ov025_020c5964();
    void func_ov025_020c5988();

    // data_ov025_020c5aec
    void func_ov025_020c5200(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl);
    void func_ov025_020c5204(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl);
    void func_ov025_020c5240(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl);
    void func_ov025_020c53d0(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl);
    void func_ov025_020c55a4(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl);
    void func_ov025_020c55e4(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl);

    // data_ov025_020c5b30 vtable
    /* 00 */ virtual ~TitleScreen() override;
    /* 08 */ virtual void vfunc_08(GameModePTMFParam2Struct *param1, TouchControl *pTouchControl) override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
    /* 10 */ virtual void vfunc_10(unk8 *param1) override;
    /* 14 */ virtual void vfunc_14(unk8 *param1) override;
};

class TitleScreenManager : public TitleScreenManager_Base {
public:
    /* 000 (base) */
    /* 154 */ TitleScreen *mpTitleScreen;
    /* 158 */

    TitleScreenManager(unk32 param1) NO_INLINE {
        this->mpTitleScreen = NULL;
        GX_SetGraphicsMode(1, 0, 1);
        GXS_SetGraphicsMode(5);
        REG_BG3CNT_SUB = (REG_BG3CNT_SUB & 0x0043) | 0x4E14;
    }

    void func_ov025_020c4c20();
    void func_ov025_020c4c30();

    // data_ov025_020c5a98 vtable
    /* 08 */ virtual ~TitleScreenManager() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 28 */ virtual void vfunc_28(unk32 param1) override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 38 */ virtual void vfunc_38() override;

    static TitleScreenManager *Create(unk32 param1);
};

extern TitleScreenManager *data_027e0994;
