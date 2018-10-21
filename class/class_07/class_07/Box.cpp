#include "pch.h"
#include <iostream>
#include "Box.h"
using namespace std;

Box::Box(double lv, double bv, double hv) : length(lv), breadth(bv), height(hv) {
	cout << "Box constructor called" << endl;
}

//Box::Box(const Box& aBox) : length(aBox.length), breadth(aBox.breadth), height(aBox.height) {
//	cout << "Box copy constructor called" << endl;
//}
//
//Box::~Box() {
//	cout << "Box deconstructor called" << endl;
//}

void Box::showVolume() const {
	cout << "Box usable volume is " << volume() << endl;
}


double Box::volume() const {
	return length * breadth * height;
}