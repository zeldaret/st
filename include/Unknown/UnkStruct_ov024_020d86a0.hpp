#pragma once

#include "MainGame/AdventureMode.hpp"
#include "Unknown/UnkStruct_0204a060.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_ov024_020d86a0;

class UnkStruct_ov024_020d86a0_00 : public UnkStruct_0204a060_Base {
public:
    /* 00 (base) */
    /* 24 */ UnkStruct_ov024_020d86a0 *mpInstance;
    /* 28 */

    UnkStruct_ov024_020d86a0_00(UnkStruct_ov024_020d86a0 *pInstance);

    // data_ov024_020d8210
    /* 00 */ virtual ~UnkStruct_ov024_020d86a0_00() override;
    /* 0C */ virtual void vfunc_0C(void) override;
};

class UnkStruct_ov024_020d86a0 : public AutoInstance<UnkStruct_ov024_020d86a0> {
public:
    /* 00 */ UnkStruct_ov024_020d86a0_00 *mUnk_00;
    /* 04 */ SceneInfos mSceneInfos;
    /* 0C */ bool mUnk_0C;
    /* 0D */ bool mUnk_0D;
    /* 0E */ bool mUnk_0E;
    /* 0F */ bool mUnk_0F;
    /* 10 */ bool mUnk_10;
    /* 11 */ bool mUnk_11;
    /* 14 */

    UnkStruct_ov024_020d86a0();
    ~UnkStruct_ov024_020d86a0();

    // overlay 1
    void func_ov001_020bd818();

    // overlay 17
    void func_ov017_020c30e4();
    void func_ov017_020c3118(bool param1);
    void func_ov017_020c313c();
    void func_ov017_020c3180();
    void func_ov017_020c31cc();
    void func_ov017_020c3374(unk32 param1);

    // overlay 24
    void func_ov024_020d167c();

    static UnkStruct_ov024_020d86a0 *Create();
    static void Destroy();
};

extern UnkStruct_ov024_020d86a0 *data_ov024_020d86a0;
