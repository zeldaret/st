//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFSB : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFSB();

    /* 4C */ virtual ~ActorUnkEFSB() override;

    void func_ov031_020fb614(void);
    void func_ov031_020fb6cc(void);
    void func_ov031_020fb704(void);
    void func_ov031_020fb718(void);
    void func_ov031_020fb720(void);
};

class ActorProfileUnkEFSB : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFSB();
    ~ActorProfileUnkEFSB();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFSB *GetProfile();
};
