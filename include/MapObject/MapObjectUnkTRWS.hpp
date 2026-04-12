//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkTRWS : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkTRWS();

    /* 30 */ virtual ~MapObjectUnkTRWS() override;

    void func_ov031_02104584(void);
    void func_ov031_021045f8(void);
    void func_ov031_02104664(void);
    void func_ov031_0210466c(void);
    void func_ov031_02104674(void);
    void func_ov031_021046b0(void);
    void func_ov031_02104700(void);
    void func_ov031_021047f8(void);
    void func_ov031_0210481c(void);
    void func_ov031_021048bc(void);
    void func_ov031_02104a24(void);
    void func_ov031_02104a30(void);
    void func_ov031_02104ae0(void);
    void func_ov031_02104b1c(void);
    void func_ov031_02104bc8(void);
    void func_ov031_02104be8(void);
    void func_ov031_02104c14(void);
};

class MapObjectProfileUnkTRWS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkTRWS();
    ~MapObjectProfileUnkTRWS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkTRWS *GetProfile();
};
