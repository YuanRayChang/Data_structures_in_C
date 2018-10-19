#include "pch.h"
#include "Carton.h"
#include <cstring>

// constructor
Carton::Carton(const char* pStr) {
	pMaterial = new char[strlen(pStr) + 1]; // allocate space for the string
	strcpy(pMaterial, pStr);
}


// deconstructor
Carton::~Carton() {
	delete[] pMaterial;
}

double Carton::volume() const {
	return length * breadth * height;
}