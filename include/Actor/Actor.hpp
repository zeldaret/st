#pragma once

#include "Actor/ActorId.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "global.h"
#include "types.h"
#include "versions.h"
#include <nitro/math.h>

// some functions use thumb mode on the japanese version (only in overlay 40?)
#if IS_JP
    #define OV040_ARM THUMB
#else
    #define OV040_ARM ARM
#endif

class Actor_5c_Base {
public:
    /* 00 */ Vec3p mUnk_00;
    /* 0C */ s16 mUnk_0C;
    /* 0E */ unk16 mUnk_0E; // padding?
    /* 10 */

    Actor_5c_Base() {};
};

class Actor_5c : public Actor_5c_Base {
public:
    /* 00 (base) */
    // /* 04 */ STRUCT_PAD(0x04, 0x28);
    // /* 28 */ unk32 mUnk_28;

    Actor_5c() {};
    void func_ov000_020975f8();
};

class Actor_5c_temp : public Actor_5c_Base {
public:
    /* 00 (base) */
    /* 10 */ unk16 mUnk_10;
    /* 14 */ STRUCT_PAD(0x14, 0x28);
    /* 28 */ unk32 mUnk_28;

    Actor_5c_temp() {};
    void func_ov000_020975f8();
};

class UnkStruct_ov000_020b539c {
public:
    /* 00 */ Actor_5c_Base mUnk_00[3];
    /* 30 */ ActorProfile *mUnk_30;
    /* 34 */

    ActorProfile **func_ov000_02073dc();
    ActorProfile **func_ov000_02073e8();
    ActorProfile *func_ov000_020974dc(u32 id);
};

typedef u32 ActorFlags;
enum ActorFlag_ {
    ActorFlag_Alive       = FLAG(0, 0),
    ActorFlag_Visible     = FLAG(0, 1),
    ActorFlag_2           = FLAG(0, 2),
    ActorFlag_Active      = FLAG(0, 3), // stops updating if false
    ActorFlag_4           = FLAG(0, 4),
    ActorFlag_5           = FLAG(0, 5),
    ActorFlag_6           = FLAG(0, 6),
    ActorFlag_7           = FLAG(0, 7),
    ActorFlag_Grabbed     = FLAG(0, 8),
    ActorFlag_9           = FLAG(0, 9),
    ActorFlag_Interacting = FLAG(0, 10), // set when player interacts with actor
    ActorFlag_11          = FLAG(0, 11),
    ActorFlag_12          = FLAG(0, 12),
    ActorFlag_13          = FLAG(0, 13),
    ActorFlag_14          = FLAG(0, 14),
    ActorFlag_15          = FLAG(0, 15),
    ActorFlag_16          = FLAG(0, 16),
    ActorFlag_17          = FLAG(0, 17),
    ActorFlag_18          = FLAG(0, 18),
    ActorFlag_19          = FLAG(0, 19),
    ActorFlag_20          = FLAG(0, 20),
    ActorFlag_21          = FLAG(0, 21),
    ActorFlag_22          = FLAG(0, 22),
    ActorFlag_23          = FLAG(0, 23),
    ActorFlag_24          = FLAG(0, 24),
    ActorFlag_25          = FLAG(0, 25),
    ActorFlag_26          = FLAG(0, 26),
    ActorFlag_27          = FLAG(0, 27),
    ActorFlag_28          = FLAG(0, 28),
    ActorFlag_29          = FLAG(0, 29),
    ActorFlag_30          = FLAG(0, 30),
    ActorFlag_31          = FLAG(0, 31),
};

class Actor_c4;

