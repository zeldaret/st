#include "Actor/ActorUnkSWTM.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

ARM DECL_PROFILE(ActorProfileUnkSWTM);

ARM Actor *ActorProfileUnkSWTM::Create() {
    return new(HeapIndex_2) ActorUnkSWTM();
}

ARM ActorProfileUnkSWTM::ActorProfileUnkSWTM() :
    ActorProfile(ActorId_SWTM) {}

ARM ActorUnkSWTM::ActorUnkSWTM() :
    mUnk_94(0),
    mUnk_98(0),
    mUnk_9C(0),
    mUnk_9E(0),
    mUnk_A0(0),
    mUnk_A2(0),
    mUnk_A4(0),
    mUnk_A8(0) {}

ARM ActorUnkSWTM::~ActorUnkSWTM() {
    if (this->mUnk_4C != 2 && this->func_ov000_02098a60(0) == 0) {
        this->func_ov000_0209b184();
    }
}

// https://decomp.me/scratch/qkP8m
ARM bool ActorUnkSWTM::vfunc_18(unk32 param1) {
    this->mUnk_9E = this->mUnk_78;
    this->mUnk_98 = this->mUnk_70;
    this->mUnk_A4 = this->mUnk_6E * 30;
    this->mUnk_A0 = this->mUnk_9E + this->mUnk_6C;
    this->mUnk_A2 = this->mUnk_75;
    this->mUnk_9C = this->mUnk_9E;

    if (this->func_ov000_02098a60(0)) {
        this->func_ov000_0209af54(2);
    } else {
        this->func_ov000_0209af54(0);
    }

    return true;
}

ARM void ActorUnkSWTM::vfunc_20(void) {
    switch (this->mUnk_4C) {
        case 0:
            if (!this->func_ov000_0209afe4()) {
                return;
            }

            this->func_ov000_0209af54(1);
            break;
        case 1:
            this->mUnk_A8++;
            this->func_ov000_0209b1d0();

            if (this->mUnk_A8 >= this->mUnk_A4) {
                this->func_ov000_0209af54(3);
            } else {
                switch (this->func_ov000_0209b038()) {
                    case 1:
                        this->func_ov000_0209af54(2);
                        break;
                    case 2:
                        this->func_ov000_0209af54(3);
                        break;
                    default:
                        break;
                }
            }
            break;
        case 2:
            break;
        case 3:
            if (this->mUnk_50 < this->mUnk_52) {
                this->mUnk_50++;
            }

            if ((s32) this->mUnk_50 >= 15) {
                this->func_ov000_0209b184();
                this->func_ov000_0209af54(0);
            }
            break;
        default:
            break;
    }
}

ARM void ActorUnkSWTM::vfunc_24(void) {}

ARM void ActorUnkSWTM::func_ov000_0209af54(unk32 param1) {
    this->mUnk_4C = param1;
    this->mUnk_A8 = 0;

    switch (this->mUnk_4C) {
        case 0:
            this->func_ov000_02098a88(0, 0);
            break;
        case 1:
            this->mUnk_AC = false;
            this->mUnk_9C = this->mUnk_9E;
            break;
        case 2:
            this->func_ov000_02098a88(0, 1);

            if (this->mUnk_94 == 0) {
                UNSET_FLAG(this->mFlags, ActorFlag_Alive);
            }
            break;
        case 3:
            this->func_ov000_0209b160();
            this->mUnk_50 = 0;
            this->mUnk_52 = -1;
            break;
        default:
            break;
    }
}

ARM bool ActorUnkSWTM::func_ov000_0209afe4(void) {
    for (int i = this->mUnk_9E; i < this->mUnk_A0; i++) {
        if (data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2)) {
            return true;
        }
    }

    return false;
}

ARM unk32 ActorUnkSWTM::func_ov000_0209b038(void) {
    switch (this->mUnk_98) {
        case 1:
        case 2: {
            int i;
            bool bVar1 = true;

            for (i = this->mUnk_9E; i < this->mUnk_A0; i++) {
                if (i > this->mUnk_9C && data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2) != 0) {
                    this->mUnk_AC = true;
                }

                if (i == this->mUnk_9C && data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2) != 0) {
                    this->mUnk_9C++;
                }

                if (data_027e0cd8->func_ov000_02081e30(i, this->mUnk_A2) == 0) {
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

    for (int i = 0; i < this->mUnk_6C; i++) {
        if (data_027e0cd8->func_ov000_02081e30(this->mUnk_9E + i, this->mUnk_A2) == 0) {
            return 0;
        }
    }

    return 1;
}

ARM void ActorUnkSWTM::func_ov000_0209b160(void) {
    if (this->mUnk_4C != 2) {
        data_ov000_020b5214.func_ov000_0206db44(0xA3);
    }
}

ARM void ActorUnkSWTM::func_ov000_0209b184(void) {
    for (int i = this->mUnk_9E; i < this->mUnk_A0; i++) {
        data_027e0cd8->func_ov000_02081d7c(i, this->mUnk_A2, 0);
    }
}

ARM void ActorUnkSWTM::func_ov000_0209b1d0(void) {
    if (this->mUnk_98 == 2) {
        return;
    }

    if (this->mUnk_A4 - this->mUnk_A8 < 0x3C) {
        data_ov000_020b5214.func_ov000_0206e7e8(0x92);
    } else {
        data_ov000_020b5214.func_ov000_0206e7e8(0x91);
    }
}

ARM ActorProfileUnkSWTM::~ActorProfileUnkSWTM() {}
