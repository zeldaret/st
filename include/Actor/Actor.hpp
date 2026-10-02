#pragma once

#include "Actor/ActorId.hpp"
#include "Actor/ActorProfile.hpp"
#include "Actor/ActorRef.hpp"
#include "Physics/AABB.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "flags.h"
#include "global.h"
#include "math.hpp"
#include "nitro/fx.h"
#include "timer.hpp"
#include "types.h"
#include "versions.h"

class UnkStruct_027e09bc;
class UnkStruct_027e09bc_0C;

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
    ActorFlag_15          = FLAG(0, 15), // stunned?
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

class Actor_9C {
public:
    /* 00 (vtable) */
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ ActorRef mUnk_0C;
    /* 10 */ VecFx32 mUnk_10;
    /* 1C */ u16 mUnk_1C;
    /* 1E */ u16 mUnk_1E;
    /* 20 */

    /* 00 */ virtual void vfunc_00(); // corresponds to func_ov000_02097c14
    /* 04 */ virtual unk32 vfunc_04(ActorRef param1, unk32 param2, unk32 param3,
                                    unk32 *param4) override; // corresponds to func_ov000_02097c20
    /* 08 */

    Actor_9C();
    void func_ov000_02097bec();
};

class Actor_38 {
public:
    /* 00 (base) */ STRUCT_PAD(0x00, 0x08);
    /* 08 */ unk16 mUnk_08;
    /* 0A */
};

class Actor_vfunc_30 {
public:
    union UnkStruct {
        struct {
            s8 unk_00;
            s8 unk_01;
        };
        u16 data;
    };

public:
    /* 00 */ UnkStruct mUnk_00;
    /* 02 */ UnkStruct mUnk_02;
};

// ActorStateStunned? seems to related to that
class UnkStruct_ActorUnkCANS_224 {
public:
    /* 00 (base) */ UnkStruct_PlayerGet_ec mUnk_00[0x2];
    /* 08 */ Timer mUnk_08;
    /* 0C */ u16 mUnk_0C;
    /* 0E */ u16 mUnk_0E;
    /* 10 */

    UnkStruct_ActorUnkCANS_224(); // func_ov000_02099820

    ~UnkStruct_ActorUnkCANS_224() {
        this->Destroy();
    }

    void Destroy() {
        for (UnkStruct_PlayerGet_ec *ptr = this->mUnk_00; ptr != &this->mUnk_00[ARRAY_LEN(this->mUnk_00)]; ++ptr) {
            ptr->func_ov000_020a0334();
        }

        this->mUnk_08.Init();
    }

    void func_ov000_020998f0(ActorRef ref, VecFx32 *pPos);
    void func_ov000_02099a0c();
};

typedef s16 ActorState;
#define ActorState_None -1

class Actor {
public:
    /* 00 (vtable) */
    /* 04 */ VecFx32 mPos;
    /* 10 */ VecFx32 mPrevPos;
    /* 1C */ VecFx32 mVel;
    /* 28 */ UnkAngleStruct mAngle;
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
    /* 50 */ Timer mTimer; // generic timer, used for stunned time, drop expiration, ...
    /* 54 */ UnkStruct_ActorUnkCANS_224 *mUnk_54;
    /* 58 */ ActorFlags mFlags[1];
    /* 5C */ ActorParams mUnk_5C;
    /* 8C */ ActorRef mRef;
    /* 90 */ ActorProfile *mpProfile;
    /* 94 */

    /* 00 */ virtual void GetOffsetPos(VecFx32 *pPos) const;
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual unk16 vfunc_08();
    /* 0C */ virtual unk8 vfunc_0C();
    /* 10 */ virtual void vfunc_10(Cylinder *param1);
    /* 14 */ virtual bool vfunc_14(Cylinder *param1);
    /* 18 */ virtual bool Init(unk32 param1);
    /* 1C */ virtual void Setup();
    /* 20 */ virtual void Update();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28(Actor_vfunc_30 *param1);
    /* 2C */ virtual void vfunc_2C(Actor_vfunc_30 *param1);
    /* 30 */ virtual void vfunc_30(Actor_vfunc_30 *param1);
    /* 34 */ virtual unk32 vfunc_34();
    /* 38 */ virtual bool Grab(ActorGrabParams grabParams);
    /* 3C */ virtual bool Drop(ActorGrabParams grabParams, const VecFx32 *pVel);
    /* 40 */ virtual void vfunc_40();
    /* 44 */ virtual void vfunc_44();
    /* 48 */ virtual bool vfunc_48(unk32 param1);
    /* 4C */ virtual ~Actor();
    /* 54 */

    bool func_01fff5d0(Actor_vfunc_30 *param1, unk32 param2);

    void ResetFlags() {
        *(u32 *) this->mFlags = 0;
    }

    void Kill() {
        UNSET_FLAG(this->mFlags, ActorFlag_Alive);
    }

