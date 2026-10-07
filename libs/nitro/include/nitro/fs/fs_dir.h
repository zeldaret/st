#ifndef _NITRO_FS_DIR_H
#define _NITRO_FS_DIR_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fs/fs_file.h"

typedef struct FSFntDirectory {
    /* 00 */ u32 subtableOffset;
    /* 04 */ u16 firstFileId;
    /* 06 */ u16 parentId;
    /* 08 */
} FSFntDirectory;

typedef struct FSDirEntry {
    /* 00 */ FSArchive *archive;
    /* 04 */ union {
        u32 unk_04u;
        struct {
            u16 unk_04s;
            u16 unk_06s;
        };
    };
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */ u32 unk_10;
    /* 14 */ char unk_14[0x80];
    /* 94 */
} FSDirEntry;

FSResult FS_FindDir(FSFile *file, const char *path);
FSResult FS_ReadDir(FSFile *file, FSDirEntry *dir);
FSResult FS_CloseDirectory(FSFile *file);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
