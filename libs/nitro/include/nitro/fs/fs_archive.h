#ifndef _NITRO_FS_ARCHIVE_H
#define _NITRO_FS_ARCHIVE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fs/fs_command.h"
#include "nitro/fs/fs_common.h"
#include "nitro/os/os_common.h"
#include "nitro/types.h"

#define FS_ARCHIVE_FLAG_0x1 0x1
#define FS_ARCHIVE_FLAG_0x2 0x2
#define FS_ARCHIVE_FLAG_0x4 0x4
#define FS_ARCHIVE_FLAG_0x8 0x8
#define FS_ARCHIVE_FLAG_0x10 0x10
#define FS_ARCHIVE_FLAG_0x20 0x20
#define FS_ARCHIVE_FLAG_0x40 0x40
#define FS_ARCHIVE_FLAG_0x80 0x80

struct FSFile;
struct FSArchive;
typedef struct FS_UnkStruct7 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ u32 unk_14;
    /* 18 */ u32 unk_18;
    /* 1c */ u32 unk_1c;
    /* 20 */ FSResult (*read)(struct FSArchive *, void *, void *, s32 size);
    /* 24 */ FSResult (*write)(struct FSArchive *, void *, void *, s32 size);
    /* 28 */ PAD(0x28, 0x2c);
    /* 2c */ FSResult (*proc)(struct FSFile *file, FSFileProc fn);
    /* 30 */ u32 overrideMask; // bitfield of FSFileProc to override when calling FSi_ExecuteFileProc
    /* 34 */
} FS_UnkStruct7;

typedef struct FsArchiveFns {
    union {
        /* 00 */ void *array[FS_MAX_CMD_COUNT];
        struct {
            /* 00 */ FSResult (*read)(struct FSArchive *archive, struct FSFile *file, u32 size, FSiCmdReadFile *cmd);
            /* 04 */ FSResult (*write)(struct FSArchive *archive, struct FSFile *file, u32, FSiCmd1 *cmd);
            /* 08 */ FSResult (*unk_08)(struct FSArchive *archive, struct FSFile *file, u32, u32);
            /* 0c */ FSResult (*unk_0c)(struct FSArchive *archive, struct FSFile *file, FS_UnkStruct13 *);
            /* 10 */ FSResult (*unk_10)(struct FSArchive *archive, u32, char *path, u32 *, BOOL);
            /* 14 */ FSResult (*unk_14)(struct FSArchive *archive, struct FSFile *file, u32, u32, u32 *);
            /* 18 */ FSResult (*unk_18)(struct FSArchive *archive, struct FSFile *file, u32, u32);
            /* 1c */ FSResult (*unk_1c)(struct FSArchive *archive, struct FSFile *file, u32, u32, FSiCmd7 *cmd);
            /* 20 */ FSResult (*close)(struct FSArchive *archive, struct FSFile *file);
            /* 24 */ FSResult (*lock)(struct FSArchive *archive);
            /* 28 */ FSResult (*unlock)(struct FSArchive *archive);
            /* 2c */ FSResult (*unk_2c)(struct FSArchive *archive);
            /* 30 */ FSResult (*unk_30)(struct FSArchive *archive);
            /* 34 */ FSResult (*open)(struct FSArchive *archive, struct FSFile *file, u32, char *path, u32 flags);
            /* 38 */ FSResult (*seek)(struct FSArchive *archive, struct FSFile *file, s32 *pos, u32 mode);
            /* 3c */ FSResult (*getLength)(struct FSArchive *archive, struct FSFile *file, FSiCmdGetLength *cmd);
            /* 40 */ FSResult (*getPosition)(struct FSArchive *archive, struct FSFile *file, FSiCmdGetPosition *cmd);
            /* 44 */ FSResult (*unk_44)(struct FSArchive *archive);
            /* 48 */ FSResult (*unk_48)(struct FSArchive *archive);
            /* 4c */ FSResult (*unk_4c)(struct FSArchive *archive, FSiCmd19 *cmd);
            /* 50 */ FSResult (*unk_50)(struct FSArchive *archive, u32, u32, u32);
            /* 54 */ FSResult (*unk_54)(struct FSArchive *archive, u32, u32);
            /* 58 */ FSResult (*unk_58)(struct FSArchive *archive, u32, u32, u32, u32);
            /* 5c */ FSResult (*unk_5c)(struct FSArchive *archive, u32, char *path, FS_UnkStruct15 *);
            /* 60 */ FSResult (*unk_60)(struct FSArchive *archive, u32, u32, u32);
            /* 64 */ FSResult (*unk_64)(struct FSArchive *archive, u32, u32, u32);
            /* 68 */ FSResult (*unk_68)(struct FSArchive *archive, u32, u32);
            /* 6c */ FSResult (*unk_6c)(struct FSArchive *archive, u32, u32, u32, u32);
            /* 70 */ FSResult (*unk_70)(struct FSArchive *archive, FS_UnkStruct16 *);
            /* 74 */ FSResult (*unk_74)(void); // unused?
            /* 78 */ FSResult (*unk_78)(struct FSArchive *archive, struct FSFile *file);
            /* 7c */ FSResult (*unk_7c)(struct FSArchive *archive, struct FSFile *file, u32);
            /* 80 */ FSResult (*openDir)(struct FSArchive *archive, struct FSFile *file, u32, char *path, u32);
            /* 84 */ FSResult (*closeDir)(struct FSArchive *archive, struct FSFile *file);
            /* 88 */ FSResult (*unk_88)(struct FSArchive *archive, struct FSFile *file, u32, u32);
        };
    };
    /* 8c */
} FSArchiveFns;

typedef struct FSArchive {
    union {
        /* 00 */ char name[4];
        /* 00 */ char *pName;
    };
    /* 04 */ struct FSArchive *next;
    /* 08 */ struct FSFile *currentFile;
    /* 0c */ OSThreadQueue unk_0c;
    /* 10 */ vu32 flags;
    /* 18 */ u32 unk_18;
    /* 1c */ u32 unk_1c;
    /* 20 */ FS_UnkStruct7 *unk_20;
    /* 24 */ const struct FsArchiveFns *fns;
    /* 28 */ FS_UnkStruct7 unk_28;
    /* 5c */
} FSArchive;

void FS_InitArchive(FSArchive *archive);
s32 FS_RegisterArchiveName(FSArchive *archive, const char *name, u32 length);
FSArchive *FS_FindArchive(const char *name, u32 length);
FSArchive *FS_func_0046(const char *path, u32 *arg1, char (*arg2)[FS_MAX_PATH]);
s32 FS_func_0052(char *path, s32 start);
char *FSi_GetPackedName(FSArchive *archive);
BOOL FS_func_0049(FSArchive *archive, FS_UnkStruct7 *arg1, const FSArchiveFns *fns);
void FS_NotifyArchiveAsyncEnd(FSArchive *archive, FSResult result);
BOOL FS_func_0044(char *arg0);
void FS_SetArchiveProc(FSArchive *archive, FSResult (*proc)(struct FSFile *file, FSFileProc index), u32 overrideMask);
void FS_LoadArchive(FSArchive *archive, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5,
                    FSResult (*read)(FSArchive *, void *, void *, s32), FSResult (*write)(FSArchive *, void *, void *, s32));

extern FSArchive FS_romArchive;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
