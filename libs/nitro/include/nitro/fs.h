#ifndef _NITRO_FS_H
#define _NITRO_FS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/os.h"
#include "nitro/types.h"

#define FS_SEEK_SET 0
#define FS_SEEK_CUR 1
#define FS_SEEK_END 2

#define FS_FILE_FLAG_FILE 0x10

#define FS_FILEMODE_R 0x1

struct FSVolume;
typedef struct FSUnkStruct2 {
    /* 00 */ struct FSVolume *unk_00;
    /* 04 */ s16 unk_04;
    /* 06 */ u16 unk_06;
    /* 08 */
} FSUnkStruct2;

typedef struct FSUnkStruct5 {
    /* 00 */ struct FSVolume *volume;
    /* 04 */ struct FSVolume *next;
    /* 08 */ struct FSVolume *prev;
    /* 0c */
} FSUnkStruct5;

struct FSFile;
typedef struct FSVolume {
    /* 00 */ u32 volumeName;
    /* 04 */ struct FSVolume *next;
    /* 08 */ struct FSVolume *prev;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ u32 unk_14;
    /* 18 */ u32 unk_18;
    /* 1c */ vu32 flags;
    /* 20 */ u32 unk_20;
    /* 24 */ struct FSVolume *unk_24;
    /* 28 */ u32 unk_28;
    /* 2c */ u32 *fat;
    /* 30 */ u32 fatSize;
    /* 34 */ u8 *fnt;
    /* 38 */ u32 fntSize;
    /* 3c */ u32 fatRomOffset;
    /* 40 */ u32 fntRomOffset;
    /* 44 */ u32 *unk_44;
    /* 48 */ BOOL (*unk_48)(struct FSVolume *, u32, u32, u32);
    /* 4c */ BOOL (*unk_4c)(struct FSVolume *, u32, u32, u32);
    /* 50 */ BOOL (*unk_50)(struct FSVolume *, u32, u32, u32);
    /* 54 */ u32 (*unk_54)(struct FSFile *, u32);
    /* 58 */ u32 unk_58;
    /* 5c */
} FSVolume;

typedef struct FSUnkStruct3 {
    /* 00 */ u32 volumeName;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ u8 unk_14[0x94 - 0x14];
    /* 94 */
} FSUnkStruct3;

typedef struct FSUnkStruct7 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */
} FSUnkStruct7;

typedef struct FSFile {
    /* 00 */ u32 unk_00;
    /* 04 */ s32 *unk_04;
    /* 08 */ FSVolume *volume;
    /* 0c */ vu32 flags;
    /* 10 */ u32 unk_10;
    /* 14 */ u32 unk_14;
    /* 18 */ OSLinkedList unk_18;
    /* 20 */ u32 unk_20;
    /* 24 */ u32 startRomOffset;
    /* 28 */ u32 endRomOffset;
    /* 2c */ u32 cursor;
    /* 30 */ u32 buf;
    union {
        /* 34 */ u32 unk_34;
        struct {
            /* 34 */ u16 unk_34_s;
            /* 36 */ u16 unk_36_s;
        };
    };
    /* 38 */ u16 unk_38;
    /* 3c */ u32 unk_3c;
    /* 40 */ u32 unk_40;
    /* 44 */ u32 unk_44;
    /* 48 */
} FSFile;

typedef struct FSFntDirectory {
    /* 00 */ u32 subtableOffset;
    /* 04 */ u16 firstFileId;
    /* 06 */ u16 parentId;
    /* 08 */
} FSFntDirectory;

typedef struct FSDirEntry {
    /* 00 */ u32 unk_00;
    /* 04 */ union {
        u32 unk_04_u32;
        struct {
            u16 unk_04_u16;
            u16 unk_06;
        };
    };
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ char name[0x80];
    /* 94 */
} FSDirEntry;

typedef struct FSOverlay {
    /* 00 */ s32 id;
    /* 04 */ void *addr;
    /* 08 */ u32 textSize;
    /* 0C */ s32 bssSize;
    /* 10 */ s32 ctorStart;
    /* 14 */ s32 ctorEnd;
    /* 18 */ s32 fileId;
    /* 1C */ u32 fileSize;
    /* 20 */
} FSOverlay;

void FS_Init(u32 dmaCount);
void FS_InitFile(FSFile *file);
BOOL FS_OpenFile(FSFile *file, const char *path);
BOOL FS_OpenFileEx(FSFile *file, const char *path, u32 flags);
BOOL FS_SeekFile(FSFile *file, s32 pos, u32 mode);
u32 FS_GetLength(FSFile *file);
u32 FS_ReadFile(FSFile *file, void *buf, u32 size);
BOOL FS_CloseFile(FSFile *file);
inline BOOL FS_IsFile(FSFile *file) {
    return !!(file->flags & FS_FILE_FLAG_FILE);
}

BOOL FS_FindDir(FSFile *file, const char *path);
BOOL FS_ReadDir(FSFile *file, FSDirEntry *dir);
void FS_CloseDirectory(FSFile *file);

#define EXTERN_OVERLAY_ID(name_or_index) extern u32 OVERLAY_##name_or_index##_ID;
#define OVERLAY_ID(name_or_index) ((u32) & OVERLAY_##name_or_index##_ID)

u32 FS_GetOverlaySize(FSOverlay *overlay);
void FS_ClearOverlayCacheAndBss(FSOverlay *overlay);
void FS_Overlay_0202d6cc(void **param1, FSOverlay *overlay); // param1 is the address of gArchiveList
BOOL FS_Overlay_0202d6f4(FSOverlay *param1, FSOverlay *param2, s32 param3, s32 param4, s32 param5, u32 param6, s32 param7,
                         u32 param8);
BOOL FS_LoadOverlayInfo(FSOverlay *overlay, s32 param2, s32 param3);
BOOL FS_LoadOverlayFile(FSOverlay *overlay);
BOOL FS_Overlay_0202d984(FSOverlay *param1, s32 param2, s32 param3);
BOOL FS_StartOverlay(FSOverlay *overlay);
BOOL FS_CleanupOverlayResources(FSOverlay *overlay);
BOOL FS_StopOverlay(FSOverlay *overlay);
BOOL FS_LoadOverlay(FSOverlay *overlay, s32 param2);
BOOL FS_UnloadOverlay(FSOverlay *overlay, s32 param2);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
