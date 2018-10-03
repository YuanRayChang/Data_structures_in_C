#include <iostream>
using namespace std;

double average(double * array, int count);
double average2(const double * array, int count);
int main()
{
	double values[] = {7, 2, 3};
	cout<<"average = "<< average(values, sizeof(values)/sizeof(values[0]))
	<<endl;
	cout<<"average2 = "<< average2(values, sizeof(values)/sizeof(values[0]))
	<<endl;
	system("pause");
	return 0;
}


double average(double * array, int count)
{
	double sum = 0;
	for(int i=0; i<count; i++){
		*array = 2;
		sum += *array++; //單元運算子*優先權比算術運算高
	}  
	return sum/count;
}

double average2(const double * array, int count) //加入const，array的值就不能被修改
{
	double sum = 0;
	for(int i=0; i<count; i++)
		sum += *array++;  //單元運算子*優先權比算術運算高
	return sum/count;
}