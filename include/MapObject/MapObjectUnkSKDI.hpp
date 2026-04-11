//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkSKDI : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkSKDI();

    /* 4C */ virtual ~MapObjectUnkSKDI() override;

    void func_ov031_02106190(void);
    void func_ov031_021061dc(void);
    void func_ov031_02106224(void);
    void func_ov031_021062ec(void);
    void func_ov031_021063cc(void);
    void func_ov031_021063dc(void);
    void func_ov031_0210643c(void);
    void func_ov031_02106678(void);
    void func_ov031_02106a70(void);
    void func_ov031_02106a84(void);
    void func_ov031_02106c78(void);
    void func_ov031_02106c98(void);
    void func_ov031_02106ca0(void);
    void func_ov031_02106ca8(void);
    void func_ov031_02106cb0(void);
};

class MapObjectProfileUnkSKDI : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkSKDI();
    ~MapObjectProfileUnkSKDI();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkSKDI *GetProfile();
};
