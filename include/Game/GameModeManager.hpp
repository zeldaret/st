#pragma once

#include "Player/TouchControl.hpp"
#include "System/SysNew.hpp"
#include "Unknown/UnkStruct_02049b18.hpp"
#include "nitro/button.h"
#include "nitro/math.h"
#include "nitro/touch.h"
#include "types.h"

class GameModeManagerBase;
class GameModeManagerBase_104;
class GameModeManagerBase_104_0C;

class GameModeManagerBase_004 : public SysObject {
public:
    unk32 *mUnk_00;

    GameModeManagerBase_004();
    ~GameModeManagerBase_004();

    void func_0201bf24();
    void func_0201bf54();
    void func_0201bf90();
    void func_0201bfec();
    void func_0201c00c(unk32 param1, unk32 param2);
    void func_0201c068(unk16 param1);
    void func_0201c19c();
    void func_0201c124(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
    void func_0201c1e4();
    void func_0201c22c();

    void func_ov001_020bd734(unk32 *param1);
    void func_ov001_020bd784();
};

class GameModeLinkListNode {
public:
    /* 00 */ GameModeLinkListNode *mNext;
    /* 04 */ GameModeLinkListNode *mPrev;
    /* 08 */

    GameModeLinkListNode();
    ~GameModeLinkListNode();

    void func_020166cc(GameModeLinkListNode *param1);
    void func_020166f4(GameModeLinkListNode *param1);

    static void func_020166ac(GameModeLinkListNode *param1);
};

template <typename T> class GameModeLinkList : public GameModeLinkListNode {
public:
    GameModeLinkList *GetNext() {
        GameModeLinkListNode *next = mNext;
        if (next != NULL) {
            next = (GameModeLinkListNode *) ((u32 *) next - 1);
        }
        return (GameModeLinkList *) next;
    }

    GameModeLinkList *GetNext2() {
        GameModeLinkListNode *next = (GameModeLinkListNode *) *((u8 **) this + 2);
        if (next != NULL) {
            next = (GameModeLinkListNode *) ((u32 *) next - 1);
        }
        return (GameModeLinkList *) next;
    }

    GameModeLinkList *GetPrev() {
        GameModeLinkListNode *prev = mPrev;
        if (prev != NULL) {
            prev = (GameModeLinkListNode *) ((u32 *) prev - 1);
        }
        return (GameModeLinkList *) prev;
    }

    T *GetTarget() {
        return (T *) this;
    }
};

class GameModeManagerBase_104_0C : public SysObject {
public:
    GameModeLinkList<GameModeManagerBase_104_0C> mList;

    GameModeLinkList<GameModeManagerBase_104_0C> *GetOrigin() {
        return (GameModeLinkList<GameModeManagerBase_104_0C> *) this;
    }

    // data_ov000_020b1e48 vtable
    /* 00 */ virtual ~GameModeManagerBase_104_0C();
    /* 08 */ virtual void vfunc_08(void *param1);
    /* 0C */ virtual void vfunc_0C(void *param1);
};

class GameModeManagerBase_104_00 : public SysObject {
public:
    GameModeManagerBase_104_00() {}

    /* 04 */ GameModeLinkList<GameModeManagerBase_104> mList;
    /* 0C */ GameModeManagerBase_104_0C mUnk_0C;
};

class GameModeManagerBase_104 : public GameModeManagerBase_104_00 {
public:
    /* 00 (vtable) */
    /* 18 */ bool mUnk_18;
    /* 19 */ bool mUnk_19;
    /* 1A */ bool mUnk_1A;
    /* 1B */ unk8 mUnk_1B;
    /* 1C */

    GameModeLinkList<GameModeManagerBase_104> *GetOrigin() {
        return (GameModeLinkList<GameModeManagerBase_104> *) this;
    }

    GameModeManagerBase_104();

    // data_ov000_020b1e60 vtable
    /* 00 */ virtual ~GameModeManagerBase_104();
    /* 08 */ virtual void vfunc_08(Input *pButtons, TouchControl *pTouchControl);
    /* 0C */ virtual void vfunc_0C(unk32 param1);
    /* 10 */ virtual void vfunc_10(unk8 *param1);
    /* 14 */ virtual void vfunc_14(unk8 *param1);
    /* 18 */ virtual void vfunc_18(void);
};

class GameModeManagerBase : public SysObject {
public:
    /* 000 (vtable) */
    /* 004 */ GameModeManagerBase_004 mUnk_004;
    /* 008 */ void *mUnk_008;
    /* 00C */ STRUCT_PAD(0x0C, 0x1A);
    /* 01A */ bool mUnk_01A;
    /* 01C */ STRUCT_PAD(0x1C, 0xE0);
    /* 0E0 */ void *mUnk_0E0;
    /* 0E4 */ void *mUnk_0E4;
    /* 0E8 */ void *mUnk_0E8;
    /* 0EC */ unk32 mUnk_0EC;
    /* 0F0 */ unk32 mUnk_0F0;
    /* 0F4 */ bool mUnk_0F4;
    /* 0F4 */ bool mUnk_0F5;
    /* 0F4 */ unk8 mUnk_0F6;
    /* 0F4 */ unk8 mUnk_0F7;
    /* 0F8 */ unk32 mUnk_0F8;
    /* 0FC */ unk32 mUnk_0FC;
    /* 100 */ void *mUnk_100;
    /* 104 */ GameModeManagerBase_104 mUnk_104;
    /* 120 */ Input mButtons;
    /* 126 */ TouchControl mTouchControl;
    /* 148 */ unk32 mNextButtonID;
    /* 14C */ unk32 mButtonID;
    /* 150 */ bool mUnk_150;
    /* 150 */ unk8 mUnk_151;
    /* 150 */ unk8 mUnk_152;
    /* 150 */ unk8 mUnk_153;
    /* 154 */

    GameModeManagerBase(unk32 param1);
    void func_02018550(void);
    void func_02018554(void);
    void func_02018634(u16 speed);
    void *func_020186f8(unk32 param1);
    void func_02018704(void);
    void func_02018714(unk32 param1, unk32 param2, unk32 param3, unk32 param4, unk32 param5);
    void func_0201873c(void);
    void func_0201874c(void);
    void func_0201875c(void);
    void func_02018830(unk8 *param1);
    void func_02018908();
    void func_02018984(unk8 *param1);
    void func_02018a14(unk8 *param1);
    void func_02018a8c(void);
    void func_02018a9c(unk32 param1, unk32 param2);
    void func_02018aac(unk32 param1);
    void func_02018ac4(void);
    bool func_02018ad4(void);
    bool func_02018af0(GameModeLinkList<GameModeManagerBase_104> *param1);
    bool func_02018b54(GameModeLinkList<GameModeManagerBase_104> *param1);
    bool func_02018b90(GameModeLinkList<GameModeManagerBase_104> *param1, unk8 *param2);

    // data_02044064 vtable
    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual ~GameModeManagerBase();
    /* 10 */ virtual void vfunc_10(unk32 param1, unk32 param2, unk32 param3);
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
    /* 1C */ virtual void vfunc_1C();
    /* 20 */ virtual void vfunc_20();
    /* 24 */ virtual void vfunc_24();
    /* 28 */ virtual void vfunc_28(unk8 *param1);
    /* 2C */ virtual void vfunc_2C(unk8 *param1);
    /* 30 */ virtual void vfunc_30(unk32 param1);
    /* 34 */ virtual void vfunc_34();

    static GameModeManagerBase *Create(unk32 param1);
};
