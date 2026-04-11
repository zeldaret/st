//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWDS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWDS();

    /* 4C */ virtual ~ActorUnkSWDS() override;

    void func_ov070_02143a50(void);
    void func_ov070_02143adc(void);
    void func_ov070_02143bd4(void);
    void func_ov070_02143be8(void);
};

class ActorProfileUnkSWDS : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWDS();
    ~ActorProfileUnkSWDS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWDS *GetProfile();
};
