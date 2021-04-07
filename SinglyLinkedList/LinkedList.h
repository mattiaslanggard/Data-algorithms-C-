#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include <iostream>
using namespace std;

#include "Node.h"

template <typename T>
class LinkedList
{
public:
    // The first node in the list or null if empty
    Node<T>* Head;

    // The last node in the list or null if empty
    Node<T>* Tail;

    // Constructor
    LinkedList();

    // Get() operation
    Node<T>* Get(int index);

    // Insert() operation
    void InsertHead(T val);
    void InsertTail(T val);
    int Insert(int index, T val);
    void replaceElement(T searchElement, T newElement, int& index);

    // Search() operation
    int Search(T val);
   
    // Remove() operation
    void RemoveHead();
    void RemoveTail();
    void Remove(int remValue, int& index);

    // GetValue() 
    T GetValue(int index);

    // Additional operation
    int Count();
    void PrintList();
private:
    int m_count;
};

template <typename T>
LinkedList<T>::LinkedList() : m_count(0), Head(nullptr), Tail(nullptr) {}

#endif