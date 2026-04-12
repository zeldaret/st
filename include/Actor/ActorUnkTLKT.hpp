//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTLKT_c4 : public Actor_c4 {
public:
    ActorUnkTLKT_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
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
