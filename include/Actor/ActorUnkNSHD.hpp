//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkNSHD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkNSHD();

    /* 4C */ virtual ~ActorUnkNSHD() override;

    void func_ov062_02158cc8(void);
    void func_ov062_02158ce8(void);
    void func_ov062_02158df4(void);
    void func_ov062_02158e38(void);
    void func_ov062_02158e4c(void);
};

class ActorProfileUnkNSHD : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkNSHD();
    ~ActorProfileUnkNSHD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkNSHD *GetProfile();
};
