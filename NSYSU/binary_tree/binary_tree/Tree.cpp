#include "pch.h"
#include "Tree.h"
#include <iostream>
using namespace std;
Tree::Tree(Node* r): root(r){}

Node* Tree::Get(const int v) {
	Node* current = root;
	while (current) {
		if (v < current->data) {
			current = current->leftchild;
		}
		else if (v > current->data) {
			current = current->rightchild;
		}
		else {
			return current;
		}
	}
	//cout << endl << v << " not found" << endl;
	return 0;
}

void Tree::Insert(int v) {
	Node* pre = 0;
	Node* current = root;
	//cout << "insert " << v << endl;
	while (current) {
		pre = current;
		if (v < current->data) {
			current = current->leftchild;
		}
		else if (v > current->data) {
			current = current->rightchild;
		}
		
	}
	
	Node* leaf = new Node(v);
	if (!pre) {
		root = leaf;
	}
	else if (v < pre->data) {
		pre->leftchild = leaf;
		leaf->parent = pre;
	}
	else if (v > pre->data) {
		pre->rightchild = leaf;
		leaf->parent = pre;
	}


}



void Tree::Delete(int v) {
	//cout << "delete " << v << endl;
	Node* target = Get(v);
	if (!target) { // the node with value v doesn't exist
		return;
	}

	// case 1: target is a leaf node
	if ((target->leftchild == 0) && (target->rightchild == 0)) {
		if (target == root) {
			root = 0;
		}
		else if (target->parent->leftchild == target){
			target->parent->leftchild = 0;
		}
		else if (target->parent->rightchild == target) {
			target->parent->rightchild = 0;
		}
		
		delete target;
		return;
	}

	// case 2: target has one child
	if (target->leftchild == 0) {
		Node* temp = target->rightchild;
		target->data = temp->data;
		target->rightchild = 0;
		if (temp->leftchild) {
			temp->leftchild->parent = target;
			target->leftchild = temp->leftchild;
		}
		if (temp->rightchild) {
			temp->rightchild->parent = target;
			target->rightchild = temp->rightchild;
		}
		delete temp;
	}
	else if (target->rightchild == 0) {
		Node* temp = target->leftchild;
		target->data = temp->data;
		target->leftchild = 0;
		if (temp->leftchild) {
			temp->leftchild->parent = target;
			target->leftchild = temp->leftchild;
		}
		if (temp->rightchild) {
			temp->rightchild->parent = target;
			target->rightchild = temp->rightchild;
		}
		delete temp;
	}
	

	// case 3: target has two children
	if ((target->leftchild != 0) && (target->rightchild != 0)) {
		Node* suc = target->Successor();
		if (suc->rightchild) {
			suc->parent->leftchild = suc->rightchild;
		}
		else {
			suc->parent->leftchild = 0;
		}
		target->data = suc->data;
		delete suc;
		return;
	}

}



void Tree::Inorder() {
	Inorder(root);
}

void Tree::Inorder(Node* c) {
	if (c) {
		Inorder(c->leftchild);
		cout << c->data << " ";
		Inorder(c->rightchild);
	}
	
}