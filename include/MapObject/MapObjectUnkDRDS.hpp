//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRDS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkDRDS();

    /* 4C */ virtual ~MapObjectUnkDRDS() override;

    void func_ov031_020fd234(void);
    void func_ov031_020fd284(void);
    void func_ov031_020fd3f8(void);
    void func_ov031_020fd404(void);
    void func_ov031_020fd474(void);
    void func_ov031_020fd7e8(void);
    void func_ov031_020fd814(void);
    void func_ov031_020fdc08(void);
    void func_ov031_020fdcc4(void);
    void func_ov031_020fdd70(void);
    void func_ov031_020fdec8(void);
    void func_ov031_020fdfc0(void);
    void func_ov031_020fdfcc(void);
    void func_ov031_020fe04c(void);
    void func_ov031_020fe0d0(void);
    void func_ov031_020fe22c(void);
    void func_ov031_020fe250(void);
    void func_ov031_020fe278(void);
    void func_ov031_020fe2bc(void);
    void func_ov031_020fe2e8(void);
    void func_ov031_020fe32c(void);
    void func_ov031_020fe350(void);
    void func_ov031_020fe388(void);
    void func_ov031_020fe5fc(void);
};

class MapObjectProfileUnkDRDS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRDS();
    ~MapObjectProfileUnkDRDS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRDS *GetProfile();
};
