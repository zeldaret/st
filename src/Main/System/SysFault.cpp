#include "System/SysFault.hpp"
#include "System/OverlayManager.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkMemFuncs.h"
#include "Unknown/UnkStruct_02049b18.hpp"
#include "Unknown/UnkStruct_ov000_02067bc4.hpp"
#include "Unknown/UnkStruct_ov000_020b4f84.hpp"
#include "Unknown/UnkStruct_ov000_020b50c0.hpp"
#include "global.h"
#include "regs.h"

extern "C" void func_0202851c();
extern "C" void func_020131ec();
extern "C" void func_02013214();
extern "C" void func_ov020_020c86d8(void *);
extern "C" void func_02014d38(void *, int);
extern "C" void func_020196fc();
extern "C" void func_02023770(int);
extern "C" void func_02023fb0(int);
extern "C" void func_02023f8c(int);
extern "C" void GX_SetGraphicsMode(int, int, int);
extern "C" void GXS_SetGraphicsMode(int);
extern "C" unk32 func_ov000_02068504(int);
extern "C" unk32 func_020147a8();
extern "C" void *func_020244f8();
extern "C" void func_0201b278(bool, bool);
extern "C" void func_0201b180(bool, bool);
extern "C" void func_02025050(void *, int, int);
extern "C" void SetBrightColor(void *, int);
extern int data_02049bd4;

extern u16 data_0203e0c4[];
extern int data_0203e0be;
extern int data_ov020_20e8580;

struct struct_aStack_2e0 {
    int mUnk_00;
    struct_aStack_2e0(void *, int);
};

struct struct_aStack_2d8 {
    struct_aStack_2d8();
    void func_ov000_020685cc();
    void func_ov000_0206869c();
    void func_ov000_020686a4(int);
    void func_ov000_02068fec();
    void func_ov000_0206878c();
    void func_ov000_020628e4(int, int, int, int, int, int, int, int, int);

    u8 pad[0x20];
    Font_UnkStruct1 *mUnk_20;
};

THUMB void SysFault::func_020127f0(unk32 param1) {
    bool doDraw = false;

    func_02013214();
    func_02014d38(&data_02049bd4, 0);
    func_02014d38(&data_02049bd4, 1);
    func_02014d38(&data_02049bd4, 3);
    func_020196fc();
    func_02023770(2);
    func_02023fb0(4);
    func_02023f8c(0x100);
    GX_SetGraphicsMode(1, 0, 0);
    GXS_SetGraphicsMode(0);

    REG_DISPCNT     = ((REG_DISPCNT & ~0x1F00) | 0x100);
    REG_DISPCNT_SUB = (REG_DISPCNT_SUB & ~0x1F00) | 0x100;

    REG_BG0CNT     = (REG_BG0CNT & 0x43) | 4;
    REG_BG0CNT_SUB = (REG_BG0CNT_SUB & 0x43) | 4;

    if (this->mUnk_05 < 0xFF) {
        this->mUnk_05 = 0xFF;

        switch (param1) {
            case 0:
            case 1:
                func_0201b180(true, true);
                // fallthrough
            case 2:
            case 3:
                this->mUnk_04 = 0;
                break;
            default:
                break;
        }
    }

    while (!doDraw) {
        func_020131ec();

        bool sequenceComplete = false;

        switch (param1) {
            case 0:
            case 1:
                data_02049b18.func_02013b24(data_02049b18.func_02013bbc());
                u16 expected = data_0203e0c4[this->mUnk_04];

                if (data_02049b18.mButtons.press & expected) {
                    if ((data_02049b18.mButtons.press & (~(expected & 0x3FF))) == 0) {
                        this->mUnk_04++;

                        if (this->mUnk_04 > 10) {
                            doDraw = true;
                            break;
                        }
                    } else {
                        this->mUnk_04 = 0;
                    }
                } else {
                    if (data_02049b18.mButtons.press & 0x3FF) {
                        this->mUnk_04 = 0;
                    }
                }

                doDraw = false;
                break;
            case 2:
            case 3:
            default:
                doDraw = true;
                break;
        }
    }

    while (true) {
        func_020131ec();

        switch (param1) {
            case 0:
            case 1:
                func_0201b278(true, true);
                break;
            case 2: {
                // "data could not be read" error
                struct_aStack_2d8 aStack_2d8;

                func_02025050(&data_0203e0be, func_ov000_02068504(0) << 1, 6);
                Fill32(0, func_020244f8(), 0x800);
                aStack_2d8.mUnk_20 = &data_ov000_020b4f84.mUnk_00[FontIndex_DSZ2_msg].mUnk_14;
                aStack_2d8.func_ov000_020628e4(0, 0, 256, 192, 0, 0, 1, 0, 0);

                {
                    UnkSystem2_UnkSubSystem5_Base_10 aStack_278;
                    aStack_2d8.func_ov000_0206869c();
                    struct_aStack_2e0 uStack_2e0(data_ov000_020b504c.mUnk_000, 0x25);
                    aStack_2d8.func_ov000_020686a4(uStack_2e0.mUnk_00);
                    aStack_2d8.func_ov000_02068fec();
                    aStack_2d8.func_ov000_0206878c();
                }

                break;
            }
            case 3: {
                // "data could not be written" error
                struct_aStack_2d8 aStack_2d8;

                func_02025050(&data_0203e0be, func_ov000_02068504(0) << 1, 6);
                Fill32(0, func_020244f8(), 0x800);
                aStack_2d8.mUnk_20 = &data_ov000_020b4f84.mUnk_00[FontIndex_DSZ2_msg].mUnk_14;
                aStack_2d8.func_ov000_020628e4(0, 0, 256, 192, 0, 0, 1, 0, 0);

                {
                    UnkSystem2_UnkSubSystem5_Base_10 aStack_278;
                    aStack_2d8.func_ov000_0206869c();
                    struct_aStack_2e0 uStack_2e0(data_ov000_020b504c.mUnk_000, 0x26);
                    aStack_2d8.func_ov000_020686a4(uStack_2e0.mUnk_00);
                    aStack_2d8.func_ov000_02068fec();
                    aStack_2d8.func_ov000_0206878c();
                }

                break;
            }
            default:
                break;
        }

        SetBrightColor((void *) &REG_MASTER_BRIGHT, 0);
        SetBrightColor((void *) &REG_MASTER_BRIGHT_SUB, 0);

        if (gOverlayManager.mLoadedOverlays[OverlaySlot_4] == OverlayIndex_WirelessCommon) {
            func_ov020_020c86d8(&data_ov020_20e8580);
        }

        if (func_020147a8() != 0) {
            data_ov000_020b50c0.func_ov000_02069f58();
        }

        int waitTimer = 0;
        while (waitTimer < 0x7FFFFFFF) {
            int limit = (waitTimer < 2) ? 0x3C : 0x7FFFFFFF;

            if (waitTimer >= limit) {
                break;
            }

            func_020131ec();
            waitTimer++;
        }

        this->mUnk_05 = 0;
        func_0202851c();
    }
}
