#ifndef _NITRO_FS_FILE_H
#define _NITRO_FS_FILE_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fs/fs_archive.h"
#include "nitro/fs/fs_command.h"
#include "nitro/fs/fs_common.h"
#include "nitro/types.h"

#define FS_FILE_FLAG_SEND_CMD 0x1
#define FS_FILE_FLAG_0x2 0x2
#define FS_FILE_FLAG_AWAIT_SYNC 0x4
#define FS_FILE_FLAG_0x8 0x8
#define FS_FILE_FLAG_FILE 0x10
#define FS_FILE_FLAG_DIR 0x20
#define FS_FILE_FLAG_0x40 0x40
#define FS_FILE_FLAG_0x80 0x80
#define FS_FILE_FLAG_CMD_TYPE_MASK 0xff00
#define FS_FILE_FLAG_CMD_TYPE(flags) ((FSCmd) ((flags) >> 8))
#define FS_CMD_FILE_FLAG(cmdType) ((u32) (cmdType << 8))

#define FS_SEEK_SET 0
#define FS_SEEK_CUR 1
#define FS_SEEK_END 2

#define FS_FILEMODE_R 0x1

#define FS_FILE_PROC_READ ((FSFileProc) 0)
#define FS_FILE_PROC_WRITE ((FSFileProc) 1)
#define FS_FILE_PROC_2 ((FSFileProc) 2)
#define FS_FILE_PROC_3 ((FSFileProc) 3)
#define FS_FILE_PROC_4 ((FSFileProc) 4)
#define FS_FILE_PROC_5 ((FSFileProc) 5)
#define FS_FILE_PROC_6 ((FSFileProc) 6)
#define FS_FILE_PROC_7 ((FSFileProc) 7)
#define FS_FILE_PROC_CLOSE ((FSFileProc) 8)
#define FS_FILE_PROC_SUSPEND ((FSFileProc) 9)
#define FS_FILE_PROC_UNLOCK ((FSFileProc) 10)
#define FS_FILE_PROC_11 ((FSFileProc) 11)
#define FS_FILE_PROC_12 ((FSFileProc) 12)
#define FS_FILE_PROC_COUNT ((FSFileProc) 13)

typedef struct FS_UnkStruct8 {
    /* 00 */ union {
        void *unk_00p;
        u32 unk_00u;
    };
    /* 04 */ union {
        void *unk_04p;
        u32 unk_04u;
        struct {
            u16 unk_04s;
            u16 unk_06s;
        };
    };
    /* 08 */ union {
        void *unk_08p;
        u32 unk_08u;
        struct {
            u16 unk_08s;
            u16 unk_0as;
        };
    };
    /* 0c */
} FS_UnkStruct8;

typedef struct FS_UnkStruct11 {
    /* 00 */ FSArchive *archive;
    /* 04 */ void *src;
    /* 08 */
} FS_UnkStruct11;

typedef struct FSFile {
    /* 00 */ struct FSFile *next;
    /* 04 */ void *cursor;
    /* 08 */ FSArchive *archive;
    /* 0c */ vu32 flags;
    /* 10 */ union {
        FSiCmdReadFile *readFile;
        FSiCmd1 *cmd1;
        FSiCmd2 *cmd2;
        FSiCmd3 *cmd3;
        FSiCmd4 *cmd4;
        FSiCmd5 *cmd5;
        FSiCmd6 *cmd6;
        FSiCmd7 *cmd7;
        FSiCmdSeekFile *seekFile;
        FSiCmdOpenFile *openFile;
        FSiCmdGetLength *getLength;
        FSiCmdGetPosition *getPosition;
        FSiCmd19 *cmd19;
        FSiCmd20 *cmd20;
        FSiCmd21 *cmd21;
        FSiCmd22 *cmd22;
        FSiCmd23 *cmd23;
        FSiCmd24 *cmd24;
        FSiCmd25 *cmd25;
        FSiCmd26 *cmd26;
        FSiCmd27 *cmd27;
        FSiCmd28 *cmd28;
        FSiCmd31 *cmd31;
        FSiCmd32 *cmd32;
        FSiCmd34 *cmd34;
        void *ptr;
    } cmd;
    /* 14 */ u32 unk_14;
    /* 18 */ OSThreadQueue unk_18;
    /* 20 */ FS_UnkStruct8 unk_20;
    /* 2c */ union {
        void *unk_2cp;
        u32 unk_2cu;
        u16 unk_2cs;
    };
    /* 30 */ FS_UnkStruct8 unk_30;
    /* 3c */ char *unk_3c; // path?
    /* 40 */ u32 unk_40;
    /* 40 */ FS_UnkStruct8 *unk_44;
    /* 48 */
} FSFile;

typedef FSResult (*const FSFileProcs[FS_FILE_PROC_COUNT])(struct FSFile *file);

typedef struct FS_UnkStruct21 {
    /* 00 */ FSArchive *archive;
    /* 04 */ u32 fileId;
    /* 08 */
} FS_UnkStruct21;

void FS_Init(u32 dmaCount);
void FS_InitFile(FSFile *file);
BOOL FS_OpenFile(FSFile *file, const char *path);
BOOL FS_OpenFileFast(FSFile *file, FS_UnkStruct21 arg1);
BOOL FS_OpenFileDirect(FSFile *file, FSArchive *archive, u32 start, u32 end, u32);
BOOL FS_OpenFileEx(FSFile *file, const char *path, u32 flags);
BOOL FS_SeekFile(FSFile *file, s32 pos, u32 mode);
u32 FS_GetLength(FSFile *file);
u32 FS_ReadFile(FSFile *file, void *buf, u32 size);
BOOL FS_CloseFile(FSFile *file);
s32 FS_func_0003(FS_UnkStruct11 *arg0, void *dst, s32 size);
void FS_func_0060(void);
void FS_func_0055(FSFile *file, FSArchive *archive, s32 arg2, s32 arg3, s32 arg4);
s32 FSi_GetPosition(FSFile *file);
s32 FS_func_0094(FSFile *file);
inline BOOL FS_IsFile(FSFile *file) {
    return !!(file->flags & FS_FILE_FLAG_FILE);
}

extern const u8 FS_data_0001[64];
extern const FSFileProcs FS_fileProcs;

#ifdef __cplusplus
} // extern "C"
#endif

#endif
