#include "Actor/ActorUnkEFIK.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_0204a110.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "Unknown/UnkStruct_ov000_020aed1c.hpp"

extern "C" void Unknown_func_ov000_0207fd7c(void *, void *, unk32);

ARM DECL_PROFILE(ActorProfileUnkEFIK);

ARM Actor *ActorProfileUnkEFIK::Create() {
    return new(HeapIndex_2) ActorUnkEFIK();
}

ARM ActorProfileUnkEFIK::ActorProfileUnkEFIK() :
    ActorProfile(ActorId_EFIK) {}

ARM ActorUnkEFIK::ActorUnkEFIK() {
    this->mUnk_9C = -1;
    this->mUnk_A0 = 0;
}

ARM bool ActorUnkEFIK::vfunc_18(unk32 param1) {
    this->mUnk_9C = 0x86F;
    this->mUnk_A0 = 4;
    this->mUnk_98.func_ov000_020a0334();
    this->vfunc_54(0);
    return true;
}

ARM void ActorUnkEFIK::vfunc_20() {
    if (this->mUnk_94 != 0) {
        return;
    }

    unk32 auStack_38[2];
    auStack_38[0] = data_ov000_020aed1c.mUnk_00;
    auStack_38[1] = data_ov000_020aed1c.mUnk_04;

    int length = 1;
    if (data_0204a110.mUnk_008 == 1) {
        length = 2;
    }

    for (int i = 0; i < length; i++) {
        u8 j;
        u8 k;
        UnkStruct_027e0cd8_0c *pUVar5 = data_027e0cd8->mUnk_0c;

        u8 bStack_3c[2];
        bStack_3c[0] = 0;
        bStack_3c[1] = 0;

        u8 bStack_3e[2];
        bStack_3e[0] = 0;
        bStack_3e[1] = 0;

        Unknown_func_ov000_0207fd7c(bStack_3c, bStack_3e, auStack_38[i]);

        for (j = bStack_3c[0]; j < bStack_3e[0]; j++) {
            for (k = bStack_3c[1]; k < bStack_3e[1]; k++) {
                u8 bStack_40[2];
                bStack_40[0] = j;
                bStack_40[1] = k;

                if (pUVar5->func_ov000_02080180(bStack_40) == 0x38) {
                    u16 random = gRandom.Next32(0, 6);

                    if (random == 0) {
                        Vec3p vec;
                        pUVar5->func_ov000_020808f4(&vec, bStack_40, 0);
                        data_027e0cec->func_ov000_020a0220(&this->mUnk_98, &vec);
                    }
                }
            }
        }
    }
}

ARM void ActorUnkEFIK::vfunc_24() {
    this->vfunc_20();
}

ARM void ActorUnkEFIK::vfunc_54(unk32 param1) {
    this->mUnk_94 = param1;
}

ARM ActorUnkEFIK::~ActorUnkEFIK() {}

ARM ActorProfileUnkEFIK::~ActorProfileUnkEFIK() {}
