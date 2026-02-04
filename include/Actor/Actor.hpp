#pragma once

#include "Actor/ActorId.hpp"
#include "Actor/ActorRef.hpp"
#include "Actor/ActorType.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "global.h"
#include "nitro/math.h"
#include "types.h"

class Actor_5c_Base {
public:
    /* 00 */ Vec3p mUnk_00;
    /* 0c */ s16 mUnk_0c;
    /* 0e */ unk16 mUnk_0e; // padding?
    /* 10 */

    Actor_5c_Base() {};
};

class Actor_5c : public Actor_5c_Base {
public:
    /* 00 (base) */

    Actor_5c() {};
    void func_ov000_020975f8();
};

class UnkStruct_ov000_020b539c {
public:
    /* 00 */ Actor_5c_Base mUnk_00[3];
    /* 30 */ ActorType *mUnk_30;
    /* 34 */

    ActorType **func_ov000_02073dc();
    ActorType **func_ov000_02073e8();
    ActorType *func_ov000_020974dc(u32 id);
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

class Actor : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ Vec3p mPos;
    /* 10 */ Vec3p mPrevPos;
    /* 1c */ Vec3p mVel;
    /* 28 */ u16 mAngle;
    /* 2a */ unk16 mUnk_2a;
    /* 2c */ unk32 mUnk_2c; // gravity?
    /* 30 */ Cylinder *mUnk_30;
    /* 34 */ Cylinder *mUnk_34;
    /* 38 */ unk32 *mUnk_38;
    /* 3c */ unk32 mUnk_3c;
    /* 40 */ void *mUnk_40; // pointer to `Actor_c4`
    /* 44 */ u16 mUnk_44;
    /* 46 */ unk16 mUnk_46;
    /* 48 */ unk16 mUnk_48;
    /* 4a */ unk8 mUnk_4a;
    /* 4a */ unk8 mUnk_4b;
    /* 4c */ unk16 mUnk_4c;
    /* 4e */ s16 mUnk_4e;
    /* 50 */ volatile u16 mUnk_50;
    /* 52 */ u16 mUnk_52;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ ActorFlags mFlags[1];
    /* 5c */ Actor_5c mUnk_5c;
    /* 6c */ u16 mUnk_6c; // actor user id?
    /* 6e */ u16 mUnk_6e;
    /* 70 */ u16 mUnk_70;
    /* 70 */ unk16 mUnk_72;
    /* 74 */ u8 mUnk_74;
    /* 74 */ u8 mUnk_75;
    /* 76 */ u16 mUnk_76;
    /* 78 */ u16 mUnk_78;
    /* 78 */ unk16 mUnk_7a;
    /* 7c */ unk32 mUnk_7c;
    /* 80 */ s16 mUnk_80;
    /* 80 */ unk16 mUnk_82;
    /* 84 */ unk32 mUnk_84;
    /* 88 */ unk32 mUnk_88;
    /* 8c */ ActorRef mRef;
    /* 90 */ ActorType *mType;
    /* 94 */

    /* 00 */ virtual void vfunc_00(Vec3p *param1);
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0c */ virtual unk8 vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual bool vfunc_18(unk32 param1);
    /* 1c */ virtual void vfunc_1c();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2c */ virtual void vfunc_2c(unk32 param1);
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual unk32 vfunc_34();
    /* 38 */ virtual unk32 vfunc_38(unk32 param1);
    /* 3c */ virtual bool vfunc_3c(unk32 param2, Vec3p *param3);
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4c */ virtual ~Actor();
    /* 54 */

    unk32 func_01fff5d0(unk32 param1, unk32 param2);

    void ResetFlags() {
        *(u32 *) this->mFlags = 0;
    }

    Actor();
    void func_ov000_0209848c(ActorType *param1);
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
    void func_ov000_0209853c();
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

    unk32 func_ov000_02098a60(unk32 param1);

    void func_ov017_020bf5c4(Vec3p *param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
};

extern UnkStruct_ov000_020b539c data_ov000_020b539c;
