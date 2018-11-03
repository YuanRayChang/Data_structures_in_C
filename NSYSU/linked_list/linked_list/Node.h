#pragma once
#ifndef NODE_H
#define NODE_H

class Node
{
	
public:
	friend class Poly;
	Node(int coeffient = 0, int exponent = 0, Node* nextPoly = 0);
	int returnCoef();
	int returnExp();
	Node* returnNext();
private:
	int coef;
	int exp;
	Node* next;
};

#endif 