    // clang-format off
    /* x & 0x00000001 */ const bool IsAlive() { return GET_FLAG(this->mFlags, ActorFlag_Alive); }
    /* x & 0x00000002 */ const bool IsVisible() { return GET_FLAG(this->mFlags, ActorFlag_Visible); }
    /* x & 0x00000004 */ const bool IsFlag2() { return GET_FLAG(this->mFlags, ActorFlag_2); }
    /* x & 0x00000008 */ const bool IsActive() { return GET_FLAG(this->mFlags, ActorFlag_Active); }
    /* x & 0x00000010 */ const bool IsFlag4() { return GET_FLAG(this->mFlags, ActorFlag_4); }
    /* x & 0x00000020 */ const bool IsFlag5() { return GET_FLAG(this->mFlags, ActorFlag_5); }
    /* x & 0x00000040 */ const bool IsFlag6() { return GET_FLAG(this->mFlags, ActorFlag_6); }
    /* x & 0x00000080 */ const bool IsFlag7() { return GET_FLAG(this->mFlags, ActorFlag_7); }
    /* x & 0x00000100 */ const bool IsGrabbed() { return GET_FLAG(this->mFlags, ActorFlag_Grabbed); }
    /* x & 0x00000200 */ const bool IsFlag9() { return GET_FLAG(this->mFlags, ActorFlag_9); }
    /* x & 0x00000400 */ const bool IsInteracting() { return GET_FLAG(this->mFlags, ActorFlag_Interacting); }
    /* x & 0x00000800 */ const bool IsFlag11() { return GET_FLAG(this->mFlags, ActorFlag_11); }
    /* x & 0x00001000 */ const bool IsFlag12() { return GET_FLAG(this->mFlags, ActorFlag_12); }
    /* x & 0x00002000 */ const bool IsFlag13() { return GET_FLAG(this->mFlags, ActorFlag_13); }
    /* x & 0x00004000 */ const bool IsFlag14() { return GET_FLAG(this->mFlags, ActorFlag_14); }
    /* x & 0x00008000 */ const bool IsFlag15() { return GET_FLAG(this->mFlags, ActorFlag_15); }
    /* x & 0x00010000 */ const bool IsFlag16() { return GET_FLAG(this->mFlags, ActorFlag_16); }
    /* x & 0x00020000 */ const bool IsFlag17() { return GET_FLAG(this->mFlags, ActorFlag_17); }
    /* x & 0x00040000 */ const bool IsFlag18() { return GET_FLAG(this->mFlags, ActorFlag_18); }
    /* x & 0x00080000 */ const bool IsFlag19() { return GET_FLAG(this->mFlags, ActorFlag_19); }
    /* x & 0x00100000 */ const bool IsFlag20() { return GET_FLAG(this->mFlags, ActorFlag_20); }
    /* x & 0x00200000 */ const bool IsFlag21() { return GET_FLAG(this->mFlags, ActorFlag_21); }
    /* x & 0x00400000 */ const bool IsFlag22() { return GET_FLAG(this->mFlags, ActorFlag_22); }
    /* x & 0x00800000 */ const bool IsFlag23() { return GET_FLAG(this->mFlags, ActorFlag_23); }
    /* x & 0x01000000 */ const bool IsFlag24() { return GET_FLAG(this->mFlags, ActorFlag_24); }
    /* x & 0x02000000 */ const bool IsFlag25() { return GET_FLAG(this->mFlags, ActorFlag_25); }
    /* x & 0x04000000 */ const bool IsFlag26() { return GET_FLAG(this->mFlags, ActorFlag_26); }
    /* x & 0x08000000 */ const bool IsFlag27() { return GET_FLAG(this->mFlags, ActorFlag_27); }
    /* x & 0x10000000 */ const bool IsFlag28() { return GET_FLAG(this->mFlags, ActorFlag_28); }
    /* x & 0x20000000 */ const bool IsFlag29() { return GET_FLAG(this->mFlags, ActorFlag_29); }
    /* x & 0x40000000 */ const bool IsFlag30() { return GET_FLAG(this->mFlags, ActorFlag_30); }
    /* x & 0x80000000 */ const bool IsFlag31() { return GET_FLAG(this->mFlags, ActorFlag_31); }
    // clang-format on

    Actor();

