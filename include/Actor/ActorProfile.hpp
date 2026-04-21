#pragma once

#include "Actor/ActorId.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkActorFileSystem.hpp"
#include "profile.hpp"
#include "types.h"

class Actor;

class ActorProfile : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ Cylinder mUnk_04;
    /* 14 */ unk8 mUnk_14[2];
    /* 14 */ unk8 mUnk_16[2];
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19;
    /* 1A */ unk16 mUnk_1A;
    /* 1C */ unk16 mUnk_1C;
    /* 1E */ u16 mUnk_1E;
    /* 20 */ ActorId mActorId;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2C */ unk32 mUnk_2C;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ u8 mUnk_38;
    /* 39 */ unk8 mUnk_39;
    /* 3A */ unk8 mUnk_3A;
    /* 3B */ unk8 mUnk_3B;
    /* 3C */

    ActorProfile(ActorId actorId);
    ~ActorProfile();

    /* 00 */ virtual Actor *Create() = 0;
    /* 04 */ virtual unk32 vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */

    void func_ov000_020977e4();
    void func_ov000_020975dc();
};

class ActorProfile_Derived1 : public ActorProfile {
public:
    /* 00 (base) */
    /* 3C */ UnkActorFileSystem2 mUnk_3C;
    /* D4 */ unk32 mUnk_D4;
    /* D8 */

    ActorProfile_Derived1(ActorId actorId);
    ActorProfile_Derived1(ActorId actorId1, ActorId actorId2);
    ~ActorProfile_Derived1();

    /* 04 */ virtual unk32 vfunc_04() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
};

// typedef ActorProfile *(*GetActorProfile)();
