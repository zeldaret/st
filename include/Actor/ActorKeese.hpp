#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "ActorSpinut.hpp"
#include "Map/MapObjectId.hpp"
#include "Unknown/UnkStruct_ov000_020b19f0.hpp"
#include "global.h"
#include "types.h"

enum ActorKeeseState_ {
    ActorKeeseState_0 = 0,
    ActorKeeseState_1 = 1,
    ActorKeeseState_2 = 2,
    ActorKeeseState_3 = 3,
    ActorKeeseState_4 = 4,
    ActorKeeseState_5 = 5,
    ActorKeeseState_6 = 6,
    ActorKeeseState_7 = 7,
    ActorKeeseState_8 = 8,
    ActorKeeseState_9 = 9,
    ActorKeeseState_Max
};

class ActorKeese;
class UnkStruct_ov000_020b34c4 {
public:
    /* 00 (vtable) */
    /* 04 */ MapObjectId mUnk_04;
    /* 08 */

    UnkStruct_ov000_020b34c4(MapObjectId param1) :
        mUnk_04(param1) {}

    // data_ov000_020b34c4
    /* 00 */ virtual bool vfunc_00(MapObject *param1);
};

class UnkStruct_ov032_0212251c : public UnkStruct_ov000_020b34c4 {
public:
    /* 00 (base) */
    /* 08 */

    UnkStruct_ov032_0212251c();

    // data_ov032_0212251c
    /* 00 */ virtual bool vfunc_00(MapObject *param1) override;

    VecFx32 *func_020170ac(VecFx32 *param1);
};

class ActorKeese_2AC : public UnkStruct_ov031_Items_00 {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x08);
    /* 08 */ ActorKeese *mUnk_08;
    /* 0C */ VecFx32 mUnk_0C;
    /* 18 */

    ActorKeese_2AC(ActorKeese *param1);

    // data_ov032_02122528
    /* 00 */ virtual ~ActorKeese_2AC() override;
    /* 08 */ virtual bool vfunc_08(const UnkStruct_ov031_020f3310 *param1, unk32 param2) override;
    /* 0C */ virtual bool vfunc_0C(const UnkStruct_ov031_020e54d4 *param1, unk32 *param2, unk32 param3) override;
};

class ModelRender_ov032_02122568 : public UnkStruct_ov000_020b3268 {
public:
    /* 00 (base) */
    /* 60 */ STRUCT_PAD(0x60, 0x6C);
    /* 6C */ unk32 mUnk_6C;
    /* 70 */

    ModelRender_ov032_02122568(G3d_Model *pModel);

    // data_ov032_02122568
};

class ActorKeese_284 : public UnkSystem7 {
public:
    /* 00 (base) */
    /* 04 */ unk32 mUnk_04;
    /* 04 */ unk32 mUnk_08;
    /* 0C */

    ActorKeese_284();
};

class ActorKeese : public Actor_Derived2 {
public:
    /* 000 (base) */
    /* 0B0 */ ModelRender_ov032_02122568 mUnk_0B0;
    /* 120 */ ActorSpinut_110 mUnk_120;
    /* 1B0 */ STRUCT_PAD(0x1B0, 0x1CC);
    /* 1CC */ ActorSpinut_1BC mUnk_1CC;
    /* 20C */ STRUCT_PAD(0x20C, 0x228);
    /* 228 */ unk16 mUnk_228;
    /* 22A */ unk16 mUnk_22A;
    /* 22C */ Actor_Derived1_EC mUnk_22C;
    /* 244 */ unk16 mUnk_244;
    /* 246 */ unk16 mUnk_246;
    /* 248 */ Actor_9C mUnk_248;
    /* 268 */ UnkStruct_ActorUnkCANS_224 mUnk_268;
    /* 278 */ UnkSystem7 mUnk_278;
    /* 27C */ unk32 mUnk_27C;
    /* 280 */ unk32 mUnk_280;
    /* 284 */ ActorKeese_284 mUnk_284[0x2];
    /* 29C */ fx32 mUnk_29C;
    /* 2A0 */ fx32 mUnk_2A0;
    /* 2A4 */ unk32 mUnk_2A4;
    /* 2A8 */ fx16 mUnk_2A8;
    /* 2AC */ ActorKeese_2AC mUnk_2AC;
    /* 2C4 */ VecFx32 mUnk_2C4;
    /* 2D0 */ Actor_38 *mUnk_2D0;
    /* 2D4 */ ActorRef mUnk_2D4;
    /* 2D8 */

    ActorKeese();

    /* 18 */ virtual bool vfunc_18(unk32 param1) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;

    void func_ov032_0211e0c0();
    void func_ov032_0211e0d4(s16 param1, unk32 param2);
    void func_ov032_0211e308();
    void func_ov032_0211e380();
    void func_ov032_0211e40c();
    void SetState(ActorState state);
    void func_ov032_0211e468();
    void func_ov032_0211e9ec();
    void func_ov032_0211eb60();
    void func_ov032_0211ece8();
    void func_ov032_0211ee5c();
    void func_ov032_0211f054();
    void func_ov032_0211f0a8();
    void func_ov032_0211f1f0();
    void func_ov032_0211f1f4();
    void func_ov032_0211f300();
    void func_ov032_0211f310();
    void func_ov032_0211f3ac();
    void func_ov032_0211f404();
    void func_ov032_0211f4a4();
    void func_ov032_0211f50c();
    void func_ov032_0211f560();
    void func_ov032_0211f58c();
    void func_ov032_0211f604();
    void func_ov032_0211f614();
    void func_ov032_0211f6bc();
    void func_ov032_0211f804();
    bool func_ov032_0211f93c(VecFx32 *param1, unk32 param2);
    bool func_ov032_0211f9c4();
    bool func_ov032_0211fa4c(unk32 param1);
    static void func_ov032_0211faf0(void *param1, unk32 param2);
};

class ActorProfileKeese : public ActorProfile_Derived1 {
public:
    /* 00 (base) */

    ActorProfileKeese();

    /* 0C */ virtual Actor *Create();

    static ActorProfileKeese *GetProfile();
};
