#pragma once

#include "Actor/ActorId.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "flags.h"
#include "global.h"
#include "math.hpp"
#include "types.h"
#include "versions.h"

class ActorParams {
public:
    /* 00 */ VecFx32 mInitialPos;
    /* 0C */ s16 mInitialAngle;
    /* 0E */ s8 mUnk_0E;
    /* 0F */ bool mUnk_0F;
    /* 10 */ u16 mParams[4];
    /* 18 */ u8 mUnk_18[2];
    /* 1A */ u16 mUnk_1A[2];
    /* 1E */ u16 mUnk_1E;
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
    /* 28 */ ActorRef mUnk_28;
    /* 2C */ u32 mUnk_2C;
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
    ActorProfile *GetProfileFromId(ActorId actorId);
    void func_ov000_02097444(ActorId actorId, ActorParams *pParams, unk32 param3);
};

class Actor_C4;

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

class Actor_C4;

struct ActorGrabParams {
    /* 00 */ u16 unk_00;
    /* 02 */ u16 unk_02;
    /* 04 */
};

class Actor_9C {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ ActorRef mUnk_0C;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */ unk32 mUnk_18;
    /* 1C */ u16 mUnk_1C;
    /* 1E */ u16 mUnk_1E;
    /* 20 */

    /* 00 */ virtual void vfunc_00(); // corresponds to func_ov000_02097c14
    /* 04 */ virtual void vfunc_04(); // corresponds to func_ov000_02097c20
    /* 08 */

    Actor_9C();
    void func_ov000_02097bec();
};

class Actor_38 {
public:
    /* 00 (base) */ STRUCT_PAD(0x00, 0x08);
    /* 08 */ unk16 mUnk_08;
};

typedef s16 ActorState;
#define ActorState_None -1

class Actor {
public:
    /* 00 (vtable) */
    /* 04 */ VecFx32 mPos;
    /* 10 */ VecFx32 mPrevPos;
    /* 1C */ VecFx32 mVel;
    /* 28 */ fx16 mAngle;
    /* 2A */ unk16 mUnk_2A;
    /* 2C */ unk32 mUnk_2C; // gravity?
    /* 30 */ Cylinder *mUnk_30;
    /* 34 */ Cylinder *mUnk_34;
    /* 38 */ Actor_38 *mUnk_38;
    /* 3C */ Actor_9C *mUnk_3C;
    /* 40 */ Actor_C4 *mUnk_40;
    /* 44 */ u16 mUnk_44;
    /* 46 */ unk16 mUnk_46;
    /* 48 */ unk16 mUnk_48;
    /* 4A */ u8 mUnk_4A[2];
    /* 4C */ ActorState mState;
    /* 4E */ fx16 mYOffset;
    /* 50 */ volatile u16 mUnk_50; // timer some actors are using
    /* 52 */ u16 mUnk_52;          // maximum value for above timer
    /* 54 */ unk32 mUnk_54;
    /* 58 */ ActorFlags mFlags[1];
    /* 5C */ ActorParams mUnk_5C;
    /* 8C */ ActorRef mRef;
    /* 90 */ ActorProfile *mpProfile;
    /* 94 */

    /* 00 */ virtual void GetOffsetPos(VecFx32 *pPos) const;
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0C */ virtual unk8 vfunc_0C();
    /* 10 */ virtual void vfunc_10(VecFx32 *param1);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual bool vfunc_18(unk32 param1); // Init?
    /* 1C */ virtual void vfunc_1C();             // Setup
    /* 20 */ virtual void vfunc_20();             // Update?
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28();
    /* 2C */ virtual void vfunc_2C(unk32 param1);
    /* 30 */ virtual void vfunc_30();
    /* 34 */ virtual unk32 vfunc_34();
    /* 38 */ virtual bool Grab(ActorGrabParams grabParams);
    /* 3C */ virtual bool Drop(ActorGrabParams grabParams, const VecFx32 *pVel);
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual void vfunc_48();
    /* 4C */ virtual ~Actor();
    /* 54 */

    bool func_01fff5d0(unk32 param1, unk32 param2);

    void ResetFlags() {
        *(u32 *) this->mFlags = 0;
    }

    void Kill() {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    bool IsAlive() {
        return GET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    Actor();

    ActorId GetActorId();

    bool IsTimerOut() {
        if (this->mUnk_50 < this->mUnk_52) {
            this->mUnk_50++;
            return false;
        }

        return true;
    }

    // overlay 0
    bool func_ov000_0205cbc4(u32 param1, VecFx32 *param2);
    unk32 func_ov000_0207df88(Cylinder *param1, unk32 param2);
    unk32 func_ov000_0207e294(Cylinder *param1);
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
    u32 func_ov000_02098800(bool param1);
    bool func_ov000_02098838();
    unk32 func_ov000_02098910(unk32 param1, unk32 param2);
    void func_ov000_02098b8c(unk32 param1, unk32 param2);
    s32 func_ov000_02098518(unk32 *param1);
    VecFx32 *func_ov000_0209853c(unk32 param1);
    s32 func_ov000_02098554();
    s16 func_ov000_0209856c();
    s8 func_ov000_02098578();
    s32 func_ov000_02098584();
    s32 func_ov000_020985f0(void *param1);
    void func_ov000_0209862c(unk32 param1);
    void func_ov000_020989e0();
    bool func_ov000_02098a60(unk32 param1);
    void func_ov000_02098a88(unk32 param1, unk32 param2);
    u32 func_ov000_02098ab4(bool param1, unk32 param2, unk32 param3, VecFx32 *param4);

    static void func_ov000_020973f4(ActorRef *pOutRef, UnkStruct_ov000_020b539c *param2, ActorId actorId, ActorParams *pParams,
                                    int param5);

    // overlay 17
    bool func_ov017_020beeec(unk32 param1);
    void func_ov017_020bf5c4(VecFx32 *param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
    void func_ov017_020bf9c8(Actor *param1);
};

class Actor_C4_Base {
public:
    Actor_C4_Base(void *param1, unk32 param2);
};

class Actor_C4 : public Actor_C4_Base {
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

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2);
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C(unk32 param1);
    /* 10 */

    template <typename T> T *GetActorPtr() {
        return (T *) this->mUnk_20;
    }

    Actor_C4(Actor *param1) :
        Actor_C4_Base(&param1->mRef, 0) {}
};

class Actor_Derived2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ VecFx32 mUnk_98;
    /* A4 */ unk32 mUnk_A4;
    /* A8 */ void *mUnk_A8;
    /* AC */ unk8 mUnk_AC;
    /* AD */ unk8 mUnk_AD;
    /* AE */

    Actor_Derived2();

    /* 30 */ virtual void vfunc_30();
    /* 4C */ WEAK virtual ~Actor_Derived2() {}
    /* 54 */ virtual void vfunc_54();
};

extern UnkStruct_ov000_020b539c data_ov000_020b539c_eur;

struct UnkActorDataStruct1 {
    /* 00 */ unk32 unk_00[4];
    /* 10 */ unk32 unk_10;
    /* 14 */ unk32 unk_14;
    /* 18 */
};
extern "C" void func_ov000_02099ddc(void *thisx, UnkActorDataStruct1 param1, unk32 param2, unk32 param3);
