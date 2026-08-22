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
    /* 04 */ STRUCT_PAD(0x4, 0x8);
    /* 08 */ VecFx32 mUnk_08;
    /* 14 */

    UnkStruct_ov063_02162ea8();

    /* 00 */ virtual ~UnkStruct_ov063_02162ea8();
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1) override;
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) override;
};

class UnkStruct_ov063_02162ee8 : public UnkStruct_ov000_020b3268 {
public:
    /* 00 (base) */
    /* 60 */ STRUCT_PAD(0x60, 0x6C);
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
    /* 50 */ STRUCT_PAD(0x50, 0x7C);
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

class UnkStruct_ov063_02162e88 : public Actor_9C {
public:
    /* 20 */ void *mUnk_20; // ActorUnkCANS*
    /* 24 */

    UnkStruct_ov063_02162e88(void *param1);

    /* 04 */ virtual unk32 vfunc_04(ActorRef param1, unk32 param2, unk32 param3, unk32 *param4) override;
};

class UnkStruct_ActorUnkCANS_224 {
public:
    /* 00 (base) */ UnkStruct_PlayerGet_ec mUnk_00[0x2];
    /* 08 */ u16 mUnk_08;
    /* 0A */ u16 mUnk_0A;
    /* 0C */ STRUCT_PAD(0x0C, 0x10);
    /* 10 */

    UnkStruct_ActorUnkCANS_224(); // func_ov000_02099820

    ~UnkStruct_ActorUnkCANS_224() {
        for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_00; ptr != this->mUnk_00 + ARRAY_LEN(this->mUnk_00); ++ptr) {
            ptr->func_ov000_020a0334();
        }
        this->mUnk_0A = 0x0;
        this->mUnk_08 = 0x0;
    }

    void func_ov000_02099a0c();
};

class ActorUnkCANS : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0AE */ STRUCT_PAD(0xAE, 0xB0);
    /* 0B0 */ UnkStruct_ov063_02162ee8 mUnk_0B0;
    /* 128 */ UnkStruct_ov063_02162f14 mUnk_128;
    /* 1C8 */ STRUCT_PAD(0x1C8, 0x1F4);
    /* 1F4 */ Actor_Derived1_94 mUnk_1F4;
    /* 200 */ UnkStruct_ov063_02162e88 mUnk_200;
    /* 224 */ UnkStruct_ActorUnkCANS_224 mUnk_224;
    /* 234 */ volatile u16 mUnk_234;
    /* 236 */ u16 mUnk_236;
    /* 238 */ volatile u16 mUnk_238;
    /* 23A */ u16 mUnk_23A;
    /* 23C */ UnkStruct_ov063_02162ea8 mUnk_23C;
    /* 250 */ VecFx32 mUnk_250;
    /* 25C */ unk32 mUnk_25C;
    /* 260 */ unk32 mUnk_260;
    /* 264 */ unk32 mUnk_264;
    /* 268 */ ActorUnkCASE *mUnk_268;
    /* 26C */ fx16 mUnk_26C; // Some kind of angle, probably
    /* 26E */ STRUCT_PAD(0x26E, 0x270);
    /* 270 */ unk32 mUnk_270;
    /* 274 */ u16 mUnk_274;
    /* 276 */ s8 mUnk_276;
    /* 277 */ s8 mUnk_277;
    /* 278 */

    ActorUnkCANS();

    /* 10 */ virtual void vfunc_10(Cylinder *param1) override;
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 1C */ virtual void vfunc_1C(void) override;
    /* 20 */ virtual void vfunc_20(void) override;
    /* 24 */ virtual void vfunc_24(void) override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

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
    unk32 func_ov063_0215a0f0(void);
    unk32 func_ov063_0215a2c0(void);
    void func_ov063_0215a428(void);
    unk32 func_ov063_0215a474(void);
    unk32 func_ov063_0215a514(void);
    unk32 func_ov063_0215a56c(unk32 param1);
    void func_ov063_0215a5a0(VecFx32 *param1);
    unk32 func_ov063_0215a5bc(void);
    unk32 func_ov063_0215a5d8(void);
    static void func_ov063_0215a678(ActorUnkCANS *param1, UnkStruct_func_ov063_0215a678 *param2);
};

class ActorProfileUnkCANS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkCANS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCANS *GetProfile();
};
