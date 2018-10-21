#pragma once

#ifndef BOX_H
#define BOX_H

class Box
{
	public:
		Box(double lv = 1, double bv = 1, double hv = 1);
		Box(const Box& aBox); // copy constructor
		~Box();

		double volume() const;

	protected:
		double length;
		double breadth;
		double height;
};

#endif
