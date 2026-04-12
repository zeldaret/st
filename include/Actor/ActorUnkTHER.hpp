//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTHER_c4 : public Actor_c4 {
public:
    ActorUnkTHER_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
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
