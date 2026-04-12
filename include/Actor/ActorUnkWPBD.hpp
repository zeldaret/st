//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWPBD_c4 : public Actor_c4 {
public:
    ActorUnkWPBD_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWPBD : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWPBD();

    /* 4C */ virtual ~ActorUnkWPBD() override;

    void func_ov058_0214ac34(void);
    void func_ov058_0214ac88(void);
    void func_ov058_0214acc0(void);
    void func_ov058_0214af2c(void);
    void func_ov058_0214af40(void);
    void func_ov058_0214af54(void);
    void func_ov058_0214b0c8(void);
    void func_ov058_0214b178(void);
    void func_ov058_0214b1c4(void);
    void func_ov058_0214b238(void);
    void func_ov058_0214b4a8(void);
    void func_ov058_0214b61c(void);
    void func_ov058_0214b620(void);
    void func_ov058_0214b820(void);
    void func_ov058_0214b8dc(void);
    void func_ov058_0214bbcc(void);
    void func_ov058_0214bd98(void);
    void func_ov058_0214bfa4(void);
    void func_ov058_0214c078(void);
    void func_ov058_0214c0b4(void);
    void func_ov058_0214c334(void);
    void func_ov058_0214c394(void);
    void func_ov058_0214c6d8(void);
    void func_ov058_0214c824(void);
    void func_ov058_0214c92c(void);
    void func_ov058_0214ca40(void);
    void func_ov058_0214cab8(void);
    void func_ov058_0214cacc(void);
    void func_ov058_0214cb64(void);
    void func_ov058_0214cbe8(void);
    void func_ov058_0214cc80(void);
    void func_ov058_0214ccd0(void);
    void func_ov058_0214cd94(void);
    void func_ov058_0214cfa4(void);
    void func_ov058_0214d078(void);
    void func_ov058_0214d250(void);
    void func_ov058_0214d2b4(void);
    void func_ov058_0214d2c4(void);
    void func_ov058_0214d3c0(void);
    void func_ov058_0214d414(void);
};

class ActorProfileUnkWPBD : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWPBD();
    ~ActorProfileUnkWPBD();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWPBD *GetProfile();
};
