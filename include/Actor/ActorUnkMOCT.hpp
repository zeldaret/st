//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMOCT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMOCT();

    /* 4C */ virtual ~ActorUnkMOCT() override;

    void func_ov062_0215a588(void);
    void func_ov062_0215a590(void);
    void func_ov062_0215a5cc(void);
    void func_ov062_0215a634(void);
    void func_ov062_0215a670(void);
};

class ActorProfileUnkMOCT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMOCT();
    ~ActorProfileUnkMOCT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMOCT *GetProfile();
};
