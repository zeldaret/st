#pragma once

#include "Game/GameModeManager.hpp"
#include "Item/Item.hpp"
#include "types.h"

class UnkStruct_020d8698 : public GameModeLinkList<UnkStruct_020d8698> {
public:
    GameModeLinkListNode *GetNode() {
        GameModeLinkListNode *node = (GameModeLinkListNode *) this;
        if (node != NULL) {
            node = (GameModeLinkListNode *) ((u32 *) node + 1);
        }
        return node;
    }

    void func_ov024_020cd094();
    void func_ov024_020cd150();
    void func_ov024_020cd368(bool param1, bool param2);
    void func_ov024_020cd3d0();
    void func_ov024_020cd3e0(unk32 param1);
    void func_ov024_020cd3f0(unk32 param1);
    void func_ov024_020cd410();
    void func_ov024_020cd420();
    void func_ov024_020cd458(ItemFlag itemFlag, unk32 param2);

    /* 00 */ virtual ~UnkStruct_020d8698();
    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 10 */ virtual void vfunc_10();
    /* 14 */ virtual void vfunc_14();
    /* 18 */ virtual void vfunc_18();
};

extern UnkStruct_020d8698 *data_ov024_020d8698;
