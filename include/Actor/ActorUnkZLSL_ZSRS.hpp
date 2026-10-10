#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor_Derived1.hpp"
#include "Render/ModelRender.hpp"
#include "Unknown/UnkStruct_027e0cec.hpp"
#include "global.h"
#include "nitro/types.h"
#include "nns/g3d/g3d.h"
#include "types.h"

class ActorUnkZLSL;

// --- Actor ZLSL ---

// NPC Renderer ?
class ModelRender_ov000_020b4d64 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */

    ModelRender_ov000_020b4d64(G3d_Model *pModel);

    // data_ov000_020b4d64
    /* 0C */ virtual void vfunc_0C() override;
    /* 1C */ virtual void vfunc_1C(G3d_RenderState *param1) override;
};

class ModelRender_ov031_02113670 : public ModelRender_ov000_020b4d64 {
public:
    /* 00 (base) */
    /* 60 */

    ModelRender_ov031_02113670(G3d_Model *pModel);

    // data_ov031_02113670
    /* 0C */ virtual void vfunc_0C() override;
};

class UnkStruct_ov000_020b31a8 {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem5 *mUnk_04;
    /* 08 */ ModelRender *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ G3d_Model *mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk8 mUnk_18;
    /* 19 */ PAD(0x19, 0x1C);
    /* 1C */

    UnkStruct_ov000_020b31a8(UnkSystem5 *param1, ModelRender *param2, MapObjectProfile_Derived2_20_Base *param3);
    UnkStruct_ov000_020b31a8(UnkSystem5 *param1, ModelRender_ov031_02113670 *param2, MapObjectProfile_Derived2_20_Base *param4,
                             G3d_Model *pModel, unk32 param3);

    // data_ov000_020b31a8
    /* 00 */ virtual ~UnkStruct_ov000_020b31a8();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual UnkSystem5 *vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C(ActorUnkZLSL_AnimationTag param1, unk32 param2, unk32 param3, unk32 param4);
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual UnkStruct_PlayerGet_50 *vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual s8 vfunc_30();
    /* 34 */ virtual void vfunc_34();
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2);
    /* 3C */ virtual void vfunc_3C();

    void func_ov000_02099ddc(ActorUnkZLSL_AnimationTag param1, unk32 param2, unk32 param3);
    void func_ov000_02099ff8(ActorUnkZLSL_AnimationTag param1, unk32 param2);
};

class ActorUnkZLSL_2700_1C {
public:
    /* 1C */ UnkSystem5 mUnk_00;
    /* 20 */ unk32 mUnk_20;
    /* 24 */

    ActorUnkZLSL_2700_1C() :
        mUnk_00(&mUnk_20, NULL) {}
};

class ActorUnkZLSL_2700 : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 1C */ ActorUnkZLSL_2700_1C mUnk_1C;
    /* 40 */ PAD(0x40, 0x5C);
    /* 5C */ unk32 mUnk_5C;
    /* 60 */ PAD(0x60, 0x6C);
    /* 6C */

    ActorUnkZLSL_2700(ModelRender_ov031_02113670 *param1, G3d_Model *pModel, unk32 param3) :
        UnkStruct_ov000_020b31a8(&this->mUnk_1C.mUnk_00, param1, data_027e0ce0->mUnk_1C->mUnk_08[PlayerCharacter_Zelda][1],
                                 pModel, param3) {
        if (pModel != NULL) {
            this->mUnk_1C.mUnk_00.mpModel = this->mUnk_10;
        }
    }

    // data_ov031_021136e4
    /* 00 */ virtual ~ActorUnkZLSL_2700() override {}
};

class ActorUnkZLSL_27CC : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 1C */ ActorUnkZLSL_2700_1C mUnk_1C;
    /* 40 */ PAD(0x40, 0x5C);
    /* 5C */

    ActorUnkZLSL_27CC(ModelRender *param2, MapObjectProfile_Derived2_20_Base *param3) :
        UnkStruct_ov000_020b31a8(&this->mUnk_1C.mUnk_00, param2, param3) {
        if (param3 != NULL) {
            this->mUnk_1C.mUnk_00.mpModel = this->mUnk_10;
        }
    }

    // data_ov031_0211369c
    /* 00 */ WEAK virtual ~ActorUnkZLSL_27CC() override {}
    /* 30 */ virtual s8 vfunc_30() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
};

