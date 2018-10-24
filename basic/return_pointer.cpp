#include <iostream>
using namespace std;
double *max(double *data, int count);

int main()
{
	
	double data[] = {1, 2, 3, 10};
	cout<< *max(data, sizeof(data)/sizeof(*data)) <<endl;

	system("pause");
	return 0;
}

double *max(double *data, int count)
{
	int max_index = 0;
	for(int i=0; i<count; i++){
		if(data[max_index] < data[i]){
			max_index = i;
		}
	}

	return &data[max_index];
}