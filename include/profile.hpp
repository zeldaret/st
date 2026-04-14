#pragma once

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
