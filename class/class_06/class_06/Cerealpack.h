#pragma once
#ifndef CEREALPACK_H
#define CEREALPACK_H
#include <iostream>
#include "Carton.h"
#include "Contents.h"
using namespace std;

class Cerealpack: public Carton, public Contents
{
	public:
		Cerealpack(double length, double breadth, double height, const char* cerealType);
		~Cerealpack();

};


#endif 
