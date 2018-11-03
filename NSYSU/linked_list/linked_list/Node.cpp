#include "pch.h"
#include <iostream>
#include "Node.h"

Node::Node(int coeffient, int exponent, Node* nextPoly) {
	coef = coeffient;
	exp = exponent;
	next = nextPoly;
}

int Node::returnCoef() {
	return coef;
}

int Node::returnExp() {
	return exp;
}

Node* Node::returnNext() {
	return next;
}