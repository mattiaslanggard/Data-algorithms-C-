#include "LinkedList.h"
template class LinkedList<int>;
template class LinkedList<float>;

template <typename T>
void LinkedList<T>::InsertHead(T val)
{
    Node<T>* node = new Node<T>(val);
    node->Next = Head;
    Head = node;

    if (m_count == 0)
        Tail = Head;

    m_count++;
}




template <typename T>
void LinkedList<T>::InsertTail(T val)
{
    // If the linked list is empty, just simply invoke InsertHead()
    if (m_count == 0)
    {
        InsertHead(val);
        return;
    }

    Node<T>* node = new Node<T>(val);
    Tail->Next = node;
    Tail = node;

    m_count++;
}


template <typename T>
int LinkedList<T>::Insert(int index, T val)
{
    // Check if the index is out of bound
    if (index < 0 || index > m_count)
        return -1;

    if (index == 0)
    {
        InsertHead(val);
        return 0;
    }
    else if (index == m_count)
    {
        InsertTail(val);
        return 0;
    }

    Node<T>* previousNode = Head;

    for (int i = 0; i < index - 1; ++i)
    {
        previousNode = previousNode->Next;
    }

    Node<T>* afterNode = previousNode->Next;

    Node<T>* node = new Node<T>(val);
    node->Next = afterNode;
    previousNode->Next = node;

    m_count++;

    return 0;
}

template <typename T>
void LinkedList<T>::RemoveHead()
{
    if (m_count == 0)
        return;

    Node<T>* node = Head;
    Head = Head->Next;
    delete node;

    m_count--;
}

template <typename T>
void LinkedList<T>::RemoveTail()
{
    // Do nothing if list is empty
    if (m_count == 0)
        return;

    // If List element is only one
    // just simply call RemoveHead()
    if (m_count == 1)
    {
        RemoveHead();
        return;
    }

    Node<T>* previousNode = Head;
    Node<T>* node = Head->Next;

    while (node->Next != nullptr)
    {
        previousNode = previousNode->Next;
        node = node->Next;
    }

    previousNode->Next = nullptr;
    Tail = previousNode;
    delete node;

    m_count--;
}



template <typename T>
Node<T>* LinkedList<T>::Get(int index)
{
    // Check if the index is out of bound
    if (index < 0 || index > m_count)
        return nullptr;

    Node<T>* node = Head;

    for (int i = 0; i < index; ++i)
    {
        node = node->Next;
    }

    return node;
}


template <typename T>
T LinkedList<T>::GetValue(int index)
{
    T defaultValue = T();

    if (index < 0 || index > m_count)
    {
        return defaultValue;
    }

    Node<T>* node = Get(index);
    if (node != nullptr)
        return node->Value;
    else
        return defaultValue;

}



template <typename T>
int LinkedList<T>::Count()
{
    return m_count;
}

template <typename T>
void LinkedList<T>::PrintList()
{
    Node<T>* node = Head;

    while (node != nullptr)
    {
        std::cout << node->Value << " -> ";
        node = node->Next;
    }

    std::cout << "nullptr" << std::endl;
}

template <typename T>
void LinkedList<T>::replaceElement(T searchElement, T newElement, int& index)
{
    Node<T>* node = Head;
    while (node != nullptr) {
        index++;
        if (node->Value == searchElement) {
            node->Value = newElement;
            cout << "One found element is at index : " << index << endl;
        }
        else {
            node = node->Next; //go to next value
        }
    }
    cout << "There are no more elements that match the value I'm searching for" << endl;
}
