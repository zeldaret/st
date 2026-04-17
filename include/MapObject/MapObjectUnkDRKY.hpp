//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkDRKY : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkDRKY();

    /* 30 */ virtual ~MapObjectUnkDRKY() override;

    void func_ov031_020fe86c(void);
    void func_ov031_020fe888(void);
    void func_ov031_020fe8a0(void);
    void func_ov031_020fe8ac(void);
    void func_ov031_020fe9f8(void);
    void func_ov031_020fea88(void);
    void func_ov031_020feabc(void);
    void func_ov031_020feb4c(void);
    void func_ov031_020feb58(void);
    void func_ov031_020feb60(void);
    void func_ov031_020feb68(void);
    void func_ov031_020febb8(void);
    void func_ov031_020febdc(void);
    void func_ov031_020fed78(void);
    void func_ov031_020feda4(void);
    void func_ov031_020fede8(void);
    void func_ov031_020fedec(void);
};

class MapObjectProfileUnkDRKY : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkDRKY();
    ~MapObjectProfileUnkDRKY();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkDRKY *GetProfile();
};
