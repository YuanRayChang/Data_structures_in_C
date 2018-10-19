#include "pch.h"
#include "List.h"
#include "BoxPtr.h"
#include <iostream>
using namespace std;

BoxPtr::BoxPtr(TruckLoad& load):rload(load){
	pBox = rload.getFirstBox();
}

Box& BoxPtr::operator*() const {
	if (pBox) {
		return *pBox;
	}
	else {
		cout << endl << "Dereferencing null BoxPtr";
		exit(1);
	}
}

Box* BoxPtr::operator->() const {
	return pBox;
}

Box* BoxPtr::operator++() {
	return rload.getNextBox();
}

const Box* BoxPtr::operator++(int) {
	Box* pTemp = pBox;
	pBox = rload.getNextBox();
	return pTemp;
}

BoxPtr::operator bool() {
	return pBox != 0;
}