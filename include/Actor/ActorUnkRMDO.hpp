//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRMDO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkRMDO();

    /* 4C */ virtual ~ActorUnkRMDO() override;

    void func_ov088_02171ab8(void);
    void func_ov088_02171ad8(void);
    void func_ov088_02171adc(void);
    void func_ov088_02171ae0(void);
    void func_ov088_02171af4(void);
    void func_ov088_02171af8(void);
};

class ActorProfileUnkRMDO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRMDO();
    ~ActorProfileUnkRMDO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRMDO *GetProfile();
};
