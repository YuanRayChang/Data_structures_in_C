#pragma once
#ifndef CARTON_H
#define CARTON_H

#include "Box.h"
#include <cstring>

class Carton: public Box
{
	public:
		Carton(const char* pStr = "Cardboard"); // constructor
		~Carton(); // deconstructor

		double volume() const;

	protected:
		char* pMaterial;
};
	
#endif