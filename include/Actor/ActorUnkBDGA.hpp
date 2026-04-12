//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBDGA_c4 : public Actor_c4 {
public:
    ActorUnkBDGA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBDGA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBDGA();

    /* 4C */ virtual ~ActorUnkBDGA() override;

    void func_ov045_02124214(void);
    void func_ov045_02124438(void);
    void func_ov045_0212444c(void);
    void func_ov045_02124460(void);
    void func_ov045_021244ec(void);
    void func_ov045_0212454c(void);
    void func_ov045_021246c4(void);
    void func_ov045_02124784(void);
    void func_ov045_021247a4(void);
    void func_ov045_021247a8(void);
    void func_ov045_02124a34(void);
    void func_ov045_02124e94(void);
    void func_ov045_02124fc0(void);
    void func_ov045_02125660(void);
    void func_ov045_02125674(void);
    void func_ov045_021256f0(void);
    void func_ov045_021258dc(void);
    void func_ov045_02125a70(void);
    void func_ov045_02125e90(void);
    void func_ov045_02125fec(void);
    void func_ov045_02126074(void);
    void func_ov045_021261a0(void);
    void func_ov045_021263a4(void);
    void func_ov045_021264b0(void);
    void func_ov045_021267a0(void);
    void func_ov045_02126934(void);
    void func_ov045_02126aec(void);
    void func_ov045_02126b0c(void);
    void func_ov045_02126b10(void);
    void func_ov045_02126bc8(void);
    void func_ov045_02126c34(void);
    void func_ov045_02126d48(void);
    void func_ov045_02126dd0(void);
    void func_ov045_02126e08(void);
    void func_ov045_02127114(void);
    void func_ov045_02127174(void);
    void func_ov045_021271f4(void);
    void func_ov045_02127218(void);
    void func_ov045_021272d4(void);
    void func_ov045_0212733c(void);
    void func_ov045_02127368(void);
    void func_ov045_021273bc(void);
    void func_ov045_0212741c(void);
    void func_ov045_02127444(void);
    void func_ov045_02127578(void);
    void func_ov045_021276a4(void);
    void func_ov045_021276e0(void);
    void func_ov045_02127754(void);
    void func_ov045_02127778(void);
    void func_ov045_021277a4(void);
    void func_ov045_021277cc(void);
    void func_ov045_021277e8(void);
    void func_ov045_02127850(void);
};

class ActorProfileUnkBDGA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBDGA();
    ~ActorProfileUnkBDGA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBDGA *GetProfile();
};
