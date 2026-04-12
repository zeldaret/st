//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMAJ_c4 : public Actor_c4 {
public:
    ActorUnkRMAJ_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkRMAJ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMAJ();

    /* 4C */ virtual ~ActorUnkRMAJ() override;

    void func_ov068_02157f18(void);
    void func_ov068_02157f38(void);
    void func_ov068_02157f54(void);
    void func_ov068_02157f58(void);
};

class ActorProfileUnkRMAJ : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRMAJ();
    ~ActorProfileUnkRMAJ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMAJ *GetProfile();
};
