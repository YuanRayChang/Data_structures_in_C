#pragma once
#ifndef BOX_H
#define BOX_H

class Box
{
	public:
		Box(double lv = 1.0, double bv = 1.0, double hv = 1.0);

	protected:
		double length;
		double breadth;
		double height;
};

#endif