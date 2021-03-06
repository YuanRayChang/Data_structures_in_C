// class_08.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Box.h"
#include "Toughpack.h"
#include "Carton.h"
#include "Can.h"
using namespace std;

int main()
{
	Toughpack hardcase(20.0, 30.0, 40.0);
	Box* pBox = &hardcase;
	cout << "Volume of hardcase is " << pBox->volume() << endl;

	Carton aCarton(20.0, 30.0, 40.0);
	pBox = &aCarton;
	cout << "Volume of aCarton is " << pBox->volume() << endl;


	cout << endl << "================================" << endl;

	Can aCan(10, 3);
	Box aBox(20.0, 30.0, 40.0);


	Vessel* pVessels[] = { &aBox, &aCan, &aCarton, &hardcase };
	for (int i = 0; i < sizeof(pVessels) / sizeof(*pVessels); i++) {
		cout << "Volume is " << pVessels[i]->volume() << endl;
	}

}


