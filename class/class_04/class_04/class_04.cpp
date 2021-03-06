// class_04.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <ctime>
#include <cstdlib>
#include "Box.h"
#include "List.h"
#include "BoxPtr.h"
using namespace std;

inline int random(int count) {
	return 1 + static_cast<int>((count*static_cast<long>(rand())) / (RAND_MAX + 1));
}

void show(const Box& aBox) {
	cout << aBox.getlength() << " by " << aBox.getbreadth() 
		<< " by " << aBox.getheight() << endl;
}

int main()
{
	const int dimLimit = 100;
	srand((unsigned)time(0));

	const int boxCount = 20;
	Box boxes[boxCount];

	for (int i = 0; i < boxCount; i++) {
		boxes[i] = Box(random(dimLimit), random(dimLimit), random(dimLimit));
	}

	int first = 0; // index of first box object of pair
	int second = 1; // index of sexond box object of pair
	double minVolume = (boxes[first] + boxes[second]).volume();

	for (int i = 0; i < boxCount-1; i++) {
		for (int j = i+1; j < boxCount; j++) {
			if (boxes[i] + boxes[j] < minVolume) {
				first = i;
				second = j;
				minVolume = (boxes[i] + boxes[j]).volume();
			}
		}
	}

	cout << "the objects that sum to the smallest volume are:";
	cout << endl << "boxes[" << first << "] ";
	show(boxes[first]);
	cout << endl << "boxes[" << second << "] ";
	show(boxes[second]);
	cout << endl << "volume of the sum is " << minVolume << endl;


	// new code for subscript operator

	cout << endl << "New code for subscript operator:" << endl;
	TruckLoad load = TruckLoad(boxes, boxCount);

	// find the largest box in the list
	Box maxBox = load[0];
	for (int i = 1; i < boxCount; i++) {
		if (maxBox < load[i]) {
			maxBox = load[i];
		}
	}
	cout << "The largest box in the list is " << endl;
	show(maxBox);
	

	// using smart pointer
	cout << endl << "smart pointer:" << endl;


	// find the largest Box in the list
	BoxPtr pLoadBox(load); // create smart pointer
	Box maxBox2 = *pLoadBox; // initialize maxBox object using * operator
	if (pLoadBox) {  // bool conversion
		cout << endl << "volume of the first box is " << pLoadBox->volume(); // -> operator
	}

	while (++pLoadBox) { // prefix increment smart pointer
		if (maxBox2 < *pLoadBox) {
			maxBox2 = *pLoadBox;
		}
	}

	cout << endl << "The largest box in the list is " << maxBox2.getlength()
		<< " by " << maxBox2.getbreadth() << " by "
		<< maxBox2.getheight() << " with volume " <<
		maxBox2.volume() << endl;
	return 0;
}
