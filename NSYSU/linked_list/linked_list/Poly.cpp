#include "pch.h"
#include <iostream>
#include "Poly.h"
#include "Node.h"
using namespace std;
Poly::Poly(Node* firstValue) {
	first = firstValue;
}

void Poly::InsertTail(const Node& n) {
	if (first) {
		last->next = new Node(n.coef, n.exp, n.next);
		last = last->next;
	}
	else { // empty
		first = last = new Node(n.coef, n.exp, n.next);
	}
}

void Poly::Insert_After_X(Node* x) {
	if (first) {
		x->next = new Node(x->coef, x->exp, x->next);
	}
	else {
		first = new Node(x->coef, x->exp, x->next);
	}
}

void Poly::Delete(Node* x, Node* y) { // x is after y
	if (x == first) {
		first = first->next;
	}
	else {
		y->next = x->next;
	}
	delete x;
}


void Poly::printPoly() {
	
	Node* temp = first;
	if (temp == 0) {
		cout << "0 0" << endl;
	}
	while (temp) {
		cout << temp->coef << " " << temp->exp << endl;
		temp = temp->next;
	}
	//cout << endl;
}

Poly Poly::operator+(const Poly& p) const {
	Poly* add = new Poly;
	
	Node* A = first;
	Node* B = p.first;
	
	while (A||B) {
		if ((A&&B) && (A->exp == B->exp)) {
			Node temp(A->coef + B->coef, A->exp);
			add->InsertTail(temp);
			A = A->next;
			B = B->next;
		}
		else if ((A&&B) && (A->exp > B->exp)) {
			Node temp(A->coef, A->exp);
			add->InsertTail(temp);
			A = A->next;
		}
		else if ((A&&B) && (A->exp < B->exp)) {
			Node temp(B->coef, B->exp);
			add->InsertTail(temp);
			B = B->next;
		}
		else if (A == 0) {
			Node temp(B->coef, B->exp);
			add->InsertTail(temp);
			B = B->next;
		}
		else if (B == 0) {
			Node temp(A->coef, A->exp);
			add->InsertTail(temp);
			A = A->next;
		}
		
	}

	Node* C = add->first;
	Node* pre = 0;
	while (C) {
		if (C == add->first) {
			if (C->coef == 0) {
				pre = C;
				C = C->next;
				add->first = C;
				delete pre;
			}
			else {
				pre = C;
				C = C->next;
			}
		}
		else {
			if (C->coef == 0) {
				pre->next = C->next;
				delete C;
				C = pre->next;
			}
			else {
				pre = C;
				C = C->next;
			}
		}
		
		
	}
	
	return *add;
}



Poly Poly::operator*(const Poly& p) const{
	Poly mul;
	
	Node* A = first;
	Node* B = p.first;

	while (A) {
		while (B) {
			Node temp_n(A->coef*B->coef, A->exp+B->exp);
			Poly temp_p(&temp_n);
			mul = mul + temp_p;
			B = B->next;
		}
		A = A->next;
		B = p.first;
	}
	return mul;
}
