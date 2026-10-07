#ifndef _NITRO_REG_H
#define _NITRO_REG_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define REG_BASE 0x4000000

#define REG_POWER_CNT (*(vu16 *) (REG_BASE | 0x304))
#define REG_IME (*(vu32 *) (REG_BASE | 0x208))

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

typedef struct DivParam {
    union {
        u64 numer;
        struct {
            u32 numerLo;
            u32 numerHi;
        };
    };
    u64 denom;
} DivParam;

#define REG_DIV_CNT (*(vu16 *) (REG_BASE | 0x280))
#define REG_DIV (*(DivParam *) (REG_BASE | 0x290))
#define REG_DIV_NUMER (*(u64 *) (REG_BASE | 0x290))
#define REG_DIV_DENOM (*(u64 *) (REG_BASE | 0x298))
#define REG_DIV_RESULT (*(u64 *) (REG_BASE | 0x2a0))
#define REG_REM_RESULT (*(u64 *) (REG_BASE | 0x2a8))
#define REG_SQRT_CNT (*(vu16 *) (REG_BASE | 0x2b0))
#define REG_SQRT_RESULT (*(vu32 *) (REG_BASE | 0x2b4))
#define REG_SQRT_PARAM (*(u64 *) (REG_BASE | 0x2b8))

#define REG_FRAME_COUNTER (*(u32 *) (_BIOS_REG_BASE | 0xC3C))
#define REG_027FFC40 (*(u16 *) (_BIOS_REG_BASE | 0xC40))
#define REG_027FFC42 (*(u16 *) (_BIOS_REG_BASE | 0xC42))
#define REG_027FFD9C (*(void **) (_BIOS_REG_BASE | 0xD9C))
#define REG_027FFDA0 ((void **) (_BIOS_REG_BASE | 0xDA0))
#define REG_027FFDC4 ((void **) (_BIOS_REG_BASE | 0xDC4))
#define REG_027FFDE8 (*(u32 *) (_BIOS_REG_BASE | 0xDE8))
#define REG_027FFDEA (*(u16 *) (_BIOS_REG_BASE | 0xDEA))
#define REG_027FFDEC (*(u32 *) (_BIOS_REG_BASE | 0xDEC))
#define REG_ROM_HEADER (*(RomHeader *) (_BIOS_REG_BASE | 0xE00))
#define REG_IPC_FIFO_RECV_CALLBACKS (*(u32 *) (_BIOS_REG_BASE | 0xF88))
#define REG_027FFF90 (*(u32 *) (_BIOS_REG_BASE | 0xF90))
#define REG_027FFF9C_ADDR (_BIOS_REG_BASE | 0xF9C)
#define REG_027FFF9C (*(u32 *) REG_027FFF9C_ADDR)
#define REG_027FFFA0 (*(u32 *) (_BIOS_REG_BASE | 0xFA0))

#define REG_GFX_FIFO (*(vu32 *) (REG_BASE | 0x400))
#define REG_GFX_FIFO_MATRIX_MODE (*(vu32 *) (REG_BASE | 0x440))
#define REG_GFX_FIFO_MATRIX_PUSH (*(vu32 *) (REG_BASE | 0x444))
#define REG_GFX_FIFO_MATRIX_POP (*(vu32 *) (REG_BASE | 0x448))
#define REG_GFX_FIFO_MATRIX_STORE (*(vu32 *) (REG_BASE | 0x44C))
#define REG_GFX_FIFO_MATRIX_RESTORE (*(vu32 *) (REG_BASE | 0x450))
#define REG_GFX_FIFO_MATRIX_IDENTITY (*(vu32 *) (REG_BASE | 0x454))
#define REG_GFX_FIFO_MATRIX_SCALE (*(vu32 *) (REG_BASE | 0x46C))
#define REG_GFX_FIFO_MATRIX_TRANSLATE (*(vu32 *) (REG_BASE | 0x470))
#define REG_GFX_FIFO_VERTEX_COLOR (*(vu32 *) (REG_BASE | 0x480))
#define REG_GFX_FIFO_VERTEX_TEXCOORD (*(vu32 *) (REG_BASE | 0x488))
#define REG_GFX_FIFO_VERTEX_16 (*(vu32 *) (REG_BASE | 0x48C))
#define REG_GFX_FIFO_VERTEX_10 (*(vu32 *) (REG_BASE | 0x490))
#define REG_GFX_FIFO_VERTEX_XZ (*(vu32 *) (REG_BASE | 0x498))
#define REG_GFX_FIFO_POLYGON_ATTR (*(vu32 *) (REG_BASE | 0x4A4))
#define REG_GFX_FIFO_TEXTURE_PARAM (*(vu32 *) (REG_BASE | 0x4A8))
#define REG_GFX_FIFO_TEXTURE_PALETTE (*(vu32 *) (REG_BASE | 0x4AC))
#define REG_GFX_FIFO_DIFFUSE_AMBIENT_REFLECT (*(vu32 *) (REG_BASE | 0x4C0))
#define REG_GFX_FIFO_POLYGONS_BEGIN (*(vu32 *) (REG_BASE | 0x500))
#define REG_GFX_FIFO_POLYGONS_END (*(vu32 *) (REG_BASE | 0x504))
#define REG_GFX_FIFO_SWAP_BUFFERS (*(vu32 *) (REG_BASE | 0x540))
#define REG_GFX_FIFO_VIEWPORT (*(vu32 *) (REG_BASE | 0x580))