class Actor : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ Vec3p mPos;
    /* 10 */ Vec3p mPrevPos;
    /* 1C */ Vec3p mVel;
    /* 28 */ s16 mAngle;
    /* 2A */ unk16 mUnk_2A;
    /* 2C */ unk32 mUnk_2C; // gravity?
    /* 30 */ Cylinder *mUnk_30;
    /* 34 */ Cylinder *mUnk_34;
    /* 38 */ unk32 *mUnk_38;
    /* 3C */ unk32 mUnk_3C;
    /* 40 */ Actor_c4 *mUnk_40;
    /* 44 */ u16 mUnk_44;
    /* 46 */ unk16 mUnk_46;
    /* 48 */ unk16 mUnk_48;
    /* 4A */ unk8 mUnk_4A;
    /* 4A */ unk8 mUnk_4B;
    /* 4C */ s16 mUnk_4C;
    /* 4E */ s16 mUnk_4E;
    /* 50 */ volatile u16 mUnk_50;
    /* 52 */ u16 mUnk_52;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ ActorFlags mFlags[1];
    /* 5C */ Actor_5c mUnk_5C;
    /* 6C */ u16 mUnk_6C; // actor user id?
    /* 6E */ u16 mUnk_6E;
    /* 70 */ u16 mUnk_70;
    /* 70 */ u16 mUnk_72;
    /* 74 */ u8 mUnk_74;
    /* 74 */ u8 mUnk_75;
    /* 76 */ u16 mUnk_76;
    /* 78 */ u16 mUnk_78;
    /* 7A */ unk16 mUnk_7A;
    /* 7C */ unk32 mUnk_7C;
    /* 80 */ s16 mUnk_80;
    /* 80 */ unk16 mUnk_82;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8C */ ActorRef mRef;
    /* 90 */ ActorProfile *mType;
    /* 94 */

    /* 00 */ virtual void vfunc_00(Vec3p *param1);
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0C */ virtual unk8 vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual bool vfunc_18(unk32 param1);
    /* 1C */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2c(unk32 param1);
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual unk32 vfunc_34();
    /* 38 */ virtual unk32 vfunc_38(unk32 param1);
    /* 3C */ virtual bool vfunc_3c(unk32 param2, Vec3p *param3);
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4C */ virtual ~Actor();
    /* 54 */

    unk32 func_01fff5d0(unk32 param1, unk32 param2);

    void ResetFlags() {
        *(u32 *) this->mFlags = 0;
    }

    Actor();

    ActorId GetActorId();

    void func_ov000_0209848c(ActorProfile *param1);
    void func_ov000_020984b0();
    void func_ov000_020984b4();
    void func_ov000_020984b8();
    void func_ov000_020984bc();
    void func_ov000_020984c0();
    void func_ov000_020984c4();
    unk32 func_ov000_020984c8();
    void func_ov000_020984d0();
    void func_ov000_020984f0();
    unk32 func_ov000_02098910(unk32 param1, unk32 param2);

    s32 func_ov000_02098518(unk32 *param1);
    Vec3p *func_ov000_0209853c(unk32 param1);
    s32 func_ov000_02098554();
    s16 func_ov000_0209856c();
    s8 func_ov000_02098578();
    s32 func_ov000_02098584();
    s32 func_ov000_020985f0(void *param1);
    void func_ov000_0209862c(unk32 param1);

    void func_ov000_020973f4(UnkStruct_ov000_020b539c *param1, ActorId param2, Actor_5c *param3, unk32 param4);
    void func_ov000_020973f4(UnkStruct_ov000_020b539c *param1, ActorId param2, Actor_5c *param3);
    void func_ov000_020973f4(UnkStruct_ov000_020b539c *param1, ActorId param2, Actor_5c param3);
    void func_ov000_020989e0();

    bool func_ov000_02098a60(unk32 param1);
    void func_ov000_02098a88(unk32 param1, unk32 param2);

    void func_ov017_020bf5c4(Vec3p *param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
};

class Actor_Derived1 : public Actor {
public:
    /* 94 */ unk32 mUnk_94;
    /* 98 */

    Actor_Derived1(); // func_ov026_02110c7c

    // data_ov026_02137570
    /* 4C */ virtual ~Actor_Derived1() override {}
    /* 54 */ virtual void vfunc_54();
    /* 58 */ virtual void vfunc_58();
    /* 5C */

    void func_ov026_02110ca4();
    void func_ov026_02110d14();
    void func_ov026_02110d38();
    void func_ov026_02110d68();
    void func_ov026_02110d7c();
    void func_ov026_02110dac();
    void func_ov026_02110ddc();
    void func_ov026_02110e38();
    void func_ov026_02110e70();
    void func_ov026_02110eb8();
    void func_ov026_02110ee4();
    void func_ov026_02110f28();
    void func_ov026_02110f68();
    void func_ov026_02110fcc();
};

class Actor_Derived2 : public Actor_Derived1 {
public:
    /* 00 (base) */
    /* 98 */ unk16 mUnk_98;
    /* 9A */ unk16 mUnk_9A;
    /* 9C */

    Actor_Derived2(); // func_ov026_02111044

