#include "pch.h"
#include "Toughpack.h"

Toughpack::Toughpack(double lv, double bv, double hv): Box(lv, bv, hv){}

double Toughpack::volume() const {
	return 0.85 * length * breadth * height;
}