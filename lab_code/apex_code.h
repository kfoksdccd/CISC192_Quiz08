//
// Don't modify code in this file.
//
#ifndef APEXLAB_APEX_CODE_H
#define APEXLAB_APEX_CODE_H
#include <iostream>
#include <string>

using namespace std;

class Node {
private:
    int    _nIdx;       // Index (list in Vector)
    int    _nData;
    Node   *_pPrev;     // points to the previous Node in the LinkedList
    Node   *_pNext;     // points to the next Node in the LinkedList
public:
    Node(int nIndex, int nData, Node *pPrev, Node *pNext);
    int     getIndex() const;
    int     getData() const;
    Node*   getNext() const;
    Node*   getPrev() const;
    void    setIndex(int nIndex);
    void    setData(int nData);
    void    setNext(Node *pNext);
    void    setPrev(Node *pPrev);
};

class LinkedList {
private:
    Node*     _head;    // points to the first item of the LinkedList
    // Note: For _head Node, its _pPrev = nullptr

    Node*     _tail;    // points to the last item of the LinkedList.
    // Note: For _tail Node, its _pNext = nullptr

    int       _size;

public:
    LinkedList();
    void    pushback(int data);
    void    insert(int index, int data);
    void    erase(int index);
    int     size();
    string  toString();
    string  RevtoString();

};
#endif //APEXLAB_APEX_CODE_H
