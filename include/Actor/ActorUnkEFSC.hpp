//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkEFSC : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkEFSC();

    /* 4C */ virtual ~ActorUnkEFSC() override;

    void func_ov086_0215b85c(void);
    void func_ov086_0215b96c(void);
    void func_ov086_0215b9d4(void);
    void func_ov086_0215ba40(void);
    void func_ov086_0215ba54(void);
    void func_ov086_0215bb04(void);
};

class ActorProfileUnkEFSC : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkEFSC();
    ~ActorProfileUnkEFSC();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkEFSC *GetProfile();
};
