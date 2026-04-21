#pragma once

#include "Actor/ActorId.hpp"
#include "Map/MapObjectId.hpp"
#include "Unknown/Common.hpp"
#include "types.h"

class UnkActorFileSystem_Base_18 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    UnkActorFileSystem_Base_18(); // func_02016620
};

class UnkActorFileSystem_Base_20 {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkActorFileSystem_Base_20(unk32 param1, unk32 param2, unk32 param3, unk32 param4,
                               unk32 param5); // func_020153fc
};

class UnkActorFileSystem_Base_50 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ u8 mUnk_08;
    /* 08 */ u8 mUnk_09;
    /* 08 */ u8 mUnk_0A;
    /* 08 */ u8 mUnk_0B;
    /* 0C */ unk8 mUnk_0C;
    /* 0C */ unk8 mUnk_0D;
    /* 0C */ u16 mUnk_0E;
    /* 10 */

    UnkActorFileSystem_Base_50();
    ~UnkActorFileSystem_Base_50();
};

class UnkActorFileSystem_Base_54 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    UnkActorFileSystem_Base_54();
    ~UnkActorFileSystem_Base_54();
};

class UnkActorFileSystem_Base {
public:
    /* 00 (vtable) */
    /* 04 */ const char *mUnk_04;
    /* 08 */ const char *mUnk_08;
    /* 0C */ void *mUnk_0C;
    /* 10 */ void *mUnk_10;
    /* 14 */ unk8 mUnk_14; // bool?
    /* 15 */ unk8 mUnk_15; // bool?
    /* 16 */ unk8 mUnk_16; // bool?
    /* 17 */ unk8 mUnk_17; // pad?
    /* 18 */ UnkActorFileSystem_Base_18 mUnk_18;
    /* 20 */ UnkActorFileSystem_Base_20 mUnk_20;
    /* 2C */ UnkFileSystem3 mUnk_2C;
    /* 3C */ UnkFileSystem5 mUnk_3C;
    /* 50 */ UnkActorFileSystem_Base_50 *mUnk_50;
    /* 54 */ UnkActorFileSystem_Base_54 mUnk_54[4];
    /* 94 */

    UnkActorFileSystem_Base(const char *directory, void *param2, void *param3, void *param4, unk32 param5,
                            unk32 param6); // func_ov000_02058540

    // data_ov000_020b1b14
    /* 00 */ virtual ~UnkActorFileSystem_Base();
    /* 08 */

    void func_ov000_020586b4(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_020588f0(void);
    void func_ov000_02058900(void);
    void func_ov000_02058914(unk32 param1);
    void func_ov000_020589e4(void);
    unk32 func_ov000_02058a24();
    void unc_ov000_02058a58(void);
    unk32 func_ov000_02058a84(unk32 param1, const char *param2);
    void func_ov000_02058ab0(void);
};

class UnkActorFileSystem1 : public UnkActorFileSystem_Base {
public:
    /* 00 (base) */
    /* 94 */ unk16 mUnk_94;
    /* 96 */ unk16 mUnk_96;
    /* 98 */ unk16 mUnk_98;
    /* 9A */ unk16 mUnk_9A;
    /* 9C */ UnkFileSystem5 mUnk_9C;
    /* B0 */ bool mUnk_B0;
    /* B1 */ unk8 mUnk_B1; // bool?
    /* B2 */ unk8 mUnk_B2; // pad?
    /* B3 */ unk8 mUnk_B3; // pad?
    /* B4 */

    UnkActorFileSystem1();
    UnkActorFileSystem1(MapObjectId mapObjId2); // func_ov000_0209ce08

    // data_ov000_020b3568
    /* 00 */ virtual ~UnkActorFileSystem1() override;

    void func_ov000_0209cef0();
    void func_ov000_0209cfac();
    void func_ov000_0209cfdc(unk32 param1, unk32 param2);
};

class UnkActorFileSystem2 : public UnkActorFileSystem_Base {
public:
    /* 00 (base) */
    /* 94 */ unk16 mUnk_94;
    /* 96 */ unk16 mUnk_96;
    /* 98 */

    UnkActorFileSystem2(ActorId actorId2); // func_ov000_02097af8

    // data_ov000_020b3084
    /* 00 */ virtual ~UnkActorFileSystem2() override;
};
