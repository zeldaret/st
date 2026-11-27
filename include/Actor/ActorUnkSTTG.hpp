#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorSpinut.hpp"
#include "Physics/Sphere.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkSTTG_C4 : public Actor_C4 {
public:
    ActorUnkSTTG_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(RefStruct ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class UnkStruct_ov094_02177670 : public ModelRender_ov000_020b1a1c {
public:
    /* 00 (vtable) */
    /* 60 */

    UnkStruct_ov094_02177670(G3d_Model *pModel) :
        ModelRender_ov000_020b1a1c(pModel) {};
};

class UnkStruct_ov094_02177600 : public Actor_9C {
public:
    /* 00 (vtable) */
    /* 20 */

    UnkStruct_ov094_02177600() :
        Actor_9C() {};
};

struct UnkStruct_func_ov094_0216a5d4_0 {
    /* 00 */ PAD(0x0, 0x4);
    /* 04 */ VecFx32 *vec;
};

struct UnkStruct_func_ov094_0216a5d4_1 {
    /* 00 */ PAD(0x0, 0x8);
    /* 08 */ VecFx16 vec;
};

class ActorUnkSTTG : public Actor {
public:
    /* 000 (base) */
    /* 094 */ UnkStruct_ov094_02177670 mUnk_94;
    /* 0F4 */ void *mUnk_F4;
    /* 0F8 */ unk16 mUnk_F8;
    /* 0FA */ unk16 mUnk_FA;
    /* 0FC */ unk32 mUnk_FC;
    /* 100 */ unk32 mUnk_100;
    /* 104 */ unk32 mUnk_104;
    /* 108 */ unk32 mUnk_108;
    /* 10C */ UnkStruct_ov094_02177600 mUnk_10C;
    /* 12C */ void *mUnk_12C;
    /* 130 */ MtxFx33 mUnk_130;
    /* 154 */ Sphere mUnk_154;
    /* 164 */ VecFx32Cpp mUnk_164;
    /* 170 */ VecFx32Cpp mUnk_170;
    /* 17C */ fx32 mUnk_17C;
    /* 180 */ unk32 mUnk_180;
    /* 184 */ unk32 mUnk_184;
    /* 188 */ unk16 mUnk_188;
    /* 18A */ unk16 mUnk_18A;
    /* 18C */ unk16 mUnk_18C;
    /* 18E */ unk16 mUnk_18E;
    /* 190 */ unk16 mUnk_190;
    /* 192 */ unk8 mUnk_192;

    ActorUnkSTTG();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 1C */ virtual void Setup() override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov094_0216a4fc(void);
    static unk32 func_ov094_0216a5d4(UnkStruct_func_ov094_0216a5d4_0 *param1, UnkStruct_func_ov094_0216a5d4_1 *param2);
    void func_ov094_0216a74c(void);
    void func_ov094_0216a760(ActorState state);
    void func_ov094_0216a84c(void);
    void func_ov094_0216a870(void);
    void func_ov094_0216a928(void);
    void func_ov094_0216aa78(void);
    unk32 func_ov094_0216ab34(void);
    void func_ov094_0216ada8(void);
    static void func_ov094_0216aec0(VecFx32 *vec, ActorUnkSTTG *actor);
    void func_ov094_0216aee8(void);
    static void func_ov094_0216b150(VecFx32 *vec, ActorUnkSTTG *actor);
    void func_ov094_0216b1a4(void);
};

class ActorProfileUnkSTTG : public ActorProfile_Derived1 {
public:
    /* 00 (base) */
    /* D8 */

    ActorProfileUnkSTTG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSTTG *GetProfile();
};
