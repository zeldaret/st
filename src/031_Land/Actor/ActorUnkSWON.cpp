#include "Actor/ActorUnkSWON.hpp"
#include "System/SysNew.hpp"

ARM DECL_PROFILE(ActorProfileUnkSWON);

ARM Actor *ActorProfileUnkSWON::Create() {
    return new(HeapIndex_2) ActorUnkSWON();
}

ARM ActorProfileUnkSWON::ActorProfileUnkSWON() :
    ActorProfile(ActorId_SWON) {}

ARM ActorUnkSWON::ActorUnkSWON() {}

ARM bool ActorUnkSWON::vfunc_18(unk32 param_1) {
    switch (this->mUnk_5C.mParams[0]) {
        case 0x0:
            if (!this->func_ov000_02098a60(0x1)) {
                this->func_ov000_02098a88(0x0, 0x1);
            }
            this->func_ov000_020984d0();
            this->func_ov000_020984f0();
            if (this->mUnk_5C.mUnk_1C_0) {
                this->func_ov000_02098a88(0x1, 0x1);
            }
            break;
        case 0x1:
            if (!this->func_ov000_02098a60(0x1)) {
                this->func_ov000_02098a88(0x0, 0x1);
            }
            break;
        default:
            break;
    }
    return true;
}

ARM ActorUnkSWON::~ActorUnkSWON() {}
ARM ActorProfileUnkSWON::~ActorProfileUnkSWON() {}