    ActorId GetActorId();

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
    unk32 func_ov000_0209867c(unk32 param1);
    u32 func_ov000_02098800(bool param1);
    bool func_ov000_02098838();
    unk32 func_ov000_02098910(UnkStruct_ov031_Items_00 *param1, unk32 param2);
    void func_ov000_02098b8c(unk32 param1, UnkStruct_ov031_Items_00 *param2);
    s32 func_ov000_02098518(unk32 *param1);
    VecFx32 *func_ov000_0209853c(unk32 param1);
    s32 func_ov000_02098554();
    s16 func_ov000_0209856c();
    s8 func_ov000_02098578();
    s32 func_ov000_02098584();
    s32 func_ov000_020985f0(void *param1);
    void func_ov000_0209862c(unk32 param1);
    bool func_ov000_020986fc(unk32 param1);
    void func_ov000_020989e0();
    void func_ov000_02098a18(Cylinder *param1);
    bool func_ov000_02098a60(unk32 param1);
    void func_ov000_02098a88(unk32 param1, unk32 param2);
    void func_ov000_0209a008(unk32 param1, fx16 param2);
    u32 func_ov000_02098ab4(u8 param1, unk32 param2, unk32 param3, VecFx32 *param4);

    static void func_ov000_020973f4(ActorRef *pOutRef, UnkStruct_ov000_020b539c *param2, ActorId actorId, ActorParams *pParams,
                                    int param5);

    // overlay 17
    bool func_ov017_020beeec(unk32 param1);
    bool func_ov017_020bef4c(unk32 param1);
    void func_ov017_020bef88(Actor_vfunc_30 *param1, UnkStruct_ov019_020d24c8_28_258_00 *param2, unk32 param3);
    void func_ov017_020bf024(Actor_vfunc_30 *param1);
    void func_ov017_020bf050(Actor_9C *param1, unk32 param2);
    void func_ov017_020bf178(Actor_9C *param1, unk32 param2);
    void func_ov017_020bf284(VecFx32 *param1, VecFx32 param2);
    void func_ov017_020bf2d8(Actor_9C *param1, unk32 param2);
    void func_ov017_020bf3e0(unk32 param1, fx32 param2);
    void func_ov017_020bf4b0(unk32 param1);
    void func_ov017_020bf574(unk32 param1, unk32 param2);
    void func_ov017_020bf5c4(VecFx32 *param1, unk32 param2, unk32 param3, unk32 param4, s16 param5);
    void func_ov017_020bf634(const VecFx32 *param1, u16 param2, unk32 param3);
    void func_ov017_020bf688();
    void func_ov017_020bf710(UnkStruct_ActorUnkCANS_224 *param1, const VecFx32 *param2, u16 param3);
    void func_ov017_020bf7a8();
    void func_ov017_020bf894(UnkStruct_ActorUnkCANS_224 *param1);
    void func_ov017_020bf99c();
    void func_ov017_020bf9c8(Actor *param1);
    void func_ov017_020bfa50(VecFx32 *param1, unk32 param2);
    void func_ov017_020bfad4();
    void func_ov017_020bfb18(Actor_9C *param1);
    bool func_ov017_020bfd9c(Vec2s *param1, unk32 param2, UnkStruct_027e09bc_0C *param3,
                             AABB *param4); //! TODO: param4's type not confirmed but probably correct

    // overlay 71 (might be temporary)
    void func_ov071_021540ac(unk32 param1);
    void func_ov071_0215414c();
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
    /* 04 */ virtual bool vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C(VecFx32 *param1);
    /* 10 */

    template <typename T> T *GetActorPtr() {
        return (T *) this->mUnk_20;
    }

    Actor_C4(Actor *param1) :
        Actor_C4_Base(&param1->mRef, 0) {}

    Actor_C4(Actor *param1, unk32 param2) :
        Actor_C4_Base(&param1->mRef, param2) {}
};

class Actor_Derived2_A8_PTR {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */
};

class Actor_Derived2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ VecFx32 mUnk_98;
    /* A4 */ VecFx32 const *mUnk_A4;
    /* A8 */ Actor_Derived2_A8_PTR *mUnk_A8;
    /* AC */ unk8 mUnk_AC;
    /* AD */ unk8 mUnk_AD;
    /* AE */

    Actor_Derived2();

    /* 30 */ virtual void vfunc_30(Actor_vfunc_30 *param1);
    /* 4C */ WEAK virtual ~Actor_Derived2() {}
    /* 54 */ virtual void vfunc_54(unk32 param1);

    void func_ov000_020990c0(Actor_9C *param1, unk32 param2, unk32 param3);
    void func_ov000_020992dc();
    unk32 func_ov000_02099450(UnkStruct_ActorUnkCANS_224 *param1, VecFx32 *param2, unk32 param3, u16 param4);
    void func_ov000_020994a0();
    void func_ov000_020997c4(unk32 param1);
    void func_ov000_02098f34(VecFx32 *);
};

extern UnkStruct_ov000_020b539c data_ov000_020b539c_eur;

struct UnkActorDataStruct1 {
    /* 00 */ unk32 unk_00[4];
    /* 10 */ unk32 unk_10;
    /* 14 */ unk32 unk_14;
    /* 18 */
};
extern "C" void func_ov000_02099ddc(void *thisx, UnkActorDataStruct1 param1, unk32 param2, unk32 param3);
