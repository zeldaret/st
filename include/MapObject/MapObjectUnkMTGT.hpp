//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkMTGT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkMTGT();

    /* 4C */ virtual ~MapObjectUnkMTGT() override;

    void func_ov026_0210b4a4(void);
    void func_ov026_0210b7bc(void);
    void func_ov026_0210b8a4(void);
    void func_ov026_0210b8ac(void);
    void func_ov026_0210b8b4(void);
    void func_ov026_0210b8b8(void);
    void func_ov026_0210b8c4(void);
    void func_ov026_0210b91c(void);
    void func_ov026_0210b924(void);
    void func_ov026_0210b944(void);
    void func_ov026_0210b964(void);
    void func_ov026_0210b984(void);
    void func_ov026_0210ba14(void);
};

class MapObjectProfileUnkMTGT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkMTGT();
    ~MapObjectProfileUnkMTGT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkMTGT *GetProfile();
};
