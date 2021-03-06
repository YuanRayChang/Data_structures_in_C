// class_02.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include <cstdlib> // for random number generator
#include <ctime> // fro time function
using namespace std;

#include "Box.h"
inline int random(int count) {
	return 1 + static_cast<int>((count*static_cast<long>(rand())) / (RAND_MAX + 1));
}

// display box dimensions
void show(const Box& aBox) {
	cout << aBox.getLength() << " by " << aBox.getBreadth()
		<< " by " << aBox.getHeight() << endl;
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

	Box* pLargest = &boxes[0];

	for (int i = 0; i < boxCount; i++) {
		if (*pLargest < boxes[i]) {
			pLargest = &boxes[i];
		}
	}

	cout << "The box with the largest volume has dimensions: ";
	show(*pLargest);

	int volMin = 100000;
	int volMax = 500000;

	cout << "boxes with volumes between "
		<< volMin << " and " << volMax << " are: " << endl;
	for (int i = 0; i < boxCount; i++) {
		if (volMin < boxes[i] && boxes[i] < volMax) {
			show(boxes[i]);
		}
	}
	
}

