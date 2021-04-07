#ifndef NODE_H
#define NODE_H

#include <iostream>
using namespace std;

template <typename T>
class Node
{
public:
    T Value;
    Node<T>* Next;
    
    Node(T value);
};

// we can if we like use inline. Node benefits from it.
template <typename T>
Node<T>::Node(T value) : Value(value), Next(nullptr) {}

template<typename T>
void PrintNode(Node<T>* node)
{
    // It will print the initial node
    // until it finds NULL for the Next pointer
    // that indicate the end of the Node Chain
    while (node != nullptr)
    {
        cout << node->Value << " -> ";
        node = node->Next;
    }

    cout << "nullptr" << endl;
}
#endif 
