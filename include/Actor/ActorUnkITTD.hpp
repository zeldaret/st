//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkITTD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkITTD();

    /* 4C */ virtual ~ActorUnkITTD() override;

    void func_ov031_020e5b20(void);
    void func_ov031_020e5b34(void);
    void func_ov031_020e5c00(void);
    void func_ov031_020e5d18(void);
    void func_ov031_020e6148(void);
    void func_ov031_020e6158(void);
    void func_ov031_020e619c(void);
    void func_ov031_020e62c0(void);
    void func_ov031_020e6314(void);
    void func_ov031_020e6340(void);
    void func_ov031_020e6398(void);
    void func_ov031_020e6474(void);
};

class ActorProfileUnkITTD : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkITTD();
    ~ActorProfileUnkITTD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkITTD *GetProfile();
};
