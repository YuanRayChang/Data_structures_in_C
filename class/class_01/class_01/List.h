#pragma once
#include "Box.h"

#ifndef LIST_H
#define LIST_H

class TruckLoad
{
	public:
		TruckLoad(Box* pbox = 0, int count = 1); // constructor
		TruckLoad(const TruckLoad& load); // copy constructor
		~TruckLoad();

		Box* getFirstBox(); // retrieve the first box
		Box* getNextBox(); // retrieve the next box
		void addBox(Box* pbox); // Add a new box to the list

		
	private:
		class Package
		{
		public:
			~Package();
			Box* pBox;  // pointer to the box
			Package* pNext;  // pointer to the next package

			Package(Box* pNewBox);  // Constructor
			void setnext(Package* pPackage);  // add package to end of list
		
		};
				
		Package* pHead; // first in the list
		Package* pTail; // last in the list
		Package* pCurrent; // last retrieved from the list

};

#endif