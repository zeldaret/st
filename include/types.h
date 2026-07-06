#ifndef TYPES_H
#define TYPES_H

#include <nitro/types.h>

typedef s8 unk8;
typedef s16 unk16;
typedef s32 unk32;

#define CEIL_DIV(a, b) (((a) + (b) - 1) / (b))

#ifdef __cplusplus
    #define DECL_PTMF(name, ...)                               \
        template <typename T, typename R = void> struct name { \
            typedef R (T::*PTMFCallback)(__VA_ARGS__);         \
                                                               \
            PTMFCallback callback;                             \
        };

    #define CALL_PTMF(type, data, ...)          \
        {                                       \
            type &ptr = (data);                 \
            (this->*ptr.callback)(__VA_ARGS__); \
        }

    #define STATIC_CALL_PTMF(type, data, thisx, ...) \
        {                                            \
            type &ptr = (data);                      \
            ((thisx)->*ptr.callback)(__VA_ARGS__);   \
        }

    #define STATIC_PTMFCALLBACK(type, data, thisx, ...) \
        {                                               \
            type::PTMFCallback &ptr = (data);           \
            ((thisx)->*ptr)(__VA_ARGS__);               \
        }

DECL_PTMF(PTMF);
typedef void (*UnkCallback)(u16 param1);

template <typename T> class Instance {
public:
    Instance();  //! TODO: should this be inlined?
    ~Instance(); //! TODO: should this be inlined?
};

template <typename T> class AutoInstance : public Instance<T> {
public:
    AutoInstance() {}
    ~AutoInstance() {}
};

    #define DECL_INSTANCE_CTOR(T, gpInstance)           \
        template <typename T> Instance<T>::Instance() { \
            gpInstance = (T *) this;                    \
        }                                               \
        template class Instance<T>;

    #define DECL_INSTANCE_DTOR(T, gpInstance) \
        Instance<T>::~Instance() {            \
            gpInstance = NULL;                \
        }

    #define DECL_INSTANCE(T, gpInstance)  \
        DECL_INSTANCE_CTOR(T, gpInstance) \
        DECL_INSTANCE_DTOR(T, gpInstance)

template <typename T> struct StaticInstance {
    static T sInstance;
};

    #define DECL_STATIC_INSTANCE(T) T StaticInstance<T>::sInstance

#endif

#endif
