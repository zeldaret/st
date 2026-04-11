//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWBM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWBM();

    /* 4C */ virtual ~ActorUnkSWBM() override;

    void func_ov031_020e6c60(void);
    void func_ov031_020e6c74(void);
    void func_ov031_020e6c88(void);
    void func_ov031_020e6d48(void);
    void func_ov031_020e6d80(void);
    void func_ov031_020e6e84(void);
    void func_ov031_020e6ef8(void);
    void func_ov031_020e7160(void);
    void func_ov031_020e718c(void);
    void func_ov031_020e7294(void);
    void func_ov031_020e72f0(void);
    void func_ov031_020e7334(void);
};

class ActorProfileUnkSWBM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWBM();
    ~ActorProfileUnkSWBM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWBM *GetProfile();
};
