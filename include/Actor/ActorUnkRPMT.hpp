//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRPMT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRPMT();

    /* 4C */ virtual ~ActorUnkRPMT() override;

    void func_ov041_0212a848(void);
    void func_ov041_0212a850(void);
    void func_ov041_0212a8c8(void);
    void func_ov041_0212a90c(void);
    void func_ov041_0212a94c(void);
    void func_ov041_0212a984(void);
    void func_ov041_0212a988(void);
    void func_ov041_0212a9b8(void);
    void func_ov041_0212ab18(void);
    void func_ov041_0212b238(void);
    void func_ov041_0212b3ac(void);
    void func_ov041_0212b744(void);
    void func_ov041_0212b898(void);
    void func_ov041_0212b89c(void);
    void func_ov041_0212b924(void);
};

class ActorProfileUnkRPMT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRPMT();
    ~ActorProfileUnkRPMT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRPMT *GetProfile();
};
