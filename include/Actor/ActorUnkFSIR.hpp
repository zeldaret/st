//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkFSIR : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkFSIR();

    /* 4C */ virtual ~ActorUnkFSIR() override;

    void func_ov056_0213af0c(void);
    void func_ov056_0213af70(void);
    void func_ov056_0213af9c(void);
    void func_ov056_0213b028(void);
    void func_ov056_0213b088(void);
    void func_ov056_0213b0e4(void);
    void func_ov056_0213b134(void);
    void func_ov056_0213b138(void);
    void func_ov056_0213b13c(void);
    void func_ov056_0213b140(void);
    void func_ov056_0213b144(void);
    void func_ov056_0213b148(void);
    void func_ov056_0213b234(void);
};

class ActorProfileUnkFSIR : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkFSIR();
    ~ActorProfileUnkFSIR();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkFSIR *GetProfile();
};
