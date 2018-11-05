// binary_tree.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Tree.h"
#include "Node.h"
using namespace std;


int main()
{
	Node* temp;
	Tree t;
	int array[] = { 10, 7, 12, 8, 11, 4 };
	for (int i = 0; i < sizeof(array)/sizeof(array[0]); i++) {
		//cout << i << " iteration"<< endl;
		if (t.Get(array[i])) {
			t.Delete(array[i]);
		}
		else {
			t.Insert(array[i]);
		}
		
	}

	cout << "node: ";
	t.Inorder();

}

