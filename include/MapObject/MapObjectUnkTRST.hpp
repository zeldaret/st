//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRST : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRST();

    /* 30 */ virtual ~MapObjectUnkTRST() override;

    void func_ov030_02143860(void);
    void func_ov030_0214394c(void);
    void func_ov030_021439c0(void);
    void func_ov030_021439d8(void);
    void func_ov030_02143a18(void);
    void func_ov030_02143a38(void);
    void func_ov030_02143a58(void);
};

class MapObjectProfileUnkTRST : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRST();
    ~MapObjectProfileUnkTRST();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRST *GetProfile();
};
