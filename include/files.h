#pragma once

#include "Actor/ActorId.hpp"
#include "Actor/ActorRef.hpp"
#include "Map/MapObjectId.hpp"
#include "types.h"

#include <nitro/math.h>

#ifdef __cplusplus
extern "C" {
#endif

typedef u32 FileType;
enum FileType_ {
    FileType_ZOB   = 'BLOZ',
    FileType_ZTB   = '1BTZ',
    FileType_ZAB   = 'ZCAB',
    FileType_ZMBv1 = 'ZMB1',
    FileType_ZMBv2 = 'ZMB2',
    FileType_CIB   = 'ZCIB',
    FileType_CLB   = 'ZCLB',
};

typedef struct FileInfos {
    /* 00 */ void *pFile;
    /* 04 */ size_t size;
} FileInfos;

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
    /* 02 */ u16 unk_02;
} CourseListRoomEntry; // size = 0x08

typedef struct CourseListEntry {
    /* 00 */ const char name[16];
    /* 10 */ unk32 unk_10;
    /* 14 */ u8 numRooms;
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
    /* 21 */ s8 unk_21;   // scene index but unknown purpose
    /* 22 */ unk8 unk_22; // pad?
    /* 23 */ unk8 unk_23; // pad?
    /* 24 */ CourseListRoomEntry roomEntries[];
} CourseListEntry; // size >= 0x28

typedef struct CourseListHeader {
    /* 00 */ FileType type; // always "ZCIB"
    /* 04 */ size_t nSize;
    /* 08 */ u32 nEntries;
    /* 0C */ u32 nEntries2; // same value as above?
} CourseListHeader;         // size = 0x10

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
    /* 0C */ u32 nSections;
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

// .zab
typedef u32 ZABSectionType;
enum ZABSectionType_ {
    ZABSectionType_CABM = 'CABM',
    ZABSectionType_CABI = 'CABI',
};

typedef struct ZABHeader {
    /* 00 */ FileType type; // always "ZCAB" (probably "Zelda Course Arrange Binary"?)
    /* 04 */ size_t nSize;
    /* 08 */ u32 nSections;
    /* 0C */ unk32 unk_0C;
} ZABHeader; // size = 0x10

typedef struct ZABEntryCABM {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ s8 unk_03;
    /* 04 */ u32 unk_04;
} ZABEntryCABM; // size = 0x08

typedef struct ZABSectionHeader {
    /* 00 */ ZABSectionType type;
    /* 04 */ size_t nSize;
    /* 08 */ u8 unk_08;
    /* 09 */ u8 unk_09;
    /* 0A */ u8 unk_0A;
    /* 0B */ u8 unk_0B;
    /* 0C */ u8 unk_0C;
    /* 0D */ u8 unk_0D;
    /* 0E */ u16 nEntries;
} ZABSectionHeader; // size = 0x10

typedef struct ZABSectionCABM {
    /* 00 */ ZABSectionHeader header;
    /* 10 */ ZABEntryCABM entries[];
} ZABSectionCABM;

typedef struct ZABSectionCABI {
    /* 00 */ ZABSectionHeader header;
    /* 10 */ // unknown
} ZABSectionCABI;

struct UnkStruct_027e0cd8_04;
struct UnkStruct_func_ov000_020702a8;

extern BOOL ZAB_ParseFile(FileInfos *pFileInfos, u32 sceneIndex, UnkStruct_027e0cd8_04 *pDst, const CourseListEntry *pEntry,
                          const UnkStruct_func_ov000_020702a8 *pUnk1, BOOL param6);
extern BOOL ZAB_ParseCAMB(FileInfos *pFileInfos, ZABSectionCABM *pCABM, u32 sceneIndex, UnkStruct_027e0cd8_04 *pDst,
                          const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1, BOOL param6);
