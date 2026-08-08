#include "Actor/ActorUnkSCCN.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_027e09c0.hpp"
#include "Unknown/UnkStruct_027e0cd8.hpp"

extern "C" void func_01ffd054(VecFx32 *, VecFx32 *);

DECL_PROFILE(ActorProfileUnkSCCN);

Actor *ActorProfileUnkSCCN::Create() {
    return new(HeapIndex_2) ActorUnkSCCN();
}

ActorProfileUnkSCCN::ActorProfileUnkSCCN() :
    ActorProfile(ActorId_SCCN) {}

ActorUnkSCCN::ActorUnkSCCN() {}

// non-matching
bool ActorUnkSCCN::vfunc_18(unk32 param1) {
    if (this->mUnk_5C.mParams[1] == 0x0) {
        return false;
    }
    UnkStruct_027e0cd8_0C_Base *data_0C = data_027e0cd8->mUnk_0C;
    UnkStruct_func_ov000_02080620 *unk  = data_027e0cd8->mUnk_0C->func_ov000_02080620();
    if (unk == NULL) {
        return false;
    }
    if (!unk->vfunc_04()) {
        VecFx32 vec1;
        VecFx32 vec2;
        vec2 = unk->mUnk_14;
        vec1 = unk->mUnk_20;
        func_01ffd054(&vec2, &this->mPos);
        this->mPos.y = data_0C->vfunc_28(&this->mPos, 0x1, 0x0);

        VecFx32 vec3;
        VecFx32_Init(FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), FLOAT_TO_FX32(0.0f), &vec3);
        vec3.x = -this->mPos.x;
        vec3.z = -this->mPos.z;

        VecFx32_Add(&vec2, &vec3, &vec2);
        VecFx32_Add(&vec1, &vec3, &vec1);

        this->mUnk_94.mUnk_0C = vec2;
        this->mUnk_94.mUnk_18 = vec1;
    }
    this->mUnk_94.mUnk_08 = (((0x04407007 | ((u8) this->mUnk_5C.mParams[0] << 0x10)) & ~0x7000) | 0x3000);
    this->mUnk_94.mUnk_04 |= 0x2;
    if (this->mUnk_5C.mParams[2] != 0) {
        this->mUnk_94.mUnk_07 = 0x13;
    } else {
        unk32 var;
        switch (((u32) (this->mAngle + DEG_TO_ANG(45)) << 0x10) >> 0x1E) {
            case 0:
                var = 9;
                break;
            case 2:
                var = 8;
                break;
            case 3:
                var = 0x22;
                break;
            case 1:
                var = 0x23;
                break;
            default:
                var = 7;
                break;
        }
        this->mUnk_94.mUnk_07 = var;
    }
    this->mUnk_B8.mUnk_04 = this->mRef;
    this->mUnk_B8.mUnk_08 = &this->mPos;
    this->mUnk_B8.mUnk_0C = &this->mUnk_94;

    data_027e09c0->func_ov000_0207e240(&this->mUnk_B8);
    return true;
}
