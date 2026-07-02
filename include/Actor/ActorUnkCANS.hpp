//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/Actor_Derived1.hpp"
#include "Physics/Cylinder.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "types.h"

class ActorUnkCANS_C4 : public Actor_C4 {
public:
    ActorUnkCANS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkCANS : public Actor_Derived2 {
public:
    /* 00 (base) */
    /* AE */ STRUCT_PAD(0xAE, 0x154);
    /* 154 */ UnkSystem5 mUnk_154;
    /* 174 */ unk32 mUnk_174;
    /* 178 */ STRUCT_PAD(0x178, 0x1A4);
    /* 1A4 */ UnkSystem5 mUnk_1A4;
    /* 1C4 */ unk32 mUnk_1C4;
    /* 1C8 */ STRUCT_PAD(0x1C8, 0x1F4);
    /* 1F4 */ Actor_Derived1_94 mUnk_1F4;
    /* 204 */ STRUCT_PAD(0x204, 0x23C);
    /* 23C */ Actor_Derived1_94 mUnk_23C;
    /* 24C */ STRUCT_PAD(0x24C, 0x268);
    /* 268 */ unk32 mUnk_268;
    /* 26C */ STRUCT_PAD(0x26C, 0x278);
    /* 278 */

    ActorUnkCANS();

    /* 10 */ virtual void func_ov063_0215a5f8(Cylinder *param1);
    /* 18 */ virtual void func_ov063_02158320(void);
    /* 1C */ virtual void func_ov063_02158388(void);
    /* 20 */ virtual void func_ov063_021584f0(void);
    /* 24 */ virtual void func_ov063_021584c4(void);
    /* 2C */ virtual void func_ov063_02158a2c(void);
    /* 4C */ virtual ~ActorUnkCANS() override;
    /* 4C */ void func_ov063_0215a9d4(void);
    /* 50 */ void func_ov063_0215aa58(void);

    void func_ov063_02157f20(void);
    void func_ov063_02157f7c(void);
    void func_ov063_02157fa4(void);
    void func_ov063_021582f8(void);
    void func_ov063_0215830c(void);
    void func_ov063_02158424(void);
    void func_ov063_02158448(void);
    void func_ov063_02158490(void);
    void func_ov063_02158b0c(void);
    void func_ov063_02158b34(void);
    void func_ov063_02158b98(void);
    void func_ov063_02158d40(void);
    void func_ov063_02158db0(void);
    void func_ov063_021590c8(void);
    void func_ov063_02159100(void);
    void func_ov063_021591f4(void);
    void func_ov063_02159258(void);
    void func_ov063_02159408(void);
    void func_ov063_02159494(void);
    void func_ov063_021595a4(void);
    void func_ov063_02159618(void);
    void func_ov063_02159714(void);
    void func_ov063_02159784(void);
    void func_ov063_021598fc(void);
    void func_ov063_021599e4(void);
    void func_ov063_02159ca8(void);
    void func_ov063_02159d68(void);
    void func_ov063_02159dfc(void);
    void func_ov063_02159e1c(void);
    void func_ov063_02159e20(void);
    void func_ov063_02159ec0(void);
    void func_ov063_02159f3c(void);
    void func_ov063_0215a0f0(void);
    void func_ov063_0215a2c0(void);
    void func_ov063_0215a428(void);
    void func_ov063_0215a474(void);
    void func_ov063_0215a514(void);
    void func_ov063_0215a56c(void);
    void func_ov063_0215a5a0(void);
    void func_ov063_0215a5bc(void);
    void func_ov063_0215a5d8(void);
    void func_ov063_0215a678(void);
    void func_ov063_0215a7d4(void);
    void func_ov063_0215a834(void);
    void func_ov063_0215a880(void);
    void func_ov063_0215a94c(void);
    void func_ov063_0215a970(void);
    void func_ov063_0215a99c(void);
    void func_ov063_0215a9b8(void);
};

class ActorProfileUnkCANS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCANS();
    ~ActorProfileUnkCANS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCANS *GetProfile();
};
