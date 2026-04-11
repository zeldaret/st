//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRLSG : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkRLSG();

    /* 4C */ virtual ~MapObjectUnkRLSG() override;

    void func_ov031_0210a008(void);
    void func_ov031_0210a130(void);
    void func_ov031_0210a388(void);
    void func_ov031_0210a4ec(void);
    void func_ov031_0210a610(void);
    void func_ov031_0210a670(void);
    void func_ov031_0210a690(void);
    void func_ov031_0210a71c(void);
    void func_ov031_0210a808(void);
    void func_ov031_0210a820(void);
    void func_ov031_0210a86c(void);
    void func_ov031_0210a914(void);
    void func_ov031_0210a964(void);
    void func_ov031_0210a9c0(void);
    void func_ov031_0210a9cc(void);
};

class MapObjectProfileUnkRLSG : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRLSG();
    ~MapObjectProfileUnkRLSG();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRLSG *GetProfile();
};
