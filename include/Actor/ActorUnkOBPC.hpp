//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOBPC_c4 : public Actor_c4 {
public:
    ActorUnkOBPC_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkOBPC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOBPC();

    /* 4C */ virtual ~ActorUnkOBPC() override;

    void func_ov024_020d6f28(void);
    void func_ov024_020d6f74(void);
    void func_ov024_020d6f94(void);
    void func_ov024_020d7050(void);
    void func_ov024_020d7064(void);
    void func_ov024_020d7154(void);
};

class ActorProfileUnkOBPC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkOBPC();
    ~ActorProfileUnkOBPC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOBPC *GetProfile();
};
