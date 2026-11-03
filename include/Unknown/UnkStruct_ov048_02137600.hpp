#include "Actor/Actor.hpp"
#include "Unknown/UnkStruct_ov031_Items.hpp"
#include "nitro/types.h"
#include "types.h"

class UnkStruct_ov048_02137600 : public Actor {
public:
    /* 00 (vtable) */
    /* 94 */ PAD(0x94, 0xD4);
    /* D4 */ UnkStruct_ov031_Items_00 mUnk_D4;
    /* D8 */ PAD(0xD8, 0xDC);
    /* DC */ unk32 mUnk_DC;
    /* E0 */

    UnkStruct_ov048_02137600();

    /* 18 */ virtual bool Init(unk32 param1) override;
    /* 54 */ virtual void vfunc_54(void);
    /* 58 */ virtual void vfunc_58(void);
    /* 5C */ virtual void vfunc_5C(void);
    /* 60 */ virtual void vfunc_60(void);
    /* 64 */ virtual void vfunc_64(void);
    /* 68 */ virtual void vfunc_68(void);
    /* 6C */ virtual void vfunc_6C(void) = 0;
    /* 70 */ virtual void vfunc_70(void) = 0;
    /* 74 */ virtual void vfunc_74(void);
};
