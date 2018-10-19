#pragma once

#ifndef BOXPTR_H
#define BOXPTR_H

#include "List.h"

class BoxPtr
{
	public:
		BoxPtr(TruckLoad& load); // constructor
		Box& operator*() const; // * overload
		Box* operator->() const; // -> overload
		Box* operator++(); // prefix increment
		const Box* operator++(int); // postfix increment
		operator bool(); // conversion to bool

	private:
		Box* pBox; // points to current Box in rload
		TruckLoad& rload;

		BoxPtr(); // default construcor
		BoxPtr(BoxPtr&); // copy constructor
		BoxPtr& operator=(const BoxPtr&); // assignment operator
};

#endif