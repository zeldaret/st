#ifndef _NITRO_REG_H
#define _NITRO_REG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define REG_POWER_CNT (*(vu16 *) 0x04000304)
#define REG_IME (*(vu16 *) 0x04000208)

#define REG_DISPSTAT (*(vu16 *) 0x4000004)
#define REG_VCOUNT (*(vu16 *) 0x04000006)
#define REG_DISP3DCNT (*(vu16 *) 0x04000060)
#define REG_DISPCAPCNT (*(vu32 *) 0x04000064)
#define REG_GFX_STATUS (*(vu32 *) 0x04000600)

#define REG_DMA ((OSDma *) 0x040000b0)
#define REG_DMA0SAD (*(vu32 *) 0x040000b0)
#define REG_DMA0DAD (*(vu32 *) 0x040000b4)
#define REG_DMA0CNT (*(vu32 *) 0x040000b8)

#define REG_VRAM_CNT_ABCD (*(vu32 *) 0x04000240)
#define REG_VRAM_CNT_A (*(vu8 *) 0x04000240)
#define REG_VRAM_CNT_B (*(vu8 *) 0x04000241)
#define REG_VRAM_CNT_C (*(vu8 *) 0x04000242)
#define REG_VRAM_CNT_D (*(vu8 *) 0x04000243)
#define REG_VRAM_CNT_E (*(vu8 *) 0x04000244)
#define REG_VRAM_CNT_F (*(vu8 *) 0x04000245)
#define REG_VRAM_CNT_G (*(vu8 *) 0x04000246)
#define REG_WRAM_CNT (*(vu8 *) 0x04000247)
#define REG_VRAM_CNT_HI (*(vu16 *) 0x04000248)
#define REG_VRAM_CNT_H (*(vu8 *) 0x04000248)
#define REG_VRAM_CNT_I (*(vu8 *) 0x04000249)

#if NITRO_VERSION >= 0x05057533
    #define _BIOS_REG_BASE 0x02FFF000
#else
    #define _BIOS_REG_BASE 0x027FF000
#endif

#define REG_PAD (*(u16 *) (_BIOS_REG_BASE | 0xFA8))
#define REG_KEYINPUT (*(u16 *) 0x04000130)

#define REG_FRAME_COUNTER (*(u32 *) (_BIOS_REG_BASE | 0xC3C))
#define REG_027FFC40 (*(u16 *) (_BIOS_REG_BASE | 0xC40))
#define REG_027FFC42 (*(u16 *) (_BIOS_REG_BASE | 0xC42))
#define REG_027FFDE8 (*(u32 *) (_BIOS_REG_BASE | 0xDE8))
#define REG_027FFDEA (*(u16 *) (_BIOS_REG_BASE | 0xDEA))
#define REG_027FFDEC (*(u32 *) (_BIOS_REG_BASE | 0xDEC))
#define REG_FNT_ROM_OFFSET (*(u32 *) (_BIOS_REG_BASE | 0xE40))
#define REG_FNT_SIZE (*(u32 *) (_BIOS_REG_BASE | 0xE44))
#define REG_FAT_ROM_OFFSET (*(u32 *) (_BIOS_REG_BASE | 0xE48))
#define REG_FAT_SIZE (*(u32 *) (_BIOS_REG_BASE | 0xE4C))
#define REG_027FFF9C (*(u32 *) (_BIOS_REG_BASE | 0xF9C))
#define REG_027FFFA0 (*(u32 *) (_BIOS_REG_BASE | 0xFA0))

#define REG_GFX_FIFO (*(vu32 *) 0x04000400)
#define REG_GFX_FIFO_MATRIX_MODE (*(vu32 *) 0x04000440)
#define REG_GFX_FIFO_MATRIX_PUSH (*(vu32 *) 0x04000444)
#define REG_GFX_FIFO_MATRIX_POP (*(vu32 *) 0x04000448)
#define REG_GFX_FIFO_MATRIX_STORE (*(vu32 *) 0x0400044c)
#define REG_GFX_FIFO_MATRIX_RESTORE (*(vu32 *) 0x04000450)
#define REG_GFX_FIFO_MATRIX_IDENTITY (*(vu32 *) 0x04000454)
#define REG_GFX_FIFO_MATRIX_TRANSLATE (*(vu32 *) 0x04000470)
#define REG_GFX_FIFO_VERTEX_COLOR (*(vu32 *) 0x04000480)
#define REG_GFX_FIFO_VERTEX_TEXCOORD (*(vu32 *) 0x04000488)
#define REG_GFX_FIFO_VERTEX_16 (*(vu32 *) 0x0400048c)
#define REG_GFX_FIFO_POLYGON_ATTR (*(vu32 *) 0x040004a4)
#define REG_GFX_FIFO_TEXTURE_PARAM (*(vu32 *) 0x040004a8)
#define REG_GFX_FIFO_TEXTURE_PALETTE (*(vu32 *) 0x040004ac)
#define REG_GFX_FIFO_POLYGONS_BEGIN (*(vu32 *) 0x04000500)
#define REG_GFX_FIFO_POLYGONS_END (*(vu32 *) 0x04000504)
#define REG_GFX_FIFO_SWAP_BUFFERS (*(vu32 *) 0x04000540)
#define REG_GFX_FIFO_VIEWPORT (*(vu32 *) 0x04000580)

