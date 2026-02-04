#pragma once

#include "Actor/ActorId.hpp"
#include "Physics/Cylinder.hpp"
#include "System/SysNew.hpp"
#include "types.h"

class Actor;

class ActorType : public SysObject {
public:
    /* 00 (vtable) */
    /* 04 */ Cylinder mUnk_04;
    /* 14 */ unk8 mUnk_14[0x18 - 0x14];
    /* 18 */ unk8 mUnk_18;
    /* 19 */ unk8 mUnk_19;
    /* 1a */ unk16 mUnk_1a;
    /* 1c */ unk16 mUnk_1c;
    /* 1e */ u16 mUnk_1e;
    /* 20 */ ActorId mActorId;
    /* 24 */ unk32 mUnk_24;
    /* 28 */ unk32 mUnk_28;
    /* 2c */ unk32 mUnk_2c;
    /* 30 */ unk32 mUnk_30;
    /* 34 */ unk32 mUnk_34;
    /* 38 */ u8 mUnk_38;
    /* 39 */ unk8 mUnk_39;
    /* 3a */

    ActorType(ActorId actorId);

    /* 00 */ virtual Actor *Create() = 0;
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08();
    /* 0c */ virtual void vfunc_0c();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1c */
};

typedef ActorType *(*ActorTypeGetInstance)();
