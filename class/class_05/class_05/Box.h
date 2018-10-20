#pragma once
#ifndef BOX_H
#define BOX_H

class Box
{
	public:
		Box(); // default constructor
		Box(double lv, double bv, double hv); // constructor
		Box(const Box& aBox); // copy constructor
		~Box(); // deconstructor
	protected:
		double length;
		double breadth;
		double height;
};

#endif