#ifndef _STD_SHARED_PTR
#define _STD_SHARED_PTR

// from rb3 decomp

#include <cstddef>
#include <typeinfo>

#include "compressed_pair.hpp"

#include "default_delete.hpp"

// clang-format off
namespace std {

    namespace tr1 {
        namespace detail {

            class shared_ptr_deleter_common {
            public:
                virtual ~shared_ptr_deleter_common() {}
                // Return type is most definitely not correct
                virtual const void *get_deleter(const std::type_info &info) const = 0;

            protected:
                virtual void dispose() = 0;

            public:
                void release();

                int m_RefCount;
                int m_WeakCount;
            };

            template <typename T, typename Deleter = std::detail::default_delete<T> >
            class shared_ptr_deleter : public shared_ptr_deleter_common {
            public:
                shared_ptr_deleter(T *ptr) :
                    m_Ptr(ptr) {}
                ~shared_ptr_deleter() {}

                const void *get_deleter(const std::type_info &info) const {
                    if (info == typeid(Deleter)) {
                        return &m_Ptr.second();
                    }

                    return nullptr;
                }

            protected:
                void dispose() {
                    m_Ptr.second()(m_Ptr.first());
                }

            private:
                Metrowerks::compressed_pair<T *, Deleter> m_Ptr;
            };

            template <typename T> class shared_ptr_base {
            protected:
                void __set(T *ptr, tr1::detail::shared_ptr_deleter_common *deleter) {
                    m_Ptr     = ptr;
                    m_Deleter = deleter;
                }

            public:
                ~shared_ptr_base() throw() {
                    if (m_Deleter) {
                        m_Deleter->release();
                    }
                }

                T *get() const {
                    return m_Ptr;
                }

            protected:
                T *m_Ptr;
                tr1::detail::shared_ptr_deleter_common *m_Deleter;
            };

        } // namespace detail
    } // namespace tr1

    namespace detail {

        template <typename T> class shared_ptr : public tr1::detail::shared_ptr_base<T> {
        public:
            shared_ptr();

            explicit shared_ptr(T *ptr) {
                __set(ptr, new tr1::detail::shared_ptr_deleter<T>(ptr));
            }
        };

        template <typename T> class shared_ptr<T[]> : public tr1::detail::shared_ptr_base<T> {
        public:
            shared_ptr();

            explicit shared_ptr(T ptr[]) {
                this->__set(ptr, new tr1::detail::shared_ptr_deleter<T, std::detail::default_delete<T[]> >(ptr));
            }
        };

    } // namespace detail
} // namespace std
// clang-format on

#endif
