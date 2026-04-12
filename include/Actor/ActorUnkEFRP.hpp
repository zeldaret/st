//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFRP_c4 : public Actor_c4 {
public:
    ActorUnkEFRP_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkEFRP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFRP();

    /* 4C */ virtual ~ActorUnkEFRP() override;

    void func_ov098_02181910(void);
    void func_ov098_02181a30(void);
    void func_ov098_02181acc(void);
    void func_ov098_02181b1c(void);
    void func_ov098_02181b30(void);
    void func_ov098_02181b88(void);
    void func_ov098_02181ba4(void);
};

class ActorProfileUnkEFRP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFRP();
    ~ActorProfileUnkEFRP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFRP *GetProfile();
};
