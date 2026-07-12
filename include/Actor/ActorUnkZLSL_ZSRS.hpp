#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor_Derived1.hpp"
#include "Render/ModelRender.hpp"
#include "global.h"
#include "types.h"

// NPC Renderer ?
class ModelRender_ov000_020b4d64 : public ModelRender {
public:
    /* 00 (base) */
    /* 60 */

    ModelRender_ov000_020b4d64(G3d_Model *pModel) :
        ModelRender(pModel) {}

    // data_ov000_020b4d64
    /* 0C */ virtual void vfunc_0C() override;                            // func_ov000_02057a88
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1) override; // func_ov000_0209a79c
};

class ModelRender_ov031_02113670 : public ModelRender_ov000_020b4d64 {
public:
    /* 00 (base) */
    /* 60 */

    ModelRender_ov031_02113670(G3d_Model *pModel) :
        ModelRender_ov000_020b4d64(pModel) {}

    // data_ov031_02113670
    /* 00 */ virtual ~ModelRender_ov031_02113670() override; // func_ov031_020ea500 (T) & _ZN19func_ov031_020ee79cD0Ev
    /* 0C */ virtual void vfunc_0C() override;               // func_ov031_020ea0f8 (T)
};

struct ActorUnkZLSL_AnimationTag {
    unk32 index;
    char name[0x14];
};

class UnkStruct_ov000_020b31a8 {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_ov000_020b31a8
    /* 00 */ virtual ~UnkStruct_ov000_020b31a8(); // func_ov000_02099aec (T) & func_ov000_02099af0 (T)
    /* 08 */ virtual void vfunc_08();             // func_ov000_02099b00
    /* 0C */ virtual void vfunc_0C();             // func_ov000_02099b38
    /* 10 */ virtual UnkSystem5 *vfunc_10();      // func_ov000_0209a13c
    /* 14 */ virtual void vfunc_14();             // func_ov000_0209a144
    /* 18 */ virtual void vfunc_18();             // func_ov000_0209a0e4
    /* 1C */ virtual void vfunc_1C(ActorUnkZLSL_AnimationTag param1, unk32 param2, unk32 param3,
                                   unk32 param4);               // func_ov000_02099cb0
    /* 20 */ virtual void vfunc_20();                           // func_ov000_02099ba0
    /* 24 */ virtual void vfunc_24();                           // func_ov000_0209a06c
    /* 28 */ virtual void vfunc_28();                           // func_ov000_0209a0f4
    /* 2C */ virtual void vfunc_2C();                           // func_ov000_0209a10c
    /* 30 */ virtual s8 vfunc_30();                             // func_ov000_0209a180
    /* 34 */ virtual void vfunc_34();                           // func_ov000_0209a124
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2); // func_ov000_0209a170
    /* 3C */ virtual void vfunc_3C();                           // func_ov000_0209a14c
};

class ActorUnkZLSL_27CC : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ ModelRender *mUnk_08;
    /* 0C */ STRUCT_PAD(0x0C, 0x18);
    /* 18 */ s8 mUnk_18;
    /* 19 */

    // data_ov031_0211369c
    /* 00 */ virtual ~ActorUnkZLSL_27CC() override;                      // func_ov031_020ea518 (T) & func_ov031_020ee7d4
    /* 30 */ virtual s8 vfunc_30() override;                             // func_ov031_020ee794
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override; // func_ov031_020ee784
    /* 3C */ virtual void vfunc_3C() override;                           // func_ov031_020ee760
};

class UnkStruct_ov031_021136e4 : public ActorUnkZLSL_27CC {
public:
    /* 00 (base) */
    /* 04 */

    // data_ov031_021136e4
    /* 00 */ virtual ~UnkStruct_ov031_021136e4() override; // func_ov031_020ea50c (T) & func_ov031_020ee7b8
};

class UnkStruct_ov000_020b31f0 : public UnkStruct_ov000_020b31a8 {
public:
    /* 00 (vtable) */
    /* 04 */

