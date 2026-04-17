#include "Actor/ActorUnkSWOB.hpp"
#include "Actor/ActorManager.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern "C" void func_01ffedac(u16 *, Vec3p *);
extern "C" void func_01ffb9cc(void *, Vec3p *);

ARM DECL_PROFILE(ActorProfileUnkSWOB);

ARM Actor *ActorProfileUnkSWOB::Create() {
    return new(HeapIndex_2) ActorUnkSWOB();
}

ARM ActorProfileUnkSWOB::ActorProfileUnkSWOB() :
    ActorProfile(ActorId_SWOB) {}

ARM ActorUnkSWOB::ActorUnkSWOB() {}

ARM bool ActorUnkSWOB::vfunc_18(unk32 param1) {
    this->mUnk_9E = this->mUnk_78;
    this->mUnk_94 = this->mUnk_6E;
    this->mUnk_98 = this->mUnk_70;
    this->mUnk_A0 = this->mUnk_9E + this->mUnk_6C;
    this->mUnk_A2 = this->mUnk_75;
    this->mUnk_9C = this->mUnk_9E;

    if (this->func_ov000_02098a60(0)) {
        this->func_ov000_0209a9b4(1);
    } else {
        this->func_ov000_0209a9b4(0);
    }

    return true;
}

ARM void ActorUnkSWOB::func_ov000_0209a9b4(unk32 param1) {
    this->mUnk_4C = param1;

    switch (this->mUnk_4C) {
        case 0:
            this->func_ov000_02098a88(0, 0);
            break;
        case 1:
            this->func_ov000_02098a88(0, 1);

            if (this->mUnk_94 == 0) {
                UNSET_FLAG(this->mFlags, ActorFlag_Alive);
            }
            break;
        case 2:
            this->func_ov000_0209aa30();
            this->mUnk_52 = -1;
            this->mUnk_50 = 0;
            break;
        default:
            break;
    }
}

// https://decomp.me/scratch/cUf0c
ARM void ActorUnkSWOB::func_ov000_0209aa30(void) {
    if (this->mUnk_4C == 1) {
        return;
    }

    switch (this->mUnk_72) {
        case 1:
            data_ov000_020b5214.func_ov000_0206db44(0xA3);
            break;
        case 3:
            data_ov000_020b5214.func_ov000_0206db44(0xA3);

            s16 unk_78 = this->mUnk_78;
            if (unk_78 > 0) {
                data_027e0cd8->func_ov000_02081d7c((s16) (unk_78 - 1), this->mUnk_75, 1);
            }
            break;
        case 2: {
            Vec3p temp;
            Vec3p vec2;
            Vec3p vec;
            Actor_5c_temp AStack_7c;
            u16 auStack_80[4];
            int j;
            u32 i;

            data_ov000_020b5214.func_ov000_0206db44(0xA3);
            temp.coords = data_027e0ce0->func_01fff148(0)->coords;
            vec2.x      = temp.x;
            vec2.y      = temp.y + FLOAT_TO_Q20(3.0f);
            vec2.z      = temp.z;

            AStack_7c.mUnk_28 = 0;
            AStack_7c.func_ov000_020975f8();

            for (j = 0, i = 0; i < ARRAY_LEN(this->mUnk_A4); i++) {
                if (gpActorManager->func_01fff3b4(this->mUnk_A4[i].mUnk_00) == NULL) {
                    this->mUnk_A4[i].mUnk_00 = 0;

                    vec.x = INT_TO_Q20(gRandom.Next32(0, 11) - 5);
                    vec.y = 0;
                    vec.z = INT_TO_Q20(gRandom.Next32(0, 11) - 5);

                    Vec3p_Add(&vec, &vec2, &vec);

                    if (j < 10) {
                        func_01ffedac(auStack_80, &vec);
                        func_01ffb9cc(&vec2, &vec);
                        i--;
                        j++;
                    }
                }
            }
            break;
        }
        default:
            break;
    }
}

ARM ActorUnkSWOB::~ActorUnkSWOB() {}
ARM ActorProfileUnkSWOB::~ActorProfileUnkSWOB() {}
