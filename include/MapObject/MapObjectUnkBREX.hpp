//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkBREX : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkBREX();

    /* 4C */ virtual ~MapObjectUnkBREX() override;

    void func_ov031_021076b8(void);
    void func_ov031_02107b04(void);
    void func_ov031_02107b40(void);
    void func_ov031_02107f1c(void);
    void func_ov031_02107f34(void);
    void func_ov031_02107f98(void);
    void func_ov031_02108258(void);
    void func_ov031_02108314(void);
    void func_ov031_02108420(void);
    void func_ov031_02108648(void);
    void func_ov031_021086a4(void);
    void func_ov031_02108700(void);
    void func_ov031_021087f8(void);
    void func_ov031_02108834(void);
};

class MapObjectProfileUnkBREX : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkBREX();
    ~MapObjectProfileUnkBREX();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkBREX *GetProfile();
};
