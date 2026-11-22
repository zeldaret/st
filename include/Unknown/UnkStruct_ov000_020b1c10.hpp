#include "Actor/ActorUnkRCFO.hpp"
#include "LinkList.hpp"
#include "math.hpp"

class UnkStruct_ov000_020b1c10 : public LinkList<UnkStruct_ov000_020b1c10> {
public:
    /* 00 (vtable) */
    /* 0C */ unk32 mUnk_0C;
    /* 10 */ ActorUnkRCFO_910 mUnk_10;
    /* 18 */ PAD(0x18, 0x1C);
    /* 1C */ unk32 mUnk_1C;
    /* 20 */ u16 mUnk_20;
    /* 22 */

    UnkStruct_ov000_020b1c10(Vec2s *param1, unk32 param2);

    /* 00 */ virtual void vfunc_00(void);
};