    // data_ov000_020b31f0
    /* 00 */ virtual ~UnkStruct_ov000_020b31f0() override; // func_ov000_0209a228 (T) & func_ov000_0209a234 (T)
    /* 08 */ virtual void vfunc_08() override;             // func_ov000_0209a254
    /* 0C */ virtual void vfunc_0C() override;             // func_ov000_0209a288
    /* 10 */ virtual UnkSystem5 *vfunc_10() override;      // func_ov000_0209a320
    /* 14 */ virtual void vfunc_14() override;             // func_ov000_0209a334
    /* 1C */ virtual void vfunc_1C(char param1[], unk32 param2, unk32 param3,
                                   unk32 param4) override;               // func_ov000_0209a35c
    /* 20 */ virtual void vfunc_20() override;                           // func_ov000_0209a3e4
    /* 28 */ virtual void vfunc_28() override;                           // func_ov000_0209a2f0
    /* 2C */ virtual void vfunc_2C() override;                           // func_ov000_0209a308
    /* 30 */ virtual s8 vfunc_30() override;                             // func_ov000_0209a348
    /* 34 */ virtual void vfunc_34() override;                           // func_ov000_0209a6d4
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override; // func_ov000_0209a738
    /* 3C */ virtual void vfunc_3C() override;                           // func_ov000_0209a714
    /* 40 */ virtual void vfunc_40();                                    // func_ov000_0209a70c
};

class UnkStruct_ov031_0211372c : public UnkStruct_ov000_020b31f0 {
public:
    /* 00 (base) */
    /* 04 */ UnkSystem5 *mUnk_04;
    /* 08 */ ModelRender *mUnk_08;
    /* 0C */ STRUCT_PAD(0x0C, 0x1C);
    /* 1C */ UnkSystem5 *mUnk_1C;
    /* 20 */

    // data_ov031_0211372c
    /* 00 */ virtual ~UnkStruct_ov031_0211372c() override;               // func_ov031_020ea4f4 (T) & func_ov031_020ee840
    /* 18 */ virtual void vfunc_18() override;                           // func_ov031_020ee968
    /* 38 */ virtual void vfunc_38(unk32 param1, unk32 param2) override; // func_ov031_020ee814
    /* 3C */ virtual void vfunc_3C() override;                           // func_ov031_020ee7f0
    /* 40 */ virtual void vfunc_40() override;                           // func_ov031_020eeae4
};

class UnkStruct_ov031_02113d14 : public UnkStruct_ov031_0211372c {
public:
    /* 00 (base) */
    /* 20 */

    // data_ov031_02113d14
    /* 00 */ virtual ~UnkStruct_ov031_02113d14(); // func_ov031_020ee93c (T) & func_ov031_020ee948 (T)
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

    void func_ov031_020eeca8();
};

class ActorUnkZLSL : public Actor_Derived1 {
public:
    /* 0000 (base) */
    /* 0120 */ STRUCT_PAD(0x120, 0x1620);
    /* 1620 */ ModelRender_ov031_02113670 mUnk_1620;
    /* 1680 */ STRUCT_PAD(0x1680, 0x1690);
    /* 1690 */ ActorUnkZLSL_1690 mUnk_1690;
    /* 1694 */ STRUCT_PAD(0x1694, 0x276C);
    /* 276C */ ModelRender_ov031_02113670 mUnk_276C;
    /* 27CC */ ActorUnkZLSL_27CC mUnk_27CC;
    /* 1694 */ STRUCT_PAD(0x27E8, 0x2800);
    /* 2800 */ unk32 mUnk_2800;
    /* 2804 */ STRUCT_PAD(0x2804, 0x2828);
    /* 2828 */ UnkStruct_PlayerGet_ec mUnk_2828;
    /* 282C */ unk32 mUnk_282C;
    /* 2830 */ unk32 mUnk_2830;
    /* 2834 */ STRUCT_PAD(0x2834, 0x2838);
    /* 2838 */ unk32 mUnk_2838;
    /* 283C */ unk32 mUnk_283C;
    /* 2840 */ STRUCT_PAD(0x2840, 0x2844);
    /* 2844 */ unk32 mUnk_2844;
    /* 2848 */ unk32 mUnk_2848;
    /* 284C */ STRUCT_PAD(0x284C, 0x2850);
    /* 2850 */ unk32 mUnk_2850;
    /* 2854 */ unk32 mUnk_2854;
    /* 2858 */ STRUCT_PAD(0x2858, 0x285C);
    /* 285C */ unk32 mUnk_285C;
    /* 2860 */ unk32 mUnk_2860;
    /* 2864 */ STRUCT_PAD(0x2864, 0x286A);
    /* 286A */ unk16 mUnk_286A;
    /* 286C */ unk16 mUnk_286C;
    /* 286E */ unk16 mUnk_286E;
    /* 2870 */ unk16 mUnk_2870;
    /* 2872 */ s16 mUnk_2872;
    /* 2874 */ bool mUnk_2874;
    /* 2875 */ STRUCT_PAD(0x2875, 0x2878);
    /* 2878 */ VecFx32 mUnk_2878;
    /* 2884 */ unk32 mUnk_2884;
    /* 2888 */ fx32 mUnk_2888;
    /* 288C */ unk32 mUnk_288C;
    /* 2890 */ fx32 mUnk_2890;
    /* 2894 */ Cylinder mUnk_2894;
    /* 28A4 */ VecFx32 mUnk_28A4;
    /* 28B0 */ VecFx32 mUnk_28B0;
    /* 28BC */ unk32 mUnk_28BC;
    /* 28C0 */ unk32 mUnk_28C0;
    /* 28C4 */ unk32 mUnk_28C4;
    /* 28C8 */ unk32 mUnk_28C8;
    /* 2894 */ STRUCT_PAD(0x28CC, 0x28DC);
    /* 28DC */ ActorRef mUnk_28DC;
    /* 28E0 */ STRUCT_PAD(0x28E0, 0x28E4);
    /* 28E4 */ unk16 mUnk_28E4;
    /* 28E6 */ STRUCT_PAD(0x28E6, 0x28E8);
    /* 28E8 */ unk32 mUnk_28E8;
    /* 28EC */ STRUCT_PAD(0x28EC, 0x28F4);
    /* 28F4 */ VecFx32 mUnk_28F4;
    /* 2900 */ u16 mUnk_2900;
    /* 2902 */ STRUCT_PAD(0x2902, 0x2904);
    /* 2904 */ unk32 mUnk_2904;
    /* 2908 */

