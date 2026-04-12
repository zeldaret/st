//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "global.h"
#include "types.h"

class ActorUnkPBK2_c4 : public Actor_c4 {
public:
    ActorUnkPBK2_c4(Actor *param1);

    /* 00 */ virtual unk32 vfunc_00(Actor_c4_stack param1, unk32 param2) override;
    /* 04 */ virtual void vfunc_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0c(unk32 param1) override;
};

class ActorUnkPBK2 : public Actor {
public:
    /* 00 (base) */
    /* 94 */

    ActorUnkPBK2();

    /* 4C */ virtual ~ActorUnkPBK2() override;

    void func_ov048_021323b0(void);
    void func_ov048_0213248c(void);
    void func_ov048_021327d0(void);
    void func_ov048_0213280c(void);
    void func_ov048_02132850(void);
    void func_ov048_02132a78(void);
    void func_ov048_02132a90(void);
    void func_ov048_02132aa4(void);
    void func_ov048_02132ac4(void);
    void func_ov048_02132b84(void);
    void func_ov048_02132d30(void);
    void func_ov048_02132de4(void);
    void func_ov048_02132e78(void);
    void func_ov048_02132eb8(void);
    void func_ov048_02132f64(void);
    void func_ov048_021331e4(void);
    void func_ov048_02133264(void);
    void func_ov048_021332e0(void);
    void func_ov048_0213331c(void);
    void func_ov048_02133454(void);
    void func_ov048_021334c8(void);
    void func_ov048_02133500(void);
    void func_ov048_02133508(void);
    void func_ov048_02133514(void);
    void func_ov048_02133580(void);
    void func_ov048_021335e8(void);
    void func_ov048_02133678(void);
    void func_ov048_02133694(void);
    void func_ov048_021336dc(void);
    void func_ov048_021337d8(void);
    void func_ov048_02133810(void);
    void func_ov048_02133914(void);
    void func_ov048_02133a38(void);
};

class ActorProfileUnkPBK2 : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileUnkPBK2();
    ~ActorProfileUnkPBK2();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkPBK2 *GetProfile();
};
