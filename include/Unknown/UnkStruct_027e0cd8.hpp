#pragma once

#include "files.h"
#include "math.hpp"
#include "types.h"

#include "MapObject/MapObjectManager.hpp"
#include "Render/ModelRender.hpp"
#include "Save/SaveFile.hpp"
#include "Unknown/Common.hpp"
#include "Unknown/UnkFileSystem.hpp"
#include "Unknown/UnkStruct_027e09a4.hpp"

#include <algorithm>
#include <vector>

class MapObject_20;
class UnkStruct_027e0cd8;

template <typename T> class FixedVector {
private:
    /* 00 */ T *mpBegin;
    /* 04 */ T *mpEnd;
    /* 08 */ size_t mCapacity;

public:
    FixedVector() :
        mpBegin(NULL),
        mpEnd(NULL),
        mCapacity(0) {}

    void Init(T *pFrom, size_t capacity) {
        this->mpBegin   = pFrom;
        this->mpEnd     = pFrom;
        this->mCapacity = capacity;
    }

    T *begin() {
        return this->mpBegin;
    }

    T *end() {
        return this->mpEnd;
    }
};

class UnkStruct_ov001_020c40f4 {
public:
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ unk16 mUnk_0C;
    /* 0E */ u8 mUnk_0E;
    /* 0F */ u8 mUnk_0F;
    /* 10 */ unk32 mUnk_10;
    /* 14 */ unk32 mUnk_14;
    /* 18 */

    UnkStruct_ov001_020c40f4();
    ~UnkStruct_ov001_020c40f4();

public:
    struct Predicate {
        unk32 type;
        unk32 id;
        Predicate(unk32 t, unk32 i) :
            type(t),
            id(i) {}

        bool operator()(const UnkStruct_ov001_020c40f4 &elem) const {
            return type == elem.mUnk_0E && id == elem.mUnk_14;
        }
    };
};

class UnkStruct_027e0cd8_0C_160 {
public:
    bool func_ov026_02106aa8();
};

class UnkStruct_027e0cd8_0C_Base_88 {
public:
    /* 00 */ VecFx32 mUnk_00;
    /* 0C */ bool mUnk_0C;
    /* 0D */ unk8 mUnk_0D; // pad?
    /* 0E */ unk8 mUnk_0E; // pad?
    /* 0F */ unk8 mUnk_0F; // pad?
    /* 10 */

    UnkStruct_027e0cd8_0C_Base_88();

    void func_ov000_020823a8(unk32 param1);
    void func_ov000_0208261c();
};

class UnkStruct_027e0cd8_0C_Base_98 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0xB0);
    /* B0 */

    UnkStruct_027e0cd8_0C_Base_98();
    ~UnkStruct_027e0cd8_0C_Base_98();
};

class UnkStruct_027e0cd8_0C_Base_148_00_Base {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x14);
    /* 14 */

    UnkStruct_027e0cd8_0C_Base_148_00_Base();
};

class UnkStruct_027e0cd8_0C_Base_148_00 : public UnkStruct_027e0cd8_0C_Base_148_00_Base {
public:
    /* 00 */ STRUCT_PAD(0x14, 0x2C);
    /* 2C */

    UnkStruct_027e0cd8_0C_Base_148_00(ZMBEntryARAB *pARAB);
    ~UnkStruct_027e0cd8_0C_Base_148_00();
};

class UnkStruct_027e0cd8_0C_Base_148_01 : public UnkStruct_027e0cd8_0C_Base_148_00_Base {
public:
    /* 00 */ STRUCT_PAD(0x14, 0x28);
    /* 28 */

    UnkStruct_027e0cd8_0C_Base_148_01(ZMBEntryARAB *pARAB);
    ~UnkStruct_027e0cd8_0C_Base_148_01();
};

class UnkStruct_027e0cd8_0C_Base_148_02 : public UnkStruct_027e0cd8_0C_Base_148_00_Base {
public:
    /* 00 */ STRUCT_PAD(0x14, 0x34);
    /* 34 */

