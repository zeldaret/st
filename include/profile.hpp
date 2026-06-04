#pragma once

#include <nns/g3d/g3d.h>

#define GET_PROFILE(T) (&ProfileInstance<T>::sProfile)
#define GET_PROFILE_20(T) (&ProfileInstance<T>::sProfile.mUnk_20)
#define GET_PROFILE_20_50(T) (ProfileInstance<T>::sProfile.mUnk_20.mUnk_50)
#define GET_PROFILE_D4(T) (&ProfileInstance<T>::sProfile.mUnk_D4)

#define DECL_PROFILE(T)                       \
    T ProfileInstance<T>::sProfile;           \
    T *T::GetProfile() {                      \
        return &ProfileInstance<T>::sProfile; \
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
