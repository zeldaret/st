//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCSG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRCSG();

    /* 4C */ virtual ~ActorUnkRCSG() override;

    void func_ov070_02143d30(void);
    void func_ov070_02143de0(void);
    void func_ov070_02143e54(void);
    void func_ov070_02143e68(void);
    void func_ov070_02143eac(void);
    void func_ov070_02143f2c(void);
    void func_ov070_02143f34(void);
    void func_ov070_02143f38(void);
    void func_ov070_02143f7c(void);
};

class ActorProfileUnkRCSG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRCSG();
    ~ActorProfileUnkRCSG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCSG *GetProfile();
};