    UnkStruct_027e0cd8_0C_Base_148_02(ZMBEntryARAB *pARAB);
    ~UnkStruct_027e0cd8_0C_Base_148_02();
};

// UnkStruct_ov001_020c2a40 ?
class UnkStruct_027e0cd8_0C_Base_154_00 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x14);
    /* 14 */

    UnkStruct_027e0cd8_0C_Base_154_00(const UnkStruct_027e0cd8_0C_Base_154_00 &ref) {
        MI_CpuCopy32((void *) &ref, this, sizeof(UnkStruct_027e0cd8_0C_Base_154_00));
    }
};

class UnkStruct_027e0cd8_0C_Base {
public:
    /* 000 (vtable) */
    /* 004 */ UnkSystem3 mUnk_004;
    /* 010 */ ModelRender mSceneRender;
    /* 070 */ UnkFileSystem5 mUnk_070;
    /* 084 */ union {
        /* 84 */ wchar_t mUnk_084[2];
        struct {
            /* 084 */ u16 mUnk_084_00;
            /* 086 */ u16 mUnk_084_01;
        };
    };
    /* 088 */ UnkStruct_027e0cd8_0C_Base_88 mUnk_088;
    /* 098 */ UnkStruct_027e0cd8_0C_Base_98 *mUnk_098;
    /* 09C */ Vec2s mUnk_09C;
    /* 0A0 */ unk32 mUnk_0A0;
    /* 0A4 */ unk32 mUnk_0A4;
    /* 0A8 */ unk32 mUnk_0A8;
    /* 0AC */ bool mUnk_0AC;
    /* 0AC */ bool mUnk_0AD;
    /* 0AC */ bool mUnk_0AE;
    /* 0AC */ bool mUnk_0AF;
    /* 0B0 */ unk32 mUnk_0B0;
    /* 0B4 */ ZeldaObjectList *mUnk_0B4;
    /* 0B8 */ ZeldaObjectList *mUnk_0B8[8]; // map objects
    /* 0D8 */ ZeldaObjectList *mUnk_0D8;
    /* 0DC */ ZeldaObjectList *mUnk_0DC[8]; // actors
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ volatile BOOL mIsCS;
    /* 104 */ unk16 mUnk_104;
    /* 108 */ unk32 mUnk_108;
    /* 10C */ unk32 mUnk_10C;
    /* 110 */ unk32 mUnk_110;
    /* 114 */ unk32 mUnk_114;
    /* 118 */ unk32 mUnk_118;
    /* 11C */ unk32 mUnk_11C;
    /* 120 */ unk32 mUnk_120;
    /* 124 */ unk32 mUnk_124;
    /* 128 */ u16 mUnk_128;
    /* 12A */ bool mUnk_12A;
    /* 12B */ bool mUnk_12B;
    /* 12C */ bool mUnk_12C;
    /* 12D */ bool mUnk_12D;
    /* 12E */ bool mUnk_12E;
    /* 130 */ unk32 mUnk_130;
    /* 134 */ unk32 mUnk_134;
    /* 138 */ unk32 mUnk_138;
    /* 13C */ FixedVector<UnkStruct_ov001_020c40f4> mUnk_13C;
    /* 148 */ CustomVector<UnkStruct_027e0cd8_0C_Base_148_00_Base *> mUnk_148;
    /* 154 */ CustomVector<UnkStruct_027e0cd8_0C_Base_154_00> mUnk_154;
    /* 160 */

    UnkStruct_027e0cd8_0C_Base(UnkStruct_027e0cd8 *param1);

    /* 00 */ virtual ~UnkStruct_027e0cd8_0C_Base();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C(const UnkStruct_SceneChange1 *param1, bool param2, bool param3);
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual fx32 vfunc_28(VecFx32 *param1, unk32 param2, unk32 param3);
    /* 2C */ virtual void vfunc_2C();
    /* 30 */ virtual void LoadSceneModel(const UnkStruct_SceneChange1 *param1);
    /* 34 */ virtual void vfunc_34(unk32 param1);
    /* 38 */ virtual void vfunc_38();
    /* 3C */ virtual void vfunc_3C();
    /* 40 */ virtual void vfunc_40(u8 spawnIndex);

