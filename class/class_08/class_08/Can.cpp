#include "pch.h"
#include "Can.h"
#include <iostream>
using namespace std;

Can::Can(double canDiameter, double canHeight): diameter(canDiameter), height(canHeight){}

double Can::volume() const {
	return pi * diameter * diameter * height / 4;
}

const double Can::pi = 3.14159265;

Can::~Can() {
	cout << "Can deconstructor called" << endl;
}