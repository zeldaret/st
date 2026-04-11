//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkKNBN : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkKNBN();

    /* 4C */ virtual ~MapObjectUnkKNBN() override;

    void func_ov058_02150a64(void);
    void func_ov058_02150ac4(void);
    void func_ov058_02150b38(void);
    void func_ov058_02150bd0(void);
    void func_ov058_02150cfc(void);
    void func_ov058_02150d84(void);
    void func_ov058_02150dac(void);
    void func_ov058_02150dc4(void);
    void func_ov058_02150ddc(void);
    void func_ov058_02150e74(void);
    void func_ov058_02150e88(void);
    void func_ov058_02150eb4(void);
    void func_ov058_02150eec(void);
    void func_ov058_02150fbc(void);
    void func_ov058_02151078(void);
    void func_ov058_02151098(void);
    void func_ov058_02151160(void);
};

class MapObjectProfileUnkKNBN : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkKNBN();
    ~MapObjectProfileUnkKNBN();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkKNBN *GetProfile();
};
