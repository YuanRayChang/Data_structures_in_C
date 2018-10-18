#include "pch.h"
#include "Box.h"
Box::Box(double alength, double abreadth, double aheight) :
	length(alength), breadth(abreadth), height(aheight) {}

double Box::volume() const {
	return length * breadth*height;
}

double Box::getLength() const { return length; }
double Box::getBreadth() const { return breadth; }
double Box::getHeight() const { return height; }