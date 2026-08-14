//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTHER_C4 : public Actor_C4 {
public:
    ActorUnkTHER_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTHER : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTHER();

    /* 4C */ virtual ~ActorUnkTHER() override;

    void func_ov026_02111108(void);
    void func_ov026_021111a4(void);
    void func_ov026_021111fc(void);
    void func_ov026_02111280(void);
};

class ActorProfileUnkTHER : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTHER();
    ~ActorProfileUnkTHER();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTHER *GetProfile();
};
