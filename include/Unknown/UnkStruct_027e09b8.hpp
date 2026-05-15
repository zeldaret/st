#pragma once

#include "MapObject/MapObject.hpp"
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
    /* 000 */ STRUCT_PAD(0x000, 0xFD4);
    /* FD4 */

    UnkStruct_027e09b8_00();
    ~UnkStruct_027e09b8_00();
};

class UnkStruct_027e09b8_04 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x64);
    /* 64 */

    UnkStruct_027e09b8_04();
    ~UnkStruct_027e09b8_04();
};

class UnkStruct_027e09b8_08 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x00);
    /* 00 */

    UnkStruct_027e09b8_08();
    ~UnkStruct_027e09b8_08();
};

class UnkStruct_027e09b8_0C {
public:
    /* 00 */ STRUCT_PAD(0x00, 0xC4);
    /* C4 */ MapObjectId mMapObjId;
    /* C8 */

    UnkStruct_027e09b8_0C();
    ~UnkStruct_027e09b8_0C();
};

class UnkStruct_027e09b8_10 {
public:
    /* 00 */ STRUCT_PAD(0x00, 0x18);
    /* 18 */

    UnkStruct_027e09b8_10();
    ~UnkStruct_027e09b8_10();
};

class UnkStruct_027e09b8 {
public:
    /* 00 */ UnkStruct_027e09b8_00 *mUnk_00;
    /* 04 */ UnkStruct_027e09b8_04 *mUnk_04;
    /* 08 */ UnkStruct_027e09b8_08 *mUnk_08;
    /* 0C */ UnkStruct_027e09b8_0C *mUnk_0C;
    /* 10 */ UnkStruct_027e09b8_10 *mUnk_10;
    /* 14 */ u32 mAdventureFlags[32]; //! TODO
#if IS_JP
    //! TODO: figure out if the other versions got these too
    /* 94 */ u16 mUnk_94;
#endif

    unk32 func_01ffd420();

    unk32 func_ov000_020732ec(unk32 param1);
    unk32 func_ov000_020732fc(unk32 param1);
    bool func_ov000_020732dc(unk32 param1);
    unk32 func_ov000_0207330c();
    unk32 func_ov000_02073470(void *param1, unk32 param2);
    unk32 func_ov000_02073388(void *param1, unk32 param2);
    void func_ov000_02073578(void *param1, unk32 param2);

#if IS_JP
    void func_ov000_02074d78(unk32 param1);
#endif
};

extern UnkStruct_027e09b8 *data_027e09b8;
