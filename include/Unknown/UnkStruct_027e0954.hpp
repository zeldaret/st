#pragma once

#include "Game/GameModeManager.hpp"
#include "global.h"
#include "types.h"

class UnkStruct_027e0954_00 {
public:
    /* 00 */ unk32 mUnk_00;
    /* 04 */ LinkList<int> mUnk_04; //! TODO: unknown target type
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    ~UnkStruct_027e0954_00();
};

class UnkStruct_027e0954 : public AutoInstance<UnkStruct_027e0954> {
public:
    /* 00 */ UnkStruct_027e0954_00 mUnk_00[4];
    /* 40 */

    UnkStruct_027e0954();
    ~UnkStruct_027e0954() {}

    // overlay 0
    static UnkStruct_027e0954 *Create();
    static void Destroy();
};

extern UnkStruct_027e0954 *data_027e0954;
