//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkSWTM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkSWTM();

    /* 4C */ virtual ~ActorUnkSWTM() override;

    void func_ov000_0209adf4(void);
    void func_ov000_0209ae68(void);
    void func_ov000_0209af50(void);
    void func_ov000_0209af54(void);
    void func_ov000_0209afe4(void);
    void func_ov000_0209b038(void);
    void func_ov000_0209b160(void);
    void func_ov000_0209b184(void);
    void func_ov000_0209b1d0(void);
};

class ActorProfileUnkSWTM : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkSWTM();
    ~ActorProfileUnkSWTM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkSWTM *GetProfile();
};
