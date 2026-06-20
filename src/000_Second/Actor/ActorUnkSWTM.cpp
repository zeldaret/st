#include "Actor/ActorUnkSWTM.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

DECL_PROFILE(ActorProfileUnkSWTM);

Actor *ActorProfileUnkSWTM::Create() {
    return new(HeapIndex_2) ActorUnkSWTM();
}

ActorProfileUnkSWTM::ActorProfileUnkSWTM() :
    ActorProfile(ActorId_SWTM) {}

ActorUnkSWTM::ActorUnkSWTM() :
    mUnk_94(0),
    mUnk_98(0),
    mUnk_9C(0),
    mUnk_9E(0),
    mUnk_A0(0),
    mUnk_A2(0),
    mUnk_A4(0),
    mUnk_A8(0) {}

ActorUnkSWTM::~ActorUnkSWTM() {
    if (this->mState != ActorUnkSWTMState_2 && this->func_ov000_02098a60(0) == 0) {
        this->func_ov000_0209b184();
    }
}

// https://decomp.me/scratch/qkP8m
bool ActorUnkSWTM::vfunc_18(unk32 param1) {
    this->mUnk_9E = this->mUnk_5C.mUnk_1C_0;
    this->mUnk_98 = this->mUnk_5C.mParams[2];
    this->mUnk_A4 = this->mUnk_5C.mParams[1] * 30;
    this->mUnk_A0 = this->mUnk_9E + this->mUnk_5C.mParams[0];
    this->mUnk_A2 = this->mUnk_5C.mUnk_18.y;
    this->mUnk_9C = this->mUnk_9E;

    if (this->func_ov000_02098a60(0)) {
        this->SetState(ActorUnkSWTMState_2);
    } else {
        this->SetState(ActorUnkSWTMState_0);
    }

    return true;
}

void ActorUnkSWTM::vfunc_20(void) {
    switch (this->mState) {
        case ActorUnkSWTMState_0:
            if (!this->func_ov000_0209afe4()) {
                return;
            }

            this->SetState(ActorUnkSWTMState_1);
            break;
        case ActorUnkSWTMState_1:
            this->mUnk_A8++;
            this->func_ov000_0209b1d0();

            if (this->mUnk_A8 >= this->mUnk_A4) {
                this->SetState(ActorUnkSWTMState_3);
            } else {
                switch (this->func_ov000_0209b038()) {
                    case 1:
                        this->SetState(ActorUnkSWTMState_2);
                        break;
                    case 2:
                        this->SetState(ActorUnkSWTMState_3);
                        break;
                    default:
                        break;
                }
            }
            break;
        case ActorUnkSWTMState_2:
            break;
        case ActorUnkSWTMState_3:
            if (this->mUnk_50 < this->mUnk_52) {
                this->mUnk_50++;
            }

            if ((s32) this->mUnk_50 >= 15) {
                this->func_ov000_0209b184();
                this->SetState(ActorUnkSWTMState_0);
            }
            break;
        default:
            break;
    }
}

void ActorUnkSWTM::vfunc_24(void) {}

void ActorUnkSWTM::SetState(ActorState state) {
    this->mState  = state;
    this->mUnk_A8 = 0;

    switch (this->mState) {
        case ActorUnkSWTMState_0:
            this->func_ov000_02098a88(0, 0);
            break;
        case ActorUnkSWTMState_1:
            this->mUnk_AC = false;
            this->mUnk_9C = this->mUnk_9E;
            break;
        case ActorUnkSWTMState_2:
            this->func_ov000_02098a88(0, 1);

            if (this->mUnk_94 == 0) {
                UNSET_FLAG(this->mFlags, ActorFlag_Alive);
            }
            break;
        case ActorUnkSWTMState_3:
            this->func_ov000_0209b160();
            this->mUnk_50 = 0;
            this->mUnk_52 = -1;
            break;
        default:
            break;
    }
}

bool ActorUnkSWTM::func_ov000_0209afe4(void) {
    for (int i = this->mUnk_9E; i < this->mUnk_A0; i++) {
        if (data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2)) {
            return true;
        }
    }

    return false;
}

unk32 ActorUnkSWTM::func_ov000_0209b038(void) {
    switch (this->mUnk_98) {
        case 1:
        case 2: {
            int i;
            bool bVar1 = true;

            for (i = this->mUnk_9E; i < this->mUnk_A0; i++) {
                if (i > this->mUnk_9C && data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2)) {
                    this->mUnk_AC = true;
                }

                if (i == this->mUnk_9C && data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2)) {
                    this->mUnk_9C++;
                }

                if (!data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2)) {
                    bVar1 = false;
                }
            }

            if (bVar1) {
                if (!this->mUnk_AC) {
                    return 1;
                }

                return 2;
            }

            return 0;
        }
        default:
            break;
    }

    for (int i = 0; i < this->mUnk_5C.mParams[0]; i++) {
        if (!data_027e0cd8->func_ov000_02081e30(this->mUnk_9E + i, this->mUnk_A2)) {
            return 0;
        }
    }

    return 1;
}

void ActorUnkSWTM::func_ov000_0209b160(void) {
    if (this->mState != ActorUnkSWTMState_2) {
        data_ov000_020b5214.func_ov000_0206db44(0xA3);
    }
}

void ActorUnkSWTM::func_ov000_0209b184(void) {
    for (int i = this->mUnk_9E; i < this->mUnk_A0; i++) {
        data_027e0cd8->func_ov000_02081d7c(i, this->mUnk_A2, false);
    }
}

void ActorUnkSWTM::func_ov000_0209b1d0(void) {
    if (this->mUnk_98 == 2) {
        return;
    }

    if (this->mUnk_A4 - this->mUnk_A8 < 0x3C) {
        data_ov000_020b5214.func_ov000_0206e7e8(0x92);
    } else {
        data_ov000_020b5214.func_ov000_0206e7e8(0x91);
    }
}
