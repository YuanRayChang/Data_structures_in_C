#pragma once
#ifndef CAN_H
#define CAN_H

#include "Vessel.h"
class Can : public Vessel
{
public:
	Can(double canDiameter, double canHeight);
	virtual double volume() const;
	~Can();
protected:
	double diameter;
	double height;
	static const double pi;
};

#endif 
