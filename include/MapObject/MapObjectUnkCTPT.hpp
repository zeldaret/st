//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkCTPT : public MapObject {
public:
    /* 00 (base) */
    /* 94 */

    MapObjectUnkCTPT();

    /* 4C */ virtual ~MapObjectUnkCTPT() override;

    void func_ov085_02153388(void);
    void func_ov085_0215339c(void);
    void func_ov085_021533b0(void);
    void func_ov085_02153604(void);
    void func_ov085_021538cc(void);
    void func_ov085_02153a0c(void);
    void func_ov085_02153b78(void);
    void func_ov085_02153c08(void);
    void func_ov085_02153c4c(void);
    void func_ov085_02153c74(void);
    void func_ov085_02153ce4(void);
    void func_ov085_02153d70(void);
    void func_ov085_02153dc4(void);
};

class MapObjectProfileUnkCTPT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkCTPT();
    ~MapObjectProfileUnkCTPT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkCTPT *GetProfile();
};
