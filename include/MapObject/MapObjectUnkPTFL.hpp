//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"

typedef MapObjState MapObjectUnkPTFLState;
enum MapObjectUnkPTFLState_ {
    /* 0 */ MapObjectUnkPTFLState_0 = 0,
    /* 1 */ MapObjectUnkPTFLState_1 = 1,
    /* 2 */ MapObjectUnkPTFLState_2 = 2,
    /* 3 */ MapObjectUnkPTFLState_3 = 3,
    /* 4 */ MapObjectUnkPTFLState_4 = 4,
};

class MapObjectUnkPTFL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */ unk32 mUnk_40;
    /* 44 */ u16 mUnk_44;
    /* 46 */ unk16 mUnk_46;
    /* 48 */ unk32 mUnk_48;
    /* 4C */ unk32 mUnk_4C;
    /* 50 */ unk32 mUnk_50;
    /* 54 */ fx16 mUnk_54;
    /* 56 */ volatile u16 mUnk_56;
    /* 58 */ volatile u16 mUnk_58;
    /* 5A */ u8 mUnk_5A;
    /* 5B */ bool mUnk_5B;
    /* 5C */ bool mUnk_5C;

    MapObjectUnkPTFL();

    /* 08 */ virtual void vfunc_08();
    /* 0C */ virtual void vfunc_0C();
    /* 0C */ virtual void vfunc_14();
    /* 30 */ virtual ~MapObjectUnkPTFL() override;

    // overlay 70
    void func_ov070_0214ba34(void);
    void func_ov070_0214bb78(void);
    void func_ov070_0214bbd0(MapObjectUnkPTFLState state, bool param2);
    void func_ov070_0214bd48(void);
    void func_ov070_0214bd90(void);
    void func_ov070_0214bf58(void);
    bool func_ov070_0214bf5c(void);
    bool func_ov070_0214bf6c(void);
    void func_ov070_0214bfbc(void);

    // overlay 102
    void func_ov102_0218419c();
    void func_ov102_021843b4();
};

class MapObjectProfileUnkPTFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkPTFL();
    ~MapObjectProfileUnkPTFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkPTFL *GetProfile();
};
