//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkBSKM_c4 : public Actor_c4 {
public:
    ActorUnkBSKM_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkBSKM : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkBSKM();

    /* 4C */ virtual ~ActorUnkBSKM() override;

    void func_ov074_02156fbc(void);
    void func_ov074_02156fd0(void);
    void func_ov074_021570c4(void);
    void func_ov074_0215723c(void);
    void func_ov074_0215727c(void);
    void func_ov074_02157380(void);
    void func_ov074_021573c8(void);
    void func_ov074_02157408(void);
    void func_ov074_021577b4(void);
    void func_ov074_02157ab0(void);
    void func_ov074_0215812c(void);
    void func_ov074_02158130(void);
    void func_ov074_02158140(void);
    void func_ov074_021582c4(void);
    void func_ov074_021582e4(void);
    void func_ov074_02158318(void);
    void func_ov074_0215840c(void);
    void func_ov074_02158424(void);
    void func_ov074_02158478(void);
    void func_ov074_0215848c(void);
    void func_ov074_02158558(void);
    void func_ov074_02158638(void);
    void func_ov074_0215882c(void);
    void func_ov074_02158864(void);
    void func_ov074_02158918(void);
    void func_ov074_021589f8(void);
    void func_ov074_02158c0c(void);
    void func_ov074_02158c94(void);
    void func_ov074_02158ccc(void);
    void func_ov074_02158d60(void);
    void func_ov074_02158e70(void);
    void func_ov074_02158f00(void);
    void func_ov074_02158f50(void);
    void func_ov074_02158fb4(void);
    void func_ov074_021590cc(void);
    void func_ov074_021591b8(void);
    void func_ov074_0215940c(void);
    void func_ov074_021594f8(void);
    void func_ov074_0215967c(void);
    void func_ov074_02159984(void);
    void func_ov074_021599c8(void);
    void func_ov074_02159b44(void);
    void func_ov074_02159ba4(void);
    void func_ov074_02159c00(void);
    void func_ov074_02159d1c(void);
    void func_ov074_02159da8(void);
    void func_ov074_02159e60(void);
    void func_ov074_02159f4c(void);
    void func_ov074_02159ffc(void);
    void func_ov074_0215a0f8(void);
    void func_ov074_0215a238(void);
    void func_ov074_0215a4e4(void);
    void func_ov074_0215a5ac(void);
    void func_ov074_0215a6ac(void);
    void func_ov074_0215a6ec(void);
    void func_ov074_0215a968(void);
    void func_ov074_0215a9a4(void);
    void func_ov074_0215ad0c(void);
    void func_ov074_0215ad90(void);
    void func_ov074_0215ae2c(void);
    void func_ov074_0215aeac(void);
    void func_ov074_0215af54(void);
    void func_ov074_0215b0b0(void);
    void func_ov074_0215b1c4(void);
    void func_ov074_0215b374(void);
    void func_ov074_0215b49c(void);
    void func_ov074_0215b5dc(void);
    void func_ov074_0215b5f8(void);
    void func_ov074_0215b614(void);
    void func_ov074_0215bba8(void);
    void func_ov074_0215bc7c(void);
    void func_ov074_0215be0c(void);
    void func_ov074_0215c130(void);
    void func_ov074_0215c528(void);
    void func_ov074_0215c5bc(void);
    void func_ov074_0215c614(void);
    void func_ov074_0215c668(void);
    void func_ov074_0215c6b0(void);
    void func_ov074_0215c6d4(void);
    void func_ov074_0215c70c(void);
    void func_ov074_0215c774(void);
    void func_ov074_0215c7a8(void);
    void func_ov074_0215c850(void);
    void func_ov074_0215c980(void);
    void func_ov074_0215c99c(void);
};

class ActorProfileUnkBSKM : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkBSKM();
    ~ActorProfileUnkBSKM();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkBSKM *GetProfile();
};