    ActorUnkZLSL();

    // data_ov031_02113880
    /* 00 */ virtual void GetOffsetPos(VecFx32 *pPos) const override;     // func_ov031_020edfdc
    /* 18 */ virtual bool vfunc_18(unk32 param1) override;                // func_ov031_020ea698
    /* 20 */ virtual void vfunc_20() override;                            // func_ov031_020ea8cc
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;                // func_ov031_020ec1d4
    /* 4C */ virtual ~ActorUnkZLSL() override;                            // func_ov031_020ea524 (T) & func_ov031_020ea5c8 (T)
    /* 58 */ virtual void vfunc_58(ActorState state) override;            // func_ov031_020ea870
    /* 68 */ virtual void vfunc_68() override;                            // func_ov031_020ec7e4
    /* 6C */ virtual void vfunc_6C() override;                            // func_ov031_020ec764
    /* 70 */ virtual void vfunc_70() override;                            // func_ov031_020ec7a4
    /* 7C */ virtual unk32 vfunc_7C(unk32 param1) override;               // func_ov031_020ec2d0
    /* 80 */ virtual unk32 vfunc_80(unk32 param1, unk32 param2) override; // func_ov031_020ee6d0
    /* 88 */ virtual bool vfunc_88() override;                            // func_ov031_020ec860
    /* 8C */ virtual bool vfunc_8C() override;                            // func_ov031_020ec8bc
    /* 98 */ virtual void vfunc_98(unk32 param1) override;                // func_ov031_020ec970
    /* A4 */ virtual void vfunc_A4() override;                            // func_ov031_020ee000
    /* AC */ virtual void vfunc_AC() override;                            // func_ov031_020ea7a4
    /* B0 */ virtual void vfunc_B0() override;                            // func_ov031_020ec5f0
    /* B4 */ virtual void vfunc_B4() override;                            // func_ov031_020ee3e8

    bool func_ov031_020ea0b4(Actor *param1);
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
    static void func_ov031_020ee1f4();
    bool func_ov031_020ee724();

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
    void func_ov031_020ed47c();
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
    ~ActorProfileUnkZLSL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZLSL *GetProfile();
};

// --- Actor ZSRS ---

class ActorUnkZSRS : public Actor_Derived1 {
public:
    /* 000 (base) */
    /* 120 */ UnkStruct_ov031_02113d14 mUnk_0120;
    /* 140 */

    ActorUnkZSRS();

    // data_ov031_02113944
    /* 4C */ virtual ~ActorUnkZSRS() override;
};

class ActorProfileUnkZSRS : public ActorProfile_Derived2 {
public:
    /* 00 (base) */

    ActorProfileUnkZSRS();
    ~ActorProfileUnkZSRS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkZSRS *GetProfile();
};
