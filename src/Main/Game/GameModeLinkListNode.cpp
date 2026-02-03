#include "Game/GameModeManager.hpp"

ARM GameModeLinkListNode::GameModeLinkListNode() {
    this->mNext = this;
    this->mPrev = this;
}

ARM GameModeLinkListNode::~GameModeLinkListNode() {
    this->mNext->mPrev = this->mPrev;
    this->mPrev->mNext = this->mNext;
}

ARM void GameModeLinkListNode::func_020166ac(GameModeLinkListNode *node) {
    node->mNext->mPrev = node->mPrev;
    node->mPrev->mNext = node->mNext;

    node->mNext = node;
    node->mPrev = node;
}

ARM void GameModeLinkListNode::func_020166cc(GameModeLinkListNode *node) {
    this->func_020166ac(node);

    GameModeLinkListNode *nextNode = this->mNext;
    nextNode->mPrev                = node;
    node->mNext                    = nextNode;
    node->mPrev                    = this;
    this->mNext                    = node;
}

ARM void GameModeLinkListNode::func_020166f4(GameModeLinkListNode *node) {
    this->func_020166ac(node);

    GameModeLinkListNode *prevNode = this->mPrev;
    prevNode->mNext                = node;
    node->mPrev                    = prevNode;
    node->mNext                    = this;
    this->mPrev                    = node;
}
