//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkL2V2_C4 : public Actor_C4 {
public:
    ActorUnkL2V2_C4(Actor *param1);

    /* 00 */ virtual bool vfunc_00(ActorRef ref, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C(unk32 param1) override;
};

class ActorUnkL2V2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkL2V2();

    /* 4C */ virtual ~ActorUnkL2V2() override;

    void func_ov044_0212c760(void);
    void func_ov044_0212c7d4(void);
    void func_ov044_0212c7e8(void);
    void func_ov044_0212c7fc(void);
};

class ActorProfileUnkL2V2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkL2V2();
    ~ActorProfileUnkL2V2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkL2V2 *GetProfile();
};
