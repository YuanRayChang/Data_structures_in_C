#pragma once
#ifndef CONTENTS_H
#define CONTENTS_H
#include <cstring>

class Contents
{
	public:
		Contents(const char* pStr = "cereal", double weight = 0.3, double vol = 0);
		~Contents();
		double getWeight() const;

	protected:
		char* pName; // Contents type
		double volume; // cubic inches
		double unitweight; // pounds per cubic inch
};

#endif 