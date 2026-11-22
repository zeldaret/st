#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorLokomos.hpp"
#include "Actor_Derived1.hpp"
#include "global.h"
#include "types.h"

class ActorPapuchiaBird;

enum ActorPapuchiaBirdState_ {
    ActorPapuchiaBirdState_0 = 0,
    ActorPapuchiaBirdState_1 = 1,
    ActorPapuchiaBirdState_2 = 2,
    ActorPapuchiaBirdState_3 = 3,
    ActorPapuchiaBirdState_4 = 4,
    ActorPapuchiaBirdState_Max
};

class ActorPapuchiaBird_214 : public Actor_C4 {
public:
    /* 00 (base) */
    /* 24 */

    ActorPapuchiaBird_214(ActorPapuchiaBird *param1);

    /* 00 */ virtual bool vfunc_00(RefStruct ref, unk32 param2) override;
};

class ActorPapuchiaBird_32C : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ PAD(0x04, 0x08);
    /* 08 */ ActorPapuchiaBird *mUnk_08;
    /* 0C */ Timer mUnk_0C;
    /* 10 */

    ActorPapuchiaBird_32C(ActorPapuchiaBird *param1) :
        mUnk_08(param1),
        mUnk_0C(0, 0) {}

    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
};

class ActorPapuchiaBird_2CC : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ ActorPapuchiaBird *mUnk_24;
    /* 28 */

    ActorPapuchiaBird_2CC(ActorPapuchiaBird *actor) :
        mUnk_24(actor) {}

    /* 0C */ virtual void vfunc_0C() override;
};

class ActorPapuchiaBird : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ActorLokomo_2BC mUnk_094;
    /* 100 */ ActorKenzo_Base_160 mUnk_100;
    /* 1EC */ s16 mUnk_1EC;
    /* 1EE */ s16 mUnk_1EE;
    /* 1F0 */ s16 mUnk_1F0;
    /* 1F2 */ unk16 mUnk_1F2;
    /* 1F4 */ Actor_9C mUnk_1F4;
    /* 214 */ ActorPapuchiaBird_214 mUnk_214;
    /* 238 */ VecFx32Cpp mUnk_238;
    /* 244 */ VecFx32Cpp mUnk_244;
    /* 250 */ VecFx32Cpp mUnk_250;
    /* 25C */ VecFx32Cpp mUnk_25C;
    /* 268 */ VecFx32Cpp mUnk_268;
    /* 274 */ VecFx32Cpp mUnk_274;
    /* 280 */ fx32 mUnk_280;
    /* 284 */ unk32 mUnk_284;
    /* 288 */ s16 mUnk_288;
    /* 28A */ unk16 mUnk_28A;
    /* 28C */ fx32 mUnk_28C;
    /* 290 */ Timer mUnk_290;
    /* 294 */ bool mUnk_294;
    /* 295 */ bool mUnk_295;
    /* 296 */ bool mUnk_296;
    /* 298 */ unk32 mUnk_298;
    /* 29C */ unk32 mUnk_29C;
    /* 2A0 */ unk32 mUnk_2A0;
    /* 2A4 */ unk32 mUnk_2A4;
    /* 2A8 */ MtxFx33 mUnk_2A8;
    /* 2CC */ ActorPapuchiaBird_2CC mUnk_2CC;
    /* 2F4 */ Actor_Derived1_EC mUnk_2F4;
    /* 30C */ RefStruct mUnk_30C;
    /* 310 */ RefStruct mUnk_310;
    /* 314 */ VecFx32Cpp mUnk_314;
    /* 320 */ VecFx32Cpp mUnk_320;
    /* 32C */ ActorPapuchiaBird_32C mUnk_32C;
    /* 33C */

    ActorPapuchiaBird();

    /* 1C */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Setup() override;
    /* 24 */ virtual void Update() override;
    /* 18 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void SetState(ActorState state);
    void func_ov058_0214b61c();
    void func_ov058_0214b620();
    void func_ov058_0214b820();
    void func_ov058_0214b8dc();
    void func_ov058_0214bbcc(VecFx32 *param1, fx32 newVelZ);
    void func_ov058_0214bd98();
    void func_ov058_0214bfa4();
    void func_ov058_0214c078();
    void func_ov058_0214c0b4();
    void func_ov058_0214c334();
    void func_ov058_0214c394();
    void func_ov058_0214c6d8();
    void func_ov058_0214c824();
    void func_ov058_0214c92c();
    void func_ov058_0214ca40();
    bool func_ov058_0214cab8();
    void func_ov058_0214cacc();
    void func_ov058_0214cb64();
    void func_ov058_0214cbe8();
    bool func_ov058_0214cc80();
    void func_ov058_0214ccd0();
    void func_ov058_0214cd94();
    void func_ov058_0214cfa4(unk32 param1);
    static void func_ov058_0214d078(Actor *param1, G3d_RenderState *param2);
    UnkStackStruct2::Inner func_ov058_0214d250(unk16 param3);
    bool func_ov058_0214d2c4(unk32 param1);
};

class ActorProfilePapuchiaBird : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfilePapuchiaBird();

    /* 0C */ virtual Actor *Create();

    static ActorProfilePapuchiaBird *GetProfile();
};
