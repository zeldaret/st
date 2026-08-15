#ifndef _NITRO_REG_H
#define _NITRO_REG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define REG_BASE 0x4000000

#define REG_POWER_CNT (*(vu16 *) (REG_BASE | 0x304))
#define REG_IME (*(vu16 *) (REG_BASE | 0x208))

#define REG_DISPSTAT (*(vu16 *) (REG_BASE | 0x4))
#define REG_VCOUNT (*(vu16 *) (REG_BASE | 0x6))
#define REG_DISP3DCNT (*(vu16 *) (REG_BASE | 0x60))
#define REG_DISPCAPCNT (*(vu32 *) (REG_BASE | 0x64))
#define REG_GFX_STATUS (*(vu32 *) (REG_BASE | 0x600))

#define REG_DMA ((OSDma *) (REG_BASE | 0xB0))
#define REG_DMA0SAD (*(vu32 *) (REG_BASE | 0xB0))
#define REG_DMA0DAD (*(vu32 *) (REG_BASE | 0xB4))
#define REG_DMA0CNT (*(vu32 *) (REG_BASE | 0xB8))

#define REG_VRAM_CNT_ABCD (*(vu32 *) (REG_BASE | 0x240))
#define REG_VRAM_CNT_A (*(vu8 *) (REG_BASE | 0x240))
#define REG_VRAM_CNT_B (*(vu8 *) (REG_BASE | 0x241))
#define REG_VRAM_CNT_C (*(vu8 *) (REG_BASE | 0x242))
#define REG_VRAM_CNT_D (*(vu8 *) (REG_BASE | 0x243))
#define REG_VRAM_CNT_E (*(vu8 *) (REG_BASE | 0x244))
#define REG_VRAM_CNT_F (*(vu8 *) (REG_BASE | 0x245))
#define REG_VRAM_CNT_G (*(vu8 *) (REG_BASE | 0x246))
#define REG_WRAM_CNT (*(vu8 *) (REG_BASE | 0x247))
#define REG_VRAM_CNT_HI (*(vu16 *) (REG_BASE | 0x248))
#define REG_VRAM_CNT_H (*(vu8 *) (REG_BASE | 0x248))
#define REG_VRAM_CNT_I (*(vu8 *) (REG_BASE | 0x249))

#define REG_EXMEM_CNT_OFFSET 0x204
#define REG_EXMEM_CNT (*(vu16 *) (REG_BASE | REG_EXMEM_CNT_OFFSET))

#if NITRO_VERSION >= 0x05057533
    #define _BIOS_REG_BASE 0x02FFF000
#else
    #define _BIOS_REG_BASE 0x027FF000
#endif

#define REG_PAD (*(u16 *) (_BIOS_REG_BASE | 0xFA8))
#define REG_KEYINPUT (*(u16 *) (REG_BASE | 0x130))

#define REG_CARD_AUX_SPI_CNT_OFFSET 0x1A0
#define REG_CARD_AUX_SPI_CNT (*(vu16 *) (REG_BASE | 0x1A0))
#define REG_CARD_CNT_OFFSET 0x1A4
#define REG_CARD_CNT (*(vu32 *) (REG_BASE | REG_CARD_CNT_OFFSET))
#define REG_CARD_CMD_OFFSET 0x1A8
#define REG_CARD_CMD (*(vu8 *) (REG_BASE | REG_CARD_CMD_OFFSET))
#define REG_CARD_DATA_OFFSET 0x100010
#define REG_CARD_DATA (*(vu32 *) (REG_BASE | REG_CARD_DATA_OFFSET))

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

