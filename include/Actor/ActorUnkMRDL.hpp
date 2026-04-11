//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMRDL : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMRDL();

    /* 4C */ virtual ~ActorUnkMRDL() override;

    void func_ov075_0215dff4(void);
    void func_ov075_0215e008(void);
    void func_ov075_0215e044(void);
    void func_ov075_0215e050(void);
};

class ActorProfileUnkMRDL : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMRDL();
    ~ActorProfileUnkMRDL();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMRDL *GetProfile();
};
