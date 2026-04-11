//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRTY : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRTY();

    /* 4C */ virtual ~MapObjectUnkDRTY() override;

    void func_ov061_02159660(void);
    void func_ov061_0215978c(void);
    void func_ov061_02159874(void);
    void func_ov061_021598b4(void);
    void func_ov061_02159a3c(void);
    void func_ov061_02159c44(void);
    void func_ov061_02159c64(void);
    void func_ov061_02159c78(void);
    void func_ov061_02159c7c(void);
    void func_ov061_02159ca4(void);
    void func_ov061_02159ce8(void);
    void func_ov061_02159d10(void);
    void func_ov061_02159d54(void);
};

class MapObjectProfileUnkDRTY : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRTY();
    ~MapObjectProfileUnkDRTY();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRTY *GetProfile();
};
