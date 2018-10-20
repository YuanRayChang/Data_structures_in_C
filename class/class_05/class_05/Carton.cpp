#include "pch.h"
#include "Carton.h"
#include <cstring>
#include <iostream>
using namespace std;



// constructor which can also act as default constructor
// calls default base constructor automatically
Carton::Carton(const char* pStr){
	pMaterial = new char[strlen(pStr) + 1]; // allocate space for the string
	strcpy(pMaterial, pStr);
	cout << "Carton constructor 1" << endl;
}
// constructor explicitly calling the base constructor
Carton::Carton(double lv, double bv, double hv, const char* pStr): Box(lv,bv, hv){
	pMaterial = new char[strlen(pStr) + 1];
	strcpy(pMaterial, pStr);
	cout << "Carton constructor 2" << endl;
	}

// copy constructor
Carton::Carton(const Carton& aCarton): Box(aCarton) {
	pMaterial = new char[strlen(aCarton.pMaterial) + 1];
	strcpy(pMaterial, aCarton.pMaterial);
	cout << "Carton copy constructor called" << endl;
}

// deconstructor
Carton::~Carton() {
	cout << "Carton deconstructor.Material = " << pMaterial << endl;
	delete[] pMaterial;
}

double Carton::volume() const {
	return length * breadth * height;
}