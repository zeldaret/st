//! TODO: This file was generated automatically and might contain errors

#pragma once

#include "MapObject/MapObject.hpp"
#include "MapObject/MapObjectProfile.hpp"
#include "global.h"
#include "types.h"

class MapObjectUnkETDK : public MapObject {
public:
    /* 00 (base) */
    /* 40 */

    MapObjectUnkETDK();

    /* 30 */ virtual ~MapObjectUnkETDK() override;

    void func_ov027_021430dc(void);
    void func_ov027_021432cc(void);
    void func_ov027_021433b4(void);
    void func_ov027_021433bc(void);
    void func_ov027_021433c4(void);
    void func_ov027_021433c8(void);
    void func_ov027_021434dc(void);
    void func_ov027_021435f0(void);
    void func_ov027_02143604(void);
    void func_ov027_02143668(void);
    void func_ov027_02143670(void);
    void func_ov027_02143678(void);
    void func_ov027_02143680(void);
    void func_ov027_021436b8(void);
    void func_ov027_021436e4(void);
    void func_ov027_02143724(void);
    void func_ov027_02143744(void);
    void func_ov027_021437ec(void);
};

class MapObjectProfileUnkETDK : public MapObjectProfile {
public:
    /* 00 (base) */

    MapObjectProfileUnkETDK();
    ~MapObjectProfileUnkETDK();

    /* 0C */ virtual MapObject *Create();

    static MapObjectProfileUnkETDK *GetProfile();
};
