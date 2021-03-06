// class_05.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Box.h"
#include "Carton.h"
using namespace std;

int main()
{
    // create two Carton objects
	Carton myCarton;
	Carton candyCarton(50.0, 30.0, 20.0, "Thin cardboard");

	cout << "myCarton occupies " << sizeof(myCarton) << "bytes" << endl;
	cout << "candyCarton occupies " << sizeof(candyCarton) << "bytes" << endl;

	cout << endl;
	//cout << "myBox volume is " << myBox.volume() << endl;
	cout << "myCarton volume is " << myCarton.volume() << endl;
	cout << "candyCarton volume is " << candyCarton.volume() << endl;

	// copy constructor
	cout << endl << "copy constructor starts from here" << endl << endl;
	// create two Carton objects
	Carton candyCarton2(20.0, 30.0, 40.0, "Glassine board");
	Carton copycarton(candyCarton2); // use copy constructor
	cout << "volume of candyCarton2 is " << candyCarton2.volume() << endl;
	cout << "volume of copyCarton is " << copycarton.volume() << endl;
}

