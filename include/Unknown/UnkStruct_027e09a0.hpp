#pragma once

#include "Course/Course.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "files.h"
#include "global.h"
#include "types.h"

struct UnkStruct_func_ov000_020702a8 {
    /* 00 */ STRUCT_PAD(0x00, 0x20);
    /* 20 */ unk16 mUnk_20;
};

class CourseInitBinary {
public:
    /* 0000 */ CourseInitEntry mEntries[SceneIndex_Max];
    /* 1104 */

    CourseInitBinary();
};

class UnkStruct_027e09a0 : public AutoInstance<UnkStruct_027e09a0> {
public:
    /* 00 */ CourseListEntry **mpCourseTable; // elements from courselist.clb
    /* 04 */ UnkFileSystem5 *mpCourseFile;
    /* 08 */ unk8 mUnk_08[0x10];
    /* 18 */

    UnkStruct_027e09a0();
    ~UnkStruct_027e09a0();

    CourseListEntry *GetCourseEntry(u32 sceneIndex);
    UnkStruct_func_ov000_020702a8 *func_ov000_020702a8(unk32 param1);
    unk32 GetRoomEntryIndex();
    CourseListRoomEntry *GetRoomEntry(u32 sceneIndex, unk32 param2);
    u32 GetSceneIndexFromName(const char *sceneName);
    bool func_ov000_02070378(u32 param1);

    // overlay 1
    void InitCourseTable();

    static UnkStruct_027e09a0 *Create();
    static void Destroy();
};

extern UnkStruct_027e09a0 *data_027e09a0;
