#pragma once

#include "System/SysNew.hpp"
#include "types.h"

// link list?
struct stack_struct1 {
    void *param1;

    union {
        void *param2;
        unk32 arg2;
    };
};

template <typename T> class Iterator {
public:
    /* 00 */ void *begin;
    /* 04 */ void *end;
    /* 08 */

    Iterator() {
        this->Clear();
    }

    ~Iterator() {
        this->Destroy();
    }

    // allocate the list and run the constructors for each element
    void Init(size_t arrayLength) {
        this->Destroy();
        this->Set(arrayLength * 4);

        if (this->begin != this->end) {
            T *it = (T *) this->begin;

            do {
                new(it) T(); // using placement new to run the ctor

                it++;
            } while (it != (T *) this->end);
        }
    }

    // same as the other `Init` except this takes a node list
    void Init(size_t arrayLength, void *params) {
        this->Destroy();
        this->Set(arrayLength);

        if (this->begin != this->end) {
            T *it            = (T *) this->begin;
            stack_struct1 *p = (stack_struct1 *) params;

            do {
                new(it) T(*p);

                it++;
                p++;
            } while (it != (T *) this->end);
        }
    }

    // iterate the array and run the destructors for each element
    void Destroy() {
        if (this->begin != this->end) {
            T *it = (T *) this->end;

            do {
                (--it)->~T();
            } while (it != (T *) this->begin);

            delete this->begin;
        }
    }

    // allocate and set pointers
    void Set(size_t arrayLength) {
        void *ptr   = ::operator new(arrayLength, HeapIndex_1, 4);
        this->begin = ptr;
        this->end   = (void *) ((u8 *) ptr + arrayLength);
    }

    // clear pointers
    void Clear() {
        this->begin = NULL;
        this->end   = NULL;
    }

    // destroy and clear
    void Reset() {
        this->Destroy();
        this->Clear();
    }

    T &Get(int index) {
        return ((T *) this->begin)[index];
    }

    T *GetPtr(int index) {
        return ((T *) this->begin) + index;
    }

    const int GetAllocSize() const {
        return (int) this->end - (int) this->begin;
    }

    const int GetLastIndex() const {
        return (this->GetAllocSize() / (int) sizeof(T)) - 1;
    }
};