extern u32 __DTCM_LO;
#define DTCM_LO ((u8 *) &__DTCM_LO)
#define REG_IRQ (*(u32 *) (DTCM_LO + 0x3FF8))

#define _MAIN_REG_BASE 0x04000000
#define _SUB_REG_BASE 0x04001000

#define _REG_DISPCNT(base) (*(u32 *) ((base) | 0x0))
#define _REG_BG0CNT(base) (*(vu16 *) ((base) | 0x8))
#define _REG_BG1CNT(base) (*(vu16 *) ((base) | 0xa))
#define _REG_BG2CNT(base) (*(vu16 *) ((base) | 0xc))
#define _REG_BG3CNT(base) (*(vu16 *) ((base) | 0xe))
#define _REG_BG0OFS(base) (*(u32 *) ((base) | 0x10))
#define _REG_BG1OFS(base) (*(u32 *) ((base) | 0x14))
#define _REG_BG2OFS(base) (*(u32 *) ((base) | 0x18))
#define _REG_BG3OFS(base) (*(u32 *) ((base) | 0x1c))
#define _REG_BG2PA(base) (*(u16 *) ((base) | 0x20))
#define _REG_BG2PB(base) (*(u16 *) ((base) | 0x22))
#define _REG_BG2PC(base) (*(u16 *) ((base) | 0x24))
#define _REG_BG2PD(base) (*(u16 *) ((base) | 0x26))
#define _REG_BG2X(base) (*(u32 *) ((base) | 0x28))
#define _REG_BG2Y(base) (*(u32 *) ((base) | 0x2c))
#define _REG_BG3PA(base) (*(u16 *) ((base) | 0x30))
#define _REG_BG3PB(base) (*(u16 *) ((base) | 0x32))
#define _REG_BG3PC(base) (*(u16 *) ((base) | 0x34))
#define _REG_BG3PD(base) (*(u16 *) ((base) | 0x36))
#define _REG_BG3X(base) (*(u32 *) ((base) | 0x38))
#define _REG_BG3Y(base) (*(u32 *) ((base) | 0x3c))
#define _REG_WININ(base) (*(u16 *) ((base) | 0x48))
#define _REG_WINOUT(base) (*(u16 *) ((base) | 0x4a))
#define _REG_MOSAIC(base) (*(u8 *) ((base) | 0x4c))
#define _REG_OBJMOSAIC(base) (*(u8 *) ((base) | 0x4d))
#define _REG_BLDCNT(base) (*(u16 *) ((base) | 0x50))
#define _REG_BLDALPHA(base) (*(u16 *) ((base) | 0x52))
#define _REG_MASTER_BRIGHT(base) (*(u16 *) ((base) | 0x6c))

