#pragma once

#ifndef CARTON_H
#define CARTON_H
#include "Box.h"
#include <cstring>

class Carton: public Box
{
	public:
		Carton(double lv = 1, double bv = 1, double hv = 1, const char* pStr = "Cardboard",
			double dense = 0.125, double thick = 0.2);

		~Carton();

		double getWeight() const; // get carton weight
	protected:
		char* pMaterial; // carton material
		double thickness;
		double density;
};


#endif


