#include "pch.h"
#include "Can.h"

Can::Can(double canDiameter, double canHeight): diameter(canDiameter), height(canHeight){}

double Can::volume() const {
	return pi * diameter * diameter * height / 4;
}

const double Can::pi = 3.14159265;