    // itcm
    fx32 func_01ffedf4(Vec2b *pPos);

    // overlay 0
    unk32 func_ov000_02080180(void *param1);
    void func_ov000_020801b0(Vec2b *param1, unk32 param2, unk32 param3);
    bool func_ov000_020802ec(u16 param1, VecFx32 *param2);
    void func_ov000_020803ec(u16 param1);
    void func_ov000_0208053c(u16 param1);
    bool func_ov000_02080658(unk32 param1, UnkStruct_SceneChange1 *param2);
    void func_ov000_020808f4(void *param1, void *param2, unk32 param3);
    unk32 func_ov000_02080a44();
    void func_ov000_02080a5c(VecFx32 *param1);
    void func_ov000_02080a78(VecFx32 *param1);

    // overlay 1
    void func_ov001_020b85d0(const UnkStruct_SceneChange1 *param1);
    void func_ov001_020b88c0(unk32 param1);
    void func_ov001_020b88ec();
    const UnkStruct_ov001_020c40f4 *func_ov001_020b8a5c(unk32 spawnIndex, unk32 param1);
    void func_ov001_020b8aec();
    void func_ov001_020b8b94(ZMBEntryARAB *pARAB);
    void func_ov001_020b8c30(const UnkStruct_027e0cd8_0C_Base_154_00 &param1);
    void *func_ov001_020b8c80(unk32 param1);
    void func_ov001_020b8c90(unk32 param1);
    void func_ov001_020b8c98(unk32 param1);
    void func_ov001_020b8db8();
    void func_ov001_020b8e24();
    void func_ov001_020b8e54();
};

class UnkStruct_027e0cd8_0C : public UnkStruct_027e0cd8_0C_Base {
public:
    /* 000 (base) */
    /* 160 */ UnkStruct_027e0cd8_0C_160 *mUnk_160;
    /* 164 */ STRUCT_PAD(0x164, 0x1E0);
    /* 1E0 */

    UnkStruct_027e0cd8_0C(UnkStruct_027e0cd8 *param1);

    // data_ov031_02112a0c
    /* 00 */ virtual ~UnkStruct_027e0cd8_0C() override;
    /* 08 */ virtual void vfunc_08() override;
    /* 0C */ virtual void vfunc_0C() override;
    /* 10 */ virtual void vfunc_10() override;
    /* 14 */ virtual void vfunc_14() override;
    /* 18 */ virtual void vfunc_18() override;
    /* 1C */ virtual void vfunc_1C(const UnkStruct_SceneChange1 *param1, bool param2, bool param3) override;
    /* 20 */ virtual void vfunc_20() override;
    /* 24 */ virtual void vfunc_24() override;
    /* 28 */ virtual fx32 vfunc_28(VecFx32 *param1, unk32 param2, unk32 param3) override;
    /* 2C */ virtual void vfunc_2C() override;
};

class UnkStruct_027e0cd8_0C_Derived2 : public UnkStruct_027e0cd8_0C_Base {
public:
    /* 00 (base) */
    /* 04 */ STRUCT_PAD(0x160, 0x4F8);
    UnkStruct_027e0cd8_0C_Derived2(UnkStruct_027e0cd8 *param1);
};

class UnkStruct_027e0cd8_0C_Derived3 : public UnkStruct_027e0cd8_0C_Base {
public:
    /* 00 (base) */

    UnkStruct_027e0cd8_0C_Derived3(UnkStruct_027e0cd8 *param1);
};

class UnkStruct_027e0cd8_04_0C {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ s16 mUnk_08;
    /* 0C */ volatile u32 mUnk_0C;
    /* 10 */ STRUCT_PAD(0x10, 0x50);
    /* 50 */

    UnkStruct_027e0cd8_04_0C();
};

