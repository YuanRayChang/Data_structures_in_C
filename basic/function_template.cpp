#include <iostream>
using namespace std;

template <class T> T larger(T a, T b);

int main()
{
	cout<< larger(1.5, 2.5) <<endl;
	cout<< larger(4, 5) <<endl;

	long a=100, b=2;
	cout<< larger(a, b) <<endl;

	double c=3.14, d=8.7;
	cout<< larger<int>(c, d) <<endl; //強迫函數呼叫使用指定的型態


	system("pause");
	return 0;
}


template <class T> T larger(T a, T b)
{
	return a>b?a:b;
}