#pragma once
#ifndef TOUGHPACK_H
#define TOUGHPACK_H

#include "Box.h"

class Toughpack: public Box
{
public:
	Toughpack(double lv, double bv, double hv);
protected:
	virtual double volume() const;

};

#endif 
