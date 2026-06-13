#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "global.h"
#include "types.h"

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
    /* 4C */ virtual ~ActorUnkOBPC() override;

    bool func_ov024_020d6f74(void);
    void func_ov024_020d7064(s16 param1, unk32 param2);
    bool func_ov024_020d7154(void);
};

class ActorProfileUnkOBPC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkOBPC();
    ~ActorProfileUnkOBPC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOBPC *GetProfile();
};