class UnkStruct_ov000_020b31f0 : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (vtable) */
    /* 1C */ UnkSystem5 *mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk8 mUnk_28; // deduced from strb [..., 0x18]
    /* 29 */ PAD(0x29, 0x2A);
    /* 2A */ unk16 mUnk_2A;
    /* 2C */

    UnkStruct_ov000_020b31f0(UnkSystem5 *param1, UnkSystem5 *param2, ModelRender *param3, UnkActorFileSystem2 *param4);

    // data_ov000_020b31f0
    /* 00 */ virtual ~UnkStruct_ov000_020b31f0() override; // In thumb
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual UnkSystem5 *vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 1C */ virtual void vfunc_1C(ActorUnkZLSL_AnimationTag param1, unk32 param2, unk32 param3, unk32 param4) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 28 */ virtual UnkStruct_PlayerGet_50 *vfunc_28() override;
    /* 2C */ virtual void vfunc_2C() override;
    /* 30 */ virtual s8 vfunc_30() override;
    /* 34 */ virtual void vfunc_34() override;
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override;
    /* 3C */ virtual void vfunc_3C() override;
    /* 40 */ virtual void vfunc_40();
};

class UnkStruct_ov031_020ecc68 {
public:
    /* 08 */ unk16 sp_08;
    /* 0A */ unk16 sp_0A;
    /* 0C */ unk16 sp_0C;
    /* 0E */ unk16 sp_0E;
    /* 10 */ unk32 sp_10;
    /* 14 */ VecFx32 sp_14;
    /* 20 */ u16 sp_20;
    /* 22 */ u16 sp_22;
    /* 24 */ u16 sp_24;
    /* 26 */ u16 sp_26;
    /* 28 */ VecFx32 sp_28;
    /* 34 */ UnkStackStruct1 sp_34;

    void func_ov031_020ed47c(ActorUnkZLSL *param1, unk32 param2);
};

// --- Actor ZLSL ---

enum ActorUnkZLSLState_ {
    ActorUnkZLSLState_0  = 0,
    ActorUnkZLSLState_1  = 1,
    ActorUnkZLSLState_2  = 2,
    ActorUnkZLSLState_3  = 3,
    ActorUnkZLSLState_4  = 4,
    ActorUnkZLSLState_5  = 5,
    ActorUnkZLSLState_6  = 6,
    ActorUnkZLSLState_7  = 7,
    ActorUnkZLSLState_8  = 8,
    ActorUnkZLSLState_9  = 9,
    ActorUnkZLSLState_10 = 10,
    ActorUnkZLSLState_11 = 11,
    ActorUnkZLSLState_12 = 12,
    ActorUnkZLSLState_13 = 13,
    ActorUnkZLSLState_14 = 14,
    ActorUnkZLSLState_15 = 15,
    ActorUnkZLSLState_16 = 16,
    ActorUnkZLSLState_MAX
};

class ActorUnkZLSL_1690 {
public:
    /* 00 */ unk32 mUnk_00;

    ActorUnkZLSL_1690();

    void func_ov031_020eeb58();
    void func_ov031_020eeca8();
    void func_ov031_020eece8();
};

class ActorUnkZSRS_120_Base {
public:
    ActorUnkZSRS_120_Base(UnkSystem5 *param1, UnkSystem5 *param2, ModelRender *param3, UnkActorFileSystem2 *ptr, G3d_Model *,
                          unk32 param4);

    /* 00 */ virtual ~ActorUnkZSRS_120_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual UnkSystem5 *vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C(ActorUnkZLSL_AnimationTag param1, unk32 param2, unk32 param3, unk32 param4);
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual UnkStruct_PlayerGet_50 *vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual s8 vfunc_30();
    /* 34 */ virtual void vfunc_34();
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2);
    /* 3C */ virtual void vfunc_3C();
};

class ActorUnkZSRS_120 : public ActorUnkZSRS_120_Base {
public:
    /* 00 (vtable) */
    /* 04 */ UnkSystem5 *mUnk_04;
    /* 08 */ ModelRender *mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ G3d_Model *mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ UnkSystem5 *mUnk_1C;
    /* 14 */ PAD(0x20, 0x1440);
    /* 1440 */ UnkSystem5_Derived3 mUnk_1440;
    /* 14A0 */ UnkSystem5_Derived3 mUnk_14A0;
    /* 1500 */

