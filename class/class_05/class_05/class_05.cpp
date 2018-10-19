// class_05.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Box.h"
#include "Carton.h"
using namespace std;

int main()
{
    // create a Box and two Carton objects
	Box myBox(40.0, 30.0, 20.0);
	Carton myCarton;
	Carton candyCarton("Thin cardboard");

	cout << "myBox occupies " << sizeof(myBox) << "bytes" << endl;
	cout << "myCarton occupies " << sizeof(myCarton) << "bytes" << endl;
	cout << "candyCarton occupies " << sizeof(candyCarton) << "bytes" << endl;

	cout << endl;
	//cout << "myBox volume is " << myBox.volume() << endl;
	cout << "myCarton volume is " << myCarton.volume() << endl;
	cout << "candyCarton volume is " << candyCarton.volume() << endl;


}

