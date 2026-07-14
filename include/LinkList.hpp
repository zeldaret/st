#pragma once

#include "types.h"

//! TODO: inlines in the class
#define GetLinkListRef(l) (&l)
#define GetLinkListOrigin(l) GetLinkListRef(l)

class LinkListNode {
private:
    /* 00 */ LinkListNode *mpNext;
    /* 04 */ LinkListNode *mpPrev;
    /* 08 */

public:
    LinkListNode *GetNext() {
        return this->mpNext;
    }

    LinkListNode *GetPrev() {
        return this->mpPrev;
    }

    void SetNext(LinkListNode *pNext) {
        this->mpNext = pNext;
    }

    void SetPrev(LinkListNode *pPrev) {
        this->mpPrev = pPrev;
    }
};

class LinkListIterImpl {
private:
    LinkListNode *mPointer;

public:
    LinkListIterImpl(LinkListNode *pNode) {
        this->mPointer = pNode;
    }

    LinkListNode *operator->() {
        return this->mPointer;
    }

    LinkListNode &operator*() {
        return *this->mPointer;
    }

    LinkListIterImpl &operator++() {
        this->mPointer = (LinkListNode *) ((u8 *) this->mPointer + 4);
        return *this;
    }

    LinkListIterImpl &operator++(int) {
        this->mPointer = this->mPointer->GetNext();
        return *this;
    }

    LinkListIterImpl &operator--(int) {
        this->mPointer = mPointer->GetPrev();
        return *this;
    }

    friend bool operator==(LinkListIterImpl &left, LinkListNode *right) {
        return left.mPointer == right;
    }

    friend bool operator!=(LinkListIterImpl &left, LinkListNode *right) {
        return left.mPointer != right;
    }
};

class LinkListImpl : public LinkListNode {
public:
    /* 00 (base) */
    /* 08 */

public:
    LinkListImpl();
    ~LinkListImpl();

    LinkListNode *GetOriginNode() {
        return (LinkListNode *) this;
    }

    LinkListNode *GetBeginIterImpl() {
        return this->GetNext();
    }

    LinkListNode *GetEndIterImpl() {
        return this;
    }

    // insert B (`node`) between A (`this`) and C (`this->mNext`)
    void Append(LinkListNode *node);

    // insert B (`node`) between A (`this->mPrev`) and C (`this`)
    void Prepend(LinkListNode *node);

    // links list `node` to list `this` (append)
    void Extend(LinkListNode *node);

    // returns the number of how many nodes are following `this`
    s32 GetListLength();

    // search through the list to determine if the node is inside it
    bool Contains(LinkListNode *node);

    static void Detach(LinkListNode *pNode);
};

#define GetBeginIter(l) (GetLinkListRef(l)->GetNextTarget())
#define GetBeginIterReverse(l) (GetLinkListRef(l)->GetPrevTarget())
#define GetEndIter(l) GetLinkListRef(l)
#define GetNextIter(it) (it = it->GetNextTarget())
#define GetPrevIter(it) (it = it->GetPrevTarget())

template <typename T> class LinkListIter {
private:
    T *mPointer;

public:
    LinkListIter() {}

    LinkListIter(T *pNode) {
        this->mPointer = pNode;
    }

    T *operator->() const {
        return this->mPointer;
    }

    T &operator*() const {
        return *this->mPointer;
    }

    void operator++() {
        this->mPointer = (T *) ((u8 *) this->mPointer + 4);
    }

    void operator++(int) {
        this->mPointer = this->mPointer->GetNextTarget();
    }

    void operator--(int) {
        this->mPointer = mPointer->GetPrevTarget();
    }

    friend const bool operator==(LinkListIter &left, T *right) {
        return left.mPointer == right;
    }

    friend const bool operator!=(LinkListIter &left, T *right) {
        return left.mPointer != right;
    }

    friend const bool operator==(LinkListIter &left, T &right) {
        return left.mPointer == &right;
    }

    friend const bool operator!=(LinkListIter &left, T &right) {
        return left.mPointer != &right;
    }
};

template <typename T> class LinkList : public LinkListImpl {
private:
    /* 00 (base) */
    /* 08 */

public:
    LinkList() {}
    ~LinkList() {}

    LinkListNode *GetNextNode() {
        return this->GetNext();
    }

    LinkListNode *GetPrevNode() {
        return this->GetPrev();
    }

    T *GetNextTarget() {
        return (T *) this->GetNextNode();
    }

    T *GetPrevTarget() {
        return (T *) this->GetPrevNode();
    }

    T *GetRef() {
        return (T *) this;
    }

    void Detach() {
        LinkListImpl::Detach(this);
    }

    typedef LinkListIter<T> Iterator;
};
