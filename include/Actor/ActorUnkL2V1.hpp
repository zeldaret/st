//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkL2V1_c4 : public Actor_c4 {
public:
    ActorUnkL2V1_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkL2V1 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkL2V1();

    /* 4C */ virtual ~ActorUnkL2V1() override;

    void func_ov044_0212c34c(void);
    void func_ov044_0212c360(void);
    void func_ov044_0212c440(void);
    void func_ov044_0212c464(void);
    void func_ov044_0212c54c(void);
    void func_ov044_0212c560(void);
    void func_ov044_0212c594(void);
    void func_ov044_0212c5a4(void);
    void func_ov044_0212c5f8(void);
};

class ActorProfileUnkL2V1 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkL2V1();
    ~ActorProfileUnkL2V1();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkL2V1 *GetProfile();
};
