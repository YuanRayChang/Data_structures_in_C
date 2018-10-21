#pragma once
#ifndef CARTON_H
#define CARTON_H
#include "Box.h"
#include <string>
using std::string;

class Carton : public Box
{
public:
	Carton(double lv = 1, double bv = 1, double hv = 1, string material = "Cardboard");

	Carton(const Carton& aCarton);

	~Carton();

	double volume() const;
private:
	string* pMaterial; // carton material

};


#endif
