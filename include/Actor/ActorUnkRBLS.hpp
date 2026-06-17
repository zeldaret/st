//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRBLS_C4 : public Actor_C4 {
public:
    ActorUnkRBLS_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkRBLS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRBLS();

    /* 4C */ virtual ~ActorUnkRBLS() override;

    void func_ov063_0215f3d4(void);
    void func_ov063_0215f3e8(void);
    void func_ov063_0215f474(void);
    void func_ov063_0215f488(void);
    void func_ov063_0215f49c(void);
    void func_ov063_0215f500(void);
};

class ActorProfileUnkRBLS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkRBLS();
    ~ActorProfileUnkRBLS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRBLS *GetProfile();
};
