#include "apex_code.h"
#include <iostream>
#include <string>
#include <sstream>
#include <fstream>

using namespace std;

Node::Node(int nData, Node *pPrev, Node *pNext) {
    _nData = nData;
    _pPrev = pPrev;
    _pNext = pNext;
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

bool LinkedList::insertFromFile(string filename) {
    // TODO
    return false;   // Need to be changed!!

}

void LinkedList::insertData(int data) {
    // TODO
}

void LinkedList::deleteData(int data) {
    // TODO
}

int  LinkedList::size() {
    return _size;
}

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
        istream << curNode->getData() << " ";
        curNode = curNode->getNext();
    }
    szStr = istream.str();
    return szStr;
    
}

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
        istream << curNode->getData() << " ";
        curNode = curNode->getPrev();
    }

    szStr = istream.str();
    return szStr;
    
} 