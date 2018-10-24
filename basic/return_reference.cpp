#include <iostream>
using namespace std;
double &max(double *data, int count);

int main()
{
	
	double data[] = {1, 2, 3, 10};
	int size = sizeof(data)/sizeof(*data);
	cout<< "max in the original data = ";
	cout<< max(data, size) <<endl;

	max(data, size) = 0;
	cout<< "After changing max to 0, data: ";

	for(int i=0; i<size; i++)
		cout<< data[i] << " ";

	system("pause");
	return 0;
}

double &max(double *data, int count)
{
	int max_index = 0;
	for(int i=0; i<count; i++){
		if(data[max_index] < data[i]){
			max_index = i;
		}
	}

	return data[max_index];
}