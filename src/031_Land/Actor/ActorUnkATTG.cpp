#include "Actor/ActorUnkATTG.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09b8.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"
#include "Unknown/UnkStruct_ov000_020b5214.hpp"

struct UnkStackStruct {
    s16 mUnk_00;
    s16 mUnk_02;
    s16 mUnk_04;
    s16 mUnk_06;
    unk32 mUnk_08;
    VecFx32 mUnk_0C;
    u16 mUnk_18;
    u16 mUnk_1A;
    u16 mUnk_1C;
    u16 mUnk_1E;
};

extern "C" void func_ov000_02072fd0(UnkStackStruct1 *);
extern "C" UnkStackStruct *func_ov000_02077590(unk32);

DECL_PROFILE(ActorProfileUnkATTG);

Actor *ActorProfileUnkATTG::Create() {
    return new(HeapIndex_2) ActorUnkATTG();
}

ActorProfileUnkATTG::ActorProfileUnkATTG() :
    ActorProfile(ActorId_ATTG) {}

ActorUnkATTG::ActorUnkATTG() :
    mUnk_94(-0x1) {}

bool ActorUnkATTG::vfunc_18(unk32 param1) {
    if (this->mUnk_5C.mUnk_1A[0] == 0x0 || !this->func_ov000_02098a60(0x0) || this->mUnk_5C.mParams[1] != 0x0) {
        this->func_ov031_020f3eec(0x0, 0x1);
    } else {
        this->func_ov031_020f3eec(0x2, 0x1);
    }
    return true;
}

void ActorUnkATTG::vfunc_20() {
    switch (this->mState) {
        case ActorUnkATTGState_0:
            if (!this->func_ov031_020f4014()) {
                return;
            }
            if (this->mUnk_5C.mParams[1] != 0x0) {
                return;
            }
            this->func_ov031_020f3eec(0x1, 0x0);
            break;
        case ActorUnkATTGState_1:
            this->func_ov031_020f3eec(0x2, 0x0);
            break;
        default:
            break;
    }
}

void ActorUnkATTG::vfunc_24() {
    if (this->mUnk_94 < 0x0) {
        return;
    }
    if (!data_027e09b8->func_ov000_020732ec(this->mUnk_94)) {
        return;
    }
    this->vfunc_20();
}

void ActorUnkATTG::func_ov031_020f3eec(ActorState state, unk32 param2) {
    this->mState = state;
    switch (this->mState) {
        case ActorUnkATTGState_1:
            UnkStackStruct1 stack;

            func_ov000_02072fd0(&stack);
            stack.mUnk_08 = 0x3C;
            stack.mUnk_00 = 0x6C;
            stack.mUnk_3A = 0x7;

            VecFx32_Copy(&this->mPos, &stack.mUnk_0C);
            UnkStackStruct *r3 = func_ov000_02077590(0x1);
            stack.mUnk_18      = r3->mUnk_00;
            stack.mUnk_1A      = r3->mUnk_02;
            stack.mUnk_1C      = r3->mUnk_04;
            stack.mUnk_1E      = r3->mUnk_06;
            stack.mUnk_20      = r3->mUnk_08;
            stack.mUnk_24      = r3->mUnk_0C;

            u16 unk_18    = r3->mUnk_18;
            u16 unk_1A    = r3->mUnk_1A;
            stack.mUnk_30 = unk_18;
            stack.mUnk_32 = unk_1A;

            u16 unk_1C    = r3->mUnk_1C;
            u16 unk_1E    = r3->mUnk_1E;
            stack.mUnk_34 = unk_1C;
            stack.mUnk_36 = unk_1E;

            this->mUnk_94 = data_027e09b8->func_ov000_02073388(&stack, 0x0);
            break;
        case ActorUnkATTGState_2:
            if (param2 == 0x0) {
                data_ov000_020b5214.func_ov000_0206db44(0x2);
            }
            this->func_ov000_02098a88(0x0, 0x1);
            this->func_ov000_020984d0();
            break;
        default:
            break;
    }
}

bool ActorUnkATTG::func_ov031_020f4014() {
    unk32 param1                    = this->mUnk_5C.mParams[0] & 0xFF;
    UnkStruct_027e0cd8_0C_Base *ptr = data_027e0cd8->mUnk_0C;
    VecFx32 *param2                 = data_027e0ce0->func_01fff148(0x0);

    return ptr->func_ov000_020802ec(param1, param2);
}
