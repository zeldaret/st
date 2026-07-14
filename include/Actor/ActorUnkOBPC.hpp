#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "global.h"
#include "types.h"

enum ActorUnkOBPCState_ {
    ActorUnkOBPCState_0 = 0,
    ActorUnkOBPCState_1 = 1,
    ActorUnkOBPCState_Max,
};

class ActorUnkOBPC : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */ unk32 mUnk_98;
    /* 9C */ UnkSystem1_ov000_Derived2 mUnk_9C;
    /* D0 */

    ActorUnkOBPC();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;

    bool func_ov024_020d6f74(void);
    void SetState(ActorState state, int param2);
    bool func_ov024_020d7154(void);
};

class ActorProfileUnkOBPC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkOBPC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOBPC *GetProfile();
};
