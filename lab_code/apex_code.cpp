#include "apex_code.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Node::Node(int nIndex, int nData, Node *pPrev, Node *pNext) {
    _nIdx = nIndex;
    _nData = nData;
    _pPrev = pPrev;
    _pNext = pNext;
}

int     Node::getIndex() const {
    return _nIdx;
}

int     Node::getData() const {
    return _nData;
}

Node*   Node::getNext() const {
    return _pNext;
}

Node*   Node::getPrev() const {
    return _pPrev;
}

void    Node::setIndex(int nIndex) {
    _nIdx = nIndex;    
}

void    Node::setData(int nData) {
    _nData = nData;
}

void    Node::setNext(Node *pNext) {
    _pNext = pNext;
}

void    Node::setPrev(Node *pPrev) {
    _pPrev = pPrev;
}

LinkedList::LinkedList() {
    _head = nullptr;
    _tail = nullptr;
    _size = 0;
}

void LinkedList::pushback(int data) {
    // TODO
} // pushback

void LinkedList::insert(int index, int data) {
    // TODO
} // insert

void LinkedList::erase(int index) {
    // TODO
} // erase()

int  LinkedList::size() {
    return _size;
} // size()

string LinkedList::toString() {
    Node            *curNode;
    ostringstream   istream;
    string          szStr;

    curNode = _head;
    istream << "LinkedList (" << _size << "): ";
    for ( ;; ) {
        if ( curNode == nullptr )  {
            istream << endl;
            break;
        }
        istream << "[" << curNode->getIndex() << "]" << curNode->getData() << " ";
        curNode = curNode->getNext();
    }
    szStr = istream.str();
    return szStr;

} // toString()

string LinkedList::RevtoString() {
    Node            *curNode;
    ostringstream   istream;
    string          szStr;

    curNode = _tail;
    istream << "LinkedList REV (" << _size << "): ";

    // Start from tail and use _pPrev to go backward
    for ( ;; ) {
        if ( curNode == nullptr )  {
            istream << endl;
            break;
        }
        istream << "[" << curNode->getIndex() << "]" << curNode->getData() << " ";
        curNode = curNode->getPrev();
    }

    szStr = istream.str();
    return szStr;

}  // RevtoString()