//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSPTB : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSPTB();

    /* 30 */ virtual ~MapObjectUnkSPTB() override;

    void func_ov031_0210b51c(void);
    void func_ov031_0210b5a0(void);
    void func_ov031_0210b6d0(void);
    void func_ov031_0210b6e4(void);
    void func_ov031_0210b6f8(void);
    void func_ov031_0210b818(void);
    void func_ov031_0210b8a8(void);
    void func_ov031_0210b920(void);
    void func_ov031_0210b95c(void);
    void func_ov031_0210b9a4(void);
    void func_ov031_0210b9c0(void);
    void func_ov031_0210b9c4(void);
    void func_ov031_0210b9e0(void);
};

class MapObjectProfileUnkSPTB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSPTB();
    ~MapObjectProfileUnkSPTB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSPTB *GetProfile();
};
