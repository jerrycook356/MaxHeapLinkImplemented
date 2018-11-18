#pragma once
#include "pch.h"

template<class ItemType>

class Node
{
private:
	ItemType item;
	Node<ItemType>* nextPtr;

public:
	Node();
	Node(const ItemType& newItem);

	void setItem(const ItemType& newItem);
	ItemType getItem();
	Node<ItemType>* getNext();
	void setNext(Node<ItemType>* nextNode);

};
#include "Node.cpp"