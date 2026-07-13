#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e09a0.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"

#include <nitro/dc.h>
#include <nitro/mi.h>

extern "C" void *func_02001308(void *, size_t, u32);
extern "C" UnkStruct_027e0cec_18_04 *func_ov000_02054690(void *, unk32, unk32, unk32, unk32, unk32);
extern unk32 data_027e0154;

void *UnkStruct_027e0cec_18::func_ov001_020bf0a0(size_t length) {
    return func_02001308(data_0204999c.mUnk_00[HeapIndex_5], length, 4);
}

UnkStruct_027e0cec_18::UnkStruct_027e0cec_18(UnkFileSystem1 *param1, bool param2, unk32 param3) :
    mUnk_04(0),
    mUnk_08(0) {

    unk32 uVar5;
    unk32 uVar3;
    if (data_027e09a4 == NULL) {
        uVar5 = 0x32;
        uVar3 = 0x64;
    } else {
        SceneIndex sceneIndex = data_027e09a4->CurrentSceneIndex();

        if (param3 == 0) {
            uVar5 = data_027e09a0->func_ov000_020702a8(sceneIndex)->mUnk_18;
            uVar3 = data_027e09a0->func_ov000_020702a8(sceneIndex)->mUnk_1A;
        } else {
            uVar5 = data_027e09a0->func_ov000_020702a8(sceneIndex)->mUnk_1C;
            uVar3 = data_027e09a0->func_ov000_020702a8(sceneIndex)->mUnk_1E;
        }
    }

    this->mUnk_04          = func_ov000_02054690(UnkStruct_027e0cec_18::func_ov001_020bf0a0, uVar5, uVar3, 0x00, 0x24, 0x3F);
    this->mUnk_04->mUnk_44 = &data_027e0154;
    this->mUnk_04->mUnk_3C = 0x8000;

    param1->vfunc_08(0x10);
    size_t size = param1->mFileSize;
    DC_FlushAll();

    this->mUnk_04->func_ov000_0205498c(param1->mpFile);
    this->mUnk_08 = ((SPAHeader *) param1->mpFile)->mUnk_08;
    this->mUnk_04->func_ov000_02054a78();
    this->mUnk_04->func_ov000_02054a88();

    if (((SPAHeader *) param1->mpFile)->mUnk_18 < size) {
        param1->vfunc_10(((SPAHeader *) param1->mpFile)->mUnk_18);
        size = param1->mFileSize;
    }

    if (param2) {
        void *ptr = ::operator new(size, HeapIndex_5);
        MI_CpuCopy32(param1->mpFile, ptr, size);
        this->mUnk_04->func_ov000_02054998(ptr);
    }
}

UnkStruct_027e0cec_18::~UnkStruct_027e0cec_18() {}
