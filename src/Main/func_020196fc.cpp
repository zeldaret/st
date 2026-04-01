#include "Unknown/UnkMemFuncs.h"
#include "regs.h"
#include "types.h"

extern "C" void GX_SetGraphicsMode(int, int, int);
extern "C" void GXS_SetGraphicsMode(int);
extern "C" void G2_SetBGAffine(void *, void *, int, int, int, int);
extern "C" void func_020242a0();
extern "C" void func_020241f4();
extern "C" void GX_ResetBankForBGExtPltt();
extern "C" void func_0202428c();
extern "C" void func_02024208();
extern "C" void GX_ResetBankForOBJExtPltt();
extern "C" void func_020242b4();
extern "C" void GX_ResetBankForSubBGExtPltt();
extern "C" void func_020242c8();
extern "C" void GX_ResetBankForSubOBJExtPltt();
extern "C" void func_02024264();
extern "C" void func_02024278();
extern "C" void GX_SetBankForLCDC(int);
extern "C" void GX_DisableBankForLCDC();
extern int data_027e0120;

extern "C" void func_020196fc() {
    GX_SetGraphicsMode(1, 0, 0);
    GXS_SetGraphicsMode(0);
    REG_BG0OFS     = 0;
    REG_BG1OFS     = 0;
    REG_BG2OFS     = 0;
    REG_BG3OFS     = 0;
    REG_BG0OFS_SUB = 0;
    REG_BG1OFS_SUB = 0;
    REG_BG2OFS_SUB = 0;
    REG_BG3OFS_SUB = 0;
    G2_SetBGAffine(&REG_BG2PA, &data_027e0120, 0x80, 0x60, 0, 0);
    G2_SetBGAffine(&REG_BG3PA, &data_027e0120, 0x80, 0x60, 0, 0);
    G2_SetBGAffine(&REG_BG2PA_SUB, &data_027e0120, 0x80, 0x60, 0, 0);
    G2_SetBGAffine(&REG_BG3PA_SUB, &data_027e0120, 0x80, 0x60, 0, 0);
    REG_BG0CNT        = REG_BG0CNT & 0xffbf;
    REG_BG1CNT        = REG_BG1CNT & 0xffbf;
    REG_BG2CNT        = REG_BG2CNT & 0xffbf;
    REG_BG3CNT        = REG_BG3CNT & 0xffbf;
    REG_BG0CNT_SUB    = REG_BG0CNT_SUB & 0xffbf;
    REG_BG1CNT_SUB    = REG_BG1CNT_SUB & 0xffbf;
    REG_BG2CNT_SUB    = REG_BG2CNT_SUB & 0xffbf;
    REG_BG3CNT_SUB    = REG_BG3CNT_SUB & 0xffbf;
    REG_MOSAIC        = 0;
    REG_MOSAIC_SUB    = 0;
    REG_OBJMOSAIC     = 0;
    REG_OBJMOSAIC_SUB = 0;
    REG_BLDCNT        = 0;
    REG_BLDCNT_SUB    = 0;
    REG_DISPCNT &= 0xffff1fff;
    REG_DISPCNT_SUB &= 0xffff1fff;
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

    _MI_CpuFill(0, &REG_VRAM, 0xa4000);
    GX_DisableBankForLCDC();

    _MI_CpuFill(0xc0, &REG_OAM_A, 0x400);
    _MI_CpuFill(0, &REG_PALETTE_A, 0x400);

    _MI_CpuFill(0xc0, &REG_OAM_B, 0x400);
    _MI_CpuFill(0, &REG_PALETTE_B, 0x400);
}
