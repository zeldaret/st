//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkYWIS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkYWIS();

    /* 4C */ virtual ~ActorUnkYWIS() override;

    void func_ov065_021597bc(void);
    void func_ov065_021597c4(void);
    void func_ov065_021597f4(void);
    void func_ov065_02159808(void);
    void func_ov065_02159810(void);
};

class ActorProfileUnkYWIS : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkYWIS();
    ~ActorProfileUnkYWIS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkYWIS *GetProfile();
};
