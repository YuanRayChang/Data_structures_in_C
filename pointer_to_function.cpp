#include <iostream>
using namespace std;

double squared(double x);
double cubed(double x);
double sum_array(double array[], int len, double (*pfun)(double));

int main()
{
	double array[] = {1, 2, 3};
	int len = sizeof(array)/sizeof(array[0]);
	cout <<"sum of squares = "
	<< sum_array(array, len, squared) << endl;

	cout <<"sum of cubes = "
	<< sum_array(array, len, cubed) <<endl;


	system("pause");
	return 0;
}

double squared(double x)
{
	return x*x;
}

double cubed(double x)
{
	return x*x*x;
}

double sum_array(double array[], int len, double (*pfun)(double))
{
	double total = 0;
	for(int i=0; i<len; i++){
		total += pfun(array[i]);
	}
	return total;
}