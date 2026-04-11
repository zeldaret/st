//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkASBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkASBA();

    /* 4C */ virtual ~ActorUnkASBA() override;

    void func_ov077_02157154(void);
    void func_ov077_02157168(void);
    void func_ov077_02157228(void);
    void func_ov077_02157520(void);
    void func_ov077_021575e8(void);
    void func_ov077_021576b4(void);
    void func_ov077_0215772c(void);
    void func_ov077_0215784c(void);
    void func_ov077_021578a4(void);
    void func_ov077_021578dc(void);
    void func_ov077_021579bc(void);
    void func_ov077_021579f8(void);
    void func_ov077_02157a80(void);
};

class ActorProfileUnkASBA : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkASBA();
    ~ActorProfileUnkASBA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkASBA *GetProfile();
};
