#pragma once

#include <math.hpp>
#include <nns/anim.h>

// assumed to be the only original name, from an assert inside `func_ov000_020609c4`
class CellAnimObject {
public:
    /* 00 */ CellAnim mCellAnim;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ unk32 mUnk_54;
    /* 58 */ unk32 mUnk_58; // another timer?
    /* 5C */ Vec2s mUnk_5C; // position of the animated texture
    /* 60 */ unk32 mUnk_60;
    /* 64 */ unk32 mUnk_64;
    /* 68 */ unk32 mUnk_68;
    /* 6C */ unk16 mUnk_6C;
    /* 6E */ bool mUnk_6E;
    /* 6F */ unk8 mUnk_6F;
    /* 70 */ unk32 mUnk_70;
    /* 74 */ unk16 mUnk_74;
    /* 76 */ unk16 mUnk_76;
    /* 78 */

    CellAnimObject();
    CellAnimObject(unk32 param1, unk32 param2) {
        this->mUnk_6E   = true;
        this->mUnk_70   = 0;
        this->mUnk_5C.x = 0;
        this->mUnk_5C.y = 0;
        this->mUnk_74   = 0;
        this->func_ov000_0206082c(param1, param2);
    }

    void func_ov000_0206082c(s16 param1, unk32 param2);
    void func_ov000_02060950();
    void func_ov000_020609b0();
    void func_ov000_020609c4(void);
    bool func_ov000_02060a98(unk32 param1);
    void func_ov000_02060ad0();
    bool func_ov000_02060af8(void);
    void func_ov000_02060b50();
    void func_ov000_02060b64(void);
    void func_ov000_02060bac();
    unk32 func_ov000_02060c28(void);
    void func_ov000_02060bd8(unk32 param1);
};
