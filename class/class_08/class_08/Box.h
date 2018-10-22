#pragma once
#ifndef BOX_H
#define BOX_H

#include "Vessel.h"

class Box: public Vessel
{
public:
	Box(double lv = 1, double bv = 1, double hv = 1);

	virtual double volume() const;

protected:
	double length;
	double breadth;
	double height;
};

#endif