#define REG_DISPCNT _REG_DISPCNT(_MAIN_REG_BASE)
#define REG_BG0CNT _REG_BG0CNT(_MAIN_REG_BASE)
#define REG_BG1CNT _REG_BG1CNT(_MAIN_REG_BASE)
#define REG_BG2CNT _REG_BG2CNT(_MAIN_REG_BASE)
#define REG_BG3CNT _REG_BG3CNT(_MAIN_REG_BASE)
#define REG_BG0OFS _REG_BG0OFS(_MAIN_REG_BASE)
#define REG_BG1OFS _REG_BG1OFS(_MAIN_REG_BASE)
#define REG_BG2OFS _REG_BG2OFS(_MAIN_REG_BASE)
#define REG_BG3OFS _REG_BG3OFS(_MAIN_REG_BASE)
#define REG_BG2PA _REG_BG2PA(_MAIN_REG_BASE)
#define REG_BG2PB _REG_BG2PB(_MAIN_REG_BASE)
#define REG_BG2PC _REG_BG2PC(_MAIN_REG_BASE)
#define REG_BG2PD _REG_BG2PD(_MAIN_REG_BASE)
#define REG_BG2X _REG_BG2X(_MAIN_REG_BASE)
#define REG_BG2Y _REG_BG2Y(_MAIN_REG_BASE)
#define REG_BG3PA _REG_BG3PA(_MAIN_REG_BASE)
#define REG_BG3PB _REG_BG3PB(_MAIN_REG_BASE)
#define REG_BG3PC _REG_BG3PC(_MAIN_REG_BASE)
#define REG_BG3PD _REG_BG3PD(_MAIN_REG_BASE)
#define REG_BG3X _REG_BG3X(_MAIN_REG_BASE)
#define REG_BG3Y _REG_BG3Y(_MAIN_REG_BASE)
#define REG_WININ _REG_WININ(_MAIN_REG_BASE)
#define REG_WINOUT _REG_WINOUT(_MAIN_REG_BASE)
#define REG_MOSAIC _REG_MOSAIC(_MAIN_REG_BASE)
#define REG_OBJMOSAIC _REG_OBJMOSAIC(_MAIN_REG_BASE)
#define REG_BLDCNT _REG_BLDCNT(_MAIN_REG_BASE)
#define REG_BLDALPHA _REG_BLDALPHA(_MAIN_REG_BASE)
#define REG_MASTER_BRIGHT _REG_MASTER_BRIGHT(_MAIN_REG_BASE)

#define REG_DISPCNT_SUB _REG_DISPCNT(_SUB_REG_BASE)
#define REG_BG0CNT_SUB _REG_BG0CNT(_SUB_REG_BASE)
#define REG_BG1CNT_SUB _REG_BG1CNT(_SUB_REG_BASE)
#define REG_BG2CNT_SUB _REG_BG2CNT(_SUB_REG_BASE)
#define REG_BG3CNT_SUB _REG_BG3CNT(_SUB_REG_BASE)
#define REG_BG0OFS_SUB _REG_BG0OFS(_SUB_REG_BASE)
#define REG_BG1OFS_SUB _REG_BG1OFS(_SUB_REG_BASE)
#define REG_BG2OFS_SUB _REG_BG2OFS(_SUB_REG_BASE)
#define REG_BG3OFS_SUB _REG_BG3OFS(_SUB_REG_BASE)
#define REG_BG2PA_SUB _REG_BG2PA(_SUB_REG_BASE)
#define REG_BG2PB_SUB _REG_BG2PB(_SUB_REG_BASE)
#define REG_BG2PC_SUB _REG_BG2PC(_SUB_REG_BASE)
#define REG_BG2PD_SUB _REG_BG2PD(_SUB_REG_BASE)
#define REG_BG2X_SUB _REG_BG2X(_SUB_REG_BASE)
#define REG_BG2Y_SUB _REG_BG2Y(_SUB_REG_BASE)
#define REG_BG3PA_SUB _REG_BG3PA(_SUB_REG_BASE)
#define REG_BG3PB_SUB _REG_BG3PB(_SUB_REG_BASE)
#define REG_BG3PC_SUB _REG_BG3PC(_SUB_REG_BASE)
#define REG_BG3PD_SUB _REG_BG3PD(_SUB_REG_BASE)
#define REG_BG3X_SUB _REG_BG3X(_SUB_REG_BASE)
#define REG_BG3Y_SUB _REG_BG3Y(_SUB_REG_BASE)
#define REG_WININ_SUB _REG_WININ(_SUB_REG_BASE)
#define REG_WINOUT_SUB _REG_WINOUT(_SUB_REG_BASE)
#define REG_MOSAIC_SUB _REG_MOSAIC(_SUB_REG_BASE)
#define REG_OBJMOSAIC_SUB _REG_OBJMOSAIC(_SUB_REG_BASE)
#define REG_BLDCNT_SUB _REG_BLDCNT(_SUB_REG_BASE)
#define REG_BLDALPHA_SUB _REG_BLDALPHA(_SUB_REG_BASE)
#define REG_MASTER_BRIGHT_SUB _REG_MASTER_BRIGHT(_SUB_REG_BASE)

#define REG_04FFF200 (*(vu32 *) 0x04fff200)

#define REG_VRAM (*(((u32 *) (0x06800000))))
#define REG_PALETTE_A (*(((u32 *) (0x05000000))))
#define REG_PALETTE_B (*(((u32 *) (0x05000400))))
#define REG_OAM_A (*(((u32 *) (0x07000000))))
#define REG_OAM_B (*(((u32 *) (0x07000400))))

#ifdef __cplusplus
} // extern "C"
#endif

#endif
