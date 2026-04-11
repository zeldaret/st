//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkDMET : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkDMET();

    /* 4C */ virtual ~ActorUnkDMET() override;

    void func_ov088_0217205c(void);
    void func_ov088_02172070(void);
    void func_ov088_021720c4(void);
    void func_ov088_021720d4(void);
    void func_ov088_021720e8(void);
    void func_ov088_021720fc(void);
    void func_ov088_0217213c(void);
    void func_ov088_0217218c(void);
};

class ActorProfileUnkDMET : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkDMET();
    ~ActorProfileUnkDMET();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkDMET *GetProfile();
};
