//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkMLCK : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkMLCK();

    /* 4C */ virtual ~ActorUnkMLCK() override;

    void func_ov031_020fac64(void);
    void func_ov031_020fad3c(void);
    void func_ov031_020fad88(void);
    void func_ov031_020fada8(void);
    void func_ov031_020fadb4(void);
    void func_ov031_020fae08(void);
    void func_ov031_020fae20(void);
    void func_ov031_020faeb0(void);
    void func_ov031_020faeb4(void);
    void func_ov031_020faf04(void);
    void func_ov031_020faf24(void);
    void func_ov031_020fb104(void);
    void func_ov031_020fb11c(void);
    void func_ov031_020fb184(void);
    void func_ov031_020fb1b0(void);
    void func_ov031_020fb1cc(void);
    void func_ov031_020fb1e8(void);
    void func_ov031_020fb204(void);
};

class ActorProfileUnkMLCK : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkMLCK();
    ~ActorProfileUnkMLCK();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkMLCK *GetProfile();
};
