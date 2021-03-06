// class_01.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <cstdlib> // for random number generator
#include <ctime> // for time function
#include "Box.h"
#include "List.h"

// function to generate a random integer 1 to count
inline int random(int count) {
	return 1 + static_cast<int>((count*static_cast<long>(rand())) / (RAND_MAX + 1));
}

// find the largest box in the list
Box* maxBox(TruckLoad& load) {
	Box* pBox = load.getFirstBox();
	Box* pNextBox;
	while (pNextBox = load.getNextBox()) {
		if (pBox->compareVolume(*pNextBox) < 0) {
			pBox = pNextBox;
		}
	}
	return pBox;
}


int main()
{
	const int dimLimit = 100; // Upper limit on Box dimensions
	srand((unsigned)time(0)); // initialize the random number generator

	TruckLoad load1; // create an empty list
	
	// add ten random sized box objects to the list
	for (int i = 0; i < 3; i++) {
		load1.addBox(new Box(random(dimLimit), random(dimLimit), random(dimLimit)));
	}

	Box* pBox = maxBox(load1);
	   
	cout << "The largest box in the first list is "
		<< pBox->getlength() << " by "
		<< pBox->getbreadth() << " by "
		<< pBox->getheight() << endl;

	TruckLoad load2(load1); // Create a copy of the first list
	pBox = maxBox(load2);
	cout << "The largest box in the second list is "
		<< pBox->getlength() << " by "
		<< pBox->getbreadth() << " by "
		<< pBox->getheight() << endl;

	// add five more boxes to the second list
	for (int i = 0; i < 5; i++) {
		load2.addBox(new Box(random(dimLimit), random(dimLimit), random(dimLimit)));
	}

	pBox = maxBox(load2);
	cout << "The largest box in the extended second list is "
		<< pBox->getlength() << " by "
		<< pBox->getbreadth() << " by "
		<< pBox->getheight() << endl;

// count the number of boxes in the first list and dislay the count
	Box* pNextBox = load1.getFirstBox();
	int count = 0;
	while (pNextBox) {
		count++;
		pNextBox = load1.getNextBox();
	}
	cout << "first list still contains " << count << " box objects." << endl;

	// delete the box objects in the free store
	pNextBox = load2.getFirstBox();
	while (pNextBox) {
		delete pNextBox;
		pNextBox = load2.getNextBox();
	}

	return 0;
}

