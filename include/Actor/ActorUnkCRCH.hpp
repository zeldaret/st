//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkCRCH : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkCRCH();

    /* 4C */ virtual ~ActorUnkCRCH() override;

    void func_ov049_021341cc(void);
    void func_ov049_021341d4(void);
    void func_ov049_0213420c(void);
    void func_ov049_021342f0(void);
    void func_ov049_021343c8(void);
    void func_ov049_021343cc(void);
    void func_ov049_021343d4(void);
    void func_ov049_021343e4(void);
};

class ActorProfileUnkCRCH : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkCRCH();
    ~ActorProfileUnkCRCH();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkCRCH *GetProfile();
};
