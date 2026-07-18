//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTLKT_C4 : public Actor_C4 {
public:
    ActorUnkTLKT_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual bool vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTLKT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTLKT();

    /* 4C */ virtual ~ActorUnkTLKT() override;

    void func_ov031_020e41ec(void);
    void func_ov031_020e4238(void);
    void func_ov031_020e4274(void);
    void func_ov031_020e42ac(void);
    void func_ov031_020e42f0(void);
    void func_ov031_020e4320(void);
    void func_ov031_020e4514(void);
};

class ActorProfileUnkTLKT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTLKT();
    ~ActorProfileUnkTLKT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTLKT *GetProfile();
};
