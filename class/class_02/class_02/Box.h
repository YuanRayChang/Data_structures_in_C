#pragma once
#ifndef BOX_H
#define BOX_H

class Box
{
	public:
		Box(double alength = 1.0, double abreadth = 1.0, double aheight = 1.0);
		double volume() const;
		double getLength() const;
		double getBreadth() const;
		double getHeight() const;

		// overload 'less than' operator
		bool operator<(const Box& aBox) const; // compare Box < Box
		bool operator<(const double aValue) const; // compare Box < double value

	private:
		double length;
		double breadth;
		double height;
};

// function comparing Box < Box
inline bool Box::operator<(const Box& aBox) const {
	return volume() < aBox.volume();
}

// function comparing Box < double value
inline bool Box::operator<(const double aValue) const {
	return volume() < aValue;
}

// function comparing double value < Box
inline bool operator<(const double aValue, const Box& aBox) {
	return aValue < aBox.volume();
}
#endif