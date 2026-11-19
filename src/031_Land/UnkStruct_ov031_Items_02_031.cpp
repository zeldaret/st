#include "Actor/ActorManager.hpp"
#include "RefStruct.hpp"
#include "System/Random.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"

bool UnkStruct_ov031_Items_02_38::vfunc_08(RefStruct ref) {
    if (ref.common.type != 0) {
        Actor *pActor = gpActorManager->func_01fff3b4(ref);

        if (pActor == NULL) {
            return false;
        }

        if (pActor->GetActorId() == ActorId_GHOS) {
            return true;
        }
    }

    return false;
}

UnkStruct_ov031_Items_02::UnkStruct_ov031_Items_02() :
    mUnk_00(0, 0, 0),
    mUnk_0C(0),
    mUnk_10(0),
    mUnk_14(1),
    mUnk_18(0) {
    this->mUnk_18.mUnk_18 = 0;
    this->func_ov031_020d8f24();
}

UnkStruct_ov031_Items_02::UnkStruct_ov031_Items_02(unk32 param1, bool param2) :
    mUnk_00(0, 0, 0),
    mUnk_0C(0),
    mUnk_10(2, 0),
    mUnk_14(param2),
    mUnk_18(0) {
    this->mUnk_18.mUnk_18 = param1;
    this->func_ov031_020d8f24();
}

UnkStruct_ov031_Items_02::~UnkStruct_ov031_Items_02() {
    this->func_ov031_020d8f98();
}

void UnkStruct_ov031_Items_02::func_ov031_020d8e88() {
    u32 value1    = gRandom.Next32(5);
    u32 value2    = gRandom.Next32(5);
    s32 value3    = gRandom.Next32(287) - 143;
    this->mUnk_0C = (value3 >> (value1 + value2)) + (this->mUnk_0C * 3) / 4;
}

void UnkStruct_ov031_Items_02::func_ov031_020d8f24() {
    this->mUnk_18.mUnk_0C.x = 0;
    this->mUnk_18.mUnk_0C.y = 0;
    this->mUnk_18.mUnk_0C.z = 0;
    this->mUnk_18.mUnk_1C   = 0x3000;
    this->mUnk_18.mUnk_08   = 0x6BC04A00;
    this->mUnk_38.mUnk_08   = &this->mUnk_00.vec;
    this->mUnk_38.mUnk_0C   = &this->mUnk_18;
}

void UnkStruct_ov031_Items_02::func_ov031_020d8f58(unk16 param1) {
    if (this->mUnk_14) {
        this->mUnk_10.common.unk_02 = param1;
        this->mUnk_10.common.unk_00 = 2;
        this->mUnk_38.mUnk_04       = this->mUnk_10;
        data_027e09c0->func_ov000_0207e240(&this->mUnk_38);
    }
}

void UnkStruct_ov031_Items_02::func_ov031_020d8f98() {
    data_027e09c0->func_ov000_0207e254(&this->mUnk_38);
}
