// class_07.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Box.h"
#include "Toughpack.h"
#include "Carton.h"
using namespace std;

void showVolume_glo(const Box& rBox);

int main()
{
	Box myBox(20.0, 30.0, 40.0);
	Toughpack hardcase(20.0, 30.0, 40.0);
	Carton aCarton(20.0, 30.0, 40.0);

	myBox.showVolume();
	hardcase.showVolume();
	aCarton.showVolume();
	cout << endl;

	// won't work, because volume() is protected
	//cout << "hardcase volume is " << hardcase.volume() << endl;  

	Box* pBox = &myBox;
	cout << "myBox volume through pBox is " << pBox->volume() << endl;
	pBox->showVolume();
	cout << endl;

	pBox = &hardcase;
	cout << "hardcase volume through pBox is " << pBox->volume() << endl;
	pBox->showVolume();
	cout << endl;

	pBox = &aCarton;
	cout << "aCarton volume through pBox is " << pBox->volume() << endl;
	pBox->showVolume();
	cout << endl;


	//
	cout << endl << "global show volume" << endl;
	showVolume_glo(myBox);
	showVolume_glo(hardcase);
	showVolume_glo(aCarton);
}

void showVolume_glo(const Box& rBox) {
	rBox.showVolume();
}