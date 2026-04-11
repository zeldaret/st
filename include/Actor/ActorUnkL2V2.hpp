//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

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