#define REG_IPC_SYNC (*(vu16 *) (REG_BASE | 0x180))
#define REG_IPC_FIFO_CNT (*(vu16 *) (REG_BASE | 0x184))
#define REG_IPC_FIFO_SEND (*(PXI_UnkStruct1 *) (REG_BASE | 0x188))
#define REG_04100000 (*(PXI_UnkStruct1 *) (REG_BASE | 0x100000))

extern u32 __DTCM_LO;
extern u32 __DTCM_HI;
extern u32 __ITCM_HI;
extern u32 __CODE_HI;
#define DTCM_LO ((u8 *) &__DTCM_LO)
#define DTCM_HI ((u8 *) &__DTCM_HI)
#define ITCM_HI ((u8 *) &__ITCM_HI)
#define CODE_HI ((u8 *) (&__CODE_HI))

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

// TODO: Move these structs somewhere else
typedef struct ProgramOffset {
    /* 00 */ u32 offset;
    /* 04 */ u32 entry;
    /* 08 */ u32 baseAddress;
    /* 0c */ u32 size;
    /* 10 */
} ProgramOffset;

typedef struct TableOffset {
    /* 00 */ u32 offset;
    /* 04 */ u32 size;
    /* 08 */
} TableOffset;

typedef struct RomHeader {
    /* 000 */ char title[0xc];
    /* 00c */ char gamecode[0x4];
    /* 010 */ char makercode[0x2];
    /* 012 */ u8 unitcode;
    /* 013 */ u8 seedSelect;
    /* 014 */ u8 capacity;
    /* 015 */ PAD(0x015, 0x01c);
    /* 01c */ u8 dsiFlags;
    /* 01d */ u8 dsFlags;
    /* 01e */ u8 romVersion;
    /* 01f */ u8 autostart;
    /* 020 */ ProgramOffset arm9;
    /* 030 */ ProgramOffset arm7;
    /* 040 */ TableOffset fnt;
    /* 048 */ TableOffset fat;
    /* 050 */ TableOffset arm9ovt;
    /* 058 */ TableOffset arm7ovt;
    /* 060 */ u32 normalCmdSetting;
    /* 064 */ u32 key1CmdSetting;
    /* 068 */ u32 bannerOffset;
    /* 06c */ u16 secureAreaCrc;
    /* 06e */ u16 secureAreaDelay;
    /* 070 */ u32 arm9AutoloadCallback;
    /* 074 */ u32 arm7AutoloadCallback;
    /* 078 */ u64 secureAreaDisable;
    /* 080 */ u32 romSizeDs;
    /* 084 */ u32 headerSize;
    /* 088 */ u32 arm9BuildInfoOffset;
    /* 08c */ u32 arm7BuildInfoOffset;
    /* 090 */ u16 dsRomRegionEnd;
    /* 092 */ u16 dsiRomRegionEnd;
    /* 094 */ u16 romNandEnd;
    /* 096 */ u16 rwNandEnd;
    /* 098 */ PAD(0x098, 0x0c0);
    /* 0c0 */ u8 logo[0x9c];
    /* 15c */ u16 logoCrc;
    /* 15e */ u16 headerCrc;
    /* 160 */ u32 debugRomOffset;
    /* 164 */ u32 debugSize;
    /* 168 */ u32 debugRamAddr;
    /* 16c */ PAD(0x16c, 0x170);
    /* 170 */
} RomHeader;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
