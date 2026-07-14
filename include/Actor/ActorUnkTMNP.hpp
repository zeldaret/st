//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTMNP_C4 : public Actor_C4 {
public:
    ActorUnkTMNP_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkTMNP : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTMNP();

    /* 4C */ virtual ~ActorUnkTMNP() override;

    void func_ov040_0212d1e0(void);
    void func_ov040_0212d23c(void);
    void func_ov040_0212d248(void);
    void func_ov040_0212d268(void);
    void func_ov040_0212d280(void);
    void func_ov040_0212d298(void);
    void func_ov040_0212d2c8(void);
};

class ActorProfileUnkTMNP : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkTMNP();
    ~ActorProfileUnkTMNP();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTMNP *GetProfile();
};
