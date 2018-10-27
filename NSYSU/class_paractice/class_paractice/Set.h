#pragma once
#ifndef SET_H
#define SET_H
#include <iostream> 
using namespace std;
class Set
{
	public:
		Set(char* input);

		Set operator+(Set&);
		Set operator*(Set&);
		Set operator-(Set&);
		const char* operator>=(Set&);
		const char* in(char&);

		friend ostream& operator<<(ostream&, Set&); // for output, kind of like cout

	private:
		char char_array[256];
};

#endif 
