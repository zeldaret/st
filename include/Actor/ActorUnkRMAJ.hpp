//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMAJ : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMAJ();

    /* 4C */ virtual ~ActorUnkRMAJ() override;

    void func_ov068_02157f18(void);
    void func_ov068_02157f38(void);
    void func_ov068_02157f54(void);
    void func_ov068_02157f58(void);
};

class ActorProfileUnkRMAJ : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRMAJ();
    ~ActorProfileUnkRMAJ();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMAJ *GetProfile();
};
