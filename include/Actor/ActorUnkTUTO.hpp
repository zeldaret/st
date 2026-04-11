//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkTUTO : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkTUTO();

    /* 4C */ virtual ~ActorUnkTUTO() override;

    void func_ov037_02120a10(void);
    void func_ov037_02120a64(void);
    void func_ov037_02120afc(void);
    void func_ov037_02120b10(void);
    void func_ov037_02120ba8(void);
    void func_ov037_02120bcc(void);
    void func_ov037_02120c48(void);
    void func_ov037_02120c54(void);
    void func_ov037_02120d54(void);
    void func_ov037_02120da4(void);
    void func_ov037_02120ddc(void);
    void func_ov037_02120fbc(void);
    void func_ov037_02120fe8(void);
    void func_ov037_02121010(void);
    void func_ov037_0212101c(void);
    void func_ov037_02121044(void);
    void func_ov037_02121084(void);
    void func_ov037_021211b0(void);
    void func_ov037_0212122c(void);
    void func_ov037_02121368(void);
    void func_ov037_021213a0(void);
    void func_ov037_0212141c(void);
    void func_ov037_02121464(void);
    void func_ov037_021214e0(void);
    void func_ov037_0212152c(void);
    void func_ov037_02121680(void);
    void func_ov037_0212169c(void);
    void func_ov037_021217e8(void);
    void func_ov037_02121a24(void);
    void func_ov037_02121ab0(void);
    void func_ov037_02121af0(void);
    void func_ov037_02121b2c(void);
};

class ActorProfileUnkTUTO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkTUTO();
    ~ActorProfileUnkTUTO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkTUTO *GetProfile();
};
