//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRBR : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRBR();

    /* 30 */ virtual ~MapObjectUnkTRBR() override;

    void func_ov027_02142ad8(void);
    void func_ov027_02142bc4(void);
    void func_ov027_02142c38(void);
    void func_ov027_02142c50(void);
    void func_ov027_02142c90(void);
    void func_ov027_02142cb0(void);
    void func_ov027_02142cd0(void);
};

class MapObjectProfileUnkTRBR : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRBR();
    ~MapObjectProfileUnkTRBR();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRBR *GetProfile();
};
