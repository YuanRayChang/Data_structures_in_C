#pragma once
#ifndef POLY_H
#define POLY_H
#include "Node.h"

class Poly
{
public:
	Poly(Node* firstValue = 0);

	void InsertTail(const Node& n);
	void Insert_After_X(Node* x);
	void Delete(Node* x, Node* y);
	void printPoly();

	Poly operator+(const Poly& p) const;
	Poly operator*(const Poly& p) const;
private:
	Node* first;
	Node* last;
};
#endif 
