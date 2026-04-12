//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBMFL : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkBMFL();

    /* 30 */ virtual ~MapObjectUnkBMFL() override;

    void func_ov031_021025c4(void);
    void func_ov031_02102708(void);
    void func_ov031_02102718(void);
    void func_ov031_02102728(void);
    void func_ov031_021027a4(void);
    void func_ov031_02102894(void);
    void func_ov031_021029f0(void);
    void func_ov031_02102a40(void);
    void func_ov031_02102ad8(void);
    void func_ov031_02102af4(void);
};

class MapObjectProfileUnkBMFL : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBMFL();
    ~MapObjectProfileUnkBMFL();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBMFL *GetProfile();
};
