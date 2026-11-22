#ifndef _NITRO_GX_STATE_H
#define _NITRO_GX_STATE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

typedef struct GX_UnkStruct2 {
    /* 00 */ u16 lcdc;
    /* 02 */ u16 bg;
    /* 04 */ u16 obj;
    /* 06 */ u16 arm7;
    /* 08 */ u16 tex;
    /* 0A */ u16 texPltt;
    /* 0C */ u16 clearImage;
    /* 0E */ u16 bgExtPltt;
    /* 10 */ u16 objExtPltt;
    /* 12 */ u16 subBg;
    /* 14 */ u16 subObj;
    /* 16 */ u16 subBgExtPltt;
    /* 18 */ u16 subObjExtPltt;
    /* 1A */ u16 pad;
} GX_UnkStruct2; // size = 0x1C

void GX_InitGXState(void);

extern GX_UnkStruct2 GX_banks;

#ifdef __cplusplus
}
#endif

#endif
