//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEWHI : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEWHI();

    /* 4C */ virtual ~ActorUnkEWHI() override;

    void func_ov082_02157778(void);
    void func_ov082_021577ac(void);
    void func_ov082_021577e8(void);
    void func_ov082_02157820(void);
    void func_ov082_02157858(void);
    void func_ov082_02157898(void);
    void func_ov082_0215789c(void);
    void func_ov082_021578b8(void);
    void func_ov082_021578bc(void);
    void func_ov082_021578d8(void);
    void func_ov082_02157924(void);
    void func_ov082_02157940(void);
    void func_ov082_02157944(void);
    void func_ov082_0215795c(void);
    void func_ov082_02157960(void);
    void func_ov082_02157978(void);
    void func_ov082_02157980(void);
    void func_ov082_021579b8(void);
};

class ActorProfileUnkEWHI : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkEWHI();
    ~ActorProfileUnkEWHI();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEWHI *GetProfile();
};
