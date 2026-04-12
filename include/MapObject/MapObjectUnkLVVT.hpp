//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkLVVT : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkLVVT();

    /* 30 */ virtual ~MapObjectUnkLVVT() override;

    void func_ov067_0215b408(void);
    void func_ov067_0215b460(void);
    void func_ov067_0215b490(void);
    void func_ov067_0215b55c(void);
    void func_ov067_0215b568(void);
    void func_ov067_0215b57c(void);
    void func_ov067_0215b6d4(void);
    void func_ov067_0215b774(void);
    void func_ov067_0215b788(void);
    void func_ov067_0215b79c(void);
    void func_ov067_0215b8c4(void);
    void func_ov067_0215b8e4(void);
    void func_ov067_0215ba18(void);
};

class MapObjectProfileUnkLVVT : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkLVVT();
    ~MapObjectProfileUnkLVVT();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkLVVT *GetProfile();
};
