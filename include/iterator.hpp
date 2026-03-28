#pragma once

#include "System/SysNew.hpp"
#include "types.h"

struct stack_struct1 {
    void *param1;
    int param2;
};

template <typename T, int arrayLength> class Iterator {
public:
    class ListData : public SysObject {
    public:
        u8 data[sizeof(T) * arrayLength];
    };

    ListData *begin;
    ListData *end;

    Iterator() {}

    ~Iterator() {
        this->Destroy();
    }

    void Init(stack_struct1 *param1) {
        if (this->begin != this->end) {
            T *it = (T *) this->end;

            do {
                (--it)->~T();
            } while (it != (T *) this->begin);

            delete this->begin;
        }

        ListData *ptr = new(HeapIndex_1) ListData();
        this->begin   = ptr;
        this->end     = ptr + (arrayLength - 1);

        if (this->begin != this->end) {
            T *it = (T *) this->begin;
            stack_struct1 *p;

            do {
                if (it != NULL) {
                    it->Init(*p);
                }

                it++;
                p++;
            } while (it != (T *) this->end);
        }
    }

    void Destroy() {
        if (this->begin != this->end) {
            T *it = (T *) this->end;

            do {
                (--it)->~T();
            } while (it != (T *) this->begin);

            delete this->begin;
        }
    }

    void Reset() {
        this->Destroy();
        this->begin = NULL;
        this->end   = NULL;
    }

    T &GetRef(int index) {
        return ((T *) this->begin)[index];
    }
};