extern BOOL ZAB_ParseCABI(FileInfos *pFileInfos, ZABSectionCABI *pCABI, BOOL param3);
extern BOOL ZAB_GetRoomEntry(FileInfos *pFileInfos, u8 param2, const CourseListEntry *pEntry, CourseListRoomEntry *param4);

// .zmb
typedef u32 ZMBSectionType;
enum ZMBSectionType_ {
    ZMBSectionType_ROMB       = 'ROMB', // unknown
    ZMBSectionType_ROOM       = 'ROOM', // room settings
    ZMBSectionType_LDLB       = 'LDLB', // related to script triggers
    ZMBSectionType_MapObjects = 'MPOB', // map object list, parameters are stored here
    ZMBSectionType_ARAB       = 'ARAB', // locations? (?)
    ZMBSectionType_RALB       = 'RALB', // paths?
    ZMBSectionType_NPCA       = 'NPCA', // actor list, same as above
    ZMBSectionType_PLYR       = 'PLYR', // player entrances?
    ZMBSectionType_WARP       = 'WARP', // exits?
    ZMBSectionType_CAME       = 'CAME', // camera settings?
    ZMBSectionType_CMPT       = 'CMPT', // ?
};

typedef struct ZMBFileInfos {
    /* 00 */ void *pFile;
    /* 04 */ size_t size;
    /* 08 */ unk16 unk_08;
    /* 0A */ unk16 unk_0A;
    /* 0C */ unk16 unk_0C;
    /* 0E */ s16 unk_0E;
} ZMBFileInfos; // size = 0x10

typedef struct ZMBHeader {
    /* 00 */ u32 magic;     // 'MAPB'
    /* 04 */ FileType type; // always "ZMB1"
    /* 08 */ size_t nSize;
    /* 0C */ u32 nSections;
    /* 10 */ u8 unused[0x10];
} ZMBHeader; // size = 0x20

typedef struct ZMBSectionHeader {
    /* 00 */ ZMBSectionType type;
    /* 04 */ size_t nSize;
    /* 08 */ u16 nEntries;
    /* 0A */ u8 unk_0A;
    /* 0B */ u8 unk_0B;
} ZMBSectionHeader; // size = 0x0C

typedef struct ZMBSectionROMB {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */
} ZMBSectionROMB;

typedef struct ZMBEntryROOM {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
    /* 04 */ u8 unk_04;
    /* 05 */ u8 unk_05;
    /* 06 */ u8 unk_06;
    /* 07 */ u8 unk_07;
    /* 08 */ u32 unk_08;
    /* 0C */ u8 unk_0C;
    /* 0D */ union {
        u8 unk_0D;
        bool unk_0D_bool;
    };
    /* 0E */ u8 unk_0E;
    /* 0F */ u8 unk_0F;
    /* 10 */ u16 unk_10;
    /* 12 */ unk16 unk_12; // pad?
} ZMBEntryROOM;

typedef struct ZMBSectionROOM {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBEntryROOM entries[];
} ZMBSectionROOM;

typedef struct ZMBEntryLBLB {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
    /* 04 */ u16 unk_04;
    /* 06 */ unk16 unk_06;
} ZMBEntryLBLB; // size = 0x08

typedef struct ZMBSectionLDLB {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBEntryLBLB entries[];
} ZMBSectionLDLB;

typedef struct ZMBMapObjEntry {
    /* 00 */ u32 id;
    /* 04 */ Vec2b pos;
    /* 06 */ u16 angle;
    /* 08 */ u16 params[4];
    /* 10 */ u16 unk_10[2];
    /* 14 */ unk32 unk_14;
    /* 18 */ u8 unk_18;
    /* 19 */ u8 unk_19;
    /* 1A */ u8 unk_1A;
    /* 1B */ u8 unk_1B;
} ZMBMapObjEntry; // size = 0x1C

typedef struct ZMBSectionMapObjectList {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBMapObjEntry entries[];
} ZMBSectionMapObjectList;

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

typedef struct ZMBSectionARAB {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBEntryARAB entries[];
} ZMBSectionARAB;

// ZMBPathPoint?
typedef struct ZMBRALBPoint {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ fx16 angle;
    /* 04 */ VecFx32 pos;
    /* 10 */ unk16 unk_10;
    /* 12 */ u16 unk_12;
    /* 14 */ unk32 unk_14;
} ZMBRALBPoint; // size = 0x18

// ZMBPathEntry?
typedef struct ZMBEntryRALB {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 numPoints;
    /* 02 */ u8 unk_02;
    /* 03 */ u8 unk_03;
    /* 04 */ unk32 unk_04;
} ZMBEntryRALB; // size = 0x08

typedef struct ZMBSectionRALB {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBEntryRALB entries[];
} ZMBSectionRALB;

typedef struct ZMBActorEntry {
    /* 00 */ u32 id;
    /* 04 */ struct {
        u16 x, y;
    } pos;
    /* 08 */ s8 unk_08;
    /* 08 */ s8 unk_09;
    /* 0A */ u16 angle;
    /* 0C */ u16 params[4];
    /* 14 */ u16 unk_14[2];
    /* 18 */ u32 unk_18;
    /* 1C */ u8 unk_1C;
    /* 1D */ u8 unk_1D;
    /* 1E */ u8 unk_1E;
    /* 1F */ u8 unk_1F;
} ZMBActorEntry; // size = 0x20

typedef struct ZMBSectionActorList {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBActorEntry entries[];
} ZMBSectionActorList;

typedef struct ZMBSectionPLYR {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */
} ZMBSectionPLYR;

typedef struct ZMBEntryWARP {
    /* 00 */ u8 unk_00;
    /* 01 */ u8 unk_01;
    /* 02 */ u8 roomIndex;
    /* 03 */ u8 spawnIndex;
    /* 04 */ const char destName[16];
    /* 14 */ u8 unk_14;
    /* 15 */ u8 unk_15;
    /* 16 */ u8 unk_16;
    /* 17 */ u8 unk_17;
} ZMBEntryWARP; // size = 0x18

typedef struct ZMBSectionWARP {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */ ZMBEntryWARP entries[];
} ZMBSectionWARP;

typedef struct ZMBSectionCAME {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */
} ZMBSectionCAME;

typedef struct ZMBSectionCMPT {
    /* 00 */ ZMBSectionHeader header;
    /* 0C */
} ZMBSectionCMPT;

struct UnkStruct_027e0cd8_0C_Base;

extern BOOL ZMB_ParseFile(ZMBFileInfos *pFileInfos, UnkStruct_027e0cd8_0C_Base *pDst, bool param3);
extern BOOL ZMB_ParseROMB(ZMBFileInfos *pFileInfos, ZMBSectionROMB *pROMB, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseLDLB(ZMBFileInfos *pFileInfos, ZMBSectionLDLB *pLDLB, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseARAB(ZMBFileInfos *pFileInfos, ZMBSectionARAB *pARAB, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseRALB(ZMBFileInfos *pFileInfos, ZMBSectionRALB *pRALB, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseWARP(ZMBFileInfos *pFileInfos, ZMBSectionWARP *pWARP, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseMapObjList(ZMBFileInfos *pFileInfos, ZMBSectionMapObjectList *pMapObjs, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseActorList(ZMBFileInfos *pFileInfos, ZMBSectionActorList *pNPCA, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseROOM(ZMBFileInfos *pFileInfos, ZMBSectionROOM *pROOM, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParsePLYR(ZMBFileInfos *pFileInfos, ZMBSectionPLYR *pPLYR, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseCAME(ZMBFileInfos *pFileInfos, ZMBSectionCAME *pCAME, UnkStruct_027e0cd8_0C_Base *pDst);
extern BOOL ZMB_ParseCMPT(ZMBFileInfos *pFileInfos, ZMBSectionCMPT *pCMPT, UnkStruct_027e0cd8_0C_Base *pDst);

#ifdef __cplusplus
} // extern "C"
#endif
