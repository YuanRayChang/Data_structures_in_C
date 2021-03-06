// class_09.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Box.h"
#include "Toughpack.h"
#include "Carton.h"
using namespace std;

typedef double Box::* pBoxMember;

int main()
{
	Box myBox(20.0, 30.0, 40.0);
	Toughpack hardcase(35.0, 45.0, 55.0);
	Carton aCarton(48.0, 58.0, 68.0);

	pBoxMember pData = &Box::length; // define pointer to Box data member

	cout << "length member of myBox is " << myBox.*pData << endl;
	
	pData = &Box::breadth;
	cout << "breadth member of myBox is " << myBox.*pData << endl;

	pData = &Box::height;
	cout << "height member of myBox is " << myBox.*pData << endl;
	cout << "height member of Toughpack is " << hardcase.*pData << endl;
	cout << "height member of aCarton is " << aCarton.*pData << endl;

	Box* pBox = &myBox;
	cout << "height member of myBox is " << pBox->*pData << endl;
	pBox = &hardcase;
	cout << "height member of hardcase is " << pBox->*pData << endl;


}