    // data_ov026_021375d4
    /* 4C */ virtual ~Actor_Derived2() override;
};

struct Actor_c4_stack {
    unk32 param1;
    unk32 param2;
};

class Actor_c4_Base {
public:
    Actor_c4_Base(void *param1, unk32 param2);
};

class Actor_c4 : public Actor_c4_Base {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk16 mUnk_08;
    /* 08 */ unk16 mUnk_0A;
    /* 0C */ unk16 mUnk_0C;
    /* 0C */ unk16 mUnk_0E;
    /* 10 */ unk16 mUnk_10;
    /* 10 */ unk16 mUnk_12;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ Actor *mUnk_20;
    /* 24 */

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2);
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0c(unk32 param1);
    /* 10 */

    Actor_c4(Actor *param1) :
        Actor_c4_Base(&param1->mRef, 0) {}
};

class Actor_9c {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */

    /* 00 */ virtual void vfunc_00(); // corresponds to func_ov000_02097c14
    /* 04 */ virtual void vfunc_04(); // corresponds to func_ov000_02097c20
    /* 08 */

    Actor_9c();
    void func_ov000_02097bec();
};

class Actor_UnkSystem1_Base {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    Actor_UnkSystem1_Base() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
        this->mUnk_08 = 0;
    }
};

class Actor_UnkSystem1 : public Actor_UnkSystem1_Base {
public:
    /* 00 (vtable) */
    /* 04 (base) */
    /* 10 */

    Actor_UnkSystem1() {}

    /* 00 */ virtual ~Actor_UnkSystem1();
    /* 08 */ virtual void vfunc2_08(); // func_ov000_0207c000
    /* 0C */ virtual void vfunc2_0C();
    /* 10 */ virtual void vfunc2_10(); // func_ov000_0207c010
    /* 14 */
};

class Actor_UnkSystem2_Base {
public:
    /* 000 */ unk32 mUnk_000;
    /* 004 */ unk32 mUnk_004;
    /* 008 */ unk32 mUnk_008;
    /* 00C */ unk32 mUnk_00C;
    /* 010 */ unk32 mUnk_010;
    /* 014 */ unk32 mUnk_014;
    /* 018 */ unk32 mUnk_018;
    /* 01C */ unk32 mUnk_01C[4];
    /* 02C */ unk32 mUnk_02C[4];
    /* 03C */ unk32 mUnk_03C;
    /* 040 */ unk32 mUnk_040;
    /* 044 */ Vec3p mUnk_044[4];
    /* 074 */ Vec3p mUnk_074[4];
    /* 0A4 */ Vec3p mUnk_0A4[4];
    /* 0D4 */ Vec3p mUnk_0D4[4];
    /* 104 */ unk32 mUnk_104;
    /* 108 */ unk32 mUnk_108;
    /* 10C */ unk32 mUnk_10C;
    /* 110 */ unk8 mUnk_110[0x70];
    /* 180 */ unk8 mUnk_180;
    /* 181 */ unk8 mUnk_181;
    /* 182 */ bool mUnk_182;
    /* 183 */ unk8 mUnk_183;
    /* 184 */ STRUCT_PAD(0x184, 0x1C4); // unsure if this is here

    Actor_UnkSystem2_Base(); // func_ov026_020ee130
};

class Actor_UnkSystem2 : public Actor_UnkSystem2_Base {
public:
    /* 000 (base) */
    /* 1C4 */ unk32 mUnk_1C4;
    /* 1C8 */ unk32 mUnk_1C8;
    /* 1CC */ unk32 mUnk_1CC;
    /* 1D0 */ unk32 mUnk_1D0;
    /* 1D4 */ union {
        struct {
            u8 mUnk_1D4_0 : 1;
            u8 mUnk_1D4_1 : 1;
            u8 mUnk_1D4_2 : 1;
            u8 mUnk_1D4_3 : 1;
            u8 mUnk_1D4_4 : 1;
            u8 mUnk_1D4_5 : 1;
            u8 mUnk_1D4_6 : 1;
            u8 mUnk_1D4_7 : 1;
        };
        u8 mUnk_1D4;
    };
    /* 1D8 */ unk32 mUnk_1D8;
    /* 1DC */ unk32 mUnk_1DC;
    /* 1E0 */ unk32 mUnk_1E0;
    /* 1E4 */ unk16 mUnk_1E4;
    /* 1E6 */ unk16 mUnk_1E6;
    /* 1E8 */ unk32 mUnk_1E8;
    /* 1EC */

