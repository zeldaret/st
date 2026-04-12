//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBLST_c4 : public Actor_c4 {
public:
    ActorUnkBLST_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBLST : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBLST();

    /* 4C */ virtual ~ActorUnkBLST() override;

    void func_ov031_020e351c(void);
    void func_ov031_020e373c(void);
    void func_ov031_020e3750(void);
    void func_ov031_020e39c4(void);
    void func_ov031_020e3b44(void);
    void func_ov031_020e3b94(void);
    void func_ov031_020e3b9c(void);
    void func_ov031_020e3c60(void);
};

class ActorProfileUnkBLST : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkBLST();
    ~ActorProfileUnkBLST();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBLST *GetProfile();
};
