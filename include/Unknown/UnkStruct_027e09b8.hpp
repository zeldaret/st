#pragma once

#include "Cutscene/Cutscene.hpp"
#include "MapObject/MapObject.hpp"
#include "Save/AdventureFlags.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"
#include "Unknown/UnkSystem1.hpp"
#include "types.h"
#include "versions.h"

struct stack_ov000_02073578 {
    unk8 unk_00;
    unk32 unk_04;
    unk32 unk_08;

    stack_ov000_02073578();
};

class UnkStruct_027e09b8_00 {
public:
    /* 000 */ STRUCT_PAD(0x000, 0xFD0);
    /* FD0 */ unk16 mUnk_FD0; // set to 1 when link has a blocking interaction?
    /* FD2 */ unk16 mUnk_FD2;
    /* FD4 */

    UnkStruct_027e09b8_00();

    void func_ov000_02073b5c();
    void func_ov000_02073bc0();
};

class UnkStruct_027e09b8_04_Base {
public:
    /* 00 (vtable) */
    /* 04 */

    /* 00 */ virtual ~UnkStruct_027e09b8_04_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10() = 0;
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */
};

class UnkStruct_027e09b8_04 : public UnkStruct_027e09b8_04_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x14);
    /* 14 */ UnkStruct_0204a060_Base mUnk_14;
    /* 38 */ UnkStruct_WarpUnk1_50 mUnk_38;
    /* 60 */ unk32 mUnk_60;
    /* 64 */

    UnkStruct_027e09b8_04() {
        this->vfunc_0C();
    }

    // data_ov000_020b22c0
    /* 00 */ virtual ~UnkStruct_027e09b8_04() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C() override;
    /* 20 */ virtual void vfunc_20() override;
};

class UnkStruct_027e09b8_08 : public UnkStruct_027e09b8_04_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x30);
    /* 30 */

    UnkStruct_027e09b8_08(void *param1);
    ~UnkStruct_027e09b8_08();

    /* 10 */ virtual void vfunc_10() override;
};

class UnkStruct_027e09b8_0C : public UnkStruct_027e09b8_04_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x0C);
    /* 0C */ UnkSystem1_ov000_Derived3 mUnk_0C;
    /* 20 */ STRUCT_PAD(0x20, 0x98);
    /* 98 */ UnkStruct_WarpUnk1_50 mUnk_98;
    /* C0 */ unk32 mUnk_C4;
    /* C4 */ MapObjectId mMapObjId;
    /* C8 */

    UnkStruct_027e09b8_0C() {
        this->vfunc_0C();
    }

    // data_ov000_020b234c
    /* 00 */ virtual ~UnkStruct_027e09b8_0C() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
};

class UnkStruct_027e09b8_10 : public UnkStruct_027e09b8_04_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x04, 0x18);
    /* 18 */

    UnkStruct_027e09b8_10();
    ~UnkStruct_027e09b8_10();

    /* 10 */ virtual void vfunc_10() override;
};

class UnkStruct_027e09b8_98 {
public:
    /* 0000 */ STRUCT_PAD(0x00, 0x151C);
    /* 151C */

    UnkStruct_027e09b8_98();
    ~UnkStruct_027e09b8_98();

    void func_ov000_020a7b34();
};

class UnkStruct_027e09b8 : public AutoInstance<UnkStruct_027e09b8> {
public:
    /* 00 */ UnkStruct_027e09b8_00 *mUnk_00;
    /* 04 */ UnkStruct_027e09b8_04_Base *mUnk_04[4];
    /* 14 */ u32 mAdventureFlags[32]; //! TODO
    /* 94 */ u16 mUnk_94;
    /* 96 */ bool mUnk_96;
    /* 97 */ bool mUnk_97;
    /* 98 */ UnkStruct_027e09b8_98 *mUnk_98;
    /* 9C */

    UnkStruct_027e09b8_04 *GetUnk04() {
        return (UnkStruct_027e09b8_04 *) this->mUnk_04[0];
    }

    UnkStruct_027e09b8_08 *GetUnk08() {
        return (UnkStruct_027e09b8_08 *) this->mUnk_04[1];
    }

    UnkStruct_027e09b8_0C *GetUnk0C() {
        return (UnkStruct_027e09b8_0C *) this->mUnk_04[2];
    }

    UnkStruct_027e09b8_10 *GetUnk10() {
        return (UnkStruct_027e09b8_10 *) this->mUnk_04[3];
    }

    bool HasAdventureFlag(AdventureFlag flag) {
        return GET_FLAG(this->mAdventureFlags, flag);
    }

    UnkStruct_027e09b8();
    ~UnkStruct_027e09b8();

    // itcm
    unk32 func_01ffd420();

    // overlay 0
    unk32 func_ov000_020732ec(unk32 param1);
    unk32 func_ov000_020732fc(unk32 param1);
    bool func_ov000_020732dc(unk32 param1);
    unk32 func_ov000_0207330c();
    void func_ov000_0207332c();
    unk32 func_ov000_02073388(void *param1, unk32 param2);
    unk32 func_ov000_02073470(void *param1, unk32 param2);
    void func_ov000_02073578(void *param1, unk32 param2);
    void func_ov000_02073610(void *param1, unk32 param2);

#if IS_JP
    void func_ov000_02074d78(unk32 param1);
#endif

    // overlay 1
    void ImportAdventureFlags(AdventureFlag *pAdventureFlags);
    void func_ov001_020b76c0(CutsceneIndex csIndex);
    void func_ov001_020b7700();
    void func_ov001_020b7728();

    static UnkStruct_027e09b8 *Create();
    static void Destroy();
};

extern UnkStruct_027e09b8 *data_027e09b8;