    Actor_UnkSystem2(unk32 param1, unk32 param2); // func_ov026_020f90b0
    ~Actor_UnkSystem2();

    void func_ov026_020ee538(unk32 param1);
    void func_ov026_020f93d4(unk32, u16);
    Vec3p *func_ov026_020f9ecc(void);
    Vec3p *func_ov026_020f9ec4(void);
    bool func_ov026_020fa358(void);
    bool func_ov026_020fa46c(unk32, u16);
    bool func_ov026_020fa55c(void);
    unk32 func_ov026_020fa73c();
    void func_ov026_020fa77c(bool);
    unk32 func_ov026_020fa7c0(void);
    unk32 func_ov026_020fa7f4(void);
    bool func_ov026_020fac30(u32, unk32, unk32, unk32);
    void func_ov026_020fa838(unk32, u8);
    bool func_ov026_020fb0a4(void);
};

class Actor_UnkStruct1 {
public:
    /* 00 */ unk16 mUnk_00;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk16 mUnk_08;
    /* 0A */ unk16 mUnk_0A;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */

    Actor_UnkStruct1(); // func_ov026_020fb21c
};

class Actor_UnkSystem3_Base {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk16 mUnk_04;
    /* 06 */ unk16 mUnk_06;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ unk32 mUnk_20;
    /* 28 */ unk32 mUnk_24;
    /* 28 */

    Actor_UnkSystem3_Base() {
        this->mUnk_00 = 0;
        this->mUnk_04 = 0;
        this->mUnk_08 = 0;
        this->mUnk_0C = 0;
        this->mUnk_10 = 0;
        this->mUnk_14 = 0;
        this->mUnk_18 = 0;
        this->mUnk_1C = 0;
        this->mUnk_20 = 0;
        this->mUnk_24 = 0;
    }
};

class Actor_UnkSystem3 : public Actor_UnkSystem3_Base {
public:
    /* 00 (vtable) */
    /* 30 */

    Actor_UnkSystem3() {}

    // data_ov000_020b27c8
    /* 00 */ virtual ~Actor_UnkSystem3(); // func_ov000_0207b934 & func_ov000_0207b948
    /* 08 */ virtual void vfunc_08(); // func_ov000_0207b71c
    /* 0C */ virtual void vfunc_0C(); // func_ov000_0207b754
    /* 10 */ virtual void vfunc_10(); // func_ov000_0207b70c
    /* 14 */
};

class Actor_UnkSystem3_Derived1 : public Actor_UnkSystem3 {
public:
    Actor_UnkSystem3_Derived1() {}
};

class Actor_UnkSystem4 {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    Actor_UnkSystem4(); // func_ov000_0207ec88

    // data_ov000_020b287c
    /* 00 */ virtual ~Actor_UnkSystem4(); // func_ov000_0207eca8 & func_ov000_0207ecd8
    /* 08 */ virtual void vfunc_08(); // func_ov000_0207ed84
    /* 0C */
};

class Actor_UnkSystem5 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    Actor_UnkSystem5(); // func_ov026_020ff498

    void func_ov026_0210136c(unk32 param1);
    unk32 func_ov026_021016d8(unk32);
    void func_ov026_02101890(unk32, unk32);
    void func_ov026_02101c54(unk32 param1);
};

class Actor_UnkSystem6_Base : public UnkSystem4 {
public:
    /* 00 (base) */
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ void *mUnk_68;
    /* 6C */

    Actor_UnkSystem6_Base(unk32 param1, void *param2); // func_ov000_0205a64c

    // data_ov000_020b1be4
    /* 00 */ virtual ~Actor_UnkSystem6_Base() {} // func_ov000_0205a804 & func_ov000_0205a818
    /* 08 */ virtual void vfunc_08(unk32 param1);
    /* 1C */ virtual void vfunc_1C(UnkSystem4_vfunc_1C *param1);
};

class Actor_UnkSystem6 : public Actor_UnkSystem6_Base {
public:
    /* 00 (base) */
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    Actor_UnkSystem6(unk32 param1) :
        Actor_UnkSystem6_Base(param1, &mUnk_6C) {}
};

class Actor_UnkSystem7 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x6C);
    /* 6C */

    Actor_UnkSystem7(); // func_ov026_020f419c
    ~Actor_UnkSystem7(); // func_ov026_020f3c18
};

