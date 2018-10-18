#pragma once
#ifndef LIST_H
#define LIST_H

#include "Box.h"

class TruckLoad
{
	public:
		// constructors
		TruckLoad(Box* pBox = 0, int count = 0); // constructor
		TruckLoad(const TruckLoad& load); // copy constructor

		~TruckLoad(); // deconstructor
		Box* getFirstBox(); // retrieve the first box
		Box* getNextBox(); // retrieve the next box
		void addBox(Box* pBox); // add a new box to the list
		Box& operator[](int index) const; // overloaded subscript operator

	private:
		class Package
		{
			public:
				Box* pBox; // pointer to the box
				Package* pNext; // pointer to the next package

				Package(Box* pNewBox); // constructor
		};

		Package* pHead; // first in the list
		Package* pTail; // last in the list
		Package* pCurrent; // last retrieved from the list
};


#endif