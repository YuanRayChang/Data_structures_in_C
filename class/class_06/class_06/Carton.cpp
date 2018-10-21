#include "pch.h"
#include <iostream>
#include "Carton.h"
#include <cstring>
using namespace std;

Carton::Carton(double lv, double bv, double hv, const char* pStr,
	double dense, double thick) : Box(lv, bv, hv), density(dense), thickness(thick) {
	pMaterial = new char[strlen(pStr) + 1];
	strcpy(pMaterial, pStr);
	cout << "Carton constructor called" << endl;
}

Carton::~Carton() {
	cout << "Carton deconstructor called" << endl;
	delete[] pMaterial;
}

double Carton::getWeight() const {
	return 2 * (length*breadth + length*height + breadth*height) * thickness * density;
}