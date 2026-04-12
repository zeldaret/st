//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkENGE_c4 : public Actor_c4 {
public:
    ActorUnkENGE_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkENGE : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkENGE();

    /* 4C */ virtual ~ActorUnkENGE() override;

    void func_ov070_0213f3e4(void);
    void func_ov070_0213f430(void);
    void func_ov070_0213f508(void);
    void func_ov070_0213f548(void);
    void func_ov070_0213f65c(void);
};

class ActorProfileUnkENGE : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkENGE();
    ~ActorProfileUnkENGE();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkENGE *GetProfile();
};
