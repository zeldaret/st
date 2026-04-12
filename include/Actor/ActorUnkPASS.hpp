//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPASS_c4 : public Actor_c4 {
public:
    ActorUnkPASS_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPASS : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPASS();

    /* 4C */ virtual ~ActorUnkPASS() override;

    void func_ov056_02138958(void);
    void func_ov056_0213896c(void);
    void func_ov056_02138980(void);
    void func_ov056_021389c8(void);
    void func_ov056_02138a60(void);
    void func_ov056_02138b58(void);
    void func_ov056_02138c30(void);
    void func_ov056_02138c80(void);
    void func_ov056_02138cc8(void);
    void func_ov056_02138d14(void);
    void func_ov056_02139070(void);
    void func_ov056_021390bc(void);
    void func_ov056_0213913c(void);
    void func_ov056_021391bc(void);
    void func_ov056_021391f8(void);
    void func_ov056_021392b8(void);
    void func_ov056_02139434(void);
    void func_ov056_021394a4(void);
    void func_ov056_021394d4(void);
    void func_ov056_021394f4(void);
    void func_ov056_02139530(void);
    void func_ov056_021397e4(void);
    void func_ov056_0213999c(void);
    void func_ov056_02139b74(void);
    void func_ov056_02139d60(void);
    void func_ov056_02139f3c(void);
    void func_ov056_0213a130(void);
    void func_ov056_0213a43c(void);
    void func_ov056_0213a4a0(void);
    void func_ov056_0213a504(void);
    void func_ov056_0213a568(void);
    void func_ov056_0213a56c(void);
    void func_ov056_0213a570(void);
    void func_ov056_0213a574(void);
    void func_ov056_0213a5d8(void);
    void func_ov056_0213a63c(void);
    void func_ov056_0213a6a0(void);
    void func_ov056_0213a704(void);
    void func_ov056_0213a768(void);
    void func_ov056_0213a7cc(void);
    void func_ov056_0213a7ec(void);
    void func_ov056_0213a8b8(void);
    void func_ov056_0213a8d8(void);
    void func_ov056_0213a934(void);
};

class ActorProfileUnkPASS : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkPASS();
    ~ActorProfileUnkPASS();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPASS *GetProfile();
};
