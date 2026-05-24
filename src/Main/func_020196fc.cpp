#include "Unknown/UnkStruct_0204a110.hpp"
#include "types.h"
#include <nitro/mi.h>

#include <nitro/g2.h>
#include <nitro/hw.h>
#include <nitro/reg.h>

extern "C" void func_020242a0();
extern "C" void func_020241f4();
extern "C" void func_0202428c();
extern "C" void func_02024208();
extern "C" void func_020242b4();
extern "C" void func_020242c8();
extern "C" void func_02024264();
extern "C" void func_02024278();

extern "C" void func_020196fc() {
    GX_SetGraphicsMode(1, 0, 0);
    GXS_SetGraphicsMode(0);
    G2_SetBG0Offset(0, 0);
    G2_SetBG1Offset(0, 0);
    G2_SetBG2Offset(0, 0);
    G2_SetBG3Offset(0, 0);
    G2S_SetBG0Offset(0, 0);
    G2S_SetBG1Offset(0, 0);
    G2S_SetBG2Offset(0, 0);
    G2S_SetBG3Offset(0, 0);
    G2_SetBG2Affine(&data_027e0120, 0x80, 0x60, 0, 0);
    G2_SetBG3Affine(&data_027e0120, 0x80, 0x60, 0, 0);
    G2S_SetBG2Affine(&data_027e0120, 0x80, 0x60, 0, 0);
    G2S_SetBG3Affine(&data_027e0120, 0x80, 0x60, 0, 0);
    G2_BG0Mosaic(false);
    G2_BG1Mosaic(false);
    G2_BG2Mosaic(false);
    G2_BG3Mosaic(false);
    G2S_BG0Mosaic(false);
    G2S_BG1Mosaic(false);
    G2S_BG2Mosaic(false);
    G2S_BG3Mosaic(false);
    G2_SetBGMosaicSize(0, 0);
    G2S_SetBGMosaicSize(0, 0);
    G2_SetOBJMosaicSize(0, 0);
    G2S_SetOBJMosaicSize(0, 0);
    G2_BlendNone();
    G2S_BlendNone();
    GX_SetVisibleWindows(0);
    GXS_SetVisibleWindows(0);
    func_020242a0();
    func_020241f4();
    GX_ResetBankForBGExtPltt();
    func_0202428c();
    func_02024208();
    GX_ResetBankForOBJExtPltt();
    func_020242b4();
    GX_ResetBankForSubBGExtPltt();
    func_020242c8();
    GX_ResetBankForSubOBJExtPltt();
    func_02024264();
    func_02024278();
    GX_SetBankForLCDC(0x1ff);

    MI_CpuClearFast(HW_LCDC_VRAM, HW_LCDC_VRAM_SIZE);
    GX_DisableBankForLCDC();

    MI_CpuFillFast(HW_OAM, 0xC0, HW_OAM_SIZE);
    MI_CpuClearFast(HW_PLTT, HW_PLTT_SIZE);

    MI_CpuFillFast(HW_DB_OAM, 0xC0, HW_DB_OAM_SIZE);
    MI_CpuClearFast(HW_DB_PLTT, HW_DB_PLTT_SIZE);
}
