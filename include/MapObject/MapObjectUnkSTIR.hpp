//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSTIR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkSTIR();

    /* 30 */ virtual ~MapObjectUnkSTIR() override;

    void func_ov031_02100bbc(void);
    void func_ov031_02100d70(void);
    void func_ov031_02100d74(void);
    void func_ov031_02100da4(void);
};

class MapObjectProfileUnkSTIR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSTIR();
    ~MapObjectProfileUnkSTIR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSTIR *GetProfile();
};
