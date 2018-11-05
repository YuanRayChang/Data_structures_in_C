#pragma once
#ifndef NODE_H
#define NODE_H
#include "Tree.h"


class Node
{
	friend class Tree;
	public:
		Node(int d=0, Node* left=0, Node* right=0, Node* p=0);
		Node* Successor(); // smallest in the right subtree
		Node* Predecessor(); // largest in the left subtree
	private:
		int data;
		Node* leftchild;
		Node* rightchild;
		Node* parent;

};

#endif // !NODE_H
