#include "MapObject/MapObjectProfile_Derived2_20.hpp"

#include <string.h>

extern "C" {
void func_02015ea8(u32 resourceId, void *);
unk32 func_02012fa8(const char *);
}

MapObjectProfile_Derived2_20::MapObjectProfile_Derived2_20(MapObjectId mapObjId2) :
    MapObjectProfile_Derived2_20_Base("MapObj", (const char *) &mUnk_94, (const char *) &mUnk_94, (const char *) &mUnk_94, 0,
                                      0),
    unk_94(L'\0'),
    unk_98(L'\0'),
    mUnk_B0(false),
    mUnk_B1(0) {
    func_02015ea8(mapObjId2, &this->mUnk_94);
}

MapObjectProfile_Derived2_20::~MapObjectProfile_Derived2_20() {
    this->func_ov000_020589e4();
    this->func_ov000_0209cfac();
}

void MapObjectProfile_Derived2_20::func_ov000_0209cef0() {
    char path[32 + 1];
    size_t curLength;

    ((wchar_t *) &path)[(sizeof(path) - 1) / 2] = L'\0';

    // path = "MapObj/RESID/filename.zcb"
    strncpy(&path[0], "MapObj/", sizeof(path) - 1);

    curLength = strlen(path);
    strncpy(&path[curLength], this->mArchiveName, sizeof(path) - 1 - curLength);

    const char *ext = ".zcb";
    curLength       = strlen(path);
    strncpy(&path[curLength], ext, sizeof(path) - 1 - curLength);

    this->mUnk_9C.vfunc_0C();
    this->mUnk_9C.mUnk_04 = path;

    if (func_02012fa8(path) != 0) {
        this->mUnk_9C.vfunc_08(0x10);
        this->mUnk_B0 = true;
    } else {
        this->mUnk_B0 = false;
    }
}

void MapObjectProfile_Derived2_20::func_ov000_0209cfac() {
    if (this->mUnk_B0) {
        this->mUnk_9C.vfunc_0C();
        this->mUnk_B0 = false;
    }
}

void MapObjectProfile_Derived2_20::func_ov000_0209cfdc(unk32 param1, unk32 param2) {}
