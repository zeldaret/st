#ifndef _MSL_TYPE_TRAITS_RELATIONSHIP
#define _MSL_TYPE_TRAITS_RELATIONSHIP

// from rb3 decomp

#include "type_traits/integral_constant.hpp"
#include "type_traits/utility.hpp"

// clang-format off: conciseness
namespace std {

    namespace detail {

        template <typename From, typename To>
        struct is_convertible {
            static true_type test(To) { __MWERKS_NOEVAL; }
            static false_type test(...) { __MWERKS_NOEVAL; }

#if __MWERKS__
    typedef __decltype__(test(declval<From>())) type;
#else
typedef false_type type;
#endif
        };

        template <typename Base, typename Derived>
        struct is_base_of {
            static true_type test(const volatile Base*) { __MWERKS_NOEVAL; }
            static false_type test(const volatile void*) { __MWERKS_NOEVAL; }

#if __MWERKS__
    typedef __decltype__(test(declval<Derived*>())) type;
#else
    typedef false_type type;
#endif
        };

    }

    template <typename T, typename U>
    struct is_same : public false_type {};
    template <typename T>
    struct is_same<T, T> : public true_type {};

    template <typename From, typename To>
    struct is_convertible : public detail::is_convertible<From, To> {};

    template <typename Base, typename Derived>
    struct is_base_of : public detail::is_base_of<Base, Derived> {};

}
// clang-format on

#endif
