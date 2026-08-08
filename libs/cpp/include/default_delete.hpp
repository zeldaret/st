#ifndef _STD_DEFAULT_DELETE
#define _STD_DEFAULT_DELETE

// from rb3 decomp

#include <new>

namespace std {

    namespace detail {

        template <typename T> struct default_delete {
            void operator()(T *ptr) {
                delete ptr;
            }
        };

        template <typename T> struct default_delete<T[]> {
            void operator()(T ptr[]) {
                delete[] ptr;
            }
        };

    } // namespace detail

} // namespace std

#endif
