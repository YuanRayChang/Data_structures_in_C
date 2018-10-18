#include "pch.h"
#include <iostream>
#include "Box.h"
#include "List.h"
using namespace std;

// Package constructor
TruckLoad::Package::Package(Box* pNewBox) :pBox(pNewBox), pNext(0) {}

// TruckLoad constructor
TruckLoad::TruckLoad(Box* pBox, int count) {
	pHead = pTail = pCurrent = 0;
	if (count > 0 && pBox != 0) {
		for (int i = 0; i < count; i++) {
			addBox(pBox + i);
		}
	}
	return;
}

// copy constructor
TruckLoad::TruckLoad(const TruckLoad& load) {
	pHead = pTail = pCurrent = 0;
	if (load.pHead == 0) {
		return;
	}
	Package* pTemp = load.pHead; // saves addresses for new chain
	do {
		addBox(pTemp->pBox);
	} while (pTemp = pTemp->pNext);
}

// deconstructor
TruckLoad::~TruckLoad() {
	while (pCurrent = pHead->pNext) {
		delete pHead;
		pHead = pCurrent;
	}
	delete pHead;
}

// get the first box in the list
Box* TruckLoad::getFirstBox() {
	pCurrent = pHead;
	return pCurrent->pBox;
}

// get the next box in the list
Box* TruckLoad::getNextBox() {
	if (pCurrent) {
		pCurrent = pCurrent->pNext;
	}
	else {
		pCurrent = pHead;
	}
	return pCurrent ? pCurrent->pBox : 0;
}

// add a list element
void TruckLoad::addBox(Box* pBox) {
	Package* pPackage = new Package(pBox); // create a package
	if (pHead) {						// check list is not empty
		pTail->pNext = pPackage;		// add the new object to the tail
	}
	else {								// list is empty
		pHead = pPackage;				// so new object is the head
	}
	pTail = pPackage;					// store its address as tail
}

// subscript operator
Box& TruckLoad::operator[](int index) const {
	if (index < 0) {
		cout << endl << "Negative index";
		exit(1);
	}

	Package* pPackage = pHead; // address of first package
	int count = 0; // package count
	do {
		if (index == count++) {
			return *pPackage->pBox;
		}
	} while (pPackage = pPackage->pNext);

	cout << endl << "out of range index"; // if we get to here, index is too high
	exit(1);
}