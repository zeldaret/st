#pragma once

#include "Actor_Derived1.hpp"

class Actor_Character : public Actor_Derived1 {
public:
    /* 000 (base) */
    /* 120 */

    Actor_Character();

    // _ZTV19data_ov031_021132a8
    /* 020 */ virtual void Setup() override; // func_ov031_020e8530
    /* 04C */ virtual ~Actor_Character() override;
    /* 054 */ virtual void vfunc_54(unk32 param1) override;      // func_ov031_020e7680
    /* 058 */ virtual void vfunc_58(ActorState param1) override; // func_ov031_020e84d8
    /* 0AC */ virtual void vfunc_AC() override;                  // func_ov031_020e75fc
    /* 0BC */ virtual void vfunc_0BC();                          // func_ov031_020e7788
    /* 0C0 */ virtual void vfunc_0C0();                          // func_ov031_020e77b8
    /* 0C4 */ virtual void vfunc_0C4();                          // func_ov031_020e7b04
    /* 0C8 */ virtual void vfunc_0C8();                          // func_ov031_020e7e64
    /* 0CC */ virtual void vfunc_0CC();                          // func_ov031_020e81d4
    /* 0D0 */ virtual void vfunc_0D0();                          // func_ov031_020e82a8
    /* 0D4 */ virtual void vfunc_0D4();                          // func_ov031_020e82dc
    /* 0D8 */ virtual void vfunc_0D8();                          // func_ov031_020e8388
    /* 0DC */ virtual void vfunc_0DC();                          // func_ov031_020e8458
    /* 0E0 */ virtual void vfunc_0E0();                          // func_ov031_020e77b4
    /* 0E4 */ virtual void vfunc_0E4();                          // func_ov031_020e784c
    /* 0E8 */ virtual void vfunc_0E8();                          // func_ov031_020e7b9c
    /* 0EC */ virtual void vfunc_0EC();                          // func_ov031_020e7f50
    /* 0F0 */ virtual void vfunc_0F0();                          // func_ov031_020e8254
    /* 0F4 */ virtual void vfunc_0F4();                          // func_ov031_020e82d8
    /* 0F8 */ virtual void vfunc_0F8();                          // func_ov031_020e836c
    /* 0FC */ virtual void vfunc_0FC();                          // func_ov031_020e8414
    /* 100 */ virtual void vfunc_100();                          // func_ov031_020e848c
    /* 104 */ virtual void vfunc_104();                          // func_ov031_020e84b4
    /* 108 */ virtual void vfunc_108();                          // func_ov031_020e873c
    /* 10C */ virtual void vfunc_10C();                          // func_ov031_020e8630
    /* 110 */ virtual void vfunc_110();                          // func_ov031_020e8748
};
