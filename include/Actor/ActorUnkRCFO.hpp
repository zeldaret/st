//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCFO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRCFO();

    /* 4C */ virtual ~ActorUnkRCFO() override;

    void func_ov033_02119504(void);
    void func_ov033_02119540(void);
    void func_ov033_0211961c(void);
    void func_ov033_02119828(void);
    void func_ov033_0211983c(void);
    void func_ov033_02119840(void);
    void func_ov033_021199f4(void);
    void func_ov033_02119a58(void);
    void func_ov033_02119bc4(void);
    void func_ov033_02119d00(void);
    void func_ov033_02119d40(void);
};

class ActorProfileUnkRCFO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRCFO();
    ~ActorProfileUnkRCFO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCFO *GetProfile();
};
