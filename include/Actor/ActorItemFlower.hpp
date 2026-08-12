#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorPot.hpp"
#include "global.h"
#include "types.h"

class ModelRender_ov031_0211578c : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */

    ModelRender_ov031_0211578c(const G3d_Model *model, unk32 param1, unk32 param2);

    // data_ov031_0211578c
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override;
};

enum ActorItemFlowerState_ {
    ActorItemFlowerState_0 = 0,
    ActorItemFlowerState_1 = 1,
    ActorItemFlowerState_2 = 2,
    ActorItemFlowerState_3 = 3,
    ActorItemFlowerState_4 = 4,
    ActorItemFlowerState_5 = 5,
    ActorItemFlowerState_6 = 6,
    ActorItemFlowerState_7 = 7,
    ActorItemFlowerState_Max,
};

class ActorItemFlower : public Actor_ov031_02113fd4 {
public:
    /* 000 (base) */
    /* 110 */ ModelRender_ov031_0211578c mUnk_110;
    /* 170 */ STRUCT_PAD(0x170, 0x17C);
    /* 17C */

    ActorItemFlower();

    /* 18 */ bool vfunc_18(unk32 param1);
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 5C */ virtual void vfunc_5C(ActorState state) override;

    void func_ov031_020f11a8();
    void func_ov031_020f11b4();
    void func_ov031_020f11c0();
    void func_ov031_020f11cc();
    void func_ov031_020f11d8();
    void func_ov031_020f11e4();
    void func_ov031_020f11f0();
    void func_ov031_020f11fc();
    void func_ov031_020f1208();
    void func_ov031_020f121c();
    void func_ov031_020f1230();
    void func_ov031_020f1308();
};

class ActorProfileItemFlower : public ActorProfile {
public:
    /* 00 (base) */
    /* 3A */

    ActorProfileItemFlower();

    /* 0C */ virtual Actor *Create();

    static ActorProfileItemFlower *GetProfile();
};
