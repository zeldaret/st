//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorUnkCASE.hpp"
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

class ActorUnkCANS_C4 : public Actor_C4 {
public:
    ActorUnkCANS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class UnkStruct_ov063_02162ea8 : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x4, 0x8);
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;

    UnkStruct_ov063_02162ea8();

    /* 00 (base) */ virtual ~UnkStruct_ov063_02162ea8();
    /* 08 */ virtual void vfunc_08(void) override;
    /* 0C */ virtual void vfunc_0C(void) override;
};

//! NOTE: Not the actual parent class, there are two classes in between this one and ModelRender
class UnkStruct_ov063_02162ee8 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */ STRUCT_PAD(0x60, 0x6C);
    /* 6C */ unk32 mUnk_6C;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk32 mUnk_74;
    /* 78 */

    UnkStruct_ov063_02162ee8(G3d_Model *pModel);

    /* 00 (base) */ ~UnkStruct_ov063_02162ee8();
};

class UnkStruct_ov063_02162f14 : public UnkStruct_ov000_020b31f0 {
public:
    /* 04 */ UnkSystem5 *mUnk_04;
    /* 08 */ ModelRender *mUnk_08;
    /* 0C */ STRUCT_PAD(0xC, 0x1C);
    /* 1C */ UnkSystem5 *mUnk_1C;

    UnkStruct_ov063_02162f14();

    /* 00 (base) */ virtual ~UnkStruct_ov063_02162f14() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C(void) override;
};

class ActorUnkCANS : public Actor_Derived2 {
public:
    /* 00 (base) */
    /* AE */ STRUCT_PAD(0xAE, 0xB0);
    /* B0 */ ModelRender mUnk_B0;
    /* 110 */ STRUCT_PAD(0x110, 0x128);
    /* 128 */ unk32 mUnk_128; //! INFO: Some kind of Actor, has vfunc_34, 1C (many args) and 28
    /* 12C */ STRUCT_PAD(0x12C, 0x154);
    /* 154 */ UnkSystem5 mUnk_154;
    /* 174 */ unk32 mUnk_174;
    /* 178 */ STRUCT_PAD(0x178, 0x1A4);
    /* 1A4 */ UnkSystem5 mUnk_1A4;
    /* 1C4 */ unk32 mUnk_1C4;
    /* 1C8 */ STRUCT_PAD(0x1C8, 0x1F4);
    /* 1F4 */ Actor_Derived1_94 mUnk_1F4;
    /* 204 */ STRUCT_PAD(0x204, 0x208);
    /* 208 */ unk16 mUnk_208;
    /* 20A */ unk16 mUnk_20A;
    /* 20C */ unk16 mUnk_20C;
    /* 20E */ unk16 mUnk_20E;
    /* 210 */ unk16 mUnk_210;
    /* 212 */ STRUCT_PAD(0x212, 0x218);
    /* 218 */ unk32 mUnk_218;
    /* 21C */ u16 mUnk_21C;
    /* 21E */ unk16 mUnk_21E;
    /* 220 */ STRUCT_PAD(0x220, 0x224);
    /* 224 */ unk32 mUnk_224;
    /* 228 */ STRUCT_PAD(0x228, 0x234);
    /* 234 */ unk16 mUnk_234;
    /* 236 */ unk16 mUnk_236;
    /* 238 */ u16 mUnk_238;
    /* 23A */ u16 mUnk_23A;
    /* 23C */ Actor_Derived1_94 mUnk_23C;
    /* 24C */ unk32 mUnk_24C;
    /* 250 */ unk32 mUnk_250;
    /* 254 */ STRUCT_PAD(0x254, 0x268);
    /* 268 */ ActorUnkCASE *mUnk_268;
    /* 26C */ fx16 mUnk_26C;
    /* 26E */ STRUCT_PAD(0x26E, 0x270);
    /* 270 */ unk32 mUnk_270;
    /* 274 */ u16 mUnk_274;
    /* 276 */ s8 mUnk_276;
    /* 277 */ s8 mUnk_277;
    /* 278 */

    ActorUnkCANS();

    /* 10 */ virtual void vfunc_10(Cylinder *param1);
    /* 18 */ virtual unk32 vfunc_18(void);
    /* 1C */ virtual void vfunc_1C(void);
    /* 20 */ virtual void vfunc_20(void);
    /* 24 */ virtual void vfunc_24(void);
    /* 2C */ virtual void vfunc_2C(unk32 param1);
    /* 4C */ virtual ~ActorUnkCANS() override;
    /* 4C */ void vfunc_4C(void); // vfunc_4C conflict ???
    /* 50 */ void vfunc_50(void);

    void func_ov063_02157f7c(void);
    unk32 func_ov063_02157fa4(ActorRef param1, unk32 param2, unk32 param3, unk32 *param4);
    void func_ov063_02158424(void);
    void func_ov063_02158448(unk32 param1);
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
    unk32 func_ov063_02159f3c(unk32 param1);
    void func_ov063_0215a0f0(void);
    void func_ov063_0215a2c0(void);
    void func_ov063_0215a428(void);
    void func_ov063_0215a474(void);
    unk32 func_ov063_0215a514(void);
    unk32 func_ov063_0215a56c(unk32 param1);
    void func_ov063_0215a5a0(void);
    unk32 func_ov063_0215a5bc(void);
    unk32 func_ov063_0215a5d8(void);
    static void func_ov063_0215a678(void);
};

class ActorProfileUnkCANS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCANS();
    ~ActorProfileUnkCANS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCANS *GetProfile();
};
