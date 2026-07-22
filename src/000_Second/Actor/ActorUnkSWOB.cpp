#include "Actor/ActorUnkSWOB.hpp"
#include "Actor/ActorManager.hpp"
#include "System/Random.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

extern "C" void func_01ffedac(u16 *, VecFx32 *);
extern "C" void func_01ffb9cc(void *, VecFx32 *);

DECL_PROFILE(ActorProfileUnkSWOB);

Actor *ActorProfileUnkSWOB::Create() {
    return new(HeapIndex_2) ActorUnkSWOB();
}

ActorProfileUnkSWOB::ActorProfileUnkSWOB() :
    ActorProfile(ActorId_SWOB) {}

ActorUnkSWOB::ActorUnkSWOB() {}

bool ActorUnkSWOB::vfunc_18(unk32 param1) {
    this->mUnk_9E = this->mUnk_5C.mUnk_1A[1];
    this->mUnk_94 = this->mUnk_5C.mParams[1];
    this->mUnk_98 = this->mUnk_5C.mParams[2];
    this->mUnk_A0 = this->mUnk_9E + this->mUnk_5C.mParams[0];
    this->mUnk_A2 = this->mUnk_5C.mUnk_18[1];
    this->mUnk_9C = this->mUnk_9E;

    if (this->func_ov000_02098a60(0)) {
        this->SetState(ActorUnkSWOBState_1);
    } else {
        this->SetState(ActorUnkSWOBState_0);
    }

#pragma unused(param1)
    return true;
}

void ActorUnkSWOB::SetState(ActorState state) {
    this->mState = state;

    switch (this->mState) {
        case ActorUnkSWOBState_0:
            this->func_ov000_02098a88(0, 0);
            break;
        case ActorUnkSWOBState_1:
            this->func_ov000_02098a88(0, 1);

            if (this->mUnk_94 == 0) {
                UNSET_FLAG(this->mFlags, ActorFlag_Alive);
            }
            break;
        case ActorUnkSWOBState_2:
            this->func_ov000_0209aa30();
            this->mUnk_52 = -1;
            this->mUnk_50 = 0;
            break;
        default:
            break;
    }
}

void ActorUnkSWOB::func_ov000_0209aa30(void) {
    if (this->mState == ActorUnkSWOBState_1) {
        return;
    }

    switch (this->mUnk_5C.mParams[3]) {
        case 1:
            data_ov000_020b5214.func_ov000_0206db44(0xA3);
            break;
        case 3: {
            data_ov000_020b5214.func_ov000_0206db44(0xA3);

            s16 unk_78 = this->mUnk_5C.mUnk_1A[1];
            if (unk_78 > 0) {
                data_027e0cd8->func_ov000_02081d7c((s16) (unk_78 - 1), this->mUnk_5C.mUnk_18[1], true);
            }
            break;
        }
        case 2: {
            VecFx32 temp;
            VecFx32 vec2;
            VecFx32 vec;
            ActorParams AStack_7c;
            u16 auStack_80[2];
            int j;
            u32 i;

            data_ov000_020b5214.func_ov000_0206db44(0xA3);
            temp   = *data_027e0ce0->func_01fff148(0);
            vec2.x = temp.x;
            vec2.y = temp.y + FLOAT_TO_FX32(3.0f);
            vec2.z = temp.z;

            AStack_7c.mUnk_28 = 0;
            AStack_7c.func_ov000_020975f8();

            for (j = 0, i = 0; i < ARRAY_LEN(this->mUnk_A4); i++) {
                if (gpActorManager->func_01fff3b4(this->mUnk_A4[i].ref) == NULL) {
                    this->mUnk_A4[i].ref.Reset();

                    vec.x = INT_TO_FX32(gRandom.Next32(11) - 5);
                    vec.y = 0;
                    vec.z = INT_TO_FX32(gRandom.Next32(11) - 5);

                    VecFx32_Add(&vec, &vec2, &vec);

                    if (j < 10) {
                        func_01ffedac(auStack_80, &vec);
                        func_01ffb9cc(&temp, &vec);
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
