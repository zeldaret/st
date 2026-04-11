//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPMTT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPMTT();

    /* 4C */ virtual ~ActorUnkPMTT() override;

    void func_ov042_0212d8a4(void);
    void func_ov042_0212d8cc(void);
    void func_ov042_0212d904(void);
    void func_ov042_0212d930(void);
    void func_ov042_0212dc78(void);
    void func_ov042_0212dc8c(void);
    void func_ov042_0212de64(void);
    void func_ov042_0212df28(void);
    void func_ov042_0212df3c(void);
    void func_ov042_0212e080(void);
    void func_ov042_0212e144(void);
    void func_ov042_0212e19c(void);
    void func_ov042_0212e1f4(void);
    void func_ov042_0212e2a0(void);
    void func_ov042_0212e414(void);
    void func_ov042_0212e4d8(void);
    void func_ov042_0212e4f8(void);
    void func_ov042_0212e53c(void);
};

class ActorProfileUnkPMTT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkPMTT();
    ~ActorProfileUnkPMTT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPMTT *GetProfile();
};
