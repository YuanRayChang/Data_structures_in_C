#pragma once
#ifndef TREE_H
#define TREE_H
#include "Node.h"
class Node;

class Tree
{
	public:
		Tree(Node* r=0);
		Node* Get(const int v);
		void Insert(int v);
		void Delete(int v);
		void Inorder();
		void Inorder(Node* c);

	private:
		Node* root;
};

#endif // !TREE_H
