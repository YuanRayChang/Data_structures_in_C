#include "pch.h"
#include <iostream>
#include "Contents.h"
#include <cstring>
using namespace std;

Contents::Contents(const char* pStr, double weight, double vol) :
	unitweight(weight), volume(vol) {
	pName = new char[strlen(pStr) + 1];
	strcpy(pName, pStr);
	cout << "Contents constructor called" << endl;
}

Contents::~Contents() {
	cout << "Contents deconstructor called" << endl;
	delete[] pName;
}

double Contents::getWeight() const{
	return volume * unitweight;
}