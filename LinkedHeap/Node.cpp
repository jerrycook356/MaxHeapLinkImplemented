#include "pch.h"
#include "Node.h"

template<class ItemType>
Node<ItemType>::Node() :nextPtr(nullptr)
{
}

template<class ItemType>
Node<ItemType>::Node(const ItemType& newItem) : item(newItem), nextPtr(nullptr)
{

}

template<class ItemType>
void Node<ItemType>::setItem(const ItemType& newItem)
{
	item = newItem;
}

template<class ItemType>
ItemType Node<ItemType>::getItem()
{
	return item;
}

template<class ItemType>
Node<ItemType>* Node<ItemType>::getNext()
{
	return nextPtr;
}

template<class ItemType>
void Node<ItemType>::setNext(Node<ItemType>* newNode)
{
	nextPtr = newNode;
}