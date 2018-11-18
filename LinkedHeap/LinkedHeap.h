#pragma once
#include"pch.h"
#include"HeapInterface.h"
#include "Node.h"


template<class ItemType>
class LinkedHeap :public HeapInterface<ItemType>
{
private:
	Node<ItemType>* rootPtr;
	int itemCount;
	void bubbleUp(Node<ItemType>* newNode,int ItemCount);
public:

	LinkedHeap();

	bool isEmpty()const;
	int getNumberOfNodes()const;
	int getHeight()const;
	ItemType peekTop()const;
	bool add(const ItemType& newData);
	bool remove();
	void clear();

};
#include "LinkedHeap.cpp"