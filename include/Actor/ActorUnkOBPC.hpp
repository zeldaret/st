//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkOBPC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkOBPC();

    /* 4C */ virtual ~ActorUnkOBPC() override;

    void func_ov024_020d6f28(void);
    void func_ov024_020d6f74(void);
    void func_ov024_020d6f94(void);
    void func_ov024_020d7050(void);
    void func_ov024_020d7064(void);
    void func_ov024_020d7154(void);
};

class ActorProfileUnkOBPC : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkOBPC();
    ~ActorProfileUnkOBPC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkOBPC *GetProfile();
};