class Actor_UnkSystem8 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0xCC);
    /* CC */

    Actor_UnkSystem8(); // func_ov026_020f41dc
    ~Actor_UnkSystem8(); // func_ov026_020f26b0
};

class Actor_UnkSystem9_Base_F0_00 : public UnkStruct_ov019_020d24c8_28_258_00 {
public:
    /* 00 (base) */
    /* 08 */ unk32 mUnk_08;
    /* 0C */
};

class Actor_UnkSystem9_Base_F0 {
public:
    /* 00 */ Actor_UnkSystem9_Base_F0_00 mUnk_00;
    /* 0C */ Actor_UnkSystem9_Base_F0_00 mUnk_0C;
    /* 18 */ Actor_UnkSystem9_Base_F0_00 mUnk_18;
    /* 24 */ Actor_UnkSystem9_Base_F0_00 mUnk_24;
    /* 30 */ Actor_UnkSystem9_Base_F0_00 mUnk_30;
    /* 3C */ Actor_UnkSystem9_Base_F0_00 mUnk_3C;
    /* 48 */ Actor_UnkSystem9_Base_F0_00 mUnk_48;
    /* 54 */ Actor_UnkSystem9_Base_F0_00 mUnk_54;
    /* 60 */ Actor_UnkSystem9_Base_F0_00 mUnk_60;
    /* 6C */ Actor_UnkSystem9_Base_F0_00 mUnk_6C;
    /* 78 */ Actor_UnkSystem9_Base_F0_00 mUnk_78;
    /* 84 */ Actor_UnkSystem9_Base_F0_00 mUnk_84;
    /* 90 */ unk32 mUnk_90;
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ unk32 mUnk_9C;
    /* A0 */ unk32 mUnk_A0;
    /* A4 */ unk8 mUnk_A4;
    /* A5 */ unk8 mUnk_A5; // pad?
    /* A6 */ unk8 mUnk_A6; // pad?
    /* A7 */ unk8 mUnk_A7; // pad?
    /* A8 */

    Actor_UnkSystem9_Base_F0(); // func_ov026_020d9618
};

class Actor_UnkSystem9_Base {
public:
    /* 000 */ UnkSubStruct19 mUnk_000;
    /* 078 */ UnkSubStruct19 mUnk_078;
    /* 0F0 */ Actor_UnkSystem9_Base_F0 mUnk_0F0;
    /* 198 */

    Actor_UnkSystem9_Base(); // func_ov026_02105444
};

class Actor_UnkSystem9 : public Actor_UnkSystem9_Base {
public:
    /* 000 (base) */
    /* 198 */

    Actor_UnkSystem9(); // func_ov026_021056a4
};

class Actor_UnkSystem9_2 : public Actor_UnkSystem9_Base {
public:
    /* 000 (base) */
    /* 198 */

    Actor_UnkSystem9_2(); // func_ov026_0210566c
    void func_ov026_02105468(unk32);
};

//! TODO: fill members
class Actor_UnkSystem10 {
public:
    /* 00 */ unk32 mUnk_00;

    Actor_UnkSystem10(); // func_ov026_020fd690
};

//! TODO: fill members
class Actor_UnkSystem10_2 {
public:
    /* 00 */ unk32 mUnk_00;

    Actor_UnkSystem10_2(); // func_ov026_020fd690
};

struct Actor_UnkStruct4 {
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ union {
        u8 mUnk_0C[4];
        u32 mUnk_0C_32;
    };
    /* 10 */ Actor_UnkSystem5 mUnk_10;

    Actor_UnkStruct4() :
        mUnk_0C_32(0) {}
};

struct Actor_UnkStruct5 {
    /* 000 */ Actor_UnkSystem6 mUnk_000;
    /* 070 */ STRUCT_PAD(0x70, 0xFC);
    /* 0FC */ Actor_UnkSystem7 mUnk_0FC[2];
    /* 1D4 */ Actor_UnkSystem8 mUnk_1D4[1];
    /* 2A0 */ unk32 mUnk_2A0;
    /* 2A4 */ STRUCT_PAD(0x2A4, 0x620);
    /* 620 */

    Actor_UnkStruct5() :
        mUnk_000(0x0C),
        mUnk_2A0(0) {}
};

extern UnkStruct_ov000_020b539c data_ov000_020b539c_eur;