    ActorUnkZSRS_120(ModelRender *param3, UnkActorFileSystem2 *ptr, G3d_Model *pModel, unk32 param4) :
        ActorUnkZSRS_120_Base(&mUnk_1440.mUnk_00, &mUnk_14A0.mUnk_00, param3, ptr, pModel, param4),
        mUnk_1440(NULL),
        mUnk_14A0(NULL) {
        if (pModel != NULL) {
            this->mUnk_1440.mUnk_00.mpModel = this->mUnk_14A0.mUnk_00.mpModel = this->mUnk_10;
        }
    }

    /* 00 */ virtual ~ActorUnkZSRS_120() {}
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual UnkSystem5 *vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C(ActorUnkZLSL_AnimationTag param1, unk32 param2, unk32 param3, unk32 param4);
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual UnkStruct_PlayerGet_50 *vfunc_28();
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual s8 vfunc_30();
    /* 34 */ virtual void vfunc_34();
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2);
    /* 3C */ virtual void vfunc_3C();
};

class ActorUnkZSRS : public Actor_Derived1 {
public:
    /* 000 (base) */
    /* 0120 */ ActorUnkZSRS_120 mUnk_0120;
    /* 1620 */

    ActorUnkZSRS(ModelRender *param1, G3d_Model *pModel, UnkActorFileSystem2 *param2, unk32 param3) :
        Actor_Derived1(param1, &this->mUnk_0120),
        mUnk_0120(param1, param2, pModel, param3) {}

    // data_ov031_02113944
};

class ActorUnkZLSL_28CC {
public:
    /* 00 */ unk32 mUnk_00;

    ActorUnkZLSL_28CC() {
        this->mUnk_00 = 0;
    }
};

class ActorUnkZLSL_2828 {
public:
    /* 00 */ UnkSystem7 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    ActorUnkZLSL_2828() :
        mUnk_00(NULL),
        mUnk_04(-1),
        mUnk_08(0) {}
};

extern Actor *data_027e0d3c;

class ActorUnkZLSL : public ActorUnkZSRS {
public:
    /* 0000 (base) */
    /* 1620 */ ModelRender_ov031_02113670 mUnk_1620;
    /* 1680 */ PAD(0x1680, 0x1690);
    /* 1690 */ ActorUnkZLSL_1690 mUnk_1690;
    /* 1694 */ PAD(0x1694, 0x26F4);
    /* 26F4 */ Actor_Derived1_94 mUnk_26F4;
    /* 2700 */ ActorUnkZLSL_2700 mUnk_2700;
    /* 276C */ ModelRender mUnk_276C;
    /* 27CC */ ActorUnkZLSL_27CC mUnk_27CC;
    /* 2828 */ ActorUnkZLSL_2828 mUnk_2828;
    /* 2834 */ ActorBomb_unk mUnk_2834[4];
    /* 2864 */ unk16 mUnk_2864;
    /* 2866 */ unk16 mUnk_2866;
    /* 2868 */ unk16 mUnk_2868;
    /* 286A */ unk16 mUnk_286A;
    /* 286C */ unk16 mUnk_286C;
    /* 286E */ unk16 mUnk_286E;
    /* 2870 */ unk16 mUnk_2870;
    /* 2872 */ s16 mUnk_2872;
    /* 2874 */ bool mUnk_2874;
    /* 2875 */ unk8 mUnk_2875;
    /* 2876 */ unk8 mUnk_2876;
    /* 2877 */ unk8 mUnk_2877;
    /* 2878 */ VecFx32Cpp mUnk_2878;
    /* 2884 */ unk32 mUnk_2884;
    /* 2888 */ fx32 mUnk_2888;
    /* 288C */ unk32 mUnk_288C;
    /* 2890 */ fx32 mUnk_2890;
    /* 2894 */ Cylinder mUnk_2894;
    /* 28A4 */ VecFx32Cpp mUnk_28A4;
    /* 28B0 */ VecFx32Cpp mUnk_28B0;
    /* 28BC */ unk32 mUnk_28BC;
    /* 28C0 */ unk32 mUnk_28C0;
    /* 28C4 */ unk32 mUnk_28C4;
    /* 28C8 */ unk32 mUnk_28C8;
    /* 28CC */ ActorUnkZLSL_28CC mUnk_28CC[4];
    /* 28DC */ RefStruct mUnk_28DC;
    /* 28E0 */ unk16 mUnk_28E0;
    /* 28E2 */ unk16 mUnk_28E2;
    /* 28E4 */ unk16 mUnk_28E4;
    /* 28E6 */ unk16 mUnk_28E6; // pad?
    /* 28E8 */ VecFx32Cpp mUnk_28E8;
    /* 28F4 */ VecFx32Cpp mUnk_28F4;
    /* 2900 */ u16 mUnk_2900;
    /* 2902 */ unk16 mUnk_2902; // pad?
    /* 2904 */ unk32 mUnk_2904;
    /* 2908 */

