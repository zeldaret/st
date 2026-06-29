#pragma once

#include "Map/MapObjectId.hpp"
#include "types.h"

#include <nitro/math.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef u32 FileType;
enum FileType_ {
    FileType_ZOB = 'BLOZ',
    FileType_ZTB = '1BTZ',
    FileType_ZMB = '1BMZ',
    FileType_CIB = 'ZCIB',
    FileType_CLB = 'ZCLB',
};

typedef struct FileInfos {
    /* 00 */ void *pFile;
    /* 04 */ size_t size;
} FileInfos;

// .zob
typedef struct ZOBHeader {
    /* 00 */ FileType type; // always "ZOLB"
    /* 04 */ unk32 nSize;   // file size?
    /* 08 */ unk16 unk_08;
    /* 0A */ unk16 unk_0A;
    /* 0C */ u16 nEntries; // number of entries
    /* 0E */ unk16 unk_0E;
} ZOBHeader; // size = 0x10

typedef struct ZeldaObjectList {
    /* 00 */ ZOBHeader header;
    /* 10 */ u32 aIdList[]; // actor id or map object id
} ZeldaObjectList;

// .ztb
typedef u32 ZTBSectionType;
enum ZTBSectionType_ {
    ZTBSectionType_GRDB = 'GRDB', // grid block?
    ZTBSectionType_GRRL = 'GRRL', // grid rail?
    ZTBSectionType_STAB = 'STAB', // station block
    ZTBSectionType_LDMK = 'LDMK', // land mark?
};

typedef struct ZTBHeader {
    /* 00 */ u32 magic;     // 'MTRB'
    /* 04 */ FileType type; // always "ZTB1"
    /* 08 */ size_t nSize;
    /* 0C */ u32 nEntries;
    /* 10 */ u8 unused[0x10];
} ZTBHeader; // size = 0x20

typedef struct ZTBSectionHeader {
    /* 00 */ ZTBSectionType type;
    /* 04 */ size_t nSize;
    /* 08 */ union {
        u16 nEntries;
        struct {
            u8 nEntries1;
            u8 nEntries2;
        };
    };
    /* 0A */ u8 unk_0A;
    /* 0B */ u8 unk_0B;
} ZTBSectionHeader; // size = 0x0C

typedef struct ZTBEntryGRDB {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
} ZTBEntryGRDB; // size = 0x04

typedef struct ZTBEntryGRRL {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
    /* 04 */ u8 unk_04;
    /* 05 */ u8 unk_05;
    /* 06 */ u16 unk_06;
} ZTBEntryGRRL; // size = 0x08

typedef struct ZTBEntrySTAB {
    /* 00 */ char sceneName[16];
    /* 10 */ u8 unk_10;
    /* 11 */ u8 unk_11;
    /* 12 */ u8 unk_12;
    /* 13 */ u8 unk_13;
} ZTBEntrySTAB; // size = 0x14

typedef struct ZTBEntryLDMK {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
} ZTBEntryLDMK; // size = 0x04

typedef struct ZTBSectionGRDB {
    /* 00 */ ZTBSectionHeader header;
    /* 0C */ ZTBEntryGRDB entries[];
} ZTBSectionGRDB;

typedef struct ZTBSectionGRRL {
    /* 00 */ ZTBSectionHeader header;
    /* 0C */ ZTBEntryGRRL entries[];
} ZTBSectionGRRL;

typedef struct ZTBSectionSTAB {
    /* 00 */ ZTBSectionHeader header;
    /* 0C */ ZTBEntrySTAB entries[];
} ZTBSectionSTAB;

typedef struct ZTBSectionLDMK {
    /* 00 */ ZTBSectionHeader header;
    /* 0C */ ZTBEntryLDMK entries[];
} ZTBSectionLDMK;

struct UnkDataStruct4;

extern BOOL ZTB_ParseFile(FileInfos *pFileInfos, UnkDataStruct4 *pDst);
extern BOOL ZTB_ParseGRDB(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionGRDB *pGRDB);
extern BOOL ZTB_ParseGRRL(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionGRRL *pGRRL);
extern BOOL ZTB_ParseSTAB(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionSTAB *pSTAB);
extern BOOL ZTB_ParseLDMK(FileInfos *pFileInfos, UnkDataStruct4 *pDst, ZTBSectionLDMK *pLDMK);

