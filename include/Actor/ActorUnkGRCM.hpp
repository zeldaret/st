//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkGRCM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkGRCM();

    /* 4C */ virtual ~ActorUnkGRCM() override;

    void func_ov085_02150c58(void);
    void func_ov085_02150cb8(void);
    void func_ov085_02150cc8(void);
    void func_ov085_02150e64(void);
    void func_ov085_02150e6c(void);
    void func_ov085_02150eb0(void);
    void func_ov085_02150efc(void);
};

class ActorProfileUnkGRCM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkGRCM();
    ~ActorProfileUnkGRCM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkGRCM *GetProfile();
};
