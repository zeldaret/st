#ifndef _NITRO_HW_H
#define _NITRO_HW_H

#ifdef __cplusplus
extern "C" {
#endif

#define HW_PLTT ((void *) 0x05000000)
#define HW_PLTT_SIZE 0x400

#define HW_DB_PLTT ((void *) 0x05000400)
#define HW_DB_PLTT_SIZE 0x400

#define HW_BG_VRAM ((void *) 0x06000000)
#define HW_BG_VRAM_SIZE // TODO

#define HW_DB_BG_VRAM ((void *) 0x06200000)
#define HW_DB_BG_VRAM_SIZE // TODO

#define HW_OBJ_VRAM ((void *) 0x06400000)
#define HW_OBJ_VRAM_SIZE // TODO

#define HW_DB_OBJ_VRAM ((void *) 0x06600000)
#define HW_DB_OBJ_VRAM_SIZE // TODO

#define HW_LCDC_VRAM ((void *) 0x06800000)
#define HW_LCDC_VRAM_SIZE 0xA4000

#define HW_OAM ((void *) 0x07000000)
#define HW_OAM_SIZE 0x400

#define HW_DB_OAM ((void *) 0x07000400)
#define HW_DB_OAM_SIZE 0x400

#ifdef __cplusplus
} // extern "C"
#endif

#endif
