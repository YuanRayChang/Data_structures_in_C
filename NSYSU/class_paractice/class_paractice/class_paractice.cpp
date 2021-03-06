// class_paractice.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//
#include "pch.h"
#include <iostream>
#include "Set.h"
using namespace std;

int main()
{
	int num = 0;
	const int max = 256;
	char input1[max];
	char input2[max];
	char input3;
	cin >> num;
	
	for (int i = 0; i < num; i++) {
		
		cin.ignore();
		cin.getline(input1, 256); //getline第三個參數不設的話，預設'\n'會停止
		cin.getline(input2, 256);
		cin.get(input3);


		Set A(input1);
		Set B(input2);
		Set C = A + B;
		Set D = A * B;
		Set E = A - B;
		Set F = B - A;

		cout << "Test case " << i + 1 << ":" << endl;
		cout << "A: {" << A << "}" << endl;
		cout << "B: {" << B << "}" << endl;
		cout << "A+B: {" << C << "}" << endl;
		cout << "A*B: {" << D << "}" << endl;
		cout << "A-B: {" << E << "}" << endl;
		cout << "B-A: {" << F << "}" << endl;
		cout << "A " << (A >= B) << " B" << endl;
		cout << "B " << (B >= A) << " A" << endl;
		cout << "'" << input3 << "' " << A.in(input3) << " A" << endl;
		cout << "'" << input3 << "' " << B.in(input3) << " B" << endl;
		cout << endl;
	}
	
}