class UnkStruct_027e0cd8_04 {
public:
    /* 00 */ unk8 mUnk_00;
    /* 00 */ bool mUnk_01;
    /* 04 */ unk32 mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ UnkStruct_027e0cd8_04_0C *mUnk_0C;
    /* 10 */ u8 mUnk_10;
    /* 11 */ u8 mUnk_11;
    /* 12 */ STRUCT_PAD(0x12, 0x40);
    /* 40 */ u8 mUnk_40[1][10]; // at least one
    STRUCT_PAD(0x4C, 0xB4);
    /* B4 */

    UnkStruct_027e0cd8_04();
    ~UnkStruct_027e0cd8_04();

    void func_ov000_02081354(const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1,
                             SaveFile_00000_0000_Data_184 *param3, bool param4);
};

class UnkStruct_027e0cd8_10 : public UnkDataStruct4 {
public:
    /* 00 (base) */
    /* D0 */ unk32 mUnk_D0;
    /* D4 */

    UnkStruct_027e0cd8_10();
    ~UnkStruct_027e0cd8_10();
};

class UnkStruct_027e0cd8 : public AutoInstance<UnkStruct_027e0cd8> {
public:
    /* 00 */ Vec2s mUnk_00;
    /* 04 */ UnkStruct_027e0cd8_04 *mUnk_04; // stage flags
    /* 08 */ UnkStruct_027e0cd8_04 *mUnk_08;
    /* 0C */ UnkStruct_027e0cd8_0C_Base *mUnk_0C; // related to train?
    /* 10 */ UnkStruct_027e0cd8_10 *mUnk_10;
    /* 14 */ unk16 mUnk_14;
    /* 16 */ bool mUnk_16;
    /* 16 */ bool mUnk_17;
    /* 18 */ UnkSystem8 mUnk_18;
    /* 24 */ VecFx32 mUnk_24;
    /* 30 */ unk32 mUnk_30; // scene index but unknown purpose
    /* 34 */ unk32 mUnk_34; // scene index but unknown purpose
    /* 38 */ s64 mUnk_38[2];
    /* 48 */ bool mUnk_48[2];
    /* 4C */

    UnkStruct_027e0cd8_0C *GetUnk0C() {
        return (UnkStruct_027e0cd8_0C *) this->mUnk_0C;
    }

    UnkStruct_027e0cd8();
    ~UnkStruct_027e0cd8();

    // overlay 0
    bool func_ov000_02081e30(unk32 param1, unk32 param2);
    void func_ov000_02081d7c(unk32 flagValue, unk32 param2, bool doSet);
    void func_ov000_02081ecc(unk16 param1, unk32 param2);
    void func_ov000_02081eec(unk16 param1, unk32 param2, unk32 param3);
    bool func_ov000_02081f3c(unk16 param1, unk32 param2);
    u32 func_ov000_02081d5c(); // returns current room index?
    bool func_ov000_02082124();
    bool func_ov000_02081c28();
    void func_ov000_02081ca0();

    // overlay 1
    void func_ov001_020b7830(const UnkStruct_SceneChange1 *param1);
    void func_ov001_020b7a7c();
    void func_ov001_020b7b38(const CourseListEntry *pEntry, const UnkStruct_func_ov000_020702a8 *pUnk1);
    void func_ov001_020b7c08(const UnkStruct_SceneChange1 *param1, const UnkStruct_WarpUnk1_A0 *param2);
    void func_ov001_020b7d64(const UnkStruct_SceneChange1 *param1);
    void func_ov001_020b7e50();
    void func_ov001_020b7e68(const UnkStruct_SceneChange1 *param1, bool param2);
    void func_ov001_020b803c();
    bool func_ov001_020b80fc(SceneIndex sceneIndex);
    void func_ov001_020b8120(SceneIndex sceneIndex);
    void func_ov001_020b818c();

    static UnkStruct_027e0cd8 *Create();
    static void Destroy();
};

extern UnkStruct_027e0cd8 *data_027e0cd8;
