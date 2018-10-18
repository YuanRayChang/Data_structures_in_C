#include "pch.h"
#include "Box.h"
#include "List.h"



// TruckLoad calss definition
// Constructor
TruckLoad::TruckLoad(Box* pBox, int count)
{
	pHead = pTail = pCurrent = 0;
	if ((count > 0) && (pBox != 0)) {
		for (int i = 0; i < count; i++) {
			addBox(pBox + i);
		}
	}
}

TruckLoad::TruckLoad(const TruckLoad& load)
{
	pHead = pTail = pCurrent = 0;
	if (load.pHead == 0) {
		return;
	}
	Package* pTemp = load.pHead;
	do {
		addBox(pTemp->pBox);
	} while (pTemp = pTemp->pNext);
}

// retrieve the first box
Box* TruckLoad::getFirstBox() {
	pCurrent = pHead;
	return pCurrent->pBox;
}

// retrieve the next box
Box* TruckLoad::getNextBox() {
	if (pCurrent) {
		pCurrent = pCurrent->pNext;
	}
	else {
		pCurrent = pHead;
	}
	return pCurrent ? pCurrent->pBox : 0;
}

// add a new box to the list
void TruckLoad::addBox(Box* pBox) {
	Package* pPackage = new Package(pBox); // create a package
	if (pHead) {
		pTail->pNext = pPackage;
	}
	else {
		pHead = pPackage;
	}
	pTail = pPackage;
}

TruckLoad::~TruckLoad() {
	cout << "TruckLoad destructor called." << endl;
	while (pCurrent = pHead->pNext) {
		delete pHead;
		pHead = pCurrent;
	}
	delete pHead;
}



// Package class definition
// Constructor
TruckLoad::Package::Package(Box* pNewBox) :pBox(pNewBox), pNext(0) {}
// add package to end of list
void TruckLoad::Package::setnext(Package* pPackage) { pNext = pPackage; }

TruckLoad::Package::~Package() {
	cout << "Package destructor called." << endl;
}
