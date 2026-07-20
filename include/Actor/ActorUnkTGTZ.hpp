#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkNTTZ.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTGTZ_C4 : public Actor_C4 {
public:
    ActorUnkTGTZ_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTGTZ_ModelRender : public ModelRender_Derived1 {
public:
    ActorUnkTGTZ_ModelRender(G3d_Model *pModel, unk32 param2, void *param3) :
        ModelRender_Derived1(pModel, param2, param3) {}

    // data_ov031_021145dc
    /* 00 */ virtual ~ActorUnkTGTZ_ModelRender();
};

class ActorUnkTGTZ : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ActorUnkTGTZ_ModelRender mUnk_094;
    /* 100 */ STRUCT_PAD(0x100, 0x190);
    /* 190 */ Mat3p mUnk_190;
    /* 1B4 */ ActorUnkNTTZ *mUnk_1B4;
    /* 1B8 */ unk32 mUnk_1B8;
    /* 1BC */ unk32 mUnk_1BC;
    /* 1C0 */ unk16 mUnk_1C0;
    /* 1C2 */ unk16 mUnk_1C2;
    /* 1CC */ fx32 mUnk_1C4;
    /* 1C8 */ STRUCT_PAD(0x1C8, 0x1CC);
    /* 1CC */ unk32 mUnk_1CC;
    /* 1D0 */ unk16 mUnk_1D0;
    /* 1D2 */ unk16 mUnk_1D2;
    /* 1D4 */ unk16 mUnk_1D4;
    /* 1D6 */ unk16 mUnk_1D6;
    /* 1D8 */ bool mUnk_1D8;
    /* 1DC */ unk32 mUnk_1DC;
    /* 1E0 */

    ActorUnkTGTZ();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 30 */ virtual void vfunc_2C(unk32 param1) override;
    /* 34 */ virtual void vfunc_30() override;

    void func_ov031_020f6984();
    static void func_ov031_020f6e5c(ActorRef param1);
    static void func_ov031_020f6ea8(ActorRef *param0, u16 param1, const VecFx32 *param2, s16 param3, u16 param4);
    void func_ov031_020f6f20(unk32 param1);
    void func_ov031_020f7358();
    void func_ov031_020f73e4();
    void func_ov031_020f73f0();
};

class ActorProfileUnkTGTZ : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTGTZ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTGTZ *GetProfile();
};
