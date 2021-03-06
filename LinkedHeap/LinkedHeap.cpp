#include "pch.h"
#include "LinkedHeap.h"

template<class ItemType>
 LinkedHeap<ItemType>::LinkedHeap():itemCount(0),rootPtr(nullptr)
{
}

 template<class ItemType>
 bool LinkedHeap<ItemType>::isEmpty() const
 {
	 return itemCount == 0;
 }

 template<class ItemType>
 int LinkedHeap<ItemType>::getNumberOfNodes() const
 {
	 return itemCount;
 }

 template<class ItemType>
 int LinkedHeap<ItemType>::
getHeight() const
 {
	 return 0;
 }

 template<class ItemType>
 ItemType LinkedHeap<ItemType>::peekTop() const
 {
	 return rootPtr->getItem();
 }

 template<class ItemType>
 bool LinkedHeap<ItemType>::add(const ItemType & newData)
 {
	 Node<ItemType>* newNode = new Node<ItemType>();
	 newNode->setItem(newData);
	 Node<ItemType>* tempPtr = rootPtr;
	 if (rootPtr == nullptr)
	 {
		 rootPtr = newNode;
		 itemCount++;
	 }
	 else
	 {
		 for (int i = 0;i < itemCount-1;i++) 
		 {
			 if(tempPtr->getNext() != nullptr)
			 tempPtr = tempPtr->getNext();
		 }
		 tempPtr->setNext(newNode);
		 itemCount++;
		 bubbleUp(newNode, itemCount);
	 }
	 return true;
 }

 template<class ItemType>
 bool LinkedHeap<ItemType>::remove()
 {
	 Node<ItemType>* nodeToDelete = rootPtr;
	 return true;
 }

 template<class ItemType>
 void LinkedHeap<ItemType>::clear()
 {
	 
 }

 template<class ItemType>
 void LinkedHeap<ItemType>::bubbleUp(Node<ItemType>* newNodePtr,int index)
 {
	 bool inPlace = false;
	 int parentIndex = index / 2;
	 int newNodeIndex = index;
	 Node<ItemType>* parentNode;
	 Node<ItemType>* tempNode;
	 tempNode = rootPtr;
	 
	 //find the parent node
	 for (int i = 0;i < parentIndex-1;i++)
	 {
		 tempNode = tempNode->getNext();
	 }
	 
	 parentNode = tempNode;
	 if (newNodePtr->getItem() < parentNode->getItem())
		 inPlace = true;
	 else
	 {
		 if (parentIndex == 0)
		 {
			 rootPtr = newNodePtr;
			 newNodePtr->setNext(parentNode);
			 inPlace = true;
		 }
		 else
		 {
			 //set previous node
			 Node<ItemType>* previousNode;
			 previousNode = rootPtr;
			 for (int i = 0; i < parentIndex - 1;i++)
			 {
				 previousNode = previousNode->getNext();
			 }
			 newNodePtr -> setNext(previousNode->getNext());
			 previousNode->setNext(newNodePtr);
			 tempNode = rootPtr;
			 for (int i = 0; i < itemCount;i++)
			 {
				 tempNode = tempNode->getNext();
			 }
			 tempNode->setNext(nullptr);
		 }
	 }
	 if (!inPlace)
	 {
		 bubbleUp(newNodePtr, parentIndex);
	 }

 }
