// class_03.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include "pch.h"
#include <iostream>
using namespace std;
#include "ErrorMessage.h"

int main()
{
	ErrorMessage warning("There is a serious problem here");
	ErrorMessage standard;

	cout << "warning contains - " << warning.what() << endl;
	cout << "standard contains - " << standard.what() << endl;

	standard = warning; // Use copy assignmwnt operator
	cout << "After assigning the value of warning, standard contains - "
		<< standard.what() << endl;
	
	cout << "Resetting warning, not standard" << endl;
	warning.resetMessage(); // reset the warning message
	cout << "warning now contains - " << warning.what() << endl;
	cout << "standard now contains - " << standard.what() << endl;
	return 0;
}

