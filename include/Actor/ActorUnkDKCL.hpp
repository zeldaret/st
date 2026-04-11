//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDKCL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDKCL();

    /* 4C */ virtual ~ActorUnkDKCL() override;

    void func_ov026_02104fcc(void);
    void func_ov026_02104fd4(void);
    void func_ov026_02105000(void);
    void func_ov026_02105014(void);
    void func_ov026_0210501c(void);
};

class ActorProfileUnkDKCL : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDKCL();
    ~ActorProfileUnkDKCL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDKCL *GetProfile();
};
