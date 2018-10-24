#include <iostream>
#include <cmath> //for abs()
using namespace std;
double sum(double x, double y);
double difference(double x, double y);


int main()
{
	
	double x=5, y=10;
	cout<< "sum = " << sum(x, y) <<endl;
	cout<< "difference = " << difference(x, y) <<endl;

	double (*pfun[2])(double, double) = {sum, difference};

	cout<< "sum = " << pfun[0](x, y) <<endl;
	cout<< "difference = " << pfun[1](x, y) <<endl;

	system("pause");
	return 0;
}

double sum(double x, double y)
{
	return x+y;
}

double difference(double x, double y)
{
	return abs(x-y);
}

