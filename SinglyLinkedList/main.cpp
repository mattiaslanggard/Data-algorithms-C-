#include <iostream>
using namespace std;

#include "Node.h"
#include "LinkedList.h"

int main()
{
	/*+------+---------+
	| 4.93 | nullptr |
	+------+---------+
	Node<float>* node1 = new Node<float>(4.93f);

	+------+---------+
	| 6.45 | nullptr |
	+------+---------+
	Node<float>* node2 = new Node<float>(6.45f);

	+------+---------+
	| 8.17 | nullptr |
	+------+---------+
	Node<float>* node3 = new Node<float>(8.17f);

	+------+---------+   +------+---------+   +------+---------+  
	| 4.93 |      +----->| 6.45 | nullptr |   | 8.17 | nullptr |
	+------+---------+   +------+---------+   +------+---------+
	node1->Next = node2;

	+------+---------+   +------+---------+   +------+---------+  
	| 4.93 |      +----->| 6.45 |      +----->| 8.17 | nullptr |
	+------+---------+   +------+---------+   +------+---------+
	node2->Next = node3;

	Print the node
	PrintNode<float>(node1);
	 Also automagically works with :
	 PrintNode(node1);

	LinkedList<int> numberlist;
	numberlist.InsertHead(12345);*/

	LinkedList<int> theList; //initialise theList
	theList.InsertHead(4); //insert nodes into theList
	theList.Insert(1, 1);
	theList.Insert(2, 10);
	theList.Insert(3, 5.35);
	theList.Insert(4, 7);
	theList.Insert(5, 7);
	theList.Insert(6, 5.77);
	theList.Insert(7, 2);
	theList.Insert(8, 5);

	int valueToSearch = 5;
	double newValue = 10.25;
	int resultIndex = -1;
	theList.PrintList();
	theList.replaceElement(valueToSearch, newValue, resultIndex); //run the method
	theList.PrintList();
}
