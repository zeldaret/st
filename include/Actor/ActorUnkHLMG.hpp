//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkHLMG : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkHLMG();

    /* 4C */ virtual ~ActorUnkHLMG() override;

    void func_ov030_0214b258(void);
    void func_ov030_0214b260(void);
    void func_ov030_0214b27c(void);
    void func_ov030_0214b29c(void);
    void func_ov030_0214b664(void);
    void func_ov030_0214ba60(void);
    void func_ov030_0214bb38(void);
    void func_ov030_0214bb6c(void);
    void func_ov030_0214bbb8(void);
    void func_ov030_0214bc00(void);
    void func_ov030_0214bc50(void);
    void func_ov030_0214bcdc(void);
    void func_ov030_0214bd74(void);
    void func_ov030_0214bd84(void);
    void func_ov030_0214bdb4(void);
    void func_ov030_0214c084(void);
    void func_ov030_0214c178(void);
    void func_ov030_0214c1ac(void);
    void func_ov030_0214c1c0(void);
    void func_ov030_0214c21c(void);
    void func_ov030_0214c268(void);
    void func_ov030_0214c30c(void);
    void func_ov030_0214c31c(void);
};

class ActorProfileUnkHLMG : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkHLMG();
    ~ActorProfileUnkHLMG();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkHLMG *GetProfile();
};
