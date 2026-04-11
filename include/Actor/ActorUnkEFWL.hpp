//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFWL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFWL();

    /* 4C */ virtual ~ActorUnkEFWL() override;

    void func_ov099_02181114(void);
    void func_ov099_02181230(void);
    void func_ov099_021812ec(void);
    void func_ov099_0218133c(void);
    void func_ov099_02181350(void);
    void func_ov099_021813dc(void);
    void func_ov099_02181400(void);
    void func_ov099_0218142c(void);
};

class ActorProfileUnkEFWL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFWL();
    ~ActorProfileUnkEFWL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFWL *GetProfile();
};
