#include "pch.h"
#include "Toughpack.h"
#include <iostream>
using namespace std;
Toughpack::Toughpack(double lv, double bv, double hv): Box(lv, bv, hv){}

double Toughpack::volume() const {
	return 0.85 * length * breadth * height;
}

Toughpack::	~Toughpack() {
	cout << "Toughpack deconstructor called" << endl;
}
