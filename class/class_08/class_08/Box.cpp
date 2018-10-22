#include "pch.h"
#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(double lv, double bv, double hv) : length(lv), breadth(bv), height(hv) {
	cout << "Box constructor called" << endl;
}

double Box::volume() const {
	return length * breadth * height;
}