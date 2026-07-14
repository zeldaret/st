//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWHT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSWHT();

    /* 30 */ virtual ~MapObjectUnkSWHT() override;

    void func_ov031_02101be8(void);
    void func_ov031_02101ce8(void);
    void func_ov031_02101dd8(void);
    void func_ov031_02101e1c(void);
    void func_ov031_02101f88(void);
    void func_ov031_02101f94(void);
    void func_ov031_02101fb4(void);
    void func_ov031_021020ec(void);
    void func_ov031_021021c0(void);
    void func_ov031_021023b0(void);
};

class MapObjectProfileUnkSWHT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWHT();
    ~MapObjectProfileUnkSWHT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWHT *GetProfile();
};
