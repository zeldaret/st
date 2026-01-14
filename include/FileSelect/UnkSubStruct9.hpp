#pragma once

#include "FileSelect/FileSelectMicTest.hpp"
#include "System/SysNew.hpp"
#include "global.h"
#include "iterator.hpp"
#include "nitro/math.h"
#include "types.h"

// file tab manager?
class UnkSubStruct9 : public SysObject {
public:
    /* 000 */ u8 mSaveSlotIndex; // save slot index, 0 for file 1 and 1 for file 2
    /* 001 */ unk8 mUnk_001;
    /* 002 */ unk8 mUnk_002;
    /* 003 */ unk8 mUnk_003;
    /* 004 */ UnkSystem2_UnkSubSystem1_Derived1 mUnk_004;
    /* 064 */ UnkSystem2_UnkSubSystem5 mUnk_064;
    /* 29C */ UnkStruct_ov019_020d24c8_28_258 mUnk_29C; // top-left 1 and 2 icons
    /* 2B4 */ UnkStruct_ov019_020d24c8_28_258 mUnk_2B4; // static hearts (hearts before beating heart)
    /* 2CC */ UnkSubStruct19 mUnk_2CC;
    /* 344 */ UnkSubStruct19 mUnk_344;
    /* 3BC */ UnkSubStruct19 mUnk_3BC;
    /* 434 */ UnkSubStruct19 mUnk_434;
    /* 4AC */ UnkSubStruct19 mUnk_4AC;
    /* 524 */ UnkSubStruct19 mUnk_524; // forest dungeon icon
    /* 59C */ UnkSubStruct19 mUnk_59C; // snow dungeon icon
    /* 614 */ UnkSubStruct19 mUnk_614; // ocean dungeon icon
    /* 68C */ UnkSubStruct19 mUnk_68C; // fire dungeon icon
    /* 704 */ UnkSubStruct19 mUnk_704; // desert dungeon icon
    /* 77C */ Vec2us mUnk_77C;
    // int pad[10];
    /* 780 */

    struct stack_struct2 {
        u16 param1;
        u16 param2;

        void operator=(stack_struct2 &from) {
            this->param1 = from.param1;
            this->param2 = from.param2;
        }
    };

    UnkSubStruct9();
    UnkSubStruct9(stack_struct1 param1);
    void Init();
    void Init(stack_struct1 param1);
    void func_ov019_020cbaec();
    bool IsPlayerNameSet();
    void func_ov019_020cbb40();
    void func_ov019_020cbb94();
    void func_ov019_020cbc0c();
    void func_ov019_020cc5ac(Vec2us *param1);

    void func_ov000_02062be0();
};
