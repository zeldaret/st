//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "Actor/ActorUnkSCCN.hpp"
#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "math.hpp"
#include "types.h"

enum MapObjectUnkSANDState_ {
    /* 0 */ MapObjectUnkSANDState_0 = 0,
    /* 0 */ MapObjectUnkSANDState_1 = 1,
};

class MapObjectUnkSAND_40 {
public:
    /* 00 */ u8 mUnk_00;
    /* 01 */ u8 mUnk_01;
    /* 02 */ unk16 mUnk_02;
    /* 04 */ unk16 mUnk_04;
    /* 06 */

    void func_ov102_021835c4(VecFx32 *param1);
    void func_ov102_021837a8(Vec2bCpp param1, VecFx32 *param2);
};

class MapObjectUnkSAND : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ MapObjectUnkSAND_40 mUnk_40[2];
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ ActorUnkSCCN_B8 mUnk_50;
    /* 60 */ VecFx32 mUnk_60;

    MapObjectUnkSAND();

    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 0C */ virtual void vfunc_14();
    /* 30 */ virtual ~MapObjectUnkSAND() override;

    void func_ov031_0210acd4(void);
    void func_ov031_0210ad64(void);
    void func_ov031_0210ae90(void);
    void func_ov031_0210af50(void);
    void func_ov031_0210b018(void);
    void func_ov031_0210b028(void);
    void func_ov031_0210b0ac(void);
    void func_ov031_0210b0e4(void);
    void func_ov031_0210b144(void);
    void func_ov031_0210b1ec(void);
    void func_ov031_0210b2cc(void);
    void func_ov031_0210b32c(void);
    void func_ov031_0210b34c(void);

    static unk32 func_ov031_0210ae00(Vec2bCpp param1, void *param2);
    static void func_ov031_0210b17c(MapObjectUnkSAND_40 *param1, unk32 param2);
};

class MapObjectProfileUnkSAND : public MapObjectProfile_Derived6 {
public:
    /* 00 (base) */

    MapObjectProfileUnkSAND();
    ~MapObjectProfileUnkSAND();

    /* 00 */ virtual MapObject *Create();
    /* 10 */ virtual void vfunc_10() override;

    static MapObjectProfileUnkSAND *GetProfile();
};
