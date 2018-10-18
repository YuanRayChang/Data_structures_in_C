#pragma once
#include <iostream>
using namespace std;

#ifndef BOX_H
#define BOX_H

class Box
{
	public:

		//constructor
		Box(double lengthValus=1.0, double breadthValue=1.0, double heightValue=1.0);
		~Box();
		double volume() const;
		double getlength() const;
		double getbreadth() const;
		double getheight() const;
		int compareVolume(const Box& otherbox) const;
	private:
		double length;
		double breadth;
		double height;
		mutable int lock;
};

#endif