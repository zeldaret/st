//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorUnkZLSL_ZSRS.hpp"
#include "Item/Item.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "types.h"

class ActorTearLight;
class ActorProfileTearLight;

struct ActorTearLight_UnkStruct {
    /* 00 */ void (ActorTearLight::*fct)();
    /* 08 */
};

class ActorTearLight_204 : public UnkStruct_PlayerGet_ec {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    ActorTearLight_204();
    ~ActorTearLight_204(); // func_ov071_02151d24
};

class ActorTearLight_194 : public Actor_C4 {
public:
    /* 00 (base) */
    /* 24 */

    ActorTearLight_194(ActorTearLight *param1);

    // data_ov071_02164c00
    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(VecFx32 *param1) override;
};

class ActorTearLight_104_Base : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 1C */

    ActorTearLight_104_Base(UnkSystem5 *param1, ModelRender *param2, unk32 param3) :
        UnkStruct_ov000_020b31a8(param1, param2, param3) {}

    // data_ov071_021641e0
    /* 00 */ virtual ~ActorTearLight_104_Base(); // func_ov071_02151d10 & func_ov071_0215b744
    /* 30 */ virtual s8 vfunc_30();
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
};

class ActorTearLight_104 : public ActorTearLight_104_Base {
public:
    /* 00 (base) */
    /* 1C */

    ActorTearLight_104(UnkSystem5 *param1, ModelRender *param2, unk32 param3) :
        ActorTearLight_104_Base(param1, param2, param3) {}

    // data_ov071_02164c3c
    /* 00 */ virtual ~ActorTearLight_104();
};

enum ActorUnkSZKUState_ {
    ActorUnkSZKUState_0 = 0,
    ActorUnkSZKUState_1 = 1,
    ActorUnkSZKUState_2 = 2,
    ActorUnkSZKUState_3 = 3,
    ActorUnkSZKUState_4 = 4,
    ActorUnkSZKUState_5 = 5,
    ActorUnkSZKUState_6 = 6,
    ActorUnkSZKUState_7 = 7,
    ActorUnkSZKUState_8 = 8,
    ActorUnkSZKUState_Max,
};

class ActorTearLight : public Actor {
public:
    /* 000 (base) */
    /* 094 */ VecFx32 mUnk_094;
    /* 0A0 */ ItemId mItemId;
    /* 0A4 */ ModelRender mUnk_0A4;
    /* 104 */ ActorTearLight_104 mUnk_104;
    /* 120 */ UnkSystem5 mUnk_120;
    /* 140 */ unk32 mUnk_140;
    /* 144 */ STRUCT_PAD(0x144, 0x160);
    /* 160 */ ActorTearLight_UnkStruct mUnk_160;
    /* 168 */ Actor_9C mUnk_168;
    /* 188 */ unk32 mUnk_188;
    /* 18C */ bool mUnk_18C;
    /* 18D */ bool mUnk_18D;
    /* 190 */ ActorRef mUnk_190;
    /* 194 */ ActorTearLight_194 mUnk_194;
    /* 1B8 */ u8 mUnk_1B8;
    /* 1B9 */ unk8 mUnk_1B9;
    /* 1BC */ UnkStruct_ov031_Items_02 mUnk_1BC;
    /* 1C8 */ STRUCT_PAD(0x1C8, 0x204);
    /* 204 */ ActorTearLight_204 mUnk_204[0x2];

    ActorTearLight();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 30 */ virtual void vfunc_30(Actor_vfunc_30 *param1) override;

    void func_ov071_0215f7f4(ActorState state);
    void func_ov071_0215f80c();
    void func_ov071_0215f824();
    void func_ov071_0215f92c();
    void func_ov071_0215fc0c();
    void func_ov071_0215fc54();
    void func_ov071_0215fca4();
    void func_ov071_0215fd04();
    void func_ov071_0215fd80();
    void func_ov071_0215fdd4();
    void func_ov071_0215fe54();
    void func_ov071_0215fe94();
    void func_ov071_0215fed4();
    void func_ov071_0215ff08();
    void func_ov071_0215ff3c();
    void func_ov071_0215ffb8();
    void func_ov071_0215ffbc();
};

class ActorProfileTearLight : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileTearLight();

    /* 0C */ virtual Actor *Create();

    static ActorProfileTearLight *GetProfile();
};
