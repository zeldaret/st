#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorLokomos.hpp"
#include "Actor_Derived1.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWPBD;

enum ActorUnkWPBDState_ {
    ActorUnkWPBDState_0 = 0,
    ActorUnkWPBDState_1 = 1,
    ActorUnkWPBDState_2 = 2,
    ActorUnkWPBDState_3 = 3,
    ActorUnkWPBDState_4 = 4,
    ActorUnkWPBDState_Max
};

class ActorUnkWPBD_214 : public Actor_C4 {
public:
    /* 00 (base) */
    /* 24 */

    ActorUnkWPBD_214(ActorUnkWPBD *param1);

    /* 00 */ virtual bool vfunc_00(RefStruct ref, unk32 param2) override;
};

class ActorUnkWPBD_32C : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ PAD(0x04, 0x08);
    /* 08 */ ActorUnkWPBD *mUnk_08;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */ unk16 mUnk_0E;
    /* 10 */

    ActorUnkWPBD_32C(ActorUnkWPBD *param1) :
        mUnk_08(param1),
        mUnk_0C(0x0),
        mUnk_0E(0x0) {}

    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
};

class ActorUnkWPBD_2CC : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ ActorUnkWPBD *mUnk_24;
    /* 28 */

    ActorUnkWPBD_2CC(ActorUnkWPBD *actor) :
        mUnk_24(actor) {}

    /* 0C */ virtual void vfunc_0C() override;
};

class ActorUnkWPBD : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ActorLokomo_2BC mUnk_094;
    /* 0F4 */ PAD(0x0F4, 0x100);
    /* 100 */ ActorKenzo_Base_160 mUnk_100;
    /* 1EC */ unk16 mUnk_1EC;
    /* 1EE */ unk16 mUnk_1EE;
    /* 1F0 */ unk16 mUnk_1F0;
    /* 1F2 */ unk16 mUnk_1F2;
    /* 1F4 */ Actor_9C mUnk_1F4;
    /* 214 */ ActorUnkWPBD_214 mUnk_214;
    /* 238 */ fx32 mUnk_238;
    /* 23C */ unk32 mUnk_23C;
    /* 240 */ fx32 mUnk_240;
    /* 244 */ unk32 mUnk_244;
    /* 248 */ unk32 mUnk_248;
    /* 24C */ unk32 mUnk_24C;
    /* 250 */ unk32 mUnk_250;
    /* 254 */ unk32 mUnk_254;
    /* 258 */ unk32 mUnk_258;
    /* 25C */ VecFx32Cpp mUnk_25C;
    /* 268 */ VecFx32Cpp mUnk_268;
    /* 274 */ VecFx32Cpp mUnk_274;
    /* 280 */ fx32 mUnk_280;
    /* 284 */ unk32 mUnk_284;
    /* 288 */ u16 mUnk_288;
    /* 28A */ unk16 mUnk_28A;
    /* 28C */ fx32 mUnk_28C;
    /* 290 */ unk16 mUnk_290;
    /* 292 */ unk16 mUnk_292;
    /* 294 */ bool mUnk_294;
    /* 295 */ bool mUnk_295;
    /* 296 */ bool mUnk_296;
    /* 298 */ unk32 mUnk_298;
    /* 29C */ unk32 mUnk_29C;
    /* 2A0 */ unk32 mUnk_2A0;
    /* 2A4 */ unk32 mUnk_2A4;
    /* 2A8 */ MtxFx33 mUnk_2A8;
    /* 2CC */ ActorUnkWPBD_2CC mUnk_2CC;
    /* 2F4 */ Actor_Derived1_EC mUnk_2F4;
    /* 30C */ RefStruct mUnk_30C;
    /* 310 */ RefStruct mUnk_310;
    /* 314 */ unk32 mUnk_314;
    /* 318 */ unk32 mUnk_318;
    /* 31C */ unk32 mUnk_31C;
    /* 320 */ unk32 mUnk_320;
    /* 324 */ unk32 mUnk_324;
    /* 328 */ unk32 mUnk_328;
    /* 32C */ ActorUnkWPBD_32C mUnk_32C;
    /* 330 */

    ActorUnkWPBD();

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
    void func_ov058_0214bbcc(VecFx32 *param1, fx32 param2);
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
    void func_ov058_0214d250();
    bool func_ov058_0214d2c4();
};

class ActorProfileUnkWPBD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWPBD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWPBD *GetProfile();
};
