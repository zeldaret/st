//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkGSST : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkGSST();

    /* 4C */ virtual ~MapObjectUnkGSST() override;

    void func_ov031_0210bc94(void);
    void func_ov031_0210bdf8(void);
    void func_ov031_0210be50(void);
    void func_ov031_0210c024(void);
    void func_ov031_0210c038(void);
    void func_ov031_0210c03c(void);
    void func_ov031_0210c040(void);
    void func_ov031_0210c15c(void);
    void func_ov031_0210c16c(void);
    void func_ov031_0210c180(void);
    void func_ov031_0210c4e4(void);
    void func_ov031_0210c6b8(void);
    void func_ov031_0210c74c(void);
    void func_ov031_0210c844(void);
    void func_ov031_0210cac4(void);
    void func_ov031_0210caf0(void);
    void func_ov031_0210cb7c(void);
    void func_ov031_0210cc28(void);
    void func_ov031_0210cc2c(void);
    void func_ov031_0210cca0(void);
};

class MapObjectProfileUnkGSST : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkGSST();
    ~MapObjectProfileUnkGSST();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkGSST *GetProfile();
};
