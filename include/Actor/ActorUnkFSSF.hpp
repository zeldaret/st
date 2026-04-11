//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSSF : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFSSF();

    /* 4C */ virtual ~ActorUnkFSSF() override;

    void func_ov057_02139f24(void);
    void func_ov057_02139fc4(void);
    void func_ov057_0213a0c0(void);
    void func_ov057_0213a0cc(void);
    void func_ov057_0213a124(void);
};

class ActorProfileUnkFSSF : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFSSF();
    ~ActorProfileUnkFSSF();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFSSF *GetProfile();
};
