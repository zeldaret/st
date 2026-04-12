//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkWDBA_c4 : public Actor_c4 {
public:
    ActorUnkWDBA_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkWDBA : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkWDBA();

    /* 4C */ virtual ~ActorUnkWDBA() override;

    void func_ov090_02168e14(void);
    void func_ov090_021690a8(void);
    void func_ov090_02169104(void);
    void func_ov090_02169150(void);
    void func_ov090_021694e4(void);
    void func_ov090_021695d0(void);
    void func_ov090_021696d4(void);
    void func_ov090_021697e0(void);
    void func_ov090_02169960(void);
    void func_ov090_02169ab8(void);
    void func_ov090_02169df4(void);
    void func_ov090_02169f34(void);
    void func_ov090_0216a1d4(void);
    void func_ov090_0216a264(void);
    void func_ov090_0216a610(void);
    void func_ov090_0216a65c(void);
    void func_ov090_0216a710(void);
    void func_ov090_0216a92c(void);
    void func_ov090_0216a9b0(void);
    void func_ov090_0216ab4c(void);
    void func_ov090_0216aba0(void);
    void func_ov090_0216ac70(void);
    void func_ov090_0216ace0(void);
    void func_ov090_0216af50(void);
    void func_ov090_0216b054(void);
    void func_ov090_0216b354(void);
    void func_ov090_0216b3ec(void);
    void func_ov090_0216b588(void);
    void func_ov090_0216b6d8(void);
    void func_ov090_0216b7b4(void);
    void func_ov090_0216b840(void);
    void func_ov090_0216b844(void);
    void func_ov090_0216c360(void);
    void func_ov090_0216c580(void);
    void func_ov090_0216c630(void);
    void func_ov090_0216c6e8(void);
    void func_ov090_0216c7a0(void);
    void func_ov090_0216c814(void);
    void func_ov090_0216c974(void);
    void func_ov090_0216c99c(void);
    void func_ov090_0216cc80(void);
    void func_ov090_0216cd08(void);
    void func_ov090_0216cd54(void);
    void func_ov090_0216cd7c(void);
    void func_ov090_0216cdd4(void);
    void func_ov090_0216ce78(void);
    void func_ov090_0216cee0(void);
    void func_ov090_0216cf1c(void);
    void func_ov090_0216cfa4(void);
    void func_ov090_0216d070(void);
    void func_ov090_0216d0a0(void);
    void func_ov090_0216d178(void);
    void func_ov090_0216d340(void);
    void func_ov090_0216d400(void);
    void func_ov090_0216d528(void);
    void func_ov090_0216d590(void);
    void func_ov090_0216d598(void);
    void func_ov090_0216d86c(void);
    void func_ov090_0216da68(void);
    void func_ov090_0216daf8(void);
    void func_ov090_0216dca0(void);
    void func_ov090_0216dcd8(void);
};

class ActorProfileUnkWDBA : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkWDBA();
    ~ActorProfileUnkWDBA();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkWDBA *GetProfile();
};
