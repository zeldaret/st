#include "Actor/ActorUnkTLKT.hpp"

#include "Actor/Actor_Derived1.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0ce0.hpp"
#include "Unknown/UnkStruct_027e0d34.hpp"

extern "C" void func_ov000_02072fd0(UnkStackStruct1 *param0);
extern "C" unk16 func_ov031_020e3dd0(Actor *param0);

DECL_PROFILE(ActorProfileUnkTLKT);

Actor *ActorProfileUnkTLKT::Create() {
    return new(HeapIndex_2) ActorUnkTLKT();
}

ActorProfileUnkTLKT::ActorProfileUnkTLKT() :
    ActorProfile(ActorId_TLKT) {}

ActorUnkTLKT::ActorUnkTLKT() {
    this->mUnk_04 = 0xFFFFFFFF;
}

ActorUnkTLKT::~ActorUnkTLKT() {
    if (this->mState == ActorUnkTLKTState_2) {
        this->func_ov031_020e4514();
    }
}

void ActorUnkTLKT::vfunc_24() {
    switch (this->mState) {
        case ActorUnkTLKTState_0:
            this->vfunc_54();
            break;
        case ActorUnkTLKTState_1:
            this->vfunc_58();
            break;
        case ActorUnkTLKTState_4:
            this->func_ov031_020e4274();
            break;
        default:
            break;
    }
}

void ActorUnkTLKT::vfunc_58() {
    if (!data_027e09b8->func_ov000_020732ec(this->mUnk_04)) {
        return;
    }
    this->vfunc_60(ActorUnkTLKTState_2);
}

void ActorUnkTLKT::func_ov031_020e4274() {
    if (data_027e0d34->func_ov031_020d9758()) {
        return;
    }
    data_027e09b8->func_ov000_020732fc(this->mUnk_04);
}

void ActorUnkTLKT::vfunc_64() {
    switch (this->mState) {
        case ActorUnkTLKTState_1:
            this->vfunc_60(ActorUnkTLKTState_2);
            break;
        case ActorUnkTLKTState_3:
            this->vfunc_60(ActorUnkTLKTState_4);
            break;
        default:
            break;
    }
}

void ActorUnkTLKT::vfunc_68() {
    if (this->mState == ActorUnkTLKTState_2) {
        this->func_ov031_020e4514();
        if (this->mState == ActorUnkTLKTState_3) {
            return;
        }
    }
    this->func_ov031_020e3e6c();
}

void ActorUnkTLKT::vfunc_60(ActorState state) {
    switch (state) {
        case ActorUnkTLKTState_1:
            Actor *actor = this->func_ov031_020e3df8();
            if (this->mUnk_5C.mParams[0] == 0x0 && actor == NULL) {
                this->vfunc_60(ActorUnkTLKTState_5);
                return;
            }
            ActorUnk_vfunc_B0 actorUnkSp40 = ActorUnk_vfunc_B0();
            actorUnkSp40.mUnk_04           = this;
            actorUnkSp40.mUnk_0C           = this->mUnk_5C.mUnk_20;
            actorUnkSp40.mUnk_14           = 0x0;
            actorUnkSp40.mUnk_18           = -1;
            actorUnkSp40.mUnk_1C           = -1;
            actorUnkSp40.mUnk_20           = false;
            actorUnkSp40.mUnk_21           = false;

            switch (this->mUnk_5C.mParams[1]) {
                case 0x0: {
                    actorUnkSp40.mUnk_32 = 0x5;
                    VecFx32 *pos         = data_027e0ce0->func_01fff148(0x0);
                    VecFx32_Copy(pos, &actorUnkSp40.mUnk_34);
                    actorUnkSp40.mUnk_08 |= 0x1;
                    actorUnkSp40.mUnk_08 |= 0x1;
                    break;
                }
                case 0x1:
                    actorUnkSp40.mUnk_32 = 0x1;
                    break;
                case 0x2:
                    actorUnkSp40.mUnk_32 = 0x4;
                    VecFx32_Copy(&this->mPos, &actorUnkSp40.mUnk_34);
                    actorUnkSp40.mUnk_08 |= 0x1;
                    break;
                case 0x3:
                    actorUnkSp40.mUnk_08 |= 0x1;
                    break;
                case 0x4:
                    actorUnkSp40.mUnk_08 &= 0xFFFE;
                    break;
                case 0x5:
                    actorUnkSp40.mUnk_32 = 0x2;
                    break;
                default:
                    break;
            }

            actorUnkSp40.mpActor = actor;
            actorUnkSp40.mUnk_2C = this;
            actorUnkSp40.mUnk_30 = func_ov031_020e3dd0(this);
            this->mUnk_04        = data_027e09b8->func_ov000_02073470(&actorUnkSp40, 0x0);
            break;
        case ActorUnkTLKTState_3:
            UnkStackStruct1 unkSp00;
            func_ov000_02072fd0(&unkSp00);
            unkSp00.mUnk_04 = static_cast<MapObject_UnkStruct1 *>(static_cast<ActorUnkTLKT_9C *>(this));

            unkSp00.mUnk_3A = 0x0;
            unkSp00.mUnk_3B = 0x0;
            this->mUnk_04   = data_027e09b8->func_ov000_02073388(&unkSp00, 0x0);
            break;
        case ActorUnkTLKTState_4:
            data_027e0d34->func_ov031_020d9854(&this->mPos, FLOAT_TO_FX32(0.5f));
            break;
        default:
            break;
    }
    this->mState = state;
}

void ActorUnkTLKT::func_ov031_020e4514() {
    switch (this->mUnk_5C.mParams[2] % 10) {
        case 0:
            this->func_ov000_02098a88(0x1, 0x1);
            return;
        case 1:
            this->vfunc_60(ActorUnkTLKTState_3);
            break;
        default:
            break;
    }
}
