#include "pch.h"
#include "Box.h"

Box::Box(double alength, double abreadth, double aheight) {
	double maxSide = alength > abreadth ? alength : abreadth;
	double minSide = alength < abreadth ? alength : abreadth;
	length = maxSide > 0 ? maxSide : 1.0;
	breadth = minSide > 0 ? minSide : 1.0;
	height = aheight > 0 ? aheight : 1.0;

}
	

double Box::volume() const {
	return length * breadth * height;
}

double Box::getlength() const {
	return length;
}

double Box::getbreadth() const {
	return breadth;
}

double Box::getheight() const {
	return height;
}