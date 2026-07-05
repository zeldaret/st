#pragma once

class MapObjectPot_Base : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectPot_Base();

    // data_ov000_020b35d0

    /* 00 */ virtual bool vfunc_00();                                           // func_ov000_0209d780
    /* 24 */ virtual void vfunc_24(MapObject *param1, VecFx32 param2) override; // func_ov000_0209d8e8
    /* 28 */ virtual unk32 vfunc_28() override;                                 // func_ov000_0209d9f8
    /* 30 */ virtual ~MapObjectPot_Base() = 0 override;
    /* 38 */ virtual void vfunc_38() override;             // func_ov000_0209d9ac
    /* 3C */ virtual bool vfunc_3C() override;             // func_ov000_0209db74
    /* 40 */ virtual bool vfunc_40() override;             // func_ov000_0209db7c
    /* 44 */ virtual void vfunc_44(unk32, unk32) override; // func_ov000_0209d7a4
    /* 48 */ virtual void vfunc_48() override;             // func_ov000_0209da60
    /* 4C */ virtual void vfunc_4C() override;             // func_ov000_0209da70
    /* 50 */ virtual void vfunc_50() override;             // func_ov000_0209dac0
    /* 54 */ virtual unk32 vfunc_54() override;            // func_ov000_0209da64

    // overlay 0
    void func_ov000_0209d8e8(MapObjectPot_Base *param1, fx32 param2);
    unk32 func_ov000_0209da64();
};

class MapObject_10_Pot : public MapObject_10 {
public:
    /* 00 (base) */
    /* 24 */

    MapObject_10_Pot() {}
};

class MapObjectProfilePot_Base : public MapObjectProfile_Derived2 {
public:
    /* 00 (base) */
    /* D4 */ MapObject_10_Pot mUnk_D4;

    MapObjectProfilePot_Base(MapObjectId param1, MapObjectId param2) :
        MapObjectProfile_Derived2(param1, param2) {}
};
