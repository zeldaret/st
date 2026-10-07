#ifndef _NITRO_FS_COMMAND_H
#define _NITRO_FS_COMMAND_H

#ifdef __cplusplus
extern "C" {
#endif

#include "nitro/fs/fs_common.h"
#include "nitro/types.h"

#define FS_CMD_READ_FILE ((FSCmd) 0)
#define FS_CMD_WRITE_FILE ((FSCmd) 1)
#define FS_CMD_2 ((FSCmd) 2)
#define FS_CMD_3 ((FSCmd) 3)
#define FS_CMD_4 ((FSCmd) 4)
#define FS_CMD_5 ((FSCmd) 5)
#define FS_CMD_6 ((FSCmd) 6)
#define FS_CMD_7 ((FSCmd) 7)
#define FS_CMD_CLOSE_FILE ((FSCmd) 8)
#define FS_CMD_LOCK ((FSCmd) 9)
#define FS_CMD_UNLOCK ((FSCmd) 10)
#define FS_CMD_11 ((FSCmd) 11)
#define FS_CMD_12 ((FSCmd) 12)
#define FS_CMD_OPEN_FILE ((FSCmd) 13)
#define FS_CMD_SEEK_FILE ((FSCmd) 14)
#define FS_CMD_GET_LENGTH ((FSCmd) 15)
#define FS_CMD_GET_POSITION ((FSCmd) 16)
#define FS_CMD_17 ((FSCmd) 17)
#define FS_CMD_18 ((FSCmd) 18)
#define FS_CMD_19 ((FSCmd) 19)
#define FS_CMD_20 ((FSCmd) 20)
#define FS_CMD_21 ((FSCmd) 21)
#define FS_CMD_22 ((FSCmd) 22)
#define FS_CMD_23 ((FSCmd) 23)
#define FS_CMD_24 ((FSCmd) 24)
#define FS_CMD_25 ((FSCmd) 25)
#define FS_CMD_26 ((FSCmd) 26)
#define FS_CMD_27 ((FSCmd) 27)
#define FS_CMD_28 ((FSCmd) 28)
#define FS_CMD_29 ((FSCmd) 29)
#define FS_CMD_30 ((FSCmd) 30)
#define FS_CMD_31 ((FSCmd) 31)
#define FS_CMD_OPEN_DIR ((FSCmd) 32)
#define FS_CMD_CLOSE_DIR ((FSCmd) 33)
#define FS_CMD_34 ((FSCmd) 34)
#define FS_CMD_COUNT 35
#define FS_MAX_CMD_COUNT 64

typedef u8 FSCmd;

typedef struct FSiCmdReadFile {
    /* 00 */ void *buf;
    /* 04 */ u32 size;
    /* 08 */
} FSiCmdReadFile;

typedef struct FSiCmd1 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */
} FSiCmd1;

typedef struct FSiCmd2 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */
} FSiCmd2;

typedef struct FSiCmd3 {
    /* 00 */ FS_UnkStruct13 *unk_00;
    /* 04 */
} FSiCmd3;

typedef struct FSiCmd4 {
    /* 00 */ u32 unk_00;
    /* 04 */ char *path;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */
} FSiCmd4;

typedef struct FSiCmd5 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */
} FSiCmd5;

typedef struct FSiCmd6 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */
} FSiCmd6;

typedef struct FSiCmd7 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */
} FSiCmd7;

typedef struct FSiCmdOpenFile {
    /* 00 */ u32 unk_00;
    /* 04 */ char *path;
    /* 08 */ u32 flags;
    /* 0c */
} FSiCmdOpenFile;

typedef struct FSiCmdSeekFile {
    /* 00 */ s32 pos;
    /* 04 */ u32 mode;
    /* 08 */
} FSiCmdSeekFile;

typedef struct FSiCmd15 {
    /* 00 */ u32 length;
    /* 04 */
} FSiCmdGetLength;

typedef struct FSiCmd16 {
    /* 00 */ u32 pos;
    /* 04 */
} FSiCmdGetPosition;

typedef struct FSiCmd19 {
    /* 00 */ u32 unk_00;
    /* 04 */
} FSiCmd19;

typedef struct FSiCmd20 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */
} FSiCmd20;

typedef struct FSiCmd21 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */
} FSiCmd21;

typedef struct FSiCmd22 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */
} FSiCmd22;

typedef struct FSiCmd23 {
    /* 00 */ u32 unk_00;
    /* 04 */ char *path;
    /* 08 */ FS_UnkStruct15 *unk_08;
    /* 0c */
} FSiCmd23;

typedef struct FSiCmd24 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */
} FSiCmd24;

typedef struct FSiCmd25 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */
} FSiCmd25;

typedef struct FSiCmd26 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */
} FSiCmd26;

typedef struct FSiCmd27 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */ u32 unk_08;
    /* 0c */ u32 unk_0c;
    /* 10 */
} FSiCmd27;

typedef struct FSiCmd28 {
    /* 00 */ FS_UnkStruct16 *unk_00;
    /* 04 */
} FSiCmd28;

typedef struct FSiCmd31 {
    /* 00 */ u32 unk_00;
    /* 04 */
} FSiCmd31;

typedef struct FSiCmd32 {
    /* 00 */ u32 unk_00;
    /* 04 */ char *path;
    /* 08 */ u32 unk_08;
    /* 0c */
} FSiCmd32;

typedef struct FSiCmd34 {
    /* 00 */ u32 unk_00;
    /* 04 */ u32 unk_04;
    /* 08 */
} FSiCmd34;

struct FSFile;
struct FSArchive;

BOOL FSi_SendCommand(struct FSFile *file, s32 cmdType, BOOL sync);
FSResult FSi_TranslateCommand(struct FSFile *file, u8 cmdType);
void FSi_ReleaseCommand(struct FSFile *file, FSResult result);
struct FSFile *FSi_NextCommand(struct FSArchive *archive, BOOL arg1);
void FSi_ExecuteAsyncCommand(struct FSFile *file);

#ifdef __cplusplus
} // extern "C"
#endif

#endif
