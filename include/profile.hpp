#pragma once

#define DECL_PROFILE(T)                       \
    T ProfileInstance<T>::sProfile;           \
    T *T::GetProfile() {                      \
        return &ProfileInstance<T>::sProfile; \
    }

template <typename T> struct ProfileInstance {
    static T sProfile;
};
