// class_06.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
#include "Cerealpack.h"

using namespace std;

int main()
{
	Cerealpack packOfFlakes(8.0, 3.0, 10.0, "Cornflakes");

	cout << "packOfFlakes volume is " << packOfFlakes.Carton::volume() << endl;
	cout << "packOfFlakes weight is " << 
		packOfFlakes.Carton::getWeight() + packOfFlakes.Contents::getWeight()
		<< endl;
}

