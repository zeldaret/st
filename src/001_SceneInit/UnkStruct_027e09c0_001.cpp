#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e09e8.hpp"
#include "Unknown/UnkStruct_027e0a48.hpp"
#include "Unknown/UnkStruct_027e0b48.hpp"

#include <nitro/mi.h>

UnkStruct_027e09c0 *UnkStruct_027e09c0::Create() {
    return new(HeapIndex_1) UnkStruct_027e09c0();
}

void UnkStruct_027e09c0::Destroy() {
    UnkStruct_027e09c0::DestroyImpl();
}

UnkStruct_027e09c0::UnkStruct_027e09c0() :
    mUnk_000(0),
    mUnk_044(this->mUnk_004),
    mUnk_048(NULL),
    mUnk_04C(NULL),
    mUnk_050(0),
    mUnk_054(NULL),
    mUnk_058(NULL),
    mUnk_05C(0),
    mUnk_760(NULL),
    mUnk_764(NULL),
    mUnk_768(0),
    mUnk_76C(NULL),
    mUnk_770(NULL),
    mUnk_774(0) {
    this->mUnk_048 = this->mUnk_060;
    this->mUnk_04C = this->mUnk_060;
    this->mUnk_050 = 0x20;

    this->mUnk_054 = &this->mUnk_060[32];
    this->mUnk_058 = &this->mUnk_060[32];
    this->mUnk_05C = 0x20;

    this->mUnk_760 = &this->mUnk_778;
    this->mUnk_764 = &this->mUnk_778;
    this->mUnk_768 = 0x20;

    this->mUnk_76C = &this->mUnk_878;
    this->mUnk_770 = &this->mUnk_878;
    this->mUnk_774 = 0x20;
}

void UnkStruct_027e09c0::func_ov001_020be394() {
    if (data_027e09a4->IsLand()) {
        data_027e0a48.func_ov000_0207ef30();
    } else {
        data_027e0a48.func_ov000_0207f048();
    }

    data_027e0b48.func_ov001_020be474();
}

void UnkStruct_027e09c0::func_ov001_020be3c4() {
    data_027e0b48.func_ov001_020be4e4();
    data_027e0a48.func_ov000_0207f1f0();
}

void UnkStruct_027e09c0::func_ov001_020be3dc(UnkFileSystem3 *param1, UnkStruct_027e0cd8_0C_Base *param2) {
    data_027e0a48.func_ov000_0207f280(param2);
    data_027e09e8.func_ov000_0207ba84(param1, param2);
}

void UnkStruct_027e09c0::func_ov001_020be400() {
    for (UnkStruct_027e09c0_04 **pIt = this->mUnk_004; pIt != this->mUnk_044; pIt++) {
        if (*pIt != NULL) {
            (*pIt)->func_ov000_0207f4d4();
        }
    }

    this->mUnk_044 = this->mUnk_004;
    this->mUnk_000 = 0;
    data_027e0a48.func_ov000_0207f2d8();
    data_027e09e8.func_ov000_0207baa0();
}

void UnkStruct_027e09c0::DestroyImpl() {
    if (data_027e09c0 != NULL) {
        delete data_027e09c0;
    }
}

DECL_INSTANCE(UnkStruct_027e09c0, data_027e09c0);

void UnkStruct_027e0b48::func_ov001_020be474() {
    bool isLand = data_027e09a4->IsLand();
    this->mUnk_000.Init(0x74 * (isLand ? 4 : 8), 1);
    MI_CpuClearFast(this->mUnk_008, sizeof(this->mUnk_008));
}

void UnkStruct_027e0b48::func_ov001_020be4e4() {
    this->mUnk_000.Reset();
}
