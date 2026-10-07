#ifndef _NITRO_HW_H
#define _NITRO_HW_H

#ifdef __cplusplus
extern "C" {
#endif

#define HW_PLTT_ADDR 0x05000000
#define HW_PLTT ((void *) HW_PLTT_ADDR)
#define HW_PLTT_SIZE 0x400

#define HW_DB_PLTT_ADDR 0x05000400
#define HW_DB_PLTT ((void *) HW_DB_PLTT_ADDR)
#define HW_DB_PLTT_SIZE 0x400

#define HW_BG_VRAM_ADDR 0x06000000
#define HW_BG_VRAM ((void *) HW_BG_VRAM_ADDR)
#define HW_BG_VRAM_SIZE // TODO

#define HW_DB_BG_VRAM_ADDR 0x06200000
#define HW_DB_BG_VRAM ((void *) HW_DB_BG_VRAM_ADDR)
#define HW_DB_BG_VRAM_SIZE // TODO

#define HW_OBJ_VRAM_ADDR 0x06400000
#define HW_OBJ_VRAM ((void *) HW_OBJ_VRAM_ADDR)
#define HW_OBJ_VRAM_SIZE // TODO

#define HW_DB_OBJ_VRAM_ADDR 0x06600000
#define HW_DB_OBJ_VRAM ((void *) HW_DB_OBJ_VRAM_ADDR)
#define HW_DB_OBJ_VRAM_SIZE // TODO

#define HW_LCDC_VRAM_ADDR 0x06800000
#define HW_LCDC_VRAM ((void *) HW_LCDC_VRAM_ADDR)
#define HW_LCDC_VRAM_SIZE 0xA4000

#define HW_OAM_ADDR 0x07000000
#define HW_OAM ((void *) HW_OAM_ADDR)
#define HW_OAM_SIZE 0x400

#define HW_DB_OAM_ADDR 0x07000400
#define HW_DB_OAM ((void *) HW_DB_OAM_ADDR)
#define HW_DB_OAM_SIZE 0x400

#define HW_BIOS_ADDR 0xFFFF0000
#define HW_BIOS ((void *) HW_BIOS_ADDR)
#define HW_BIOS_SIZE 0x8000

#ifdef __cplusplus
} // extern "C"
#endif

#endif
