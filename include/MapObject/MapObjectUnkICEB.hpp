//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkICEB : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkICEB();

    /* 30 */ virtual ~MapObjectUnkICEB() override;

    void func_ov094_02173c10(void);
    void func_ov094_02173c40(void);
    void func_ov094_02173d34(void);
    void func_ov094_0217425c(void);
    void func_ov094_021742d8(void);
    void func_ov094_02174360(void);
    void func_ov094_0217448c(void);
    void func_ov094_0217460c(void);
    void func_ov094_02174694(void);
    void func_ov094_021746ac(void);
    void func_ov094_021746cc(void);
    void func_ov094_02174870(void);
    void func_ov094_02174888(void);
};

class MapObjectProfileUnkICEB : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkICEB();
    ~MapObjectProfileUnkICEB();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkICEB *GetProfile();
};
