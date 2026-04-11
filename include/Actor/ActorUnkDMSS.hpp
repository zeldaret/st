//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMSS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMSS();

    /* 4C */ virtual ~ActorUnkDMSS() override;

    void func_ov088_02171494(void);
    void func_ov088_021714a8(void);
    void func_ov088_021714fc(void);
    void func_ov088_0217150c(void);
    void func_ov088_02171520(void);
    void func_ov088_02171534(void);
    void func_ov088_021715c8(void);
};

class ActorProfileUnkDMSS : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMSS();
    ~ActorProfileUnkDMSS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMSS *GetProfile();
};
