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

class ActorParams {
public:
    /* 00 */ Vec3p mInitialPos;
    /* 0C */ s16 mInitialAngle;
    /* 0E */ s8 mUnk_0E;
    /* 0F */ bool mUnk_0F;
    /* 10 */ u16 mParams[4];
    /* 18 */ Vec2b mUnk_18;
    /* 1A */ u16 mUnk_1A;
    /* 1C */ union {
        unk32 mUnk_1C;
        u16 mUnk_1C_0;
        u16 mUnk_1C_2;
    };
    /* 20 */ union {
        unk32 mUnk_20;
        unk16 mUnk_20_0;
        unk16 mUnk_20_2;
    };
    /* 24 */ unk16 mUnk_24;
    /* 26 */ union {
        unk16 mUnk_26;
        unk8 mUnk_26_0;
        unk8 mUnk_26_1;
    };
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */

    void func_ov000_020975f8();
};

class UnkStruct_ov000_020b539c {
public:
    /* 00 */ ActorParams mUnk_00;
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
    /* 5C */ ActorParams mUnk_5C;
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

    void Kill() {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
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

    void func_ov000_020973f4(UnkStruct_ov000_020b539c *param1, ActorId param2, ActorParams *param3, unk32 param4);
    void func_ov000_020973f4(UnkStruct_ov000_020b539c *param1, ActorId param2, ActorParams *param3);
    void func_ov000_020973f4(UnkStruct_ov000_020b539c *param1, ActorId param2, ActorParams param3);
    void func_ov000_020989e0();

    bool func_ov000_02098a60(unk32 param1);
    void func_ov000_02098a88(unk32 param1, unk32 param2);

    void func_ov017_020bf5c4(Vec3p *param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
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

extern UnkStruct_ov000_020b539c data_ov000_020b539c_eur;
