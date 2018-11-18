// LinkedHeap.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include "LinkedHeap.h"

using namespace std;
int main()
{
	LinkedHeap<int>* mHeap = new LinkedHeap<int>();
	mHeap->add(10);
	cout << endl << "top after adding 10 = " << mHeap->peekTop();
	mHeap->add(5);
	cout << endl << "top after adding 5 = " << mHeap->peekTop();
	mHeap->add(20);
	cout << endl << "top after adding 20 = " << mHeap->peekTop();

	
	cout << "\n\n\n\n\n\n\n";

}

