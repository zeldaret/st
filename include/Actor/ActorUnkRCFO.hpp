#pragma once

#include "Actor/Actor.hpp"
#include "Actor/ActorProfile.hpp"
#include "MapObject/MapObjectUnkRCFL.hpp"
#include "global.h"
#include "types.h"

class ActorUnkRCFO_094 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */

    ActorUnkRCFO_094();
    ~ActorUnkRCFO_094();

    void func_ov033_02119048(unk32 *param1);
    void func_ov033_021190dc();
    void func_ov033_021190f4();
};

class ActorUnkRCFO_910 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    ActorUnkRCFO_910(Vec2s *param1, unk32 param2); // func_ov000_0205b1cc

    void func_ov000_0205b1d8(Vec2s *param1);
    void func_ov000_0205b224(unk32 param1, unk32 param2);
};

class ActorUnkRCFO_DFC_Base : public LinkList<ActorUnkRCFO_DFC_Base> {
public:
    /* 00 */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    ActorUnkRCFO_DFC_Base() :
        mUnk_0C() {}
};

class ActorUnkRCFO_DFC : public ActorUnkRCFO_DFC_Base {
public:
    /* 00 (base) */
    /* 10 */ ActorUnkRCFO_910 *mUnk_10;
    /* 14 */ bool mUnk_14;
    /* 15 */ bool mUnk_15;
    /* 16 */

    ActorUnkRCFO_DFC(ActorUnkRCFO_910 *param1);

    virtual void vfunc_00();
};

class ActorUnkRCFO : public Actor {
public:
    /* 000 (base) */
    /* 094 */ ActorUnkRCFO_094 mUnk_094;
    /* 098 */ PAD(0x098, 0x910);
    /* 910 */ ActorUnkRCFO_910 mUnk_910;
    /* 914 */ PAD(0x918, 0x91C);
    /* 91C */ Vec2s mUnk_91C[0xC8];
    /* C3C */ MapObjectUnkRCFL *mUnk_C3C[0x64];
    /* DDC */ MapObjectUnkRCFL **mUnk_DCC;
    /* DD0 */ MapObjectUnkRCFL *mUnk_DD0;
    /* DD4 */ unk32 mUnk_DD4;
    /* DD8 */ Timer mUnk_DD8;
    /* DDC */ VecFx32Cpp mUnk_DDC;
    /* DE8 */ VecFx32Cpp mUnk_DE8;
    /* DF4 */ unk32 mUnk_DF4;
    /* DF8 */ unk32 mUnk_DF8;
    /* DFC */ ActorUnkRCFO_DFC mUnk_DFC;
    /* E14 */

    ActorUnkRCFO();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 1C */ virtual void Setup() override;
    /* 20 */ virtual void Update() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 2C */ virtual void vfunc_2C(unk32 param1) override;
    /* 4C */ virtual ~ActorUnkRCFO() override;

    void func_ov033_02119840(unk32 param1, unk32 param2);
    void func_ov033_021199f4();
    void func_ov033_02119a58();
    bool func_ov033_02119bc4();
};

class ActorProfileUnkRCFO : public ActorProfile {
public:
    /* 00 (base) */

    ActorProfileUnkRCFO();
    ~ActorProfileUnkRCFO();

    /* 0C */ virtual Actor *Create();

    static ActorProfileUnkRCFO *GetProfile();
};
