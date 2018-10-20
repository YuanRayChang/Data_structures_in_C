#include "pch.h"
#include "Box.h"
#include <iostream>
using namespace std;

// default constructor
Box::Box() : length(1.0), breadth(1.0), height(1.0) {
	cout << "Default Box constructor" << endl;
}

// constructor
Box::Box(double lv, double bv, double hv) : length(lv), breadth(bv), height(hv) {
	cout << "Box construrctor" << endl;
}

// copy constructor
Box::Box(const Box& aBox) : length(aBox.length), breadth(aBox.breadth), height(aBox.height) {
	cout << "Box copy constructor called" << endl;
}


// deconstructor
Box::~Box() {
	cout << "Box deconstructor" << endl;
}