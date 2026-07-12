#pragma once

#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "files.h"
#include "global.h"
#include "types.h"

class UnkStruct_027e09e8 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ STRUCT_PAD(0x04, 0x24);
    /* 24 */ ZCBEntryPLCB *mpPolyClassTable;
    /* 28 */ ZCBEntryPLCB *mpPolyClassTableEnd;
    /* 2C */ u32 mNumPolyClasses;
    /* 30 */ VecFx32 *mpVerticesTable;
    /* 34 */ VecFx32 *mpVerticesTableEnd;
    /* 38 */ u32 mNumVertices;
    /* 3C */ ZCBEntryNRMB *mpNormalTable;
    /* 40 */ ZCBEntryNRMB *mpNormalTableEnd;
    /* 44 */ u32 mNumNormals;
    /* 48 */ VecFx32 mUnk_48;
    /* 54 */ VecFx32 mUnk_54;

    UnkStruct_027e09e8();
    ~UnkStruct_027e09e8();

    // overlay 0
    void func_ov000_0207e99c(ZCBSectionGRDB *pSection, UnkStruct_027e0cd8_0C_Base *param2);
    void func_ov000_0207bab4(ZCBEntryTRIB *pEntries, u16 nEntries);
};

// gpCollisionManager?
extern UnkStruct_027e09e8 *data_027e09e8;
