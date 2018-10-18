#include "pch.h"
#include "Box.h"


Box::Box(double lengthValus, double breadthValue, double heightValue) :
	length(lengthValus), breadth(breadthValue), height(heightValue)
{
	//cout << "Box constructor called" << endl;

}

double Box::volume() const
{
	return length * breadth * height;
}

double Box::getlength() const { return length; }
double Box::getbreadth() const { return breadth; }
double Box::getheight() const { return height; }

int Box::compareVolume(const Box& otherbox) const
{
	double vol1 = volume();
	double vol2 = otherbox.volume();
	return vol1 > vol2 ? 1 : (vol1 < vol2 ? -1 : 0);
}

// Box destructor
Box::~Box()
{
	cout << "Box destructor called." << endl;
}