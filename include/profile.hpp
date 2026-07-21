#pragma once

#include "Unknown/UnkFileSystem.hpp"
#include "types.h"
#include <nns/g3d/g3d.h>

//! TODO: doesn't belong here but since we don't know what it is...
class UnkSystem3 {
public:
    /* 00 */ void *mUnk_00;
    /* 04 */ void *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */

    UnkSystem3(const char *path, unk32 param2);
    UnkSystem3(const char *path, unk32 param2, unk32 param3, unk32 param4);
    ~UnkSystem3();

    void func_02015410(const char *path, unk32 param2);
    void func_0201541c(const char *param1, unk32 param2);
    void func_02015460(const char *param1, void *param2, unk32 param3);
};

class MapObjectProfile_Derived2_20_Base_18 {
public:
    /* 00 */ const char *mUnk_00;
    /* 04 */ unk32 mUnk_04;
    /* 08 */

    MapObjectProfile_Derived2_20_Base_18(); // func_02016620
    ~MapObjectProfile_Derived2_20_Base_18();
};

class MapObjectProfile_Derived2_20_Base_54 {
public:
    /* 00 (vtable) */
    /* 04 */ const char *mUnk_04;
    /* 08 */ unk32 mUnk_08;
    /* 0C */ unk32 mUnk_0C;
    /* 10 */

    MapObjectProfile_Derived2_20_Base_54();
    ~MapObjectProfile_Derived2_20_Base_54();

    /* 00 */ virtual void vfunc_00();
    /* 04 */ virtual void vfunc_04();
    /* 08 */ virtual void vfunc_08(unk32 param1);
    /* 0C */ virtual void vfunc_0C();
};

class MapObjectProfile_Derived2_20_Base {
public:
    /* 00 (vtable) */
    /* 04 */ const char *mDirName;
    /* 08 */ const char *mArchiveName;
    /* 0C */ void *mUnk_0C;
    /* 10 */ void *mUnk_10;
    /* 14 */ u8 mUnk_14;
    /* 15 */ u8 mUnk_15;
    /* 16 */ u8 mUnk_16;
    /* 17 */ u8 mUnk_17;
    /* 18 */ MapObjectProfile_Derived2_20_Base_18 mUnk_18;
    /* 20 */ UnkSystem3 mUnk_20;
    /* 2C */ UnkFileSystem3 mUnk_2C;
    /* 3C */ UnkFileSystem5 mUnk_3C;
    /* 50 */ BMDSectionModel *mUnk_50;
    /* 54 */ MapObjectProfile_Derived2_20_Base_54 mUnk_54[4];
    /* 94 */

    MapObjectProfile_Derived2_20_Base(const char *directory, const char *archiveName, const char *param3, const char *param4,
                                      unk32 param5,
                                      unk32 param6); // func_ov000_02058540

    // data_ov000_020b1b14
    /* 00 */ virtual ~MapObjectProfile_Derived2_20_Base();
    /* 08 */

    void func_ov000_020586b4(unk32 param1, unk32 param2, unk32 param3, unk32 param4);
    void func_ov000_020588f0(void *param1, unk32 param2, unk32 param3, void *param4);
    void func_ov000_02058900(void);
    void func_ov000_02058914(void *param1);
    void func_ov000_020589e4(void);
    unk32 func_ov000_02058a24();
    void unc_ov000_02058a58(void);
    unk32 func_ov000_02058a84(unk32 param1, const char *param2);
    void func_ov000_02058ab0(void);
};

#define GET_PROFILE(T) (&ProfileInstance<T>::sProfile)
#define GET_PROFILE_20(T) (&ProfileInstance<T>::sProfile.mUnk_20)
#define GET_PROFILE_20_50(T) (ProfileInstance<T>::sProfile.mUnk_20.mUnk_50)
#define GET_PROFILE_D4(T) (&ProfileInstance<T>::sProfile.mUnk_D4)

#define DECL_PROFILE(T)                         \
    template <> T ProfileInstance<T>::sProfile; \
    T *T::GetProfile() {                        \
        return &ProfileInstance<T>::sProfile;   \
    }

template <typename T> struct ProfileInstance {
    static T sProfile;
};

template <typename T> static inline G3d_Model *GetModelFromProfile() {
    return G3d_GetModelPtr((BMDSectionModel *) GET_PROFILE_20_50(T));
}

template <typename T> static inline G3d_Model *GetModelFromProfile2(s32 param1, u32 resId) {
    T *pProfile = GET_PROFILE(T);
    pProfile->func_ov000_0209ccd8(param1, resId);
    return G3d_GetModelPtr((BMDSectionModel *) pProfile->mUnk_20[param1]->mUnk_50);
}

static inline G3d_Model *GetModelFromProfile3(MapObjectProfile_Derived2_20_Base *param1, const char *name) {
    return G3d_GetUnkPtr(param1->mUnk_50, name);
}
