#ifndef _NITRO_FS_H
#define _NITRO_FS_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fs/fs_archive.h"
#include "nitro/fs/fs_command.h"
#include "nitro/fs/fs_common.h"
#include "nitro/fs/fs_dir.h"
#include "nitro/fs/fs_file.h"
#include "nitro/fs/fs_overlay.h"
#include "nitro/types.h"

typedef struct FS_UnkStruct14 {
    /* 00 */ s32 pos;
    /* 04 */
} FS_UnkStruct14;

typedef struct FS_UnkStruct19 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */
} FS_UnkStruct19;

typedef struct FS_UnkStruct6 {
    /* 00 */ PAD(0x00, 0x04);
    /* 04 */ s32 start;
    /* 08 */ s32 end;
    /* 0c */ s32 pos;
    /* 10 */
} FS_UnkStruct6;

BOOL FSi_InitRom(s32 dmaCount);
BOOL FSi_GetLengthFromRom(FSFile *file, FSiCmdGetLength *cmd);
BOOL FSi_GetPositionFromRom(FSFile *file, FSiCmdGetPosition *cmd);
BOOL FSi_SeekFileFromRom(FSFile *arg0, FS_UnkStruct14 arg1, s32 mode);

FSResult FS_func_0037(FSFile *file, FSResult result);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
