#pragma once

#ifndef BOX_H
#define BOX_H

class Box
{
	public:
		Box(double alength = 1.0, double abreadth = 1.0, double aheight = 1.0);
		
		double volume() const;

		double getlength() const;
		double getbreadth() const;
		double getheight() const;

		bool operator<(const Box& aBox) const; // compare Box < Box
		bool operator<(const double aValue) const; // compare Box < double value
		Box operator+(const Box& aBox) const; // function to add two box object

	private:
		double length;
		double breadth;
		double height;


};

// function to add two Box object
inline Box Box::operator+(const Box& aBox) const {
	return Box(length > aBox.length ? length : aBox.length,
		breadth > aBox.breadth ? breadth : aBox.breadth,
		height + aBox.height);
}

// compare Box < Box
inline bool Box::operator<(const Box& aBox) const {
	return volume() < aBox.volume();
}

// compare Box < double value
inline bool Box::operator<(const double aValue) const {
	return volume() < aValue;
}




#endif