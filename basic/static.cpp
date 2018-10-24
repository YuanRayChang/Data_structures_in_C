#include <iostream>
using namespace std;
void some_function();

int main()
{
	for(int i=0; i<5; i++)
		some_function();

	system("pause");
	return 0;
}

void some_function()
{
	static int count = 0;
	cout<< count++ <<endl;

}