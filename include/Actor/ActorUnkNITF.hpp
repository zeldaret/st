#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorPot.hpp"
#include "global.h"
#include "types.h"

class ModelRender_ov031_0211578c : public ModelRender {
public:
    /* 00 (base) */

    ModelRender_ov031_0211578c(const G3d_Model *model, unk32 param1, unk32 param2); // func_ov031_02102bc0

    // data_ov031_0211578c
    /* 00 */ // destructor @ func_ov031_020f10c0 & func_ov031_02102e54
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override; // func_ov031_02102c30
};

enum ActorUnkNITFState_ {
    ActorUnkNITFState_0 = 0,
    ActorUnkNITFState_1 = 1,
    ActorUnkNITFState_2 = 2,
    ActorUnkNITFState_3 = 3,
    ActorUnkNITFState_4 = 4,
    ActorUnkNITFState_5 = 5,
    ActorUnkNITFState_6 = 6,
    ActorUnkNITFState_7 = 7,
    ActorUnkNITFState_Max,
};

class ActorUnkNITF : public Actor_ov031_02113fd4 {
public:
    /* 000 (base) */
    /* 110 */ ModelRender_ov031_0211578c mUnk_110;
    /* 170 */ STRUCT_PAD(0x170, 0x17C);
    /* 17C */

    ActorUnkNITF();

    /* 18 */ bool vfunc_18(unk32 param1);
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 5C */ virtual void vfunc_5C(ActorState param1) override;

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

class ActorProfileUnkNITF : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNITF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNITF *GetProfile();
};
