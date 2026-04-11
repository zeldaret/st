//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTKYT : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTKYT();

    /* 4C */ virtual ~ActorUnkTKYT() override;

    void func_ov096_0217ac3c(void);
    void func_ov096_0217acdc(void);
    void func_ov096_0217acf8(void);
    void func_ov096_0217acfc(void);
    void func_ov096_0217ad00(void);
    void func_ov096_0217ad04(void);
    void func_ov096_0217ad08(void);
};

class ActorProfileUnkTKYT : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTKYT();
    ~ActorProfileUnkTKYT();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTKYT *GetProfile();
};
