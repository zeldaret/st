#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFLEN_c4 : public Actor_c4 {
public:
    ActorUnkFLEN_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkFLEN : public Actor {
public:
    /* 00 (base) */
    /* 94 */ unk32 mUnk_94;
    /* 98 */

    ActorUnkFLEN();

    /* 4C */ virtual ~ActorUnkFLEN() override;

    bool func_ov031_020f80b8();
    void func_ov031_020f8118(void);
    void func_ov031_020f81b4(s16 param_1);
    void func_ov031_020f81f8();
};

class ActorProfileUnkFLEN : public ActorProfile {
public:
    /* 00 (base) */
    /* 3C */

    ActorProfileUnkFLEN();
    ~ActorProfileUnkFLEN();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFLEN *GetProfile();
};
