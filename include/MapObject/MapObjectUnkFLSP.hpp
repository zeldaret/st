//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkFLSP : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkFLSP();

    /* 4C */ virtual ~MapObjectUnkFLSP() override;

    void func_ov070_021442f4(void);
    void func_ov070_0214433c(void);
    void func_ov070_021443a0(void);
    void func_ov070_02144400(void);
    void func_ov070_02144468(void);
    void func_ov070_021444e4(void);
    void func_ov070_02144770(void);
    void func_ov070_02144780(void);
    void func_ov070_021447e0(void);
    void func_ov070_02144a8c(void);
    void func_ov070_02144dd4(void);
    void func_ov070_02144df4(void);
    void func_ov070_02144e08(void);
    void func_ov070_02144e90(void);
    void func_ov070_02144ec0(void);
    void func_ov070_02144f10(void);
    void func_ov070_02144f1c(void);
    void func_ov070_021450b8(void);
};

class MapObjectProfileUnkFLSP : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkFLSP();
    ~MapObjectProfileUnkFLSP();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkFLSP *GetProfile();
};
