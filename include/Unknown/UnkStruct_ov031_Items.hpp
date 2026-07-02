#pragma once
#include "UnkStruct_027e0ce0.hpp"

class UnkStruct_ov031_Items_00 : public UnkStruct_027e0ce0_38_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    UnkStruct_ov031_Items_00();

    // data_ov000_020b30d0
    /* 00 */ virtual ~UnkStruct_ov031_Items_00();
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
};

class UnkStruct_ov031_Items_01 {
public:
    /* 00 (vtable) */
    /* 04 */ ActorRef mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 08 */ unk16 mUnk_0A;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */ fx32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */

    UnkStruct_ov031_Items_01() {
        this->mUnk_04 = 0;
        this->mUnk_08 = 0;
        VecFx32_Init(0, 0, 0, &this->mUnk_0C);
        this->mUnk_18 = 0;
        this->mUnk_1C = 0;
        this->mUnk_20 = 0;
        this->mUnk_24 = 0;
        this->mUnk_28 = 0;
    }

    // data_ov000_020b27c8
    /* 00 */ virtual ~UnkStruct_ov031_Items_01();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual bool vfunc_0C(Actor *param1, VecFx32 *vector);
    /* 10 */ virtual void vfunc_10(Actor *actor);
};

class UnkStruct_ov031_Items_02 {
public:
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */

    UnkStruct_ov031_Items_02(unk32 param1, unk32 param2);
    ~UnkStruct_ov031_Items_02();
};
