#include "System/SysNew.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"

#include <nitro/mi.h>

DECL_STATIC_INSTANCE(CourseInitBinary);

CourseInitBinary::CourseInitBinary() {
    UnkFileSystem2 auStack_30("Course/courseinit.cib", 0);
    auStack_30.vfunc_08(-0x20);

    CourseInitHeader *pHeader = (CourseInitHeader *) auStack_30.mpFile;
    u32 *pEntryStart          = (u32 *) ((u8 *) auStack_30.mpFile + sizeof(CourseInitHeader));

    // note: each entry starts with its size followed by the actual data
    for (int i = 0; i < pHeader->nEntries; i++) {
        CourseInitEntry *pEntry = (CourseInitEntry *) ((u8 *) pEntryStart + sizeof(u32));

        MI_CpuCopyFast(pEntry, &this->mEntries[i], sizeof(CourseInitEntry));

        pEntryStart = (u32 *) ((u8 *) pEntryStart + *pEntryStart);
    }
}

UnkStruct_027e09a0::UnkStruct_027e09a0() {
    this->mpCourseTable = (CourseListEntry **) ::operator new(SceneIndex_Max * 4, HeapIndex_1, 4);
    this->mpCourseFile  = new(HeapIndex_1) UnkFileSystem5("Course/courselist.clb", 0x82, 0x01, 0x00);
    MI_CpuFill32(0, this->mUnk_08, sizeof(this->mUnk_08));
    this->InitCourseTable();
}

UnkStruct_027e09a0::~UnkStruct_027e09a0() {
    delete this->mpCourseFile;

    if (this->mpCourseTable != 0) {
        delete[] this->mpCourseTable;
    }
}

UnkStruct_027e09a0 *UnkStruct_027e09a0::Create() {
    return new(HeapIndex_1) UnkStruct_027e09a0();
}

void UnkStruct_027e09a0::InitCourseTable() {
    CourseListHeader *pHeader = (CourseListHeader *) this->mpCourseFile->vfunc_08(sizeof(CourseListHeader));
    u32 *pEntryStart          = (u32 *) ((u8 *) this->mpCourseFile->mpFile + sizeof(CourseListHeader));

    // note: each entry starts with its size followed by the actual data
    for (int i = 0; i < pHeader->nEntries; i++) {
        CourseListEntry *pEntry = (CourseListEntry *) ((u8 *) pEntryStart + sizeof(u32));

        this->mpCourseTable[i] = pEntry;

        pEntryStart = (u32 *) ((u8 *) pEntryStart + *pEntryStart);
    }
}

DECL_INSTANCE(UnkStruct_027e09a0, data_027e09a0);
