#include "pch.h"
#include <iostream>
#include "Carton.h"
#include "Contents.h"
#include "Cerealpack.h"
#include <cstring>
using namespace std;

Cerealpack::Cerealpack(double length, double breadth, double height, const char* cerealType) :
	Carton(length, breadth, height, "Cardboard"), Contents(cerealType) {
	cout << "Cerealpack constructor called" << endl;
	Contents::volume = 0.9 * Carton::volume();
}

Cerealpack::~Cerealpack() {
	cout << "Cerealpack deconstructor called" << endl;
}