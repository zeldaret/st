//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBRGS : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBRGS();

    /* 4C */ virtual ~MapObjectUnkBRGS() override;

    void func_ov071_021621a4(void);
    void func_ov071_02162480(void);
    void func_ov071_02162670(void);
    void func_ov071_021626b0(void);
    void func_ov071_02162898(void);
    void func_ov071_02162a40(void);
    void func_ov071_02162a84(void);
    void func_ov071_02162b40(void);
    void func_ov071_02162bf0(void);
    void func_ov071_02162cf4(void);
};

class MapObjectProfileUnkBRGS : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBRGS();
    ~MapObjectProfileUnkBRGS();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBRGS *GetProfile();
};
