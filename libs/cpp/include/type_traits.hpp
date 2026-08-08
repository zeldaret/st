#ifndef _STD_TYPE_TRAITS
#define _STD_TYPE_TRAITS

// from rb3 decomp
//! TODO: these files aren't supposed to be organised like this according to rb3/key decomps

// Anachronistic backport of a large amount of the template metaprogramming library.
// Most implementation details are copied straight from cppreference,
// with others being copied from Boost, and a few using MSL intrinsics.

#include "type_traits/category.hpp"
#include "type_traits/integral_constant.hpp"
#include "type_traits/manip.hpp"
#include "type_traits/manip_2.hpp"
#include "type_traits/operation.hpp"
#include "type_traits/property.hpp"
#include "type_traits/relationship.hpp"
#include "type_traits/utility.hpp"

#include "type_traits/call_traits.hpp"
#include "type_traits/intrinsics.hpp"

namespace Metrowerks {
    template <int I> struct int2type {
        enum {
            val = I
        };

        // static const int value = I;

        // int value; // assumed
    };
} // namespace Metrowerks

#endif
