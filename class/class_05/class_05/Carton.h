#pragma once
#ifndef CARTON_H
#define CARTON_H

#include "Box.h"
#include <cstring>

class Carton: public Box
{
	public:
		// constructor which can also act as default constructor
		// calls default base constructor automatically
		Carton(const char* pStr = "Cardboard"); 

		// constructor explicitly calling the base constructor
		Carton(double lv, double bv, double hv, const char* pStr = "Cardboard");
		
		// copy constructor
		Carton(const Carton& aCarton);

		~Carton(); // deconstructor

		double volume() const;

	protected:
		char* pMaterial;
};
	
#endif