    ActorUnkZLSL();

    // data_ov031_02113880
    /* 00 */ virtual void GetOffsetPos(VecFx32 *pPos) const override;
    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 20 */ virtual void Update() override;
    /* 2C */ virtual void vfunc_2C(Actor_vfunc_30 *param1) override;
    /* 4C */ virtual ~ActorUnkZLSL() override;
    /* 58 */ virtual void vfunc_58(ActorState state) override;
    /* 68 */ virtual void vfunc_68() override;
    /* 6C */ virtual void vfunc_6C() override;
    /* 70 */ virtual void vfunc_70() override;
    /* 7C */ virtual unk32 vfunc_7C(unk32 param1) override;
    /* 80 */ virtual unk32 vfunc_80(unk32 param1, unk32 param2) override;
    /* 88 */ virtual bool vfunc_88() override;
    /* 8C */ virtual bool vfunc_8C() override;
    /* 98 */ virtual void vfunc_98(u32 param1) override;
    /* A4 */ virtual void vfunc_A4() override;
    /* AC */ virtual void vfunc_AC() override;
    /* B0 */ virtual void vfunc_B0() override;
    /* B4 */ virtual void vfunc_B4() override;

    void func_ov031_020ea674();
    void func_ov031_020ea7a8();
    void func_ov031_020ecbe0();
    void func_ov031_020eaa68();
    void func_ov031_020ea86c();
    void func_ov031_020ea868();
    void func_ov031_020ea864();
    void func_ov031_020eac64();
    void func_ov031_020ead0c();
    void func_ov031_020ec034();
    void func_ov031_020ec05c();
    void func_ov031_020ec0d4();
    void func_ov031_020eb5f8();
    void func_ov031_020ead7c();
    void func_ov031_020eb188();
    void func_ov031_020ebfd8();
    void func_ov031_020eafe0();
    void func_ov031_020eaa8c();
    void func_ov031_020ec164();
    void func_ov031_020eba58();
    bool func_ov031_020ee724();

    static void func_ov031_020ea100();
    static void func_ov031_020ee1f4();

    // not sure where they go
    void func_ov031_020ea8c0();
    void func_ov031_020ea8c4();
    void func_ov031_020ea8c8();
    void func_ov031_020eaa88();
    void func_ov031_020eab0c();
    void func_ov031_020eab40(unk32 param1);
    void func_ov031_020eace0();
    void func_ov031_020ead78();
    void func_ov031_020eafb0();
    void func_ov031_020eb158();
    void func_ov031_020eb218();
    bool func_ov031_020eb2b0(VecFx32 *param1, unk32 param2);
    void func_ov031_020eb61c();
    void func_ov031_020eba8c();
    void func_ov031_020ec028();
    void func_ov031_020ec058();
    void func_ov031_020ec0a8();
    void func_ov031_020ec12c();
    void func_ov031_020ec170();
    bool func_ov031_020ec3d0();
    bool func_ov031_020ec49c();
    unk32 func_ov031_020ec54c();
    void func_ov031_020ec6d8(bool param1);
    bool func_ov031_020ec8c4();
    void func_ov031_020ecc68(unk32 param1);
    void func_ov031_020ecea8(UnkAngleStruct param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov031_020ed0b0();
    void func_ov031_020ed3c0();
    void func_ov031_020ed4e4(unk32 param1, unk32 param2);
    void func_ov031_020ed55c();
    bool func_ov031_020ed6cc(unk32 param1);
    bool func_ov031_020ed8ac(unk32 param1);
    void func_ov031_020edc80();
    void func_ov031_020edd14(VecFx32 *param1);
    void func_ov031_020edd54();
    void func_ov031_020ede30();
    void func_ov031_020edf98();
    unk16 func_ov031_020ee2c8();
    void func_ov031_020ee41c();
    void func_ov031_020ee4c4(UnkAngleStruct angle);
    void func_ov031_020ee654();
};

class ActorProfileUnkZLSL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkZLSL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZLSL *GetProfile();
};

// --- Actor ZSRS ---

class ActorProfileUnkZSRS : public ActorProfile_Derived2 {
public:
    /* 00 (base) */

    ActorProfileUnkZSRS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZSRS *GetProfile();
};
