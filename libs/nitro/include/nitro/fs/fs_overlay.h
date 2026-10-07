#ifndef _NITRO_FS_OVERLAY_H
#define _NITRO_FS_OVERLAY_H

#include "nitro/os.h"
#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/types.h"

#define FS_EXTERN_OVERLAY_ID(name_or_index) extern u32 OVERLAY_##name_or_index##_ID;
#define FS_OVERLAY_ID(name_or_index) ((u32) & OVERLAY_##name_or_index##_ID)

#define FS_OVERLAY_FLAGS(overlay) ((overlay)->fileSize >> 24)
#define FS_OVERLAY_FLAG_COMPRESSED 1
#define FS_OVERLAY_FLAG_SIGNED 2

typedef void (*FSStaticInit)(void);

typedef struct FSOverlay {
    /* 00 */ u32 id;
    /* 04 */ void *addr;
    /* 08 */ u32 textSize;
    /* 0C */ s32 bssSize;
    /* 10 */ FSStaticInit *ctorStart;
    /* 14 */ FSStaticInit *ctorEnd;
    /* 18 */ s32 fileId;
    /* 1C */ u32 fileSize;
    /* 20 */
} FSOverlay;

typedef struct FSOverlayInfo {
    /* 00 */ FSOverlay overlay;
    /* 20 */ OSCpu cpu;
    /* 24 */ u32 unk_24;
    /* 28 */ u32 unk_28;
    /* 2c */
} FSOverlayInfo;

BOOL FS_LoadOverlay(u32 arg0, u32 id);
BOOL FS_UnloadOverlay(u32 arg0, u32 id);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
