//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkRLPT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkRLPT();

    /* 4C */ virtual ~MapObjectUnkRLPT() override;

    void func_ov028_02145ca0(void);
    void func_ov028_02145cfc(void);
    void func_ov028_02145d00(void);
    void func_ov028_02145d08(void);
    void func_ov028_02145d1c(void);
    void func_ov028_02145d24(void);
};

class MapObjectProfileUnkRLPT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkRLPT();
    ~MapObjectProfileUnkRLPT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkRLPT *GetProfile();
};
