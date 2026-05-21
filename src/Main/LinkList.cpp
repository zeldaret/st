#include "LinkList.hpp"

LinkListImpl::LinkListImpl() {
    this->SetNext(this);
    this->SetPrev(this);
}

LinkListImpl::~LinkListImpl() {
    // link the previous node with the next node since
    // the one in-between (`this`) is getting removed

    // A <- B <- C will become A <- C
    this->GetNext()->SetPrev(this->GetPrev());

    // A -> B -> C will become A -> C
    this->GetPrev()->SetNext(this->GetNext());
}

void LinkListImpl::Detach(LinkListNode *node) {
    // remove the links from `node`

    // A <- B <- C will become A <- C
    node->GetNext()->SetPrev(node->GetPrev());

    // A -> B -> C will become A -> C
    node->GetPrev()->SetNext(node->GetNext());

    node->SetNext(node);
    node->SetPrev(node);
}

void LinkListImpl::Append(LinkListNode *node) {
    LinkListImpl::Detach(node);

    LinkListNode *nextNode = this->GetNext();

    // current: A -> C and A <- C

    // create link B <- C
    nextNode->SetPrev(node);

    // create link B -> C
    node->SetNext(nextNode);

    // create link A <- B
    node->SetPrev(this);

    // create link A -> B
    this->SetNext(node);

    // updated: A -> B -> C and A <- B <- C
}

void LinkListImpl::Prepend(LinkListNode *node) {
    LinkListImpl::Detach(node);

    LinkListNode *prevNode = this->GetPrev();

    // current: A -> C and A <- C

    // create link  A -> B
    prevNode->SetNext(node);

    // create link A <- B
    node->SetPrev(prevNode);

    // create link B -> C
    node->SetNext(this);

    // create link B <- C
    this->SetPrev(node);

    // updated: A -> B -> C and A <- B <- C
}

void LinkListImpl::Extend(LinkListNode *node) {
    LinkListNode *prevNode  = this->GetPrev();
    LinkListNode *paramPrev = node->GetPrev();

    prevNode->SetNext(node);
    paramPrev->SetNext(this);
    this->SetPrev(paramPrev);
    node->SetPrev(prevNode);
}

s32 LinkListImpl::GetListLength() {
    s32 count = 0;

    for (LinkListIterImpl it = this->GetBeginIterImpl(); it != this->GetEndIterImpl(); it++) {
        count++;
    }

    return count;
}

bool LinkListImpl::Contains(LinkListNode *node) {
    // iterates through the list to try to find the node
    for (LinkListIterImpl it = this->GetBeginIterImpl(); it != this->GetEndIterImpl(); it++) {
        if (it == node) {
            return true;
        }
    }

    // if the node parameter has the same address as this
    if (node == this) {
        return true;
    }

    return false;
}
