//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSWFS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSWFS();

    /* 30 */ virtual ~MapObjectUnkSWFS() override;

    void func_ov031_0210cfcc(void);
    void func_ov031_0210d038(void);
    void func_ov031_0210d0f4(void);
    void func_ov031_0210d158(void);
    void func_ov031_0210d208(void);
    void func_ov031_0210d3b8(void);
    void func_ov031_0210d3cc(void);
    void func_ov031_0210d3e0(void);
    void func_ov031_0210d550(void);
    void func_ov031_0210d5b0(void);
    void func_ov031_0210d5c4(void);
    void func_ov031_0210d664(void);
    void func_ov031_0210d710(void);
    void func_ov031_0210d750(void);
    void func_ov031_0210d794(void);
    void func_ov031_0210d924(void);
    void func_ov031_0210d968(void);
};

class MapObjectProfileUnkSWFS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSWFS();
    ~MapObjectProfileUnkSWFS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSWFS *GetProfile();
};
