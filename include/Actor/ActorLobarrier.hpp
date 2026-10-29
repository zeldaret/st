#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorLobarrierShield.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkZLSL_ZSRS.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "global.h"
#include "nitro/fx.h"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"
#include "types.h"

// Try to match vfunc_0C but poor results
struct UnkStruct_02162ea8_vfunc_0C {
    /* 00 */ union {
        unk32 mUnk_00;
        Vec2bCpp vec;
    };
    /* 04 */ union {
        unk32 mUnk_04;
        struct {
            u8 mUnk_04_0;
            u8 mUnk_04_1;
            u8 mUnk_04_2;
            u8 mUnk_04_3;
        };
    };
};

class UnkStruct_ov063_02162ea8 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ PAD(0x4, 0x8);
    /* 08 */ VecFx32 mUnk_08;
    /* 14 */

    UnkStruct_ov063_02162ea8();

    /* 00 */ virtual ~UnkStruct_ov063_02162ea8();
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
    /* 0C */ virtual bool vfunc_0C(RefStruct ref, UnkStruct_ov031_020e54d4 *param2, const VecFx32 *param3,
                                   const VecFx32 *param4) override;
};

class UnkStruct_ov063_02162ee8 : public UnkStruct_ov000_020b3268 {
public:
    /* 00 (base) */
    /* 60 */ PAD(0x60, 0x6C);
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk32 mUnk_74;
    /* 78 */

    UnkStruct_ov063_02162ee8(G3d_Model *pModel);
};

class UnkStruct_ov063_02162f14 : public UnkStruct_ov000_020b31f0 {
public:
    /* 2C */
    /* 2C */ UnkSystem5 mUnk_2C;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ PAD(0x50, 0x7C);
    /* 7C */ UnkSystem5 mUnk_7C;
    /* 9C */ unk32 mUnk_9C;

    UnkStruct_ov063_02162f14(ModelRender *param3, UnkActorFileSystem2 *param4) :
        UnkStruct_ov000_020b31f0(&mUnk_2C, &mUnk_7C, param3, param4),
        mUnk_2C(&mUnk_4C, NULL),
        mUnk_7C(&mUnk_9C, NULL) {
        if (param4 != NULL) {
            mUnk_7C.mpModel = mUnk_10;
            mUnk_2C.mpModel = mUnk_10;
        }
    }

    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C(void) override;
};

class ActorLobarrier;

class UnkStruct_ov063_02162e88 : public Actor_9C {
public:
    /* 20 */ ActorLobarrier *mUnk_20;
    /* 24 */

    UnkStruct_ov063_02162e88(ActorLobarrier *param1);

    /* 04 */ virtual unk32 vfunc_04(RefStruct param1, unk32 param2, unk32 param3, unk32 *param4) override;
};

enum ActorLobarrierState_ {
    ActorLobarrierState_Idle         = 0, // left/right moves
    ActorLobarrierState_Chasing      = 1, // fast moves to be in front of Link
    ActorLobarrierState_Dying        = 2,
    ActorLobarrierState_LinkInRange  = 3,
    ActorLobarrierState_Stunned      = 4, // hit by the boomerang for instance
    ActorLobarrierState_RisingShield = 5, // Counter boomerang
    ActorLobarrierState_Hitting      = 6, // try to hit Link
    ActorLobarrierState_Fleeing      = 7,
    ActorLobarrierState_Rotating     = 8,
    ActorLobarrierState_LosingShield = 9,
    ActorLobarrierState_10           = 10,
    ActorLobarrierState_Max
};

class ActorLobarrier : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ PAD(0xAE, 0xB0);
    /* 0B0 */ UnkStruct_ov063_02162ee8 mUnk_0B0;
    /* 128 */ UnkStruct_ov063_02162f14 mUnk_128;
    /* 1C8 */ PAD(0x1C8, 0x1F4);
    /* 1F4 */ Actor_Derived1_94 mUnk_1F4;
    /* 200 */ UnkStruct_ov063_02162e88 mUnk_200;
    /* 224 */ UnkStruct_ActorLobarrier_224 mUnk_224;
    /* 234 */ Timer mUnk_234;
    /* 238 */ Timer mUnk_238;
    /* 23C */ UnkStruct_ov063_02162ea8 mUnk_23C;
    /* 250 */ VecFx32 mUnk_250;
    /* 25C */ VecFx32 mUnk_25C;
    /* 268 */ ActorLobarrierShield *shield;
    /* 26C */ fx16 mUnk_26C; // Some kind of angle, probably
    /* 26E */ PAD(0x26E, 0x270);
    /* 270 */ fx32 mUnk_270;
    /* 274 */ u16 mUnk_274;
    /* 276 */ s8 mUnk_276;
    /* 277 */ s8 mUnk_277;
    /* 278 */

    ActorLobarrier();

    /* 10 */ virtual void vfunc_10(Cylinder *param1) override;
    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 1C */ virtual void Setup() override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov063_02158424();
    void SetState(ActorState state);
    void func_ov063_02158490();
    void func_ov063_02158b0c();
    void func_ov063_02158b34();
    void func_ov063_02158b98();
    void func_ov063_02158d40();
    void func_ov063_02158db0();
    void func_ov063_021590c8();
    void func_ov063_02159100();
    void func_ov063_021591f4();
    void func_ov063_02159258();
    void func_ov063_02159408();
    void func_ov063_02159494();
    void func_ov063_021595a4();
    void func_ov063_02159618();
    void func_ov063_02159714();
    void func_ov063_02159784();
    void func_ov063_021598fc();
    void func_ov063_021599e4();
    void func_ov063_02159ca8();
    void func_ov063_02159d68();
    void func_ov063_02159dfc();
    void func_ov063_02159e1c();
    void func_ov063_02159e20();
    void func_ov063_02159ec0();
    unk32 func_ov063_02159f3c(unk32 param1);
    bool func_ov063_0215a0f0() const;
    bool func_ov063_0215a2c0() const;
    void func_ov063_0215a428();
    unk32 func_ov063_0215a474();
    unk32 func_ov063_0215a514();
    bool func_ov063_0215a56c(unk32 param1);
    void func_ov063_0215a5a0(VecFx32 *param1);
    unk32 func_ov063_0215a5bc();
    unk32 func_ov063_0215a5d8();
    static void func_ov063_0215a678(ActorLobarrier *param1, UnkStruct_func_ov063_0215a678 *param2);
};

class ActorProfileLobarrier : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileLobarrier();

    /* 0C */ virtual Actor *Create();

    static ActorProfileLobarrier *GetProfile();
};
