#include "pch.h"
#include "Node.h"


Node::Node(int d, Node* left, Node* right, Node* p) :
	data(d), leftchild(left), rightchild(right), parent(p){}

Node* Node::Successor() { // smallest in the right subtree

	Node* right = rightchild;
	Node* suc = right;

	while (right) {
		suc = right;
		right = right->leftchild;
	}
	return suc;
}

Node* Node::Predecessor() { // largest in the left subtree

	Node* left = leftchild;
	Node* pre = left;

	while (left) {
		pre = left;
		left = left->rightchild;
	}
	return pre;
}