#define REG_GFX_FIFO (*(vu32 *) (REG_BASE | 0x400))
#define REG_GFX_FIFO_MATRIX_MODE (*(vu32 *) (REG_BASE | 0x440))
#define REG_GFX_FIFO_MATRIX_PUSH (*(vu32 *) (REG_BASE | 0x444))
#define REG_GFX_FIFO_MATRIX_POP (*(vu32 *) (REG_BASE | 0x448))
#define REG_GFX_FIFO_MATRIX_STORE (*(vu32 *) (REG_BASE | 0x44C))
#define REG_GFX_FIFO_MATRIX_RESTORE (*(vu32 *) (REG_BASE | 0x450))
#define REG_GFX_FIFO_MATRIX_IDENTITY (*(vu32 *) (REG_BASE | 0x454))
#define REG_GFX_FIFO_MATRIX_TRANSLATE (*(vu32 *) (REG_BASE | 0x470))
#define REG_GFX_FIFO_VERTEX_COLOR (*(vu32 *) (REG_BASE | 0x480))
#define REG_GFX_FIFO_VERTEX_TEXCOORD (*(vu32 *) (REG_BASE | 0x488))
#define REG_GFX_FIFO_VERTEX_16 (*(vu32 *) (REG_BASE | 0x48C))
#define REG_GFX_FIFO_VERTEX_XZ (*(vu32 *) (REG_BASE | 0x498))
#define REG_GFX_FIFO_POLYGON_ATTR (*(vu32 *) (REG_BASE | 0x4A4))
#define REG_GFX_FIFO_TEXTURE_PARAM (*(vu32 *) (REG_BASE | 0x4A8))
#define REG_GFX_FIFO_TEXTURE_PALETTE (*(vu32 *) (REG_BASE | 0x4AC))
#define REG_GFX_FIFO_DIFFUSE_AMBIENT_REFLECT (*(vu32 *) (REG_BASE | 0x4C0))
#define REG_GFX_FIFO_POLYGONS_BEGIN (*(vu32 *) (REG_BASE | 0x500))
#define REG_GFX_FIFO_POLYGONS_END (*(vu32 *) (REG_BASE | 0x504))
#define REG_GFX_FIFO_SWAP_BUFFERS (*(vu32 *) (REG_BASE | 0x540))
#define REG_GFX_FIFO_VIEWPORT (*(vu32 *) (REG_BASE | 0x580))

extern u32 __DTCM_LO;
#define DTCM_LO ((u8 *) &__DTCM_LO)
#define REG_IRQ (*(u32 *) (DTCM_LO + 0x3FF8))

#define _MAIN_REG_BASE REG_BASE
#define _SUB_REG_BASE (REG_BASE | 0x1000)

#define _REG_DISPCNT(base) (*(u32 *) ((base) | 0x0))
#define _REG_BG0CNT(base) (*(vu16 *) ((base) | 0x8))
#define _REG_BG1CNT(base) (*(vu16 *) ((base) | 0xA))
#define _REG_BG2CNT(base) (*(vu16 *) ((base) | 0xC))
#define _REG_BG3CNT(base) (*(vu16 *) ((base) | 0xE))
#define _REG_BG0OFS(base) (*(u32 *) ((base) | 0x10))
#define _REG_BG1OFS(base) (*(u32 *) ((base) | 0x14))
#define _REG_BG2OFS(base) (*(u32 *) ((base) | 0x18))
#define _REG_BG3OFS(base) (*(u32 *) ((base) | 0x1C))
#define _REG_BG2PA(base) (*(u16 *) ((base) | 0x20))
#define _REG_BG2PB(base) (*(u16 *) ((base) | 0x22))
#define _REG_BG2PC(base) (*(u16 *) ((base) | 0x24))
#define _REG_BG2PD(base) (*(u16 *) ((base) | 0x26))
#define _REG_BG2X(base) (*(u32 *) ((base) | 0x28))
#define _REG_BG2Y(base) (*(u32 *) ((base) | 0x2C))
#define _REG_BG3PA(base) (*(u16 *) ((base) | 0x30))
#define _REG_BG3PB(base) (*(u16 *) ((base) | 0x32))
#define _REG_BG3PC(base) (*(u16 *) ((base) | 0x34))
#define _REG_BG3PD(base) (*(u16 *) ((base) | 0x36))
#define _REG_BG3X(base) (*(u32 *) ((base) | 0x38))
#define _REG_BG3Y(base) (*(u32 *) ((base) | 0x3C))
#define _REG_WININ(base) (*(u16 *) ((base) | 0x48))
#define _REG_WINOUT(base) (*(u16 *) ((base) | 0x4A))
#define _REG_MOSAIC(base) (*(u8 *) ((base) | 0x4C))
#define _REG_OBJMOSAIC(base) (*(u8 *) ((base) | 0x4D))
#define _REG_BLDCNT(base) (*(u16 *) ((base) | 0x50))
#define _REG_BLDALPHA(base) (*(u16 *) ((base) | 0x52))
#define _REG_MASTER_BRIGHT(base) (*(u16 *) ((base) | 0x6C))

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

#define REG_A9ROM_OFFSET 0x4000
#define REG_A9ROM (*(vu16 *) (REG_BASE | REG_A9ROM_OFFSET))

#define REG_04FFF200 (*(vu32 *) (REG_BASE | 0xFFF200))

#ifdef __cplusplus
} // extern "C"
#endif

#endif
