#pragma once
#ifndef BOX_H
#define BOX_H

class Box
{
public:
	Box(double lv = 1, double bv = 1, double hv = 1);
	
	// function to show the volume of an object
	void showVolume() const;

	//Box(const Box& aBox); // copy constructor
	//~Box();

	virtual double volume() const;

protected:
	double length;
	double breadth;
	double height;
};

#endif