// .zmb
typedef u32 ZMBSectionType;
enum ZMBSectionType_ {
    ZMBSectionType_LDLB = 'LDLB', // related to script triggers
    ZMBSectionType_ROMB = 'ROMB', // unknown
    ZMBSectionType_ROOB = 'ROOM', // room settings
    ZMBSectionType_ARAB = 'ARAB', // locations? (?)
    ZMBSectionType_RALB = 'RALB', // paths?
    ZMBSectionType_WARP = 'WARP', // exits?
    ZMBSectionType_CAME = 'CAME', // camera settings?
    ZMBSectionType_PLYR = 'PLYR', // player entrances?
    ZMBSectionType_MPOB = 'MPOB', // map object list, parameters are stored here
    ZMBSectionType_NPCA = 'NPCA', // actor list, same as above
};

typedef struct ZMBFileInfos {
    /* 00 */ void *pFile;
    /* 04 */ size_t size;
    /* 08 */ unk16 unk_08;
    /* 0C */ unk16 unk_0C;
    /* 10 */ unk16 unk_10;
    /* 14 */ unk16 unk_14;
} ZMBFileInfos;

typedef struct ZMBHeader {
    /* 00 */ u32 magic;     // 'MAPB'
    /* 04 */ FileType type; // always "ZMB1"
    /* 08 */ size_t nSize;
    /* 0C */ u32 nEntries;
    /* 10 */ u8 unused[0x10];
} ZMBHeader; // size = 0x20

typedef struct ZMBSectionHeader {
    /* 00 */ ZMBSectionType type;
    /* 04 */ size_t nSize;
    /* 08 */ u16 nEntries;
    /* 0A */ u8 unk_0A;
    /* 0B */ u8 unk_0B;
} ZMBSectionHeader; // size = 0x0C

typedef struct ZMBEntryRALB {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
    /* 04 */ unk32 unk_04;
} ZMBEntryRALB; // size = 0x08

typedef struct ZMBSectionRALB {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBEntryRALB entries[];
} ZMBSectionRALB;

typedef struct ZMBEntryARAB {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
    /* 04 */ unk32 unk_04;
    /* 08 */ unk32 unk_08;
    /* 0C */ u8 unk_0C;
    /* 0D */ u8 unk_0D;
    /* 0E */ unk8 unk_0E;
    /* 0F */ unk8 unk_0F;
} ZMBEntryARAB; // size = 0x10

struct UnkStruct_027e0cd8_0C_Base;

extern BOOL ZMB_ParseFile(ZMBFileInfos *pFileInfos, UnkStruct_027e0cd8_0C_Base *pDst, BOOL param3);

// .cib
typedef struct CourseInitEntry {
    /* 00 */ const char name[16];
    /* 10 */ STRUCT_PAD(0x10, 0x24);
} CourseInitEntry; // size = 0x24

typedef struct CourseInitHeader {
    /* 00 */ FileType type; // always "ZCIB"
    /* 04 */ size_t nSize;
    /* 08 */ u32 nEntries;
    /* 0C */ u32 nEntries2; // same value as above?
} CourseInitHeader;         // size = 0x10

// .clb
typedef struct CourseListRoomEntry {
    /* 00 */ u8 roomIndex;
    /* 01 */ u8 mapPaintIndex;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
} CourseListRoomEntry; // size = 0x08

typedef struct CourseListEntry {
    /* 00 */ const char name[16];
    /* 10 */ unk32 unk_10;
    /* 14 */ unk8 numRooms;
    /* 15 */ unk8 unk_15;
    /* 16 */ unk8 titleCardMsgIndex;
    /* 17 */ u8 saveCourseIndex;
    /* 18 */ u8 unk_18;
    /* 19 */ u8 unk_19;
    /* 1A */ u8 unk_1A;
    /* 1B */ u8 unk_1B;
    /* 1C */ u8 unk_1C;
    /* 1D */ u8 unk_1D;
    /* 1E */ u8 unk_1E;
    /* 1F */ u8 unk_1F;
    /* 20 */ u8 defaultMapPaintIndex;
    /* 21 */ s8 unk_21; // scene index but unknown purpose
    /* 24 */ CourseListRoomEntry roomEntries[];
} CourseListEntry; // size >= 0x28

typedef struct CourseListHeader {
    /* 00 */ FileType type; // always "ZCIB"
    /* 04 */ size_t nSize;
    /* 08 */ u32 nEntries;
    /* 0C */ u32 nEntries2; // same value as above?
} CourseListHeader;         // size = 0x10

#ifdef __cplusplus
} // extern "C"